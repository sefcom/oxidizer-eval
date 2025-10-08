
  fn bat::get_languages::h1e50ad077ebe9108(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_340: i64 = 0;
    let var_338: i64 = 1;
    let var_330: i64 = 0;
    let mut var_2e0: *mut i64;
    let rcx: u64;
    let rdx: i64;
    bat::assets::assets_from_cache_or_binary::h4bfa381507131f37(&var_2e0, *arg2.byte_offset(0x127), 
        rdx, rcx);
    let rax: *mut i64 = var_2e0;
    let mut var_2d8: i128;
    let mut var_1e8: i128 = var_2d8;
    let var_2c8: i128;
    let var_2b8: i128;
    let var_2a8: i128;
    let var_298: i128;
    
    if rax != -0x7fffffffffffffff
    {
        let var_258: i64;
        let var_38_1: i64 = var_258;
        let var_268: i128;
        let var_48_1: i128 = var_268;
        let var_278: i128;
        let var_58_1: i128 = var_278;
        let var_288: i128;
        let var_68_1: i128 = var_288;
        let var_b8_1: i128 = var_1e8;
        let var_a8_1: i128 = var_2c8;
        let var_98_1: i128 = var_2b8;
        let var_88_1: i128 = var_2a8;
        let var_78_1: i128 = var_298;
        let mut var_c0: *mut i64 = rax;
        bat::assets::HighlightingAssets::get_syntaxes::hb13e605a35b83eb8(&var_2e0, &var_c0);
        let rax_1: i8 = var_2e0;
        
        if rax_1 == 0xd
        {
            let mut var_3a8: ();
            core::iter::traits::iterator::Iterator::collect::h1d2b0159c4b94336(&var_3a8, var_2d8);
            let var_348_1: *mut i8 = arg1;
            let var_3a0: *mut c_void;
            let mut rbx_1: *mut c_void = var_3a0;
            let var_398: i64;
            let mut r14_1: i64;
            
            if var_398 == 0
            {
                r14_1 = 0;
            }
            else
            {
                let mut i_2: i64 = var_398 * 0xf8;
                let mut i: i64;
                
                do
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1e8, rbx_1);
                    var_2e0 = &var_c0;
                    var_2d8 = arg2;
                    *var_2d8[8] = &var_1e8;
                    alloc::vec::Vec$LT$T$C$A$GT$::retain::hc0acb9d64fbd4486(
                        rbx_1.byte_offset(0x18), &var_2e0);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(
                        &var_1e8);
                    rbx_1 += 0xf8;
                    i = i_2;
                    i_2 -= 0xf8;
                } while i != 0xf8;
                rbx_1 = var_3a0;
                r14_1 = var_398;
            }
            
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by_key::ha079dd644275ed0b(rbx_1, 
                r14_1);
            bat::syntax_mapping::SyntaxMapping::all_mappings::h5a5a656b12955f8c(&var_2e0, 
                arg2.byte_offset(0x28));
            let mut var_f0: ();
            bat::get_syntax_mapping_to_paths::h9c51b3997eaf3405(&var_f0, &var_2e0);
            
            if r14_1 != 0
            {
                let mut rbx_3: *mut c_void = rbx_1.byte_offset(0x18);
                let mut i_3: i64 = r14_1 * 0xf8;
                let mut i_1: i64;
                
                do
                {
                    let rax_6: *mut c_void =
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h4c75de5cd84a9e5e(
                        &var_f0, *rbx_3.byte_offset(-0x10), *rbx_3.byte_offset(-8));
                    
                    if rax_6 != 0
                    {
                        let rsi_9: i64 = *rax_6.byte_offset(0x18);
                        alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::h1ce18729bcd139d2(rbx_3, 
                            rsi_9, rsi_9 + *rax_6.byte_offset(0x20) * 0x18);
                    }
                    
                    rbx_3 += 0xf8;
                    i_1 = i_3;
                    i_3 -= 0xf8;
                } while i_1 != 0xf8;
            }
            
            let mut var_410: *mut *mut i64;
            let mut var_3d8: *mut c_void;
            let mut var_390: i128;
            let mut var_328: i128;
            
            if *arg2.byte_offset(0x123) == 0
            {
                let mut rax_10: i8;
                let mut rdx_7: i64;
                rax_10 = core::iter::traits::iterator::Iterator::reduce::hffb96c7a5570ce55(var_3a0, 
                    (var_398 * 0xf8).byte_offset(var_3a0));
                let mut rcx_4: i64 = 0x20;
                
                if (rax_10 & 1) != 0
                {
                    rcx_4 = rdx_7;
                }
                
                let mut var_300: *const i8 = " ";
                let var_2f8_1: i64 = 1;
                let rcx_6: i64 = !rcx_4 + *arg2.byte_offset(0x100);
                let mut rcx_7: i32 = 0x15;
                
                if *arg2.byte_offset(0x124) != 0
                {
                    rcx_7 = 4;
                }
                
                let mut var_418_1: *mut c_void;
                var_418_1 = rcx_7;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h93501f41781be2d5(&var_328, &var_3a8);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf2b98c6eb4cadcc(&var_1e8, &var_328);
                
                if var_1e8 != -0x8000000000000000
                {
                    if rcx_4 > 0xffff
                    {
                        memcpy(&var_2e0, &var_1e8, 0xf8);
                        var_390 = &data_ac8790;
                        *var_390[8] = 1;
                        let var_380_3: i64 = 8;
                        let mut var_378: i64;
                        var_378 = {0};
                        core::panicking::panic_fmt::h96f341d36638c225(&var_390);
                        /* no return */
                    }
                    
                    do
                    {
                        memcpy(&var_2e0, &var_1e8, 0xf8);
                        var_410 = &var_2e0;
                        let var_408_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        let var_400_2: *const *const i8 = &var_300;
                        let var_3f8_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                        let var_3f0_1: i64 = 0;
                        let mut var_3e8_1: i16 = rcx_4;
                        var_3d8 = &data_485820;
                        let var_3d0_1: *mut *mut *mut i64 = 2;
                        let var_3b8_1: *mut c_void = &data_488e50;
                        let var_3b0_1: i64 = 2;
                        let mut var_3c8: *mut *mut *mut i64 = &var_410;
                        let var_3c0_1: i64 = 3;
                        _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h01c243a426bccba9(&var_340, &var_3d8);
                        let rax_12: *mut *mut *mut i64 = *var_2c8[8];
                        var_3c8 = rax_12;
                        let mut rax_13: i8 = 0;
                        let mut r14_2: i64 = 0;
                        
                        loop
                        {
                            let mut r12_1: *mut *mut *mut i64 = var_3d0_1;
                            var_3d8 = nullptr;
                            
                            if (rax_13 & 1) == 0
                            {
                                r12_1 = var_3c8;
                                
                                if r12_1 == &rax_12[var_2b8 * 3]
                                {
                                    break;
                                }
                                
                                var_3c8 = &r12_1[3];
                            }
                            else if r12_1 == 0
                            {
                                break;
                            }
                            
                            let r15_2: i64 = r12_1[2];
                            let mut rax_15: i64 = r15_2;
                            
                            if r15_2 + r14_2 + 2 >= rcx_6
                            {
                                var_390 = &data_47f780;
                                *var_390[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                                let var_380_1: *const *const i8 = &var_300;
                                let var_378_2: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                                let var_370_2: i64 = 0;
                                let var_368_1: i16 = rcx_4;
                                var_410 = &data_ac87a0;
                                let var_408_3: i64 = 2;
                                let var_3f0_2: *mut c_void = &data_488e50;
                                var_3e8_1 = 2;
                                let var_400_3: *mut i128 = &var_390;
                                let var_3f8_3: i64 = 3;
                                _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h01c243a426bccba9(&var_340, &var_410);
                                rax_15 = r12_1[2];
                                r14_2 = 0;
                            }
                            
                            let var_358_1: i8 = 0;
                            let var_360_1: i64 = 0;
                            let var_357_1: i32 = var_418_1;
                            let var_353_1: i32 = 0x15;
                            var_390 = -0x8000000000000000;
                            *var_390[8] = r12_1[1];
                            let var_380_2: i64 = rax_15;
                            let var_378_3: i64 = -0x7ffffffffffffffe;
                            let mut var_2f0: *mut i128 = &var_390;
                            let var_2e8_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
                            var_410 = &data_47f780;
                            let var_408_4: i64 = 1;
                            let var_3f0_3: i64 = 0;
                            let var_400_4: *mut *mut i128 = &var_2f0;
                            let var_3f8_4: i64 = 1;
                            _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h01c243a426bccba9(&var_340, &var_410);
                            core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hf79116e6dab6a5da(&var_390);
                            
                            if *core::option::Option$LT$T$GT$::get_or_insert_with::hc50396b1ea8e97d8(&var_3d8, &var_3c8) != 0
                            {
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb822dd115b0224bf(&var_340, ", ,: ", ",: ");
                            }
                            
                            r14_2 += r15_2 + 2;
                            rax_13 = var_3d8;
                        }
                        
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb822dd115b0224bf(&var_340, "\n/home/34r7hm4n/.cargo/registry…", 
                            "/home/34r7hm4n/.cargo/registry/s…");
                        core::ptr::drop_in_place$LT$syntect..parsing..syntax_set..SyntaxReference$GT$::h4b13976353a53b68(&var_2e0);
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf2b98c6eb4cadcc(&var_1e8, &var_328);
                    } while var_1e8 != -0x8000000000000000;
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$syntect..parsing..syntax_set..SyntaxReference$GT$$GT$::haad72e17d6daa07f(&var_328);
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h93501f41781be2d5(&var_3d8, &var_3a8);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf2b98c6eb4cadcc(&var_1e8, &var_3d8);
                
                while var_1e8 != -0x8000000000000000
                {
                    memcpy(&var_2e0, &var_1e8, 0xf8);
                    alloc::str::join_generic_copy::h3f5fb1fe01a54bb1(&var_390, *var_2c8[8], 
                        var_2b8, ",: ");
                    let mut var_380: *mut *mut *mut i64;
                    let var_318_1: *mut *mut *mut i64 = var_380;
                    var_328 = var_390;
                    var_410 = &var_2e0;
                    let var_408_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    let var_400_1: *mut i128 = &var_328;
                    let var_3f8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_390 = &data_ac8760;
                    *var_390[8] = 3;
                    let var_370_1: i64 = 0;
                    var_380 = &var_410;
                    let var_378_1: i64 = 2;
                    _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h01c243a426bccba9(&var_340, &var_390);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(
                        &var_328);
                    core::ptr::drop_in_place$LT$syntect..parsing..syntax_set..SyntaxReference$GT$::h4b13976353a53b68(&var_2e0);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf2b98c6eb4cadcc(&var_1e8, &var_3d8);
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$syntect..parsing..syntax_set..SyntaxReference$GT$$GT$::haad72e17d6daa07f(&var_3d8);
            }
            *var_348_1.byte_offset(0x18) = var_330;
            *var_348_1.byte_offset(8) = var_340;
            *var_348_1 = 0xd;
            core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$$RF$str$C$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::h34603be1044ade9e(&var_f0);
            return 
                core::ptr::drop_in_place$LT$bat..assets..HighlightingAssets$GT$::h6be43cd2c3f1f295(
                &var_c0);
        }
        
        let rcx_2: i32 = *var_2e0[1];
        *arg1.byte_offset(4) = *var_2e0[4];
        *arg1.byte_offset(1) = rcx_2;
        *arg1.byte_offset(0x18) = var_2c8;
        *arg1.byte_offset(0x28) = var_2b8;
        *arg1.byte_offset(0x38) = var_2a8;
        *arg1.byte_offset(0x48) = var_298;
        *arg1 = rax_1;
        *arg1.byte_offset(8) = var_2d8;
        core::ptr::drop_in_place$LT$bat..assets..HighlightingAssets$GT$::h6be43cd2c3f1f295(&var_c0);
    }
    else
    {
        arg1[4] = var_298;
        let zmm0: i128 = var_1e8;
        arg1[3] = var_2a8;
        arg1[2] = var_2b8;
        arg1[1] = var_2c8;
        *arg1 = zmm0;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_340)
}
