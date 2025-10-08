
  void alacritty::cli::ParsedOptions::override_config::hf97b5b294eb97d07(void* arg1, void** arg2)

{
    int64_t rbp = *(arg1 + 0x10);
    
    if (rbp)
    {
        int64_t r15_1 = 0;
        
        while (true)
        {
            void* rax_1 = *(arg1 + 8);
            int64_t rcx_1 = r15_1 * 0x38;
            void* var_b8 = rax_1 + rcx_1;
            void** const var_68;
            _$LT$toml..value..Value$u20$as$u20$core..clone..Clone$GT$::clone::hd28dc0176ce4bcf3(
                &var_68, rax_1 + rcx_1 + 0x18);
            uint64_t rax;
            int64_t* rdx_2;
            rax = _$LT$alacritty..config..ui_config..UiConfig$u20$as$u20$alacritty_config..SerdeReplace$GT$::replace::h710cd057184921b4(arg2, &var_68);
            
            if (!rax)
            {
                r15_1 += 1;
                
                if (r15_1 >= rbp)
                    break;
            }
            else
            {
                uint64_t var_c8 = rax;
                
                if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                    &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0))
                {
                    int64_t* var_b0 = &var_b8;
                    int64_t (* var_a8_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h83f1bbefb10239b3;
                    uint64_t* var_a0_1 = &var_c8;
                    int64_t (* var_98_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h52a3e481c4252974;
                    var_68 = &data_c816a0;
                    int64_t var_60_1 = 2;
                    int64_t var_48_1 = 0;
                    int64_t** var_58_1 = &var_b0;
                    int64_t var_50_1 = 2;
                    int64_t rax_3 = log::__private_api::loc::h250021ea1f26630a(&data_c816c0);
                    char const* const var_90 = "alacritty_log_window_configalacr…";
                    int64_t var_88_1 = 0x1b;
                    char const* const var_80_1 = "alacritty::cliIgnoring invalid C…";
                    int64_t var_78_1 = 0xe;
                    int64_t var_70_1 = rax_3;
                    log::__private_api::log::h0b6680b994d742b1(&var_68, 1, &var_90);
                }
                
                alloc::vec::Vec$LT$T$C$A$GT$::swap_remove::h6ef130c9db4ae6fe(&var_68, arg1, r15_1);
                core::ptr::drop_in_place$LT$$LP$alloc..string..String$C$toml..value..Value$RP$$GT$::h616ff561afa8a74f(&var_68);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h3d4788587f1a236c(var_c8, rdx_2);
                rbp = *(arg1 + 0x10);
                
                if (r15_1 >= rbp)
                    break;
            }
        }
    }
}
