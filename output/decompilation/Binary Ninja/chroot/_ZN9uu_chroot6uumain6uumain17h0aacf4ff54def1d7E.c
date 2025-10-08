
  uint64_t uu_chroot::uumain::uumain::h0aacf4ff54def1d7(int64_t arg1)

{
    void* const var_338;
    uu_chroot::uu_app::haf893327f4e12c40(&var_338);
    void* const var_410;
    clap_builder::builder::command::Command::try_get_matches_from::h7b09a53eea8f1d9c(&var_410, 
        &var_338, arg1);
    void* const rax = var_410;
    uint64_t result;
    int64_t var_408;
    
    if (-(rax) != -0x8000000000000000)
    {
        int128_t var_3fc;
        int128_t var_374_1 = var_3fc;
        int128_t var_3ec;
        int128_t var_364_1 = var_3ec;
        int32_t var_3dc;
        int32_t var_354_1 = var_3dc;
        void* const var_388 = rax;
        int64_t var_380_1 = var_408;
        int32_t var_400;
        int32_t var_378_1 = var_400;
        int64_t var_3a8;
        std::env::var::h41c864fdddd31a28(&var_3a8);
        uu_chroot::Options::from::hdf9aee44d298ba74(&var_338, &var_388);
        void* const rax_2 = var_338;
        uint64_t result_2;
        result = result_2;
        void** var_328;
        void** const r12 = var_328;
        
        if (rax_2 != -0x8000000000000000)
        {
            int128_t var_2e0;
            int72_t var_3b8_1 = var_2e0;
            int128_t var_2f0;
            int128_t var_3c8_1 = var_2f0;
            int128_t var_300;
            int128_t var_3d8_1 = var_300;
            int128_t var_310;
            var_3ec = var_310;
            int128_t var_320;
            var_3fc = var_320;
            var_410 = rax_2;
            uint64_t result_1 = result;
            var_400 = r12;
            
            if (!*var_3b8_1[8])
                goto label_4621cb;
            
            uucore::features::fs::canonicalize::hd1e02c1cbeb0770f(&var_338, &var_410);
            int128_t var_468;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8e19656dab11eb84(&var_468, &var_338);
            char* var_460;
            int64_t var_458;
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_338, var_460, var_458);
            
            if (var_338 & 1)
            {
                label_462260:
                core::mem::drop::hd7797c8ae89fe810(var_468, var_460);
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc2694177795286e6(&var_468, "option --skip-chdir only permitt…", 0x38);
                int64_t var_328_1 = var_458;
                var_338 = var_468;
                var_320 = 0x7d;
                result = alloc::boxed::Box$LT$T$GT$::new::h37ad0db9ff8eec9c(&var_338);
            }
            else
            {
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hcb8977ebfc05cc90(result_2, var_328, "/commandError flushing stdout: ", 1))
                    goto label_462260;
                
                core::mem::drop::hd7797c8ae89fe810(var_468, var_460);
                result = result_1;
                r12 = var_400;
                label_4621cb:
                int128_t* var_440;
                
                if (!std::path::Path::is_dir::h02edbc48c38d7d9e(result, r12))
                {
                    var_468 = result_1;
                    var_440 = &var_468;
                    uint64_t (* var_438_1)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    var_338 = &data_4195b0;
                    int64_t var_330 = 1;
                    *var_320[8] = 0;
                    int128_t** var_328_2 = &var_440;
                    var_320 = 1;
                    int128_t var_350;
                    core::option::Option$LT$T$GT$::map_or_else::h3cb555ed11a172a6(&var_350, 
                        &var_338);
                    var_330 = var_350;
                    int64_t var_340;
                    var_320 = var_340;
                    var_338 = 0xa;
                    result = alloc::boxed::Box$LT$T$GT$::new::h809e1f80a24b1dbf(&var_338);
                }
                else
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4ae8d85311f4ede3(&var_338, &var_388);
                    int64_t var_70;
                    clap_builder::parser::error::MatchesError::unwrap::h07bb346b5edcec3e(&var_70, 
                        &var_338);
                    char var_48c_1;
                    int64_t var_488_1;
                    int64_t var_480;
                    int64_t* var_478;
                    int64_t* rbx_2;
                    char const* const r13_1;
                    int64_t r14_2;
                    
                    if (!var_70)
                    {
                        var_480 = 0;
                        var_478 = 8;
                        int64_t var_470_1 = 0;
                        label_462396:
                        int64_t r14_3 = var_3a8;
                        char* var_398;
                        r13_1 = var_398;
                        int64_t var_390;
                        int64_t rbp_1 = var_390;
                        int64_t* rax_10 =
                            alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x20);
                        
                        if (!rax_10)
                        {
                            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                            /* no return */
                        }
                        
                        rbx_2 = rax_10;
                        
                        if (r14_3)
                            r13_1 = "/bin/sh-ioption --skip-chdir onl…";
                        
                        if (r14_3)
                            rbp_1 = 7;
                        
                        *rbx_2 = r13_1;
                        rbx_2[1] = rbp_1;
                        rbx_2[2] = "-ioption --skip-chdir only permi…";
                        rbx_2[3] = 2;
                        var_488_1 = 2;
                        r14_2 = 1;
                        var_48c_1 = 1;
                    }
                    else
                    {
                        core::iter::traits::iterator::Iterator::collect::ha950634a5ae1a641(
                            &var_480, &var_70);
                        int64_t var_470;
                        
                        if (!var_470)
                            goto label_462396;
                        
                        var_488_1 = var_480;
                        rbx_2 = var_478;
                        r14_2 = var_470 - 1;
                        r13_1 = *rbx_2;
                        rbx_2[1];
                        var_48c_1 = 0;
                    }
                    
                    uint64_t result_3 = uu_chroot::set_context::h8c46b364c6a89d00(&var_410);
                    result = result_3;
                    
                    if (!result_3)
                    {
                        std::process::Command::new::h55e42c3aed214011(&var_338, r13_1);
                        std::process::Command::args::hc2e5c5130a361ad9(&var_338, &rbx_2[2], r14_2);
                        int32_t var_428;
                        std::process::Command::status::h6e1e3c5811681da5(&var_428);
                        
                        if (var_428 != 1)
                        {
                            core::ptr::drop_in_place$LT$std..process..Command$GT$::h22d060a4ddfe511d(&var_338);
                            int32_t var_424;
                            int32_t rdi_27;
                            
                            if (!var_424)
                                rdi_27 = 0;
                            else
                                rdi_27 = (0 - 0) | *var_424[1];
                            
                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdi_27);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::had99761f1957d131(var_488_1, rbx_2);
                            
                            if (var_48c_1)
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::had99761f1957d131(var_480, var_478);
                            
                            core::ptr::drop_in_place$LT$uu_chroot..Options$GT$::hd6ad415c82bbebcc(
                                &var_410);
                            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h6c87ce4b6abe1f1a(&var_3a8);
                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b65a92f21add762(&var_388);
                            return 0;
                        }
                        
                        int64_t var_420;
                        int64_t var_418_1 = var_420;
                        char rax_11 = std::io::error::Error::kind::h135fe00c4e7365f3(var_420);
                        int64_t rsi_16 = *rbx_2;
                        uint64_t rdx_5 = rbx_2[1];
                        int32_t rax_13;
                        int64_t var_430;
                        
                        if (!rax_11)
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc2694177795286e6(&var_440, rsi_16, rdx_5);
                            int64_t var_448_2 = var_430;
                            var_458 = var_440;
                            rax_13 = 2;
                        }
                        else
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc2694177795286e6(&var_440, rsi_16, rdx_5);
                            int64_t var_448_1 = var_430;
                            var_458 = var_440;
                            rax_13 = 1;
                        }
                        int64_t var_460_1 = var_420;
                        var_468 = rax_13;
                        result = alloc::boxed::Box$LT$T$GT$::new::h809e1f80a24b1dbf(&var_468);
                        core::ptr::drop_in_place$LT$std..process..Command$GT$::h22d060a4ddfe511d(
                            &var_338);
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::had99761f1957d131(var_488_1, rbx_2);
                    
                    if (var_48c_1)
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::had99761f1957d131(var_480, var_478);
                }
            }
            
            core::ptr::drop_in_place$LT$uu_chroot..Options$GT$::hd6ad415c82bbebcc(&var_410);
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h6c87ce4b6abe1f1a(&var_3a8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b65a92f21add762(&var_388);
    }
    else
        result = alloc::boxed::Box$LT$T$GT$::new::hba71fb7b5b9dab6c(var_408, 0x7d);
    return result;
}
