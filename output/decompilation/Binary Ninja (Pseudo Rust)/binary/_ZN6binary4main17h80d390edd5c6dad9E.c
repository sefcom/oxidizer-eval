
  fn binary::main::h80d390edd5c6dad9() -> u64

{
    colog::init::h7841d28c5b63bc43();
    let mut var_98: *mut c_void;
    let mut var_70: *mut *mut c_void;
    
    if geteuid() != 0
    {
        if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 1
        {
            var_70 = &data_1ce6f30;
            let var_68_1: i64 = 1;
            let var_60_1: i64 = 8;
            let var_58_1: i128 = {0};
            let rax_2: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6fe0);
            var_98 = &data_1b0013d;
            let var_90_1: i64 = 6;
            let var_88_1: *mut c_void = &data_1b0013d;
            let var_80_1: i64 = 6;
            let var_78_1: i64 = rax_2;
            log::__private_api::log::h450dfdf51a11f9e0(&var_70, 2, &var_98);
        }
        
        binary::delete_self::h8376a8a8af45fd9a();
        /* tailcall */
        return binary::daemon::main::hc30634c30f3261a4();
    }
    
    let mut var_40: i64;
    std::env::current_exe::hba8dd19674473539(&var_40);
    let mut result: u64;
    
    if !(0 + -(var_40))
    {
        let mut var_28: i128 = var_40;
        let var_30: i64;
        let var_18_1: i64 = var_30;
        let mut rax_5: i64;
        let mut rdx_4: u64;
        rax_5 = std::path::Path::file_name::h7d489889b9a4afe7(*var_28[8], var_30);
        
        if rax_5 == 0
        {
            if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() != 0
            {
                var_70 = &data_1ce6f60;
                let var_68_4: i64 = 1;
                let var_60_4: i64 = 8;
                let var_58_4: i128 = {0};
                let rax_10: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6fb0);
                var_98 = &data_1b0013d;
                let var_90_4: i64 = 6;
                let var_88_4: *mut c_void = &data_1b0013d;
                let var_80_4: i64 = 6;
                let var_78_4: i64 = rax_10;
                log::__private_api::log::h450dfdf51a11f9e0(&var_70, 1, &var_98);
            }
        }
        else
        {
            let rax_6: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h289a35ced737f626(rax_5, rdx_4, "auto-colorbinary/src/main.rsbina…", 0xa);
            let rax_7: u64 = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
            
            if rax_6 == 0
            {
                if rax_7 > 2
                {
                    var_70 = &data_1ce6f50;
                    let var_68_5: i64 = 1;
                    let var_60_5: i64 = 8;
                    let var_58_5: i128 = {0};
                    let rax_11: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6f80);
                    var_98 = &data_1b0013d;
                    let var_90_5: i64 = 6;
                    let var_88_5: *mut c_void = &data_1b0013d;
                    let var_80_5: i64 = 6;
                    let var_78_5: i64 = rax_11;
                    log::__private_api::log::h450dfdf51a11f9e0(&var_70, 3, &var_98);
                }
                
                binary::install::main::h1e5509fe79972199();
                binary::delete_self::h8376a8a8af45fd9a();
            }
            else
            {
                if rax_7 > 2
                {
                    var_70 = &data_1ce6f40;
                    let var_68_3: i64 = 1;
                    let var_60_3: i64 = 8;
                    let var_58_3: i128 = {0};
                    let rax_8: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6f98);
                    var_98 = &data_1b0013d;
                    let var_90_3: i64 = 6;
                    let var_88_3: *mut c_void = &data_1b0013d;
                    let var_80_3: i64 = 6;
                    let var_78_3: i64 = rax_8;
                    log::__private_api::log::h450dfdf51a11f9e0(&var_70, 3, &var_98);
                }
                
                binary::daemon::main::hc30634c30f3261a4();
            }
        }
        
        result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(&var_28);
        
        if var_40 == -0x8000000000000000
        {
            return core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::ha5285473c174ea4d(&var_40);
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::ha5285473c174ea4d(&var_40);
        result = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
        
        if result != 0
        {
            var_70 = &data_1ce6f70;
            let var_68_2: i64 = 1;
            let var_60_2: i64 = 8;
            let var_58_2: i128 = {0};
            let rax_4: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6fc8);
            var_98 = &data_1b0013d;
            let var_90_2: i64 = 6;
            let var_88_2: *mut c_void = &data_1b0013d;
            let var_80_2: i64 = 6;
            let var_78_2: i64 = rax_4;
            return log::__private_api::log::h450dfdf51a11f9e0(&var_70, 1, &var_98);
        }
    }
    
    result
}
