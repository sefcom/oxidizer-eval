
  fn binary::install::copy_self::h6799c86bda448ec8() -> i64

{
    let mut var_b8: i128;
    let mut var_a8: u64;
    let mut var_a0: i128;
    let mut var_88: *const i8;
    
    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
    {
        var_b8 = &data_1ce6c30;
        *var_b8[8] = 1;
        var_a8 = 8;
        var_a0 = {0};
        let rax_1: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6c90);
        var_88 = &data_45022a[0x15];
        let var_80_1: i64 = 0xf;
        let var_78_1: *const i8 = &data_45022a[0x15];
        let var_70_1: i64 = 0xf;
        let var_68_1: i64 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 3, &var_88);
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he316f2bb80969970(&var_b8, &data_4502fc, 0xf);
    let mut var_28: i128 = var_b8;
    let rax_3: i64 = std::fs::create_dir_all::hc291693ada78da95(&var_28);
    var_b8 = rax_3;
    
    if rax_3 == 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_b8);
        let rax_6: i64 = std::fs::set_permissions::hdbf67fe33a3ba539(&var_28, 0x1ff);
        var_b8 = rax_6;
        
        if rax_6 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_b8);
            let mut var_40: ();
            std::path::Path::join::hdfe81d13f7920fb5(&var_40, *var_28[8], var_a8, &data_4503e2);
            std::env::current_exe::hba8dd19674473539(&var_b8);
            core::result::Result$LT$T$C$E$GT$::unwrap::hfe1546b7d02f4ad7(&var_88, &var_b8);
            let mut rax_9: i64;
            let mut rdx_5: i64;
            rax_9 = std::fs::copy::hed1bccf4751e7b50(&var_88, &var_40);
            let mut var_50: i64 = rax_9;
            let var_48_1: i64 = rdx_5;
            let mut var_60: *mut i64;
            let var_38: i128;
            
            if rax_9 == 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h36b83b7aa703e08b(&var_50);
                let rax_12: i64 = std::fs::set_permissions::hdbf67fe33a3ba539(&var_40, 0x1ff);
                var_b8 = rax_12;
                
                if rax_12 == 0
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_b8);
                    
                    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
                    {
                        var_50 = var_38;
                        var_60 = &var_50;
                        let var_58_3: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
                        var_b8 = &data_1ce6c80;
                        *var_b8[8] = 1;
                        *var_a0[8] = 0;
                        let var_a8_5: *mut *mut i64 = &var_60;
                        var_a0 = 1;
                        let rax_17: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6cc0);
                        var_88 = &data_45022a[0x15];
                        let var_80_6: i64 = 0xf;
                        let var_78_6: *const i8 = &data_45022a[0x15];
                        let var_70_6: i64 = 0xf;
                        let var_68_6: i64 = rax_17;
                        log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 3, &var_88);
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(&var_40);
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_b8);
                    
                    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() != 0
                    {
                        var_50 = var_38;
                        var_60 = &var_50;
                        let var_58_2: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
                        var_b8 = &data_1ce6c70;
                        *var_b8[8] = 1;
                        *var_a0[8] = 0;
                        let var_a8_4: *mut *mut i64 = &var_60;
                        var_a0 = 1;
                        let rax_14: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6cd8);
                        var_88 = &data_45022a[0x15];
                        let var_80_5: i64 = 0xf;
                        let var_78_5: *const i8 = &data_45022a[0x15];
                        let var_70_5: i64 = 0xf;
                        let var_68_5: i64 = rax_14;
                        log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 1, &var_88);
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(&var_40);
                }
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h36b83b7aa703e08b(&var_50);
                
                if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() != 0
                {
                    var_50 = var_38;
                    var_60 = &var_50;
                    let var_58_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
                    var_b8 = &data_1ce6c60;
                    *var_b8[8] = 1;
                    *var_a0[8] = 0;
                    let var_a8_3: *mut *mut i64 = &var_60;
                    var_a0 = 1;
                    let rax_11: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6cf0);
                    var_88 = &data_45022a[0x15];
                    let var_80_4: i64 = 0xf;
                    let var_78_4: *const i8 = &data_45022a[0x15];
                    let var_70_4: i64 = 0xf;
                    let var_68_4: i64 = rax_11;
                    log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 1, &var_88);
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(&var_40);
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_b8);
            
            if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() != 0
            {
                var_b8 = &data_1ce6c50;
                *var_b8[8] = 1;
                let var_a8_2: i64 = 8;
                let var_a0_2: i128 = {0};
                let rax_8: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6d08);
                var_88 = &data_45022a[0x15];
                let var_80_3: i64 = 0xf;
                let var_78_3: *const i8 = &data_45022a[0x15];
                let var_70_3: i64 = 0xf;
                let var_68_3: i64 = rax_8;
                log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 1, &var_88);
            }
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_b8);
        
        if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() != 0
        {
            var_b8 = &data_1ce6c40;
            *var_b8[8] = 1;
            let var_a8_1: i64 = 8;
            let var_a0_1: i128 = {0};
            let rax_5: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6d20);
            var_88 = &data_45022a[0x15];
            let var_80_2: i64 = 0xf;
            let var_78_2: *const i8 = &data_45022a[0x15];
            let var_70_2: i64 = 0xf;
            let var_68_2: i64 = rax_5;
            log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 1, &var_88);
        }
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(&var_28)
}
