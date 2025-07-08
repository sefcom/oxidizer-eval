
  int64_t* uu_date::uumain::uumain::hc61b24979fe22468(int64_t arg1)

{
    int32_t var_4c8;
    uu_date::uu_app::h46591bba8e5410ce(&var_4c8);
    int64_t var_618;
    clap_builder::builder::command::Command::try_get_matches_from::h38c44d6f572f08c3(&var_618, 
        &var_4c8, arg1);
    int64_t rax = var_618;
    char* var_610;
    char* rdi_2 = var_610;
    int64_t* result;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_5e8;
        int64_t var_4f8_1 = var_5e8;
        int128_t var_5f8;
        int128_t var_508_1 = var_5f8;
        int128_t var_608;
        int128_t var_518_1 = var_608;
        int64_t var_528 = rax;
        char* var_520_1 = rdi_2;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(
            &var_4c8, &var_528, "formatinvalid date -setexpected …", 6);
        void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763(
            "formatinvalid date -setexpected …", 6, &var_4c8);
        int64_t var_588;
        int64_t var_578;
        int64_t* result_1;
        int128_t var_4b8;
        int128_t var_4a8;
        
        if (!rax_2)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h795413c9035e3449(
                &var_4c8, &var_528, "iso-8601tomorrow, group", 8);
            clap_builder::parser::error::MatchesError::unwrap::h7ec099717003adb0(&var_618, 
                "iso-8601tomorrow, group", 8, &var_4c8);
            
            if (!var_618)
            {
                int64_t rax_11;
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_528, "rfc-emailuniversal%N%f/rustc/8bf…", 9))
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(&var_4c8, &var_528, "rfc-3339", 8);
                    void* rax_12 =
                        clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763(
                        "rfc-3339", 8, &var_4c8);
                    
                    if (!rax_12)
                        rax_11 = -0x7ffffffffffffffc;
                    else
                    {
                        char var_580_2 = _$LT$uu_date..Rfc3339Format$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::hb1590cf1194341eb(*(rax_12 + 8), *(rax_12 + 0x10));
                        rax_11 = -0x7ffffffffffffffe;
                    }
                }
                else
                    rax_11 = -0x7fffffffffffffff;
                
                var_588 = rax_11;
            }
            else
            {
                int128_t var_498_1 = var_5e8;
                var_4a8 = var_5f8;
                var_4b8 = var_608;
                var_4c8 = var_618;
                char var_580_1 =
                    uu_date::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hf98a19f9188fa764(
                    &var_4c8);
                var_588 = -0x8000000000000000;
            }
            
            label_5715fb:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(
                &var_4c8, &var_528, "datethur]", 4);
            void* rax_14 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763(
                "datethur]", 4, &var_4c8);
            int64_t var_5a8;
            int128_t var_5a0;
            
            if (!rax_14)
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(&var_4c8, &var_528, "filemode{", 4);
                void* rax_16 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763(
                    "filemode{", 4, &var_4c8);
                
                if (!rax_16)
                    var_5a8 = 0;
                else
                {
                    int64_t r14_3 = *(rax_16 + 8);
                    size_t r15_3 = *(rax_16 + 0x10);
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8650b83da4aeb60c(r14_3, r15_3, "-setexpected file, got directory…", 1))
                    {
                        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_4c8, 
                            r14_3, r15_3);
                        int64_t var_590_2 = var_4b8;
                        var_5a0 = var_4c8;
                        var_5a8 = 2;
                    }
                    else
                        var_5a8 = 3;
                }
            }
            else
            {
                void var_1f8;
                chrono::offset::local::Local::now::ha82adb6e05d16f38(&var_1f8);
                *(rax_14 + 0x10);
                parse_datetime::parse_datetime_at_date::h6c03b145adbb3982(&var_618, &var_1f8, 
                    *(rax_14 + 8));
                
                if (var_618 != -0x7ffffffffffffffe)
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_4c8, rax_14);
                    int64_t var_590_1 = var_4b8;
                    var_5a0 = var_4c8;
                    var_5a8 = 1;
                }
                else
                {
                    int128_t var_1e8 = var_610;
                    int64_t rax_15;
                    int32_t rdx_9;
                    rax_15 = chrono::datetime::DateTime$LT$Tz$GT$::signed_duration_since::hb490934dc3b573cf(&var_1e8, &var_1f8);
                    var_5a0 = rax_15;
                    *var_5a0[8] = rdx_9;
                    var_5a8 = 4;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::h390c446ffa92a7c5(&var_618);
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(
                &var_4c8, &var_528, "setexpected file, got directory …", 3);
            void* rax_19 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763(
                "setexpected file, got directory …", 3, &var_4c8);
            int32_t rbp_1 = 0;
            
            if (!rax_19)
                goto label_571845;
            
            core::ops::function::FnOnce::call_once::h0216c991427234bc(&var_4c8, rax_19);
            int64_t** rcx_5 = var_4c8;
            int64_t var_4c0;
            int32_t rax_20 = var_4c0;
            int64_t*** var_678 = var_4c0;
            int32_t rdx_13 = *var_4b8[4];
            int128_t var_668 = var_4b8;
            int64_t var_658 = *var_4a8[8];
            
            if (rcx_5 == -0x7fffffffffffffff)
                goto label_571845;
            
            int64_t** var_698;
            int64_t* result_4;
            
            if (rcx_5 != -0x8000000000000000)
            {
                var_698 = rcx_5;
                int64_t*** rax_28 = var_678;
                int64_t var_558_1 = var_658;
                result_1 = var_668;
                var_618 = 0;
                var_610 = rax_20;
                var_610 = rax_28;
                *var_608[4] = rdx_13;
                *var_608[8] = 1;
                result_4 = &var_618;
                int64_t (* var_640_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_4c8 = &data_70b050;
                int64_t var_4c0_2 = 1;
                var_4a8 = 0;
                var_4b8 = &result_4;
                *var_4b8[8] = 1;
                int128_t var_1b8;
                core::option::Option$LT$T$GT$::map_or_else::h8ee1539307453e0d(&var_1b8, &var_4c8);
                *var_4b8[8] = 1;
                var_4c8 = var_1b8;
                int64_t var_1a8;
                var_4b8 = var_1a8;
                result = alloc::boxed::Box$LT$T$GT$::new::h2d2a9f0ae010a8cc(&var_4c8);
                core::ptr::drop_in_place$LT$parse_datetime..ParseDateTimeError$GT$::hdc7e58c80b07c4d6(&result_1);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46caac69925be4b1(&var_698);
                core::ptr::drop_in_place$LT$uu_date..DateSource$GT$::h10dbb006a1fa78d1(&var_5a8);
                core::ptr::drop_in_place$LT$uu_date..Format$GT$::h10a4bb051eea9847(&var_588);
            }
            else
            {
                int32_t var_530 = rdx_13;
                int64_t*** var_538 = var_678;
                rbp_1 = rax_20;
                label_571845:
                char rax_21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_528, "universal%N%f/rustc/8bfcae730a5d…", 9);
                int64_t var_5e8_1 = var_578;
                int128_t var_5f8_1 = var_588;
                var_618 = var_5a8;
                int32_t var_5d4_1 = var_530;
                char var_5d0_1 = rax_21;
                
                if (rbp_1)
                {
                    int32_t var_4d0_1 = *var_538[4];
                    int64_t var_4d8 = rbp_1;
                    result = uu_date::set_system_datetime::h9c24751b07cec72e(&var_4d8);
                }
                else
                {
                    int64_t var_630_1;
                    int32_t var_628_1;
                    int32_t rax_26;
                    
                    if (!rax_21)
                    {
                        chrono::offset::local::Local::now::ha82adb6e05d16f38(&var_4c8);
                        var_628_1 = var_4c0;
                        var_630_1 = var_4c8;
                        rax_26 = *var_4c0[4];
                        int32_t var_690;
                        void** var_560;
                        int128_t* rax_36;
                        int64_t* rbx;
                        int128_t* rdi_34;
                        int128_t* r14_4;
                        
                        switch (jump_table_44eb3c[var_618])
                        {
                            case 0x122f89:
                            {
                                label_571ac9:
                                int32_t var_148_1 = var_628_1;
                                int64_t var_150_1 = var_630_1;
                                int64_t var_158 = -0x8000000000000000;
                                int32_t var_144_1 = rax_26;
                                rdi_34 = &var_158;
                                label_571d77:
                                rax_36 = alloc::boxed::Box$LT$T$GT$::new::h97c911dacdf4498f(rdi_34);
                                label_571d7c:
                                r14_4 = rax_36;
                                rbx = &data_70b170;
                                goto label_571d8e;
                            }
                            case 0x123013:
                            {
                                label_571b4f:
                                char* rdx_17 = var_610;
                                int32_t rcx_21 = var_5a0;
                                var_668 = rdx_17;
                                *var_668[8] = rcx_21;
                                var_4c0 = var_628_1;
                                var_4c8 = var_630_1;
                                *var_4c0[4] = rax_26;
                                chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::hddd3fc8e48d64d6b(&var_698, &var_4c8, rdx_17, rcx_21);
                                
                                if (var_698)
                                {
                                    int128_t var_58_1 = var_698;
                                    int64_t var_60 = -0x8000000000000000;
                                    rax_36 =
                                        alloc::boxed::Box$LT$T$GT$::new::h97c911dacdf4498f(&var_60);
                                    goto label_571d7c;
                                }
                                
                                result_1 = &var_668;
                                uint64_t (* var_560_2)(int64_t* arg1, void* arg2) = _$LT$chrono..time_delta..TimeDelta$u20$as$u20$core..fmt..Display$GT$::fmt::he8fd418e9057277a;
                                var_4c8 = &data_70b050;
                                int64_t var_4c0_10 = 1;
                                var_4a8 = 0;
                                var_4b8 = &result_1;
                                *var_4b8[8] = 1;
                                int128_t var_1a0;
                                core::option::Option$LT$T$GT$::map_or_else::h8ee1539307453e0d(
                                    &var_1a0, &var_4c8);
                                *var_4b8[8] = 1;
                                var_4c8 = var_1a0;
                                int64_t var_190;
                                var_4b8 = var_190;
                                result =
                                    alloc::boxed::Box$LT$T$GT$::new::h2d2a9f0ae010a8cc(&var_4c8);
                                break;
                            }
                            case 0x12308a:
                            {
                                label_571bd6:
                                
                                if (!std::path::Path::is_dir::h9ac0db933706da51(var_5a0, 
                                    *var_5a0[8]))
                                {
                                    std::fs::File::open::hdbd85a7f8e56faa4(&var_4c8, &var_610);
                                    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h2b9585b041a00740(&result_1, &var_4c8, &var_610);
                                    result = result_1;
                                    
                                    if (!result)
                                    {
                                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h8cb569e2ac8efd3e(&var_4c8, 0x2000, var_560);
                                        int128_t var_a8_1 = var_4a8;
                                        int128_t var_b8_1 = var_4b8;
                                        int128_t var_c8 = var_4c8;
                                        r14_4 = alloc::boxed::Box$LT$T$GT$::new::h7306fc56f869dfd6(
                                            &var_c8);
                                        rbx = &data_70b1a8;
                                        goto label_571d8e;
                                    }
                                }
                                else
                                {
                                    result_1 = 1;
                                    var_560 = var_5a0;
                                    char var_550_1 = 1;
                                    var_698 = &result_1;
                                    var_690 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                    var_4c8 = &data_70b060;
                                    int64_t var_4c0_3 = 1;
                                    var_4a8 = 0;
                                    var_4b8 = &var_698;
                                    *var_4b8[8] = 1;
                                    int128_t var_188;
                                    core::option::Option$LT$T$GT$::map_or_else::h8ee1539307453e0d(
                                        &var_188, &var_4c8);
                                    *var_4b8[8] = 2;
                                    var_4c8 = var_188;
                                    int64_t var_178;
                                    var_4b8 = var_178;
                                    result = alloc::boxed::Box$LT$T$GT$::new::h2d2a9f0ae010a8cc(
                                        &var_4c8);
                                }
                                break;
                            }
                            case 0x123174:
                            {
                                label_571cb0:
                                std::io::stdio::stdin::h7215cc131abb55d8();
                                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7c74e934792e457a(&var_4c8, 0x2000, 
                                    &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
                                int128_t var_d8_1 = var_4a8;
                                int128_t var_e8_1 = var_4b8;
                                int128_t var_f8 = var_4c8;
                                r14_4 = alloc::boxed::Box$LT$T$GT$::new::h6690f1b2167af983(&var_f8);
                                rbx = &data_70b1e0;
                                label_571d8e:
                                void* rax_41;
                                int64_t rdx_18;
                                rax_41 = uu_date::make_format_string::h93ce19862c203cfb(&var_618);
                                int64_t rax_42 = rbx[3];
                                int128_t* var_620_1 = r14_4;
                                int64_t* result_2;
                                int128_t* r14_6;
                                
                                while (true)
                                {
                                    rax_42(&result_1, r14_4);
                                    int64_t* result_3 = result_1;
                                    int64_t var_68c;
                                    char var_680;
                                    int32_t var_670;
                                    int64_t** var_640;
                                    int128_t var_5c8;
                                    
                                    if (result_3 == -0x8000000000000000)
                                    {
                                        var_5c8 = var_560;
                                        alloc::str::_$LT$impl$u20$str$GT$::replace::h841ce4bfcf395025(&result_4, rax_41, rdx_18, 
                                            "%N%f/rustc/8bfcae730a5db2438bbda…", 
                                            "%f/rustc/8bfcae730a5db2438bbda72…");
                                        int64_t var_638;
                                        
                                        if (_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hce6c1a51027c4ec5(var_640, var_638))
                                        {
                                            r14_6 = var_620_1;
                                            alloc::str::_$LT$impl$u20$str$GT$::replace::h841ce4bfcf395025(&var_698, var_640, var_638, 
                                                "%f/rustc/8bfcae730a5db2438bbda72…", 
                                                "%N%f/rustc/8bfcae730a5db2438bbda…");
                                            var_678 = &var_698;
                                            var_670 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                            var_4c8 = &data_70b070;
                                            int64_t var_4c0_8 = 1;
                                            var_4a8 = 0;
                                            var_4b8 = &var_678;
                                            *var_4b8[8] = 1;
                                            core::option::Option$LT$T$GT$::map_or_else::h8ee1539307453e0d(&var_668, &var_4c8);
                                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46caac69925be4b1(&var_698);
                                            var_4b8 = var_658;
                                            var_4c8 = var_668;
                                            *var_4b8[8] = 1;
                                            result_2 =
                                                alloc::boxed::Box$LT$T$GT$::new::h2d2a9f0ae010a8cc(
                                                &var_4c8);
                                            break;
                                        }
                                        
                                        var_4c8 = var_640;
                                        int64_t var_4c0_6 = var_638;
                                        var_4b8 = 8;
                                        *var_4b8[8] = 0;
                                        
                                        if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1a64ae4e7aa72e0b(core::iter::traits::iterator::Iterator::try_fold::ha68db790718deab0(&var_4c8)))
                                        {
                                            r14_6 = var_620_1;
                                            alloc::str::_$LT$impl$u20$str$GT$::replace::h841ce4bfcf395025(&var_698, var_640, var_638, 
                                                "%f/rustc/8bfcae730a5db2438bbda72…", 
                                                "%N%f/rustc/8bfcae730a5db2438bbda…");
                                            var_678 = &var_698;
                                            var_670 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                            var_4c8 = &data_70b070;
                                            int64_t var_4c0_9 = 1;
                                            var_4a8 = 0;
                                            var_4b8 = &var_678;
                                            *var_4b8[8] = 1;
                                            core::option::Option$LT$T$GT$::map_or_else::h8ee1539307453e0d(&var_668, &var_4c8);
                                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46caac69925be4b1(&var_698);
                                            var_4b8 = var_658;
                                            var_4c8 = var_668;
                                            *var_4b8[8] = 1;
                                            result_2 =
                                                alloc::boxed::Box$LT$T$GT$::new::h2d2a9f0ae010a8cc(
                                                &var_4c8);
                                            break;
                                        }
                                        
                                        var_698 = var_640;
                                        var_690 = var_638;
                                        var_68c = 8;
                                        var_680 = 0;
                                        chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h95dcb941d2456d46(&var_4c8, &var_5c8, &var_698);
                                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hfd543c7ad8a709ec(&var_698, &var_4c8);
                                        alloc::str::_$LT$impl$u20$str$GT$::replace::h841ce4bfcf395025(&var_668, var_690, var_68c, 
                                            "%f/rustc/8bfcae730a5db2438bbda72…", 
                                            "%N%f/rustc/8bfcae730a5db2438bbda…");
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46caac69925be4b1(&var_698);
                                        core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h0219e7a36466bd20(&var_4c8);
                                        var_698 = &var_668;
                                        var_690 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                        var_4c8 = &data_70aff8;
                                        int64_t var_4c0_7 = 2;
                                        var_4a8 = 0;
                                        var_4b8 = &var_698;
                                        *var_4b8[8] = 1;
                                        std::io::stdio::_print::he918bceb0c89db46(&var_4c8);
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46caac69925be4b1(&var_668);
                                        r14_4 = var_620_1;
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46caac69925be4b1(&result_4);
                                    }
                                    else
                                    {
                                        if (result_3 == -0x7fffffffffffffff)
                                        {
                                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h9769884406555323(r14_4, rbx);
                                            core::ptr::drop_in_place$LT$uu_date..Settings$GT$::ha2ce824135b7dab4(&var_618);
                                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he8e39d519893eb8d(&var_528);
                                            return nullptr;
                                        }
                                        
                                        result_4 = result_3;
                                        var_640 = var_560;
                                        int64_t var_540;
                                        var_658 = var_540;
                                        char var_550;
                                        var_668 = var_550;
                                        var_698 = nullptr;
                                        var_690 = var_640;
                                        var_680 = 1;
                                        var_678 = &var_698;
                                        var_670 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                        var_4c8 = &data_70b050;
                                        int64_t var_4c0_4 = 1;
                                        var_4a8 = 0;
                                        var_4b8 = &var_678;
                                        *var_4b8[8] = 1;
                                        int128_t var_170;
                                        core::option::Option$LT$T$GT$::map_or_else::h8ee1539307453e0d(&var_170, &var_4c8);
                                        *var_4b8[8] = 1;
                                        var_4c8 = var_170;
                                        int64_t var_160;
                                        var_4b8 = var_160;
                                        int128_t* rax_45 =
                                            alloc::boxed::Box$LT$T$GT$::new::h2d2a9f0ae010a8cc(
                                            &var_4c8);
                                        var_5c8 = rax_45;
                                        *var_5c8[8] = &data_70b0e8;
                                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(
                                            rax_45));
                                        int64_t*** rax_47;
                                        int64_t rdx_19;
                                        rax_47 = uucore::util_name::h60d842bf27b05e82();
                                        var_678 = rax_47;
                                        var_670 = rdx_19;
                                        var_698 = &var_678;
                                        var_690 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1745a6849f047cef;
                                        var_68c = &var_5c8;
                                        var_680 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hfa44338994cc6cd7;
                                        var_4c8 = &data_70b080;
                                        int64_t var_4c0_5 = 3;
                                        var_4a8 = 0;
                                        var_4b8 = &var_698;
                                        *var_4b8[8] = 2;
                                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_4c8);
                                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h9769884406555323(var_5c8, *var_5c8[8]);
                                        core::ptr::drop_in_place$LT$parse_datetime..ParseDateTimeError$GT$::hdc7e58c80b07c4d6(&var_668);
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46caac69925be4b1(&result_4);
                                    }
                                }
                                
                                result = result_2;
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46caac69925be4b1(&result_4);
                                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h9769884406555323(r14_6, rbx);
                                break;
                            }
                            case 0x1231d8:
                            {
                                label_571d24:
                                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_4c8, &var_610);
                                int128_t var_90;
                                uu_date::parse_date::h3e04b396edc04cd0(&var_90, &var_4c8);
                                int128_t var_128 = var_90;
                                int128_t var_80;
                                int128_t var_118_1 = var_80;
                                int128_t var_70;
                                int128_t var_108_1 = var_70;
                                rdi_34 = &var_128;
                                goto label_571d77;
                            }
                        }
                    }
                    else
                    {
                        chrono::offset::utc::Utc::now::h6cedf06090c05fb6(&var_4c8);
                        var_628_1 = var_4c0;
                        var_630_1 = var_4c8;
                        rax_26 = 0;
                        
                        switch (jump_table_44eb3c[var_618])
                        {
                            case 0x122f89:
                            {
                                goto label_571ac9;
                            }
                            case 0x123013:
                            {
                                goto label_571b4f;
                            }
                            case 0x12308a:
                            {
                                goto label_571bd6;
                            }
                            case 0x123174:
                            {
                                goto label_571cb0;
                            }
                            case 0x1231d8:
                            {
                                goto label_571d24;
                            }
                        }
                    }
                }
                
                core::ptr::drop_in_place$LT$uu_date..Settings$GT$::ha2ce824135b7dab4(&var_618);
            }
        }
        else
        {
            char* r15_2 = *(rax_2 + 8);
            void* r14_1 = *(rax_2 + 0x10);
            var_4c8 = 0;
            int64_t rax_3;
            uint64_t rdx_2;
            rax_3 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2b, &var_4c8);
            
            if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h2bd7998b12862cfc(r15_2, 
                r14_1, rax_3, rdx_2))
            {
                void* rax_5;
                uint64_t rdx_5;
                rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, r15_2, r14_1);
                
                if (!rax_5)
                {
                    core::str::slice_error_fail::h5dbb61534404fe7e(r15_2, r14_1, 1, r14_1);
                    /* no return */
                }
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h54ae726bf70ace5b(
                    &var_4c8, rax_5, rdx_5);
                var_578 = var_4b8;
                var_588 = var_4c8;
                goto label_5715fb;
            }
            
            var_618 = 0;
            var_610 = r15_2;
            var_608 = r14_1;
            *var_608[8] = 1;
            result_1 = &var_618;
            int64_t (* var_560_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_4c8 = &data_70b050;
            int64_t var_4c0_1 = 1;
            var_4a8 = 0;
            var_4b8 = &result_1;
            *var_4b8[8] = 1;
            int128_t var_1d0;
            core::option::Option$LT$T$GT$::map_or_else::h8ee1539307453e0d(&var_1d0, &var_4c8);
            *var_4b8[8] = 1;
            var_4c8 = var_1d0;
            int64_t var_1c0;
            var_4b8 = var_1c0;
            result = alloc::boxed::Box$LT$T$GT$::new::h2d2a9f0ae010a8cc(&var_4c8);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he8e39d519893eb8d(&var_528);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(rdi_2);
    
    return result;
}
