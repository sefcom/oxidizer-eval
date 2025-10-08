
  fn uu_cp::parse_path_args::h97e31098febb5d39(arg1: *mut i128, arg2: *mut i64, arg3: *mut c_void) -> *mut i128

{
    let mut result: *mut i128 = arg1;
    let mut r12: i64 = arg2[2];
    let mut var_e0_1: *mut i64;
    let mut var_d8: i128;
    let var_c8: i64;
    let var_b8: i64;
    let mut result_1: *mut i128;
    let mut var_90: i64;
    let mut var_78: i128;
    let mut zmm0_2: i128;
    
    if r12 != 1
    {
        if r12 != 0
        {
            let rax_4: i64 = *arg3.byte_offset(0x18);
            
            if (*arg3.byte_offset(0x5a) & rax_4 == -0x8000000000000000) != 0
            {
                if r12 <= 2
                {
                    goto 'label_49fdcc;
                }
                
                var_90 = arg2[1] + 0x30;
                let var_88_2: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
                    _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                var_d8 = &data_55ea28;
                *var_d8[8] = 1;
                let var_b8_2: i64 = 0;
                let var_c8_2: *mut i64 = &var_90;
                let var_c0_2: i64 = 1;
                let mut var_48: i128;
                core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_48, &var_d8);
                let var_38: i64;
                *result.byte_offset(0x18) = var_38;
                zmm0_2 = var_48;
                goto 'label_49fdae;
            }
            
            if rax_4 != -0x8000000000000000
            {
                goto 'label_49fe1f;
            }
            
            'label_49fdcc:
            result_1 = result;
            r12 -= 1;
            arg2[2] = r12;
            let rax_8: i64 = arg2[1];
            let rsi_2: i64 = r12 * 3;
            let rcx_1: i64 = *(rax_8 + (rsi_2 << 3));
            
            if rcx_1 == -0x8000000000000000
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            var_e0_1 = arg2;
            var_78 = rcx_1;
            var_78 = *(rax_8 + (rsi_2 << 3)).byte_offset(8);
            
            if *arg3.byte_offset(0x5d) != 0
            {
                goto 'label_49fe53;
            }
            
            goto 'label_49fec8;
        }
        
        _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h0e3b1f2b5d04343d(&var_d8, "missing file operandmissing dest…", 0x14);
        let var_a8: i64;
        result[3] = var_a8;
        let zmm0_1: i128 = var_d8;
        result[2] = var_b8;
        result[1] = var_c8;
        *result = zmm0_1;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h8dd980832f2f5399(arg2);
    }
    else if *arg3.byte_offset(0x18) != -0x8000000000000000
    {
        'label_49fe1f:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hdde023ffc5414155(&var_d8, *arg3.byte_offset(0x20), *arg3.byte_offset(0x28));
        result_1 = result;
        var_e0_1 = arg2;
        let var_68: i64 = var_c8;
        var_78 = var_d8;
        
        if *arg3.byte_offset(0x5d) != 0
        {
            'label_49fe53:
            let mut r15_1: *mut c_void = var_e0_1[1];
            let mut i_1: i64 = r12 * 0x18;
            let mut i: i64;
            
            do
            {
                std::path::Path::components::hd0346d362206f2e9(&var_d8, *r15_1.byte_offset(8), 
                    *r15_1.byte_offset(0x10));
                let mut rax_12: *mut i8;
                let mut rdx_3: u64;
                rax_12 = std::path::Components::as_path::h1663bfb7bee69036(&var_d8);
                std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_90, 
                    rax_12, rdx_3);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(r15_1);
                let var_80: i64;
                *r15_1.byte_offset(0x10) = var_80;
                *r15_1 = var_90;
                r15_1 += 0x18;
                i = i_1;
                i_1 -= 0x18;
            } while i != 0x18;
            goto 'label_49fec8;
        }
        
        'label_49fec8:
        let rax_14: i64 = var_e0_1[2];
        let zmm0: i128 = *var_e0_1;
        var_d8 = zmm0;
        let mut var_c0: i64;
        var_c0 = var_78;
        result = result_1;
        *result.byte_offset(8) = zmm0;
        *result.byte_offset(0x18) = rax_14;
        result[2] = var_c0;
        *result.byte_offset(0x28) = var_b8;
        result[3] = var_68;
        *result = -0x7ffffffffffffff4;
    }
    else
    {
        var_90 = arg2[1];
        let var_88_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
        var_d8 = &data_55ea18;
        *var_d8[8] = 1;
        let var_b8_1: i64 = 0;
        let var_c8_1: *mut i64 = &var_90;
        let var_c0_1: i64 = 1;
        let mut var_60: i128;
        core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_60, &var_d8);
        let var_50: i64;
        *result.byte_offset(0x18) = var_50;
        zmm0_2 = var_60;
        'label_49fdae:
        *result.byte_offset(8) = zmm0_2;
        *result = -0x7ffffffffffffffd;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h8dd980832f2f5399(arg2);
    }
    result
}
