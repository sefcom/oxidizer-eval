
  fn uu_cp::copydir::Entry::new::h6fc819f4164af7ea(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void, arg4: i8) -> i64

{
    let mut rax: *mut i8;
    let mut rdx: u64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h1e9ed5ccbb1261f3(arg3);
    let mut var_48: i128;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_48, rax, rdx);
    let mut var_80: i128;
    std::path::Path::join::h29f8b868344b633c(&var_80, *arg2.byte_offset(8), 
        *arg2.byte_offset(0x10), &var_48);
    let mut rcx_1: i64 = 0;
    *arg2.byte_offset(0x28);
    
    if !(0 + -(*arg2.byte_offset(0x18)))
    {
        rcx_1 = *arg2.byte_offset(0x20);
    }
    
    let mut var_c8: *mut *mut c_void;
    let var_78: i64;
    let var_70: u64;
    uu_cp::copydir::get_local_to_root_parent::hd5a1f49dc6bab1d8(&var_c8, var_78, var_70, rcx_1);
    
    if var_c8 != -0x8000000000000000
    {
        let mut var_e8: i128 = var_c8;
        let mut var_68: i128;
        let mut r15_1: u64;
        
        if arg4 == 0
        {
            r15_1 = *arg2.byte_offset(0x38);
            'label_498f2f:
            let r14_1: *mut i8 = *arg2.byte_offset(0x30);
            std::path::Path::join::h8508bcffc5cbd073(&var_68, r14_1, r15_1, &var_e8);
            let result: i8 = std::path::Path::is_file::h6e28d87ff76ffc41(r14_1, r15_1);
            let zmm0_3: i128 = var_80;
            var_c8 = zmm0_3;
            let var_b0_1: i128 = var_48;
            let var_58: i64;
            let var_88_1: i64 = var_58;
            let zmm1_1: i128 = var_68;
            let var_98_1: i128 = zmm1_1;
            arg1[8] = var_58;
            *arg1.byte_offset(0x30) = zmm1_1;
            *arg1 = zmm0_3;
            arg1[4] = *var_b0_1[8];
            let var_38: i64;
            arg1[5] = var_38;
            *arg1.byte_offset(0x10) = var_70;
            arg1[9] = result;
            return result;
        }
        
        let rax_2: i8 = std::path::Path::is_dir::h02edbc48c38d7d9e(rax, rdx);
        r15_1 = *arg2.byte_offset(0x38);
        
        if r15_1 != 0
        {
            let rdi_7: i64 = *arg2.byte_offset(0x30);
            let rcx_2: bool = *(rdi_7 + r15_1 - 1);
            
            if rcx_2 != 0x2f
            {
                if ((rax_2 ^ 1) | rcx_2 != 0x5c) == 0
                {
                    'label_498e2e:
                    let rax_3: i64 = std::fs::create_dir_all::h55eae5e2d660073f(rdi_7);
                    let mut var_50: i64 = rax_3;
                    
                    if rax_3 == 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h6803c44012521573(&var_50);
                    }
                    else
                    {
                        let mut var_f0: i64 = rax_3;
                        var_68 = &var_f0;
                        *var_68[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                        var_c8 = &data_55e600;
                        let var_c0_1: i64 = 2;
                        let mut var_b0: i128;
                        *var_b0[8] = 0;
                        let var_b8_1: *mut i128 = &var_68;
                        var_b0 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_c8);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb23d8f5d6ef8daac(
                            &var_f0);
                    }
                    
                    goto 'label_498f2f;
                }
            }
            else if rax_2 != 0
            {
                goto 'label_498e2e;
            }
        }
        
        *arg2.byte_offset(0x48);
        let var_b8: i64;
        let mut rax_4: i64;
        let mut rdx_4: u64;
        rax_4 = std::path::Path::strip_prefix::hf232be0ca9110327(*var_e8[8], var_b8, 
            *arg2.byte_offset(0x40));
        
        if rax_4 != 0
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_c8, rax_4, 
                rdx_4);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_e8);
            let var_d8_2: i64 = var_b8;
            var_e8 = var_c8;
            goto 'label_498f2f;
        }
        
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_e8);
    }
    else
    {
        *arg1 = -0x8000000000000000;
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_80);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_48)
}
