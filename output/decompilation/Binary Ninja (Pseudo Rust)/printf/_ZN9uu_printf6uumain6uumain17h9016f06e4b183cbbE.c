
  fn uu_printf::uumain::uumain::h9016f06e4b183cbb(arg1: i64) -> *mut i128

{
    let mut var_2f8: i128;
    uu_printf::uu_app::hb517307267528c04(&var_2f8);
    let mut var_370: ();
    clap_builder::builder::command::Command::get_matches_from::hc523ca07f4ae8a1e(&var_370, 
        &var_2f8, arg1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h64277d1efa4af222(
        &var_2f8, &var_370, "FORMATmissing operand", 6);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hcd264dadb36566b8(
        "FORMATmissing operand", 6, &var_2f8);
    let mut result: *mut i128;
    let mut var_408: i128;
    let var_3f8: i64;
    
    if rax == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h161932b779d78935(&var_408, 
            "missing operand", 0xf);
        let var_2e8_1: i64 = var_3f8;
        var_2f8 = var_408;
        let var_2e0_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::ha4d9c65e78341d16(&var_2f8);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h88f0b841722b5820(
            &var_2f8, &var_370, "ARGUMENT", 8);
        clap_builder::parser::error::MatchesError::unwrap::h53b6517dce077e4e(&var_408, "ARGUMENT", 
            8, &var_2f8);
        let mut var_480: i64;
        let var_3e8: i128;
        let mut rax_1: i64;
        let mut rcx_2: i64;
        
        if var_408 == 0
        {
            var_480 = 0;
            let var_478_1: i64 = 8;
            let var_470_1: i64 = 0;
            rax_1 = 8;
            rcx_2 = 0;
        }
        else
        {
            let var_3d8: i128;
            let var_308_1: i128 = var_3d8;
            let var_318_1: i128 = var_3e8;
            let var_328_1: i128 = var_3f8;
            let mut var_338: i128 = var_408;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h828b818258ab71c4(&var_480, &var_338);
            let var_478: i64;
            rax_1 = var_478;
            let var_470: i64;
            rcx_2 = var_470;
        }
        
        let mut var_418: i64 = rax_1;
        let var_410_1: i64 = (rcx_2 << 5) + rax_1;
        let mut var_428: i64 = 0;
        let rax_4: i64 = *rax.byte_offset(8);
        let rcx_5: i64 = *rax.byte_offset(0x10);
        let mut var_468: i64 = rax_4;
        let var_460_1: i64 = rcx_5;
        let mut rbp_1: i8 = 0;
        
        loop
        {
            uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::hfb4855f1f81f1823(&var_408, &var_468);
            let rax_5: i8 = var_408;
            let mut var_4a8: i32;
            let mut var_458: i32;
            let var_454: i8;
            let var_453: i128;
            let mut var_2e8: i64;
            let mut result_1: *mut i128;
            
            if rax_5 != 9
            {
                let var_379_1: i64 = var_3e8;
                
                if rax_5 - 7 < 2
                {
                    if rax_5 != 8
                    {
                        goto 'label_46cc07;
                    }
                    
                    let var_498_2: i128 = *var_3f8[1];
                    var_4a8 = var_408;
                    result_1 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&var_4a8);
                    goto 'label_46cdd4;
                }
                
                rbp_1 = 1;
                'label_46cc07:
                let var_2d8_1: i64 = var_3e8;
                *var_2e8[1] = *var_3f8[1];
                var_2f8 = var_408;
                var_2f8 = rax_5;
                std::io::stdio::stdout::h077da66234850927();
                uucore::features::format::FormatItem$LT$C$GT$::write::h356a71bb3f6c3126(&var_458, 
                    &var_2f8);
                let rcx_9: i32 = var_458;
                
                if rcx_9 != 0xe
                {
                    let var_498_1: i128 = var_453;
                    let var_4a3_1: i128 = var_453;
                    var_4a8 = rcx_9;
                    let var_4a4_1: i8 = var_454;
                    result_1 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&var_4a8);
                    'label_46cdd4:
                    result = result_1;
                    break;
                }
                
                if var_454 == 0
                {
                    continue;
                }
            }
            else if (rbp_1 & 1) != 0
            {
                if *core::option::Option$LT$T$GT$::get_or_insert_with::h93334ed55f16e7bb(&var_428, 
                    &var_418) == 0
                {
                    'label_46cd9d:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::hbed4fbba92283cef(&var_480);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h271a8476cc6e7a4e(&var_370);
                    return nullptr;
                }
                
                loop
                {
                    var_468 = rax_4;
                    let var_460_2: i64 = rcx_5;
                    
                    loop
                    {
                        uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::hfb4855f1f81f1823(&var_408, &var_468);
                        let rax_10: i8 = var_408;
                        
                        if rax_10 == 9
                        {
                            if *core::option::Option$LT$T$GT$::get_or_insert_with::h93334ed55f16e7bb(&var_428, &var_418) != 0
                            {
                                break;
                            }
                            
                            goto 'label_46cd9d;
                        }
                        
                        if rax_10 == 8
                        {
                            let mut var_498: i128;
                            var_498 = **var_3f8[1][7];
                            *var_498[8] = var_3e8;
                            var_4a8 = var_408;
                            result_1 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&var_4a8);
                            goto 'label_46cdd4;
                        }
                        
                        let var_2d8_2: i64 = var_3e8;
                        *var_2e8[1] = *var_3f8[1];
                        var_2f8 = var_408;
                        var_2f8 = rax_10;
                        std::io::stdio::stdout::h077da66234850927();
                        uucore::features::format::FormatItem$LT$C$GT$::write::h356a71bb3f6c3126(
                            &var_458, &var_2f8);
                        let rcx_12: i32 = var_458;
                        
                        if rcx_12 != 0xe
                        {
                            let var_498_3: i128 = var_453;
                            let var_4a3_2: i128 = var_453;
                            var_4a8 = rcx_12;
                            let var_4a4_2: i8 = var_454;
                            result_1 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&var_4a8);
                            goto 'label_46cdd4;
                        }
                        
                        if var_454 != 0
                        {
                            goto 'label_46cc5f;
                        }
                    }
                }
            }
            'label_46cc5f:
            result = nullptr;
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::hbed4fbba92283cef(&var_480);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h271a8476cc6e7a4e(&var_370);
    result
}
