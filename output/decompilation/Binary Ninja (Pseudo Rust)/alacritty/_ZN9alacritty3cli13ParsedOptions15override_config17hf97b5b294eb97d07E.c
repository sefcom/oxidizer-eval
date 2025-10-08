
  fn alacritty::cli::ParsedOptions::override_config::hf97b5b294eb97d07(arg1: *mut c_void, arg2: *mut *mut c_void)

{
    let mut rbp: i64 = *arg1.byte_offset(0x10);
    
    if rbp != 0
    {
        let mut r15_1: i64 = 0;
        
        loop
        {
            let rax_1: *mut c_void = *arg1.byte_offset(8);
            let rcx_1: i64 = r15_1 * 0x38;
            let mut var_b8: *mut c_void = rax_1.byte_offset(rcx_1);
            let mut var_68: *mut *mut c_void;
            _$LT$toml..value..Value$u20$as$u20$core..clone..Clone$GT$::clone::hd28dc0176ce4bcf3(
                &var_68, rax_1.byte_offset(rcx_1).byte_offset(0x18));
            let mut rax: u64;
            let mut rdx_2: *mut i64;
            rax = _$LT$alacritty..config..ui_config..UiConfig$u20$as$u20$alacritty_config..SerdeReplace$GT$::replace::h710cd057184921b4(arg2, &var_68);
            
            if rax == 0
            {
                r15_1 += 1;
                
                if r15_1 >= rbp
                {
                    break;
                }
            }
            else
            {
                let mut var_c8: u64 = rax;
                
                if core::sync::atomic::atomic_load::h45f93311b58385bb(
                    &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) != 0
                {
                    let mut var_b0: *mut i64 = &var_b8;
                    let var_a8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h83f1bbefb10239b3;
                    let var_a0_1: *mut u64 = &var_c8;
                    let var_98_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h52a3e481c4252974;
                    var_68 = &data_c816a0;
                    let var_60_1: i64 = 2;
                    let var_48_1: i64 = 0;
                    let var_58_1: *mut *mut i64 = &var_b0;
                    let var_50_1: i64 = 2;
                    let rax_3: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c816c0);
                    let mut var_90: *const i8 = "alacritty_log_window_configalacr…";
                    let var_88_1: i64 = 0x1b;
                    let var_80_1: *const i8 = "alacritty::cliIgnoring invalid C…";
                    let var_78_1: i64 = 0xe;
                    let var_70_1: i64 = rax_3;
                    log::__private_api::log::h0b6680b994d742b1(&var_68, 1, &var_90);
                }
                
                alloc::vec::Vec$LT$T$C$A$GT$::swap_remove::h6ef130c9db4ae6fe(&var_68, arg1, r15_1);
                core::ptr::drop_in_place$LT$$LP$alloc..string..String$C$toml..value..Value$RP$$GT$::h616ff561afa8a74f(&var_68);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h3d4788587f1a236c(var_c8, rdx_2);
                rbp = *arg1.byte_offset(0x10);
                
                if r15_1 >= rbp
                {
                    break;
                }
            }
        }
    }
}
