
  uint64_t uu_date::uumain::uumain::h02143b6a9719834e(int64_t arg1)

{
    int32_t var_4b8;
    uu_date::uu_app::h16fa55fca8cffc98(&var_4b8);
    uint64_t var_5f8;
    clap_builder::builder::command::Command::try_get_matches_from::h30b06472cd87dbe1(&var_5f8, 
        &var_4b8, arg1);
    uint64_t rax = var_5f8;
    uint64_t** var_5f0;
    uint64_t** rdi_2 = var_5f0;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(rdi_2);
    
    int64_t var_5c8;
    int64_t var_4e0_1 = var_5c8;
    int128_t var_5d8;
    int128_t var_4f0_1 = var_5d8;
    int128_t var_5e8;
    int128_t var_500_1 = var_5e8;
    uint64_t var_510 = rax;
    uint64_t** var_508_1 = rdi_2;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce3c3270a717cad2(
        &var_4b8, &var_510, "formatrfc-emailsetuniversal%f%N/…", 6);
    void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::ha91e63c324e6082a(
        "formatrfc-emailsetuniversal%f%N/…", 6, &var_4b8);
    uint64_t result;
    uint64_t result_1;
    int64_t var_5a8;
    int64_t var_598;
    int64_t var_4b0;
    int128_t var_4a8;
    int128_t var_498;
    
    if (!rax_2)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1d7c8589c95a2667(
            &var_4b8, &var_510);
        clap_builder::parser::error::MatchesError::unwrap::h9cd2a71e81cc65a0(&var_5f8, &var_4b8);
        
        if (!var_5f8)
        {
            int64_t rax_12;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_510, "rfc-emailsetuniversal%f%N/home/3…", 9))
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce3c3270a717cad2(&var_4b8, &var_510, "rfc-3339saturday", 8);
                void* rax_13 = clap_builder::parser::error::MatchesError::unwrap::ha91e63c324e6082a(
                    "rfc-3339saturday", 8, &var_4b8);
                
                if (!rax_13)
                    rax_12 = -0x7ffffffffffffffc;
                else
                {
                    char var_5a0_2 = _$LT$uu_date..Rfc3339Format$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::ha37270e94269fcfd(*(rax_13 + 8), *(rax_13 + 0x10));
                    rax_12 = -0x7ffffffffffffffe;
                }
            }
            else
                rax_12 = -0x7fffffffffffffff;
            
            var_5a8 = rax_12;
        }
        else
        {
            int128_t var_488_1 = var_5c8;
            var_498 = var_5d8;
            var_4a8 = var_5e8;
            var_4b8 = var_5f8;
            char var_5a0_1 =
                uu_date::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hac17f49f35c0ab5f(&var_4b8);
            var_5a8 = -0x8000000000000000;
        }
        
        label_602317:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce3c3270a717cad2(
            &var_4b8, &var_510, "datethur]", 4);
        void* rax_15 = clap_builder::parser::error::MatchesError::unwrap::ha91e63c324e6082a(
            "datethur]", 4, &var_4b8);
        int64_t var_568;
        int128_t var_560;
        
        if (!rax_15)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce3c3270a717cad2(
                &var_4b8, &var_510, "filemode{", 4);
            void* rax_17 = clap_builder::parser::error::MatchesError::unwrap::ha91e63c324e6082a(
                "filemode{", 4, &var_4b8);
            
            if (!rax_17)
                var_568 = 0;
            else
            {
                int64_t r14_4 = *(rax_17 + 8);
                uint64_t r15_3 = *(rax_17 + 0x10);
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h113c9365d823dd91(r14_4, r15_3, "-expected file, got directory in…", 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h31e72d105958f9d5(&var_4b8, r14_4, r15_3);
                    int64_t var_550_2 = var_4a8;
                    var_560 = var_4b8;
                    var_568 = 2;
                }
                else
                    var_568 = 3;
            }
        }
        else
        {
            void var_1e8;
            chrono::offset::local::Local::now::hd3cc0dab6e1d709b(&var_1e8);
            *(rax_15 + 0x10);
            parse_datetime::parse_datetime_at_date::hcdd3a33c754dee07(&var_4b8, &var_1e8, 
                *(rax_15 + 8));
            
            if (var_4b8 != -0x7ffffffffffffffe)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::hfef74df3ec86c666(&var_4b8);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_4b8, rax_15);
                int64_t var_550_1 = var_4a8;
                var_560 = var_4b8;
                var_568 = 1;
            }
            else
            {
                int64_t rax_16;
                int32_t rdx_8;
                rax_16 =
                    chrono::datetime::DateTime$LT$Tz$GT$::signed_duration_since::h9cce9315ea548bcb(
                    &var_4b0, &var_1e8);
                var_560 = rax_16;
                *var_560[8] = rdx_8;
                var_568 = 4;
                core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::hfef74df3ec86c666(&var_4b8);
            }
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce3c3270a717cad2(
            &var_4b8, &var_510, "setuniversal%f%N/home/34r7hm4n/.…", 3);
        void* rax_21 = clap_builder::parser::error::MatchesError::unwrap::ha91e63c324e6082a(
            "setuniversal%f%N/home/34r7hm4n/.…", 3, &var_4b8);
        int32_t rbp_1 = 0;
        
        if (!rax_21)
            goto label_6026e5;
        
        uu_date::parse_date::h746ef56d163214a2(&var_4b8, rax_21);
        uint64_t result_3 = var_4b8;
        int32_t rax_22 = var_4b0;
        uint64_t** var_658 = var_4b0;
        int32_t rdx_13 = *var_4a8[4];
        int128_t var_1d8 = var_4a8;
        int64_t var_1c8_1 = *var_498[8];
        uint64_t* var_680;
        void** var_628;
        
        if (-(result_3) == -0x8000000000000000)
        {
            int32_t var_518 = rdx_13;
            uint64_t** var_520 = var_658;
            rbp_1 = rax_22;
            label_6026e5:
            char rax_28 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_510, "universal%f%N/home/34r7hm4n/.rus…", 9);
            int64_t var_5c8_1 = var_598;
            int128_t var_5d8_1 = var_5a8;
            var_5f8 = var_568;
            int32_t var_5b4_1 = var_518;
            char var_5b0_1 = rax_28;
            
            if (rbp_1)
            {
                int32_t var_4c0_1 = *var_520[4];
                int64_t var_4c8 = rbp_1;
                result = uu_date::set_system_datetime::h8387ae79f6ea6bb0(&var_4c8);
            }
            else
            {
                int64_t var_640_1;
                int32_t var_638_1;
                int32_t rax_33;
                
                if (!rax_28)
                {
                    chrono::offset::local::Local::now::hd3cc0dab6e1d709b(&var_4b8);
                    var_638_1 = var_4b0;
                    var_640_1 = var_4b8;
                    rax_33 = *var_4b0[4];
                    uint64_t var_688_1;
                    int32_t var_650;
                    char var_618;
                    void* rbx_1;
                    int64_t* rbx_2;
                    
                    switch (jump_table_4fc418[var_5f8])
                    {
                        case 0x10642f:
                        {
                            label_60284b:
                            int32_t var_118_1 = var_638_1;
                            int64_t var_120_1 = var_640_1;
                            int64_t var_128 = -0x8000000000000000;
                            int32_t var_114_1 = rax_33;
                            rbx_1 = &var_128;
                            label_602a71:
                            var_688_1 = alloc::boxed::Box$LT$T$GT$::new::h7774d69afa64daf6(rbx_1);
                            label_602a75:
                            rbx_2 = &data_74b178;
                            goto label_602a84;
                        }
                        case 0x106463:
                        {
                            label_60287b:
                            uint64_t** rdx_19 = var_5f0;
                            int32_t rcx_20 = var_560;
                            var_658 = rdx_19;
                            var_650 = rcx_20;
                            var_4b0 = var_638_1;
                            var_4b8 = var_640_1;
                            *var_4b0[4] = rax_33;
                            chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::h50da741f153016b2(&var_680, &var_4b8, rdx_19, rcx_20);
                            
                            if (var_680)
                            {
                                int128_t var_88_1 = var_680;
                                int64_t var_90 = -0x8000000000000000;
                                var_688_1 =
                                    alloc::boxed::Box$LT$T$GT$::new::h7774d69afa64daf6(&var_90);
                                goto label_602a75;
                            }
                            
                            result_1 = &var_658;
                            bool (* var_628_2)(int64_t* arg1, int64_t* arg2) = _$LT$chrono..time_delta..TimeDelta$u20$as$u20$core..fmt..Display$GT$::fmt::h50c72056fb42a654;
                            var_4b8 = &data_74b078;
                            var_4b0 = 1;
                            var_498 = 0;
                            var_4a8 = &result_1;
                            *var_4a8[8] = 1;
                            int128_t var_188;
                            core::option::Option$LT$T$GT$::map_or_else::hd3f382ebaeb7f034(&var_188, 
                                &var_4b8);
                            *var_4a8[8] = 1;
                            var_4b8 = var_188;
                            int64_t var_178;
                            var_4a8 = var_178;
                            result = alloc::boxed::Box$LT$T$GT$::new::h193c733ee5fb6fce(&var_4b8);
                            break;
                        }
                        case 0x1064e2:
                        {
                            label_60290a:
                            
                            if (!std::path::Path::is_dir::h02edbc48c38d7d9e(var_560, *var_560[8]))
                            {
                                std::fs::File::open::he3fed3f79eb106df(&var_4b8, &var_5f0);
                                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h42f98a9d19d76e4f(&result_1, &var_4b8);
                                result = result_1;
                                
                                if (!result)
                                {
                                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h3e4153acbe63d354(&var_4b8, var_628);
                                    int128_t var_a8_1 = var_498;
                                    int128_t var_b8_1 = var_4a8;
                                    int128_t var_c8 = var_4b8;
                                    var_688_1 =
                                        alloc::boxed::Box$LT$T$GT$::new::hff9c08df5932723a(&var_c8);
                                    rbx_2 = &data_74b1b0;
                                    goto label_602a84;
                                }
                            }
                            else
                            {
                                result_1 = 1;
                                var_628 = var_560;
                                var_618 = 1;
                                var_680 = &result_1;
                                int64_t (* var_678_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                var_4b8 = &data_74b088;
                                var_4b0 = 1;
                                var_498 = 0;
                                var_4a8 = &var_680;
                                *var_4a8[8] = 1;
                                int128_t var_170;
                                core::option::Option$LT$T$GT$::map_or_else::hd3f382ebaeb7f034(
                                    &var_170, &var_4b8);
                                *var_4a8[8] = 2;
                                var_4b8 = var_170;
                                int64_t var_160;
                                var_4a8 = var_160;
                                result =
                                    alloc::boxed::Box$LT$T$GT$::new::h193c733ee5fb6fce(&var_4b8);
                            }
                            break;
                        }
                        case 0x1065c3:
                        {
                            label_6029db:
                            std::io::stdio::stdin::h9a05a2c3e7544b2a();
                            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7d49d25633434047(&var_4b8, &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
                            int128_t var_d8_1 = var_498;
                            int128_t var_e8_1 = var_4a8;
                            int128_t var_f8 = var_4b8;
                            var_688_1 = alloc::boxed::Box$LT$T$GT$::new::h1e68f3bfeff0e23f(&var_f8);
                            rbx_2 = &data_74b1e8;
                            label_602a84:
                            void* rax_42;
                            int64_t rdx_20;
                            rax_42 = uu_date::make_format_string::h959c316a6f529630(&var_5f8);
                            int64_t rbx_3 = rbx_2[3];
                            
                            while (true)
                            {
                                rbx_3(&result_1, var_688_1);
                                uint64_t result_2 = result_1;
                                int64_t (* var_678)(int64_t* arg1, int64_t arg2);
                                int64_t (* var_668)(int64_t* arg1);
                                int128_t var_588;
                                uint64_t result_4;
                                uint64_t* var_530;
                                
                                if (-(result_2) == -0x8000000000000000)
                                {
                                    var_588 = var_628;
                                    uucore::features::custom_tz_fmt::custom_time_format::h40983abf3ea6ab5d(&result_4, rax_42, rdx_20);
                                    var_4b8 = var_530;
                                    int64_t var_528;
                                    var_4b0 = var_528;
                                    var_4a8 = 8;
                                    *var_4a8[8] = 0;
                                    var_498 = 0;
                                    int32_t var_5ff;
                                    *var_498[4] = var_5ff;
                                    *var_498[1] = var_5ff;
                                    
                                    if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h07edb37b2e407c12(core::iter::traits::iterator::Iterator::try_fold::h98919a744228c49c(&var_4b8)))
                                    {
                                        alloc::str::_$LT$impl$u20$str$GT$::replace::h19aa2024b27abdc5(&var_680, var_530, var_528);
                                        var_658 = &var_680;
                                        var_650 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                        var_4b8 = &data_74b098;
                                        var_4b0 = 1;
                                        var_498 = 0;
                                        var_4a8 = &var_658;
                                        *var_4a8[8] = 1;
                                        int128_t var_158;
                                        core::option::Option$LT$T$GT$::map_or_else::hd3f382ebaeb7f034(&var_158, &var_4b8);
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hca9b678a5ae7a7e7(&var_680);
                                        *var_4a8[8] = 1;
                                        var_4b8 = var_158;
                                        int64_t var_148;
                                        var_4a8 = var_148;
                                        result = alloc::boxed::Box$LT$T$GT$::new::h193c733ee5fb6fce(
                                            &var_4b8);
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hca9b678a5ae7a7e7(&result_4);
                                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h6edae7bf3bfce92f(var_688_1, rbx_2);
                                        break;
                                    }
                                    
                                    var_680 = var_530;
                                    int64_t var_670_2 = 8;
                                    var_668 = nullptr;
                                    char var_660_1 = 0;
                                    int32_t var_65c_1 = var_5ff;
                                    int32_t var_65f_1 = var_5ff;
                                    chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h159a63d4cf6d6d79(&var_4b8, &var_588, &var_680);
                                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hfedb7a5d79503861(&var_680, &var_4b8);
                                    alloc::str::_$LT$impl$u20$str$GT$::replace::h19aa2024b27abdc5(
                                        &var_658, var_528, var_670_2);
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hca9b678a5ae7a7e7(&var_680);
                                    core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h0aa072629b38db73(&var_4b8);
                                    var_680 = &var_658;
                                    var_678 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                    var_4b8 = &data_74b020;
                                    var_4b0 = 2;
                                    var_498 = 0;
                                    var_4a8 = &var_680;
                                    *var_4a8[8] = 1;
                                    std::io::stdio::_print::h5e446ff973c02de6(&var_4b8);
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hca9b678a5ae7a7e7(&var_658);
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hca9b678a5ae7a7e7(&result_4);
                                }
                                else
                                {
                                    if (result_2 == -0x7fffffffffffffff)
                                    {
                                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h6edae7bf3bfce92f(var_688_1, rbx_2);
                                        core::ptr::drop_in_place$LT$uu_date..Settings$GT$::h92e6493850f7b15b(&var_5f8);
                                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h4daadbc5037c844d(&var_510);
                                        return 0;
                                    }
                                    
                                    result_4 = result_2;
                                    var_530 = var_628;
                                    int64_t var_608;
                                    int64_t var_648_1 = var_608;
                                    var_658 = var_618;
                                    var_680 = nullptr;
                                    var_678 = var_530;
                                    var_668 = 1;
                                    var_588 = &var_680;
                                    *var_588[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                    var_4b8 = &data_74b078;
                                    var_4b0 = 1;
                                    var_498 = 0;
                                    var_4a8 = &var_588;
                                    *var_4a8[8] = 1;
                                    int128_t var_140;
                                    core::option::Option$LT$T$GT$::map_or_else::hd3f382ebaeb7f034(
                                        &var_140, &var_4b8);
                                    *var_4a8[8] = 1;
                                    var_4b8 = var_140;
                                    int64_t var_130;
                                    var_4a8 = var_130;
                                    uint64_t rax_45 =
                                        alloc::boxed::Box$LT$T$GT$::new::h193c733ee5fb6fce(
                                        &var_4b8);
                                    uint64_t var_548 = rax_45;
                                    int64_t* var_540_1 = &data_74b0f8;
                                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_45));
                                    int64_t rax_47;
                                    int64_t rdx_21;
                                    rax_47 = uucore::util_name::h074417a1e6395129();
                                    var_588 = rax_47;
                                    *var_588[8] = rdx_21;
                                    var_680 = &var_588;
                                    var_678 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0bd5972353364dd9;
                                    uint64_t* var_670_1 = &var_548;
                                    var_668 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::haf4ab08c71168c6d;
                                    var_4b8 = &data_74b0a8;
                                    var_4b0 = 3;
                                    var_498 = 0;
                                    var_4a8 = &var_680;
                                    *var_4a8[8] = 2;
                                    std::io::stdio::_eprint::h57899770eacec2ad(&var_4b8);
                                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h6edae7bf3bfce92f(var_548, var_540_1);
                                    core::ptr::drop_in_place$LT$parse_datetime..ParseDateTimeError$GT$::h1fa3cbfd8239608d(&var_618);
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hca9b678a5ae7a7e7(&result_4);
                                }
                            }
                            break;
                        }
                        case 0x106623:
                        {
                            label_602a4b:
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_4b8, &var_5f0);
                            void var_60;
                            rbx_1 = &var_60;
                            uu_date::parse_date::h2d85aa8f4d63ce67(&var_60, &var_4b8);
                            goto label_602a71;
                        }
                    }
                }
                else
                {
                    chrono::offset::utc::Utc::now::h5df5ece099311fd6(&var_4b8);
                    var_638_1 = var_4b0;
                    var_640_1 = var_4b8;
                    rax_33 = 0;
                    
                    switch (jump_table_4fc418[var_5f8])
                    {
                        case 0x10642f:
                        {
                            goto label_60284b;
                        }
                        case 0x106463:
                        {
                            goto label_60287b;
                        }
                        case 0x1064e2:
                        {
                            goto label_60290a;
                        }
                        case 0x1065c3:
                        {
                            goto label_6029db;
                        }
                        case 0x106623:
                        {
                            goto label_602a4b;
                        }
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$uu_date..Settings$GT$::h92e6493850f7b15b(&var_5f8);
        }
        else
        {
            if (result_3 == -0x7fffffffffffffff)
                goto label_6026e5;
            
            result_1 = result_3;
            var_628 = rax_22;
            var_628 = var_658;
            var_5f8 = 0;
            var_5f0 = var_628;
            var_5f0 = var_628;
            *var_5e8[4] = rdx_13;
            *var_5e8[8] = 1;
            var_680 = &var_5f8;
            int64_t (* var_678_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_4b8 = &data_74b078;
            var_4b0 = 1;
            var_498 = 0;
            var_4a8 = &var_680;
            *var_4a8[8] = 1;
            int128_t var_1a0;
            core::option::Option$LT$T$GT$::map_or_else::hd3f382ebaeb7f034(&var_1a0, &var_4b8);
            *var_4a8[8] = 1;
            var_4b8 = var_1a0;
            int64_t var_190;
            var_4a8 = var_190;
            result = alloc::boxed::Box$LT$T$GT$::new::h193c733ee5fb6fce(&var_4b8);
            core::ptr::drop_in_place$LT$parse_datetime..ParseDateTimeError$GT$::h1fa3cbfd8239608d(
                &var_1d8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hca9b678a5ae7a7e7(&result_1);
            core::ptr::drop_in_place$LT$uu_date..DateSource$GT$::h063b93d8ddc2d77b(&var_568);
            core::ptr::drop_in_place$LT$uu_date..Format$GT$::h96b0f040837954d9(&var_5a8);
        }
    }
    else
    {
        int64_t r15_1 = *(rax_2 + 8);
        int64_t r12_1 = *(rax_2 + 0x10);
        var_4b8 = 0;
        
        if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h1f258e9e5cc6f85c(r15_1, 
            r12_1, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2b, &var_4b8)))
        {
            char* r15_2 = *(rax_2 + 8);
            int64_t r14_2 = *(rax_2 + 0x10);
            void* rax_5;
            uint64_t rdx_4;
            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, r15_2, r14_2);
            
            if (!rax_5)
            {
                core::str::slice_error_fail::h1a2885084e28d077(r15_2, r14_2, 1, r14_2);
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h31e72d105958f9d5(&var_4b8, rax_5, rdx_4);
            var_598 = var_4a8;
            var_5a8 = var_4b8;
            goto label_602317;
        }
        
        uint64_t** rax_8 = *(rax_2 + 8);
        int64_t rcx_3 = *(rax_2 + 0x10);
        var_5f8 = 0;
        var_5f0 = rax_8;
        var_5e8 = rcx_3;
        *var_5e8[8] = 1;
        result_1 = &var_5f8;
        int64_t (* var_628_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_4b8 = &data_74b078;
        var_4b0 = 1;
        var_498 = 0;
        var_4a8 = &result_1;
        *var_4a8[8] = 1;
        int128_t var_1b8;
        core::option::Option$LT$T$GT$::map_or_else::hd3f382ebaeb7f034(&var_1b8, &var_4b8);
        *var_4a8[8] = 1;
        var_4b8 = var_1b8;
        int64_t var_1a8;
        var_4a8 = var_1a8;
        result = alloc::boxed::Box$LT$T$GT$::new::h193c733ee5fb6fce(&var_4b8);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h4daadbc5037c844d(&var_510);
    return result;
}
