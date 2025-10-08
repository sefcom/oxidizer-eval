
  fn uu_date::uumain::uumain::h02143b6a9719834e(arg1: i64) -> u64

{
    let mut var_4b8: i32;
    uu_date::uu_app::h16fa55fca8cffc98(&var_4b8);
    let mut var_5f8: u64;
    clap_builder::builder::command::Command::try_get_matches_from::h30b06472cd87dbe1(&var_5f8, 
        &var_4b8, arg1);
    let rax: u64 = var_5f8;
    let mut var_5f0: *mut *mut u64;
    let rdi_2: *mut *mut u64 = var_5f0;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(rdi_2);
    }
    
    let var_5c8: i64;
    let var_4e0_1: i64 = var_5c8;
    let var_5d8: i128;
    let var_4f0_1: i128 = var_5d8;
    let mut var_5e8: i128;
    let var_500_1: i128 = var_5e8;
    let mut var_510: u64 = rax;
    let var_508_1: *mut *mut u64 = rdi_2;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce3c3270a717cad2(
        &var_4b8, &var_510, "formatrfc-emailsetuniversal%f%N/…", 6);
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::ha91e63c324e6082a(
        "formatrfc-emailsetuniversal%f%N/…", 6, &var_4b8);
    let mut result: u64;
    let mut result_1: u64;
    let mut var_5a8: i64;
    let mut var_598: i64;
    let mut var_4b0: i64;
    let mut var_4a8: i128;
    let mut var_498: i128;
    
    if rax_2 == 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1d7c8589c95a2667(
            &var_4b8, &var_510);
        clap_builder::parser::error::MatchesError::unwrap::h9cd2a71e81cc65a0(&var_5f8, &var_4b8);
        
        if var_5f8 == 0
        {
            let mut rax_12: i64;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_510, "rfc-emailsetuniversal%f%N/home/3…", 9) == 0
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce3c3270a717cad2(&var_4b8, &var_510, "rfc-3339saturday", 8);
                let rax_13: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::ha91e63c324e6082a(
                    "rfc-3339saturday", 8, &var_4b8);
                
                if rax_13 == 0
                {
                    rax_12 = -0x7ffffffffffffffc;
                }
                else
                {
                    let var_5a0_2: i8 = _$LT$uu_date..Rfc3339Format$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::ha37270e94269fcfd(*rax_13.byte_offset(8), *rax_13.byte_offset(0x10));
                    rax_12 = -0x7ffffffffffffffe;
                }
            }
            else
            {
                rax_12 = -0x7fffffffffffffff;
            }
            
            var_5a8 = rax_12;
        }
        else
        {
            let var_488_1: i128 = var_5c8;
            var_498 = var_5d8;
            var_4a8 = var_5e8;
            var_4b8 = var_5f8;
            let var_5a0_1: i8 =
                uu_date::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hac17f49f35c0ab5f(&var_4b8);
            var_5a8 = -0x8000000000000000;
        }
        
        'label_602317:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce3c3270a717cad2(
            &var_4b8, &var_510, "datethur]", 4);
        let rax_15: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::ha91e63c324e6082a("datethur]", 4, 
            &var_4b8);
        let mut var_568: i64;
        let mut var_560: i128;
        
        if rax_15 == 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce3c3270a717cad2(
                &var_4b8, &var_510, "filemode{", 4);
            let rax_17: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::ha91e63c324e6082a("filemode{", 
                4, &var_4b8);
            
            if rax_17 == 0
            {
                var_568 = 0;
            }
            else
            {
                let r14_4: i64 = *rax_17.byte_offset(8);
                let r15_3: u64 = *rax_17.byte_offset(0x10);
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h113c9365d823dd91(r14_4, r15_3, "-expected file, got directory in…", 1) == 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h31e72d105958f9d5(&var_4b8, r14_4, r15_3);
                    let var_550_2: i64 = var_4a8;
                    var_560 = var_4b8;
                    var_568 = 2;
                }
                else
                {
                    var_568 = 3;
                }
            }
        }
        else
        {
            let mut var_1e8: ();
            chrono::offset::local::Local::now::hd3cc0dab6e1d709b(&var_1e8);
            *rax_15.byte_offset(0x10);
            parse_datetime::parse_datetime_at_date::hcdd3a33c754dee07(&var_4b8, &var_1e8, 
                *rax_15.byte_offset(8));
            
            if var_4b8 != -0x7ffffffffffffffe
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::hfef74df3ec86c666(&var_4b8);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_4b8, rax_15);
                let var_550_1: i64 = var_4a8;
                var_560 = var_4b8;
                var_568 = 1;
            }
            else
            {
                let mut rax_16: i64;
                let mut rdx_8: i32;
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
        let rax_21: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::ha91e63c324e6082a(
            "setuniversal%f%N/home/34r7hm4n/.…", 3, &var_4b8);
        let mut rbp_1: i32 = 0;
        
        if rax_21 == 0
        {
            goto 'label_6026e5;
        }
        
        uu_date::parse_date::h746ef56d163214a2(&var_4b8, rax_21);
        let result_3: u64 = var_4b8;
        let rax_22: i32 = var_4b0;
        let mut var_658: *mut *mut u64 = var_4b0;
        let rdx_13: i32 = *var_4a8[4];
        let mut var_1d8: i128 = var_4a8;
        let var_1c8_1: i64 = *var_498[8];
        let mut var_680: *mut u64;
        let mut var_628: *mut *mut c_void;
        
        if -(result_3) == -0x8000000000000000
        {
            let var_518: i32 = rdx_13;
            let var_520: *mut *mut u64 = var_658;
            rbp_1 = rax_22;
            'label_6026e5:
            let rax_28: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_510, "universal%f%N/home/34r7hm4n/.rus…", 9);
            let var_5c8_1: i64 = var_598;
            let var_5d8_1: i128 = var_5a8;
            var_5f8 = var_568;
            let var_5b4_1: i32 = var_518;
            let var_5b0_1: i8 = rax_28;
            
            if rbp_1 != 0
            {
                let var_4c0_1: i32 = *var_520[4];
                let mut var_4c8: i64 = rbp_1;
                result = uu_date::set_system_datetime::h8387ae79f6ea6bb0(&var_4c8);
            }
            else
            {
                let mut var_640_1: i64;
                let mut var_638_1: i32;
                let mut rax_33: i32;
                
                if rax_28 == 0
                {
                    chrono::offset::local::Local::now::hd3cc0dab6e1d709b(&var_4b8);
                    var_638_1 = var_4b0;
                    var_640_1 = var_4b8;
                    rax_33 = *var_4b0[4];
                    let mut var_688_1: u64;
                    let mut var_650: i32;
                    let mut var_618: i8;
                    let mut rbx_1: *mut c_void;
                    let mut rbx_2: *mut i64;
                    
                    match jump_table_4fc418[var_5f8]
                    {
                        0x10642f =>
                        {
                            'label_60284b:
                            let var_118_1: i32 = var_638_1;
                            let var_120_1: i64 = var_640_1;
                            let mut var_128: i64 = -0x8000000000000000;
                            let var_114_1: i32 = rax_33;
                            rbx_1 = &var_128;
                            'label_602a71:
                            var_688_1 = alloc::boxed::Box$LT$T$GT$::new::h7774d69afa64daf6(rbx_1);
                            'label_602a75:
                            rbx_2 = &data_74b178;
                            goto 'label_602a84;
                        }
                        0x106463 =>
                        {
                            'label_60287b:
                            let rdx_19: *mut *mut u64 = var_5f0;
                            let rcx_20: i32 = var_560;
                            var_658 = rdx_19;
                            var_650 = rcx_20;
                            var_4b0 = var_638_1;
                            var_4b8 = var_640_1;
                            *var_4b0[4] = rax_33;
                            chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::h50da741f153016b2(&var_680, &var_4b8, rdx_19, rcx_20);
                            
                            if var_680 != 0
                            {
                                let var_88_1: i128 = var_680;
                                let mut var_90: i64 = -0x8000000000000000;
                                var_688_1 =
                                    alloc::boxed::Box$LT$T$GT$::new::h7774d69afa64daf6(&var_90);
                                goto 'label_602a75;
                            }
                            
                            result_1 = &var_658;
                            let var_628_2: fn(arg1: *mut i64, arg2: *mut i64) -> bool = _$LT$chrono..time_delta..TimeDelta$u20$as$u20$core..fmt..Display$GT$::fmt::h50c72056fb42a654;
                            var_4b8 = &data_74b078;
                            var_4b0 = 1;
                            var_498 = 0;
                            var_4a8 = &result_1;
                            *var_4a8[8] = 1;
                            let mut var_188: i128;
                            core::option::Option$LT$T$GT$::map_or_else::hd3f382ebaeb7f034(&var_188, 
                                &var_4b8);
                            *var_4a8[8] = 1;
                            var_4b8 = var_188;
                            let var_178: i64;
                            var_4a8 = var_178;
                            result = alloc::boxed::Box$LT$T$GT$::new::h193c733ee5fb6fce(&var_4b8);
                        }
                        0x1064e2 =>
                        {
                            'label_60290a:
                            
                            if std::path::Path::is_dir::h02edbc48c38d7d9e(var_560, *var_560[8]) == 0
                            {
                                std::fs::File::open::he3fed3f79eb106df(&var_4b8, &var_5f0);
                                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h42f98a9d19d76e4f(&result_1, &var_4b8);
                                result = result_1;
                                
                                if result == 0
                                {
                                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h3e4153acbe63d354(&var_4b8, var_628);
                                    let var_a8_1: i128 = var_498;
                                    let var_b8_1: i128 = var_4a8;
                                    let mut var_c8: i128 = var_4b8;
                                    var_688_1 =
                                        alloc::boxed::Box$LT$T$GT$::new::hff9c08df5932723a(&var_c8);
                                    rbx_2 = &data_74b1b0;
                                    goto 'label_602a84;
                                }
                            }
                            else
                            {
                                result_1 = 1;
                                var_628 = var_560;
                                var_618 = 1;
                                var_680 = &result_1;
                                let var_678_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                var_4b8 = &data_74b088;
                                var_4b0 = 1;
                                var_498 = 0;
                                var_4a8 = &var_680;
                                *var_4a8[8] = 1;
                                let mut var_170: i128;
                                core::option::Option$LT$T$GT$::map_or_else::hd3f382ebaeb7f034(
                                    &var_170, &var_4b8);
                                *var_4a8[8] = 2;
                                var_4b8 = var_170;
                                let var_160: i64;
                                var_4a8 = var_160;
                                result =
                                    alloc::boxed::Box$LT$T$GT$::new::h193c733ee5fb6fce(&var_4b8);
                            }
                        }
                        0x1065c3 =>
                        {
                            'label_6029db:
                            std::io::stdio::stdin::h9a05a2c3e7544b2a();
                            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7d49d25633434047(&var_4b8, &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
                            let var_d8_1: i128 = var_498;
                            let var_e8_1: i128 = var_4a8;
                            let mut var_f8: i128 = var_4b8;
                            var_688_1 = alloc::boxed::Box$LT$T$GT$::new::h1e68f3bfeff0e23f(&var_f8);
                            rbx_2 = &data_74b1e8;
                            'label_602a84:
                            let mut rax_42: *mut c_void;
                            let mut rdx_20: i64;
                            rax_42 = uu_date::make_format_string::h959c316a6f529630(&var_5f8);
                            let rbx_3: i64 = rbx_2[3];
                            
                            loop
                            {
                                rbx_3(&result_1, var_688_1);
                                let result_2: u64 = result_1;
                                let mut var_678: fn(arg1: *mut i64, arg2: i64) -> i64;
                                let mut var_668: fn(arg1: *mut i64) -> i64;
                                let mut var_588: i128;
                                let mut result_4: u64;
                                let mut var_530: *mut u64;
                                
                                if -(result_2) == -0x8000000000000000
                                {
                                    var_588 = var_628;
                                    uucore::features::custom_tz_fmt::custom_time_format::h40983abf3ea6ab5d(&result_4, rax_42, rdx_20);
                                    var_4b8 = var_530;
                                    let var_528: i64;
                                    var_4b0 = var_528;
                                    var_4a8 = 8;
                                    *var_4a8[8] = 0;
                                    var_498 = 0;
                                    let var_5ff: i32;
                                    *var_498[4] = var_5ff;
                                    *var_498[1] = var_5ff;
                                    
                                    if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h07edb37b2e407c12(core::iter::traits::iterator::Iterator::try_fold::h98919a744228c49c(&var_4b8)) != 0
                                    {
                                        alloc::str::_$LT$impl$u20$str$GT$::replace::h19aa2024b27abdc5(&var_680, var_530, var_528);
                                        var_658 = &var_680;
                                        var_650 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                        var_4b8 = &data_74b098;
                                        var_4b0 = 1;
                                        var_498 = 0;
                                        var_4a8 = &var_658;
                                        *var_4a8[8] = 1;
                                        let mut var_158: i128;
                                        core::option::Option$LT$T$GT$::map_or_else::hd3f382ebaeb7f034(&var_158, &var_4b8);
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hca9b678a5ae7a7e7(&var_680);
                                        *var_4a8[8] = 1;
                                        var_4b8 = var_158;
                                        let var_148: i64;
                                        var_4a8 = var_148;
                                        result = alloc::boxed::Box$LT$T$GT$::new::h193c733ee5fb6fce(
                                            &var_4b8);
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hca9b678a5ae7a7e7(&result_4);
                                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h6edae7bf3bfce92f(var_688_1, rbx_2);
                                        break;
                                    }
                                    
                                    var_680 = var_530;
                                    let var_670_2: i64 = 8;
                                    var_668 = nullptr;
                                    let var_660_1: i8 = 0;
                                    let var_65c_1: i32 = var_5ff;
                                    let var_65f_1: i32 = var_5ff;
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
                                    if result_2 == -0x7fffffffffffffff
                                    {
                                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h6edae7bf3bfce92f(var_688_1, rbx_2);
                                        core::ptr::drop_in_place$LT$uu_date..Settings$GT$::h92e6493850f7b15b(&var_5f8);
                                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h4daadbc5037c844d(&var_510);
                                        return 0;
                                    }
                                    
                                    result_4 = result_2;
                                    var_530 = var_628;
                                    let var_608: i64;
                                    let var_648_1: i64 = var_608;
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
                                    let mut var_140: i128;
                                    core::option::Option$LT$T$GT$::map_or_else::hd3f382ebaeb7f034(
                                        &var_140, &var_4b8);
                                    *var_4a8[8] = 1;
                                    var_4b8 = var_140;
                                    let var_130: i64;
                                    var_4a8 = var_130;
                                    let rax_45: u64 =
                                        alloc::boxed::Box$LT$T$GT$::new::h193c733ee5fb6fce(
                                        &var_4b8);
                                    let mut var_548: u64 = rax_45;
                                    let var_540_1: *mut i64 = &data_74b0f8;
                                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_45));
                                    let mut rax_47: i64;
                                    let mut rdx_21: i64;
                                    rax_47 = uucore::util_name::h074417a1e6395129();
                                    var_588 = rax_47;
                                    *var_588[8] = rdx_21;
                                    var_680 = &var_588;
                                    var_678 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0bd5972353364dd9;
                                    let var_670_1: *mut u64 = &var_548;
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
                        }
                        0x106623 =>
                        {
                            'label_602a4b:
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_4b8, &var_5f0);
                            let mut var_60: ();
                            rbx_1 = &var_60;
                            uu_date::parse_date::h2d85aa8f4d63ce67(&var_60, &var_4b8);
                            goto 'label_602a71;
                        }
                    }
                }
                else
                {
                    chrono::offset::utc::Utc::now::h5df5ece099311fd6(&var_4b8);
                    var_638_1 = var_4b0;
                    var_640_1 = var_4b8;
                    rax_33 = 0;
                    
                    match jump_table_4fc418[var_5f8]
                    {
                        0x10642f =>
                        {
                            goto 'label_60284b;
                        }
                        0x106463 =>
                        {
                            goto 'label_60287b;
                        }
                        0x1064e2 =>
                        {
                            goto 'label_60290a;
                        }
                        0x1065c3 =>
                        {
                            goto 'label_6029db;
                        }
                        0x106623 =>
                        {
                            goto 'label_602a4b;
                        }
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$uu_date..Settings$GT$::h92e6493850f7b15b(&var_5f8);
        }
        else
        {
            if result_3 == -0x7fffffffffffffff
            {
                goto 'label_6026e5;
            }
            
            result_1 = result_3;
            var_628 = rax_22;
            var_628 = var_658;
            var_5f8 = 0;
            var_5f0 = var_628;
            var_5f0 = var_628;
            *var_5e8[4] = rdx_13;
            *var_5e8[8] = 1;
            var_680 = &var_5f8;
            let var_678_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_4b8 = &data_74b078;
            var_4b0 = 1;
            var_498 = 0;
            var_4a8 = &var_680;
            *var_4a8[8] = 1;
            let mut var_1a0: i128;
            core::option::Option$LT$T$GT$::map_or_else::hd3f382ebaeb7f034(&var_1a0, &var_4b8);
            *var_4a8[8] = 1;
            var_4b8 = var_1a0;
            let var_190: i64;
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
        let r15_1: i64 = *rax_2.byte_offset(8);
        let r12_1: i64 = *rax_2.byte_offset(0x10);
        var_4b8 = 0;
        
        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h1f258e9e5cc6f85c(r15_1, r12_1, 
            core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2b, &var_4b8)) != 0
        {
            let r15_2: *mut i8 = *rax_2.byte_offset(8);
            let r14_2: i64 = *rax_2.byte_offset(0x10);
            let mut rax_5: *mut c_void;
            let mut rdx_4: u64;
            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, r15_2, r14_2);
            
            if rax_5 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(r15_2, r14_2, 1, r14_2);
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h31e72d105958f9d5(&var_4b8, rax_5, rdx_4);
            var_598 = var_4a8;
            var_5a8 = var_4b8;
            goto 'label_602317;
        }
        
        let rax_8: *mut *mut u64 = *rax_2.byte_offset(8);
        let rcx_3: i64 = *rax_2.byte_offset(0x10);
        var_5f8 = 0;
        var_5f0 = rax_8;
        var_5e8 = rcx_3;
        *var_5e8[8] = 1;
        result_1 = &var_5f8;
        let var_628_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_4b8 = &data_74b078;
        var_4b0 = 1;
        var_498 = 0;
        var_4a8 = &result_1;
        *var_4a8[8] = 1;
        let mut var_1b8: i128;
        core::option::Option$LT$T$GT$::map_or_else::hd3f382ebaeb7f034(&var_1b8, &var_4b8);
        *var_4a8[8] = 1;
        var_4b8 = var_1b8;
        let var_1a8: i64;
        var_4a8 = var_1a8;
        result = alloc::boxed::Box$LT$T$GT$::new::h193c733ee5fb6fce(&var_4b8);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h4daadbc5037c844d(&var_510);
    result
}
