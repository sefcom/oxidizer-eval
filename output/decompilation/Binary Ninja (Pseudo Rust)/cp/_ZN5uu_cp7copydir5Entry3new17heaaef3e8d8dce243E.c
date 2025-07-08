
  fn uu_cp::copydir::Entry::new::heaaef3e8d8dce243(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i8, arg4: u64, arg5: i8) -> i64

{
    let mut var_48: i128;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_48, arg3, arg4);
    let mut var_78: i128;
    std::path::Path::join::h92bb591ebe182d97(&var_78, *arg2.byte_offset(8), 
        *arg2.byte_offset(0x10), &var_48);
    *arg2.byte_offset(0x28);
    let mut rcx_1: i64;
    
    if *arg2.byte_offset(0x18) == -0x8000000000000000
    {
        rcx_1 = 0;
    }
    else
    {
        rcx_1 = *arg2.byte_offset(0x20);
    }
    
    let mut var_c8: *mut *mut [i8; 0x8f];
    let var_70: i64;
    let var_68: u64;
    uu_cp::copydir::get_local_to_root_parent::h75359c1e8aa399d0(&var_c8, var_70, var_68, rcx_1);
    
    if var_c8 != -0x8000000000000000
    {
        let var_b8: i64;
        let mut var_d8_1: i64 = var_b8;
        let mut var_e8: i128 = var_c8;
        let mut var_60: i128;
        let mut r14_1: *mut i8;
        let mut r15_1: u64;
        
        if arg5 == 0
        {
            r14_1 = *arg2.byte_offset(0x30);
            r15_1 = *arg2.byte_offset(0x38);
            'label_50de6f:
            let var_b8_2: i64 = var_d8_1;
            var_c8 = var_e8;
            std::path::Path::join::hb4c158bd60fe0cf5(&var_60, r14_1, r15_1, &var_c8);
            let result: i8 = std::path::Path::is_file::h82f08f46fb8d8099(r14_1, r15_1);
            let zmm0_2: i128 = var_78;
            var_c8 = zmm0_2;
            let var_b0_1: i128 = var_48;
            let var_50: i64;
            let var_88_1: i64 = var_50;
            let zmm1_1: i128 = var_60;
            let var_98_1: i128 = zmm1_1;
            arg1[8] = var_50;
            *arg1.byte_offset(0x30) = zmm1_1;
            *arg1 = zmm0_2;
            arg1[4] = *var_b0_1[8];
            let var_38: i64;
            arg1[5] = var_38;
            *arg1.byte_offset(0x10) = var_68;
            arg1[9] = result;
            return result;
        }
        
        let rax_2: i8 = std::path::Path::is_dir::h9ac0db933706da51(arg3, arg4);
        r14_1 = *arg2.byte_offset(0x30);
        r15_1 = *arg2.byte_offset(0x38);
        
        if (rax_2
            & uucore::features::fs::path_ends_with_terminator::h30fe62ab1cf88eee(r14_1, r15_1)) != 0
        {
            let rax_4: i64 = std::fs::create_dir_all::h4110e3e76e14203b(r14_1);
            
            if rax_4 != 0
            {
                let mut var_d0: i64 = rax_4;
                var_60 = &var_d0;
                *var_60[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                var_c8 = &data_5b62a0;
                let var_c0_1: i64 = 2;
                let mut var_b0: i128;
                *var_b0[8] = 0;
                let var_b8_1: *mut i128 = &var_60;
                var_b0 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h414e413090760199(var_d0);
            }
            
            goto 'label_50de6f;
        }
        
        *arg2.byte_offset(0x48);
        let mut rax_5: i64;
        let mut rdx_4: u64;
        rax_5 = std::path::Path::strip_prefix::h5d7e53b0b6c79402(*var_e8[8], var_d8_1, 
            *arg2.byte_offset(0x40));
        
        if rax_5 != 0
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_c8, rax_5, 
                rdx_4);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_e8);
            var_d8_1 = var_b8;
            var_e8 = var_c8;
            goto 'label_50de6f;
        }
        
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_e8);
    }
    else
    {
        *arg1 = -0x8000000000000000;
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_78);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_48)
}
