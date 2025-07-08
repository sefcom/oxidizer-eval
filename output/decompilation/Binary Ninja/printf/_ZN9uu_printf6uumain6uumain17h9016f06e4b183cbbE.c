
  int128_t* uu_printf::uumain::uumain::h9016f06e4b183cbb(int64_t arg1)

{
    int128_t var_2f8;
    uu_printf::uu_app::hb517307267528c04(&var_2f8);
    void var_370;
    clap_builder::builder::command::Command::get_matches_from::hc523ca07f4ae8a1e(&var_370, 
        &var_2f8, arg1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h64277d1efa4af222(
        &var_2f8, &var_370, "FORMATmissing operand", 6);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::hcd264dadb36566b8(
        "FORMATmissing operand", 6, &var_2f8);
    int128_t* result;
    int128_t var_408;
    int64_t var_3f8;
    
    if (!rax)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h161932b779d78935(&var_408, 
            "missing operand", 0xf);
        int64_t var_2e8_1 = var_3f8;
        var_2f8 = var_408;
        int32_t var_2e0_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::ha4d9c65e78341d16(&var_2f8);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h88f0b841722b5820(
            &var_2f8, &var_370, "ARGUMENT", 8);
        clap_builder::parser::error::MatchesError::unwrap::h53b6517dce077e4e(&var_408, "ARGUMENT", 
            8, &var_2f8);
        int64_t var_480;
        int128_t var_3e8;
        int64_t rax_1;
        int64_t rcx_2;
        
        if (!var_408)
        {
            var_480 = 0;
            int64_t var_478_1 = 8;
            int64_t var_470_1 = 0;
            rax_1 = 8;
            rcx_2 = 0;
        }
        else
        {
            int128_t var_3d8;
            int128_t var_308_1 = var_3d8;
            int128_t var_318_1 = var_3e8;
            int128_t var_328_1 = var_3f8;
            int128_t var_338 = var_408;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h828b818258ab71c4(&var_480, &var_338);
            int64_t var_478;
            rax_1 = var_478;
            int64_t var_470;
            rcx_2 = var_470;
        }
        
        int64_t var_418 = rax_1;
        int64_t var_410_1 = (rcx_2 << 5) + rax_1;
        int64_t var_428 = 0;
        int64_t rax_4 = *(rax + 8);
        int64_t rcx_5 = *(rax + 0x10);
        int64_t var_468 = rax_4;
        int64_t var_460_1 = rcx_5;
        char rbp_1 = 0;
        
        while (true)
        {
            uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::hfb4855f1f81f1823(&var_408, &var_468);
            char rax_5 = var_408;
            int32_t var_4a8;
            int32_t var_458;
            char var_454;
            int128_t var_453;
            int64_t var_2e8;
            int128_t* result_1;
            
            if (rax_5 != 9)
            {
                int64_t var_379_1 = var_3e8;
                
                if (rax_5 - 7 < 2)
                {
                    if (rax_5 != 8)
                        goto label_46cc07;
                    
                    int128_t var_498_2 = *var_3f8[1];
                    var_4a8 = var_408;
                    result_1 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&var_4a8);
                    goto label_46cdd4;
                }
                
                rbp_1 = 1;
                label_46cc07:
                int64_t var_2d8_1 = var_3e8;
                *var_2e8[1] = *var_3f8[1];
                var_2f8 = var_408;
                var_2f8 = rax_5;
                std::io::stdio::stdout::h077da66234850927();
                uucore::features::format::FormatItem$LT$C$GT$::write::h356a71bb3f6c3126(&var_458, 
                    &var_2f8);
                int32_t rcx_9 = var_458;
                
                if (rcx_9 != 0xe)
                {
                    int128_t var_498_1 = var_453;
                    int128_t var_4a3_1 = var_453;
                    var_4a8 = rcx_9;
                    char var_4a4_1 = var_454;
                    result_1 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&var_4a8);
                    label_46cdd4:
                    result = result_1;
                    break;
                }
                
                if (!var_454)
                    continue;
            }
            else if (rbp_1 & 1)
            {
                if (!*core::option::Option$LT$T$GT$::get_or_insert_with::h93334ed55f16e7bb(
                    &var_428, &var_418))
                {
                    label_46cd9d:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::hbed4fbba92283cef(&var_480);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h271a8476cc6e7a4e(&var_370);
                    return nullptr;
                }
                
                while (true)
                {
                    var_468 = rax_4;
                    int64_t var_460_2 = rcx_5;
                    
                    while (true)
                    {
                        uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::hfb4855f1f81f1823(&var_408, &var_468);
                        char rax_10 = var_408;
                        
                        if (rax_10 == 9)
                        {
                            if (*core::option::Option$LT$T$GT$::get_or_insert_with::h93334ed55f16e7bb(&var_428, &var_418))
                                break;
                            
                            goto label_46cd9d;
                        }
                        
                        if (rax_10 == 8)
                        {
                            int128_t var_498;
                            var_498 = **var_3f8[1][7];
                            *var_498[8] = var_3e8;
                            var_4a8 = var_408;
                            result_1 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&var_4a8);
                            goto label_46cdd4;
                        }
                        
                        int64_t var_2d8_2 = var_3e8;
                        *var_2e8[1] = *var_3f8[1];
                        var_2f8 = var_408;
                        var_2f8 = rax_10;
                        std::io::stdio::stdout::h077da66234850927();
                        uucore::features::format::FormatItem$LT$C$GT$::write::h356a71bb3f6c3126(
                            &var_458, &var_2f8);
                        int32_t rcx_12 = var_458;
                        
                        if (rcx_12 != 0xe)
                        {
                            int128_t var_498_3 = var_453;
                            int128_t var_4a3_2 = var_453;
                            var_4a8 = rcx_12;
                            char var_4a4_2 = var_454;
                            result_1 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&var_4a8);
                            goto label_46cdd4;
                        }
                        
                        if (var_454)
                            goto label_46cc5f;
                    }
                }
            }
            label_46cc5f:
            result = nullptr;
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::hbed4fbba92283cef(&var_480);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h271a8476cc6e7a4e(&var_370);
    return result;
}
