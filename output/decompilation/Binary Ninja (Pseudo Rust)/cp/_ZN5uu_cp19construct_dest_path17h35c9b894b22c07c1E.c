
  fn uu_cp::construct_dest_path::h35c9b894b22c07c1(arg1: *mut *mut *mut [i8; 0x63], arg2: *mut i8, arg3: i64, arg4: *mut i8, arg5: u64, arg6: i8, arg7: i8, arg8: i8) -> *mut *mut [i8; 0x63]

{
    let mut result: *mut *mut [i8; 0x63];
    let mut var_a8: i64;
    let mut var_88: *mut i64;
    let mut result_1: *mut *mut [i8; 0x63];
    
    if (arg7 & 1) == 0
    {
        'label_4a0cb0:
        let mut var_78: i64;
        let mut rdx_1: i64;
        let mut rsi_4: *const i8;
        let mut r12_1: i64;
        
        if (arg8 & 1) == 0
        {
            if arg6 == 0
            {
                r12_1 = arg3;
                let mut rax_4: *mut i8;
                rax_4 = std::path::Path::parent::hef287f60afa56900(arg2, r12_1);
                rsi_4 = rax_4;
                
                if rax_4 == 0
                {
                    rdx_1 = r12_1;
                }
                
                if rax_4 == 0
                {
                    rsi_4 = arg2;
                }
                
                goto 'label_4a0d6f;
            }
            
            'label_4a0d0d:
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_88, arg4, 
                arg5);
            'label_4a0db6:
            arg1[3] = var_78;
            *arg1.byte_offset(8) = var_88;
            result = -0x800000000000000c;
        }
        else
        {
            if std::path::Path::is_dir::h02edbc48c38d7d9e(arg4, arg5) == 0
            {
                /* tailcall */
                return _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h0e3b1f2b5d04343d(arg1, "with --parents, the destination …", 0x33);
            }
            
            if arg6 != 0
            {
                goto 'label_4a0d0d;
            }
            
            r12_1 = arg3;
            std::path::Path::components::hd0346d362206f2e9(&result_1, arg2, r12_1);
            let var_36: i8;
            
            if var_36 == 0
            {
                let var_60: i8;
                let c_1: bool = var_60 < 5;
                rdx_1 = c_1;
                rsi_4 = 1;
                
                if c_1
                {
                    rsi_4 = "/";
                }
            }
            else
            {
                rsi_4 = "/";
                rdx_1 = 1;
            }
            
            'label_4a0d6f:
            uu_cp::localize_to_target::hb1878d723015ce03(&result_1, rsi_4, rdx_1, arg2, r12_1, 
                arg4, arg5);
            result = result_1;
            let var_68: i64;
            var_a8 = var_68;
            let var_58: i64;
            
            if result == -0x7ffffffffffffff4
            {
                var_88 = var_a8;
                var_78 = var_58;
                goto 'label_4a0db6;
            }
            
            let var_40: i64;
            arg1[6] = var_40;
            let var_50: i64;
            *arg1.byte_offset(0x20) = var_50;
            arg1[3] = var_58;
            *arg1.byte_offset(8) = var_a8;
        }
    }
    else
    {
        if std::path::Path::is_dir::h02edbc48c38d7d9e(arg4, arg5) == 0
        {
            goto 'label_4a0cb0;
        }
        
        var_a8 = 1;
        let var_a0_1: *mut i8 = arg4;
        let var_98_1: u64 = arg5;
        let var_90_1: i8 = 1;
        var_88 = &var_a8;
        let var_80_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        result_1 = &data_55eae8;
        let var_68_1: i64 = 2;
        let var_50_1: i64 = 0;
        let var_60_1: *mut *mut i64 = &var_88;
        let var_58_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&arg1[1], &result_1);
        result = -0x8000000000000003;
    }
    *arg1 = result;
    result
}
