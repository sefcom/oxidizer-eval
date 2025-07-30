
  fn binary::install::drop_library::h6c2d6da60051269a(arg1: *mut i128) -> i64

{
    let mut var_b8: *const i8;
    let mut var_90: *mut *mut [i8; 0x0];
    let mut var_78: i128;
    
    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
    {
        var_90 = &data_1ce6d38;
        let var_88_1: i64 = 1;
        let var_80_1: i64 = 8;
        var_78 = {0};
        let rax_1: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6d78);
        var_b8 = &data_45022a[0x15];
        let var_b0_1: i64 = 0xf;
        let var_a8_1: *const i8 = &data_45022a[0x15];
        let var_a0_1: i64 = 0xf;
        let var_98_1: i64 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_90, 3, &var_b8);
    }
    
    let mut var_28: ();
    binary::install::find_library_path::h2e217bf23a93cdc7(&var_28);
    let mut var_50: i128;
    let var_20: i64;
    let var_18: u64;
    std::path::Path::join::hdfe81d13f7920fb5(&var_50, var_20, var_18, &data_45046e);
    let mut var_60: i32;
    std::fs::File::create::hbeb4c25cf05a2d0f(&var_60, &var_50);
    let mut var_c8: *mut i128;
    let var_40: i64;
    let mut var_38: i128;
    
    if var_60 != 1
    {
        let fd_1: i32;
        let mut fd: i32 = fd_1;
        let mut rax_6: i64;
        let mut rdx_4: i64;
        rax_6 = _$LT$std..fs..File$u20$as$u20$std..io..Write$GT$::write::h0b55fe44774eb156(&fd, 
            &data_45047a, "eric23Slim$LT$V$C$4_usize$GT$4fi…");
        var_60 = rax_6;
        let var_58_1: i64 = rdx_4;
        
        if rax_6 != 0 && core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() != 0
        {
            var_38 = var_50;
            var_c8 = &var_38;
            let var_c0_2: fn(arg1: *mut i64, arg2: i64) -> u64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
            var_90 = &data_1ce6d58;
            let var_88_3: i64 = 1;
            *var_78[8] = 0;
            let var_80_3: *mut *mut i128 = &var_c8;
            var_78 = 1;
            let rax_8: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6d90);
            var_b8 = &data_45022a[0x15];
            let var_b0_3: i64 = 0xf;
            let var_a8_3: *const i8 = &data_45022a[0x15];
            let var_a0_3: i64 = 0xf;
            let var_98_3: i64 = rax_8;
            log::__private_api::log::h450dfdf51a11f9e0(&var_90, 1, &var_b8);
        }
        
        let rax_9: *mut *mut [i8; 0x0] =
            std::fs::set_permissions::hdbf67fe33a3ba539(&var_50, 0x1ff);
        var_90 = rax_9;
        
        if rax_9 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_90);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_90);
            
            if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() != 0
            {
                var_38 = var_50;
                var_c8 = &var_38;
                let var_c0_3: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
                var_90 = &data_1ce6c70;
                let var_88_4: i64 = 1;
                *var_78[8] = 0;
                let var_80_4: *mut *mut i128 = &var_c8;
                var_78 = 1;
                let rax_11: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6da8);
                var_b8 = &data_45022a[0x15];
                let var_b0_4: i64 = 0xf;
                let var_a8_4: *const i8 = &data_45022a[0x15];
                let var_a0_4: i64 = 0xf;
                let var_98_4: i64 = rax_11;
                log::__private_api::log::h450dfdf51a11f9e0(&var_90, 1, &var_b8);
            }
        }
        
        if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 2
        {
            var_38 = var_50;
            var_c8 = &var_38;
            let var_c0_4: fn(arg1: *mut i64, arg2: i64) -> u64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
            var_90 = &data_1ce6d68;
            let var_88_5: i64 = 1;
            *var_78[8] = 0;
            let var_80_5: *mut *mut i128 = &var_c8;
            var_78 = 1;
            let rax_13: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6dc0);
            var_b8 = &data_45022a[0x15];
            let var_b0_5: i64 = 0xf;
            let var_a8_5: *const i8 = &data_45022a[0x15];
            let var_a0_5: i64 = 0xf;
            let var_98_5: i64 = rax_13;
            log::__private_api::log::h450dfdf51a11f9e0(&var_90, 3, &var_b8);
        }
        
        arg1[1] = var_40;
        *arg1 = var_50;
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h36b83b7aa703e08b(&var_60);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h0d00817cc0df8c52(fd);
    }
    else
    {
        if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() != 0
        {
            var_38 = var_50;
            var_c8 = &var_38;
            let var_c0_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
            var_90 = &data_1ce6d48;
            let var_88_2: i64 = 1;
            *var_78[8] = 0;
            let var_80_2: *mut *mut i128 = &var_c8;
            var_78 = 1;
            let rax_3: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6dd8);
            var_b8 = &data_45022a[0x15];
            let var_b0_2: i64 = 0xf;
            let var_a8_2: *const i8 = &data_45022a[0x15];
            let var_a0_2: i64 = 0xf;
            let var_98_2: i64 = rax_3;
            log::__private_api::log::h450dfdf51a11f9e0(&var_90, 1, &var_b8);
        }
        
        arg1[1] = var_40;
        *arg1 = var_50;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h9c58f2ca93495b32(&var_60);
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(&var_28)
}
