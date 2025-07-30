
  uint64_t binary::main::h80d390edd5c6dad9()

{
    colog::init::h7841d28c5b63bc43();
    void* const var_98;
    void** const var_70;
    
    if (geteuid())
    {
        if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 1)
        {
            var_70 = &data_1ce6f30;
            int64_t var_68_1 = 1;
            int64_t var_60_1 = 8;
            int128_t var_58_1 = {0};
            int64_t rax_2 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6fe0);
            var_98 = &data_1b0013d;
            int64_t var_90_1 = 6;
            void* const var_88_1 = &data_1b0013d;
            int64_t var_80_1 = 6;
            int64_t var_78_1 = rax_2;
            log::__private_api::log::h450dfdf51a11f9e0(&var_70, 2, &var_98);
        }
        
        binary::delete_self::h8376a8a8af45fd9a();
        /* tailcall */
        return binary::daemon::main::hc30634c30f3261a4();
    }
    
    int64_t var_40;
    std::env::current_exe::hba8dd19674473539(&var_40);
    uint64_t result;
    
    if (!(0 + -(var_40)))
    {
        int128_t var_28 = var_40;
        int64_t var_30;
        int64_t var_18_1 = var_30;
        int64_t rax_5;
        uint64_t rdx_4;
        rax_5 = std::path::Path::file_name::h7d489889b9a4afe7(*var_28[8], var_30);
        
        if (!rax_5)
        {
            if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6())
            {
                var_70 = &data_1ce6f60;
                int64_t var_68_4 = 1;
                int64_t var_60_4 = 8;
                int128_t var_58_4 = {0};
                int64_t rax_10 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6fb0);
                var_98 = &data_1b0013d;
                int64_t var_90_4 = 6;
                void* const var_88_4 = &data_1b0013d;
                int64_t var_80_4 = 6;
                int64_t var_78_4 = rax_10;
                log::__private_api::log::h450dfdf51a11f9e0(&var_70, 1, &var_98);
            }
        }
        else
        {
            char rax_6 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h289a35ced737f626(rax_5, rdx_4, "auto-colorbinary/src/main.rsbina…", 0xa);
            uint64_t rax_7 = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
            
            if (!rax_6)
            {
                if (rax_7 > 2)
                {
                    var_70 = &data_1ce6f50;
                    int64_t var_68_5 = 1;
                    int64_t var_60_5 = 8;
                    int128_t var_58_5 = {0};
                    int64_t rax_11 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6f80);
                    var_98 = &data_1b0013d;
                    int64_t var_90_5 = 6;
                    void* const var_88_5 = &data_1b0013d;
                    int64_t var_80_5 = 6;
                    int64_t var_78_5 = rax_11;
                    log::__private_api::log::h450dfdf51a11f9e0(&var_70, 3, &var_98);
                }
                
                binary::install::main::h1e5509fe79972199();
                binary::delete_self::h8376a8a8af45fd9a();
            }
            else
            {
                if (rax_7 > 2)
                {
                    var_70 = &data_1ce6f40;
                    int64_t var_68_3 = 1;
                    int64_t var_60_3 = 8;
                    int128_t var_58_3 = {0};
                    int64_t rax_8 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6f98);
                    var_98 = &data_1b0013d;
                    int64_t var_90_3 = 6;
                    void* const var_88_3 = &data_1b0013d;
                    int64_t var_80_3 = 6;
                    int64_t var_78_3 = rax_8;
                    log::__private_api::log::h450dfdf51a11f9e0(&var_70, 3, &var_98);
                }
                
                binary::daemon::main::hc30634c30f3261a4();
            }
        }
        
        result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(&var_28);
        
        if (var_40 == -0x8000000000000000)
            return core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::ha5285473c174ea4d(&var_40);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::ha5285473c174ea4d(&var_40);
        result = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
        
        if (result)
        {
            var_70 = &data_1ce6f70;
            int64_t var_68_2 = 1;
            int64_t var_60_2 = 8;
            int128_t var_58_2 = {0};
            int64_t rax_4 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6fc8);
            var_98 = &data_1b0013d;
            int64_t var_90_2 = 6;
            void* const var_88_2 = &data_1b0013d;
            int64_t var_80_2 = 6;
            int64_t var_78_2 = rax_4;
            return log::__private_api::log::h450dfdf51a11f9e0(&var_70, 1, &var_98);
        }
    }
    
    return result;
}
