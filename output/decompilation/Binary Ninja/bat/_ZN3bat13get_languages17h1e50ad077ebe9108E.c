
  int64_t bat::get_languages::h1e50ad077ebe9108(int128_t* arg1, void* arg2)

{
    int64_t var_340 = 0;
    int64_t var_338 = 1;
    int64_t var_330 = 0;
    int64_t* var_2e0;
    uint64_t rcx;
    int64_t rdx;
    bat::assets::assets_from_cache_or_binary::h4bfa381507131f37(&var_2e0, *(arg2 + 0x127), rdx, 
        rcx);
    int64_t* rax = var_2e0;
    int128_t var_2d8;
    int128_t var_1e8 = var_2d8;
    int128_t var_2c8;
    int128_t var_2b8;
    int128_t var_2a8;
    int128_t var_298;
    
    if (rax != -0x7fffffffffffffff)
    {
        int64_t var_258;
        int64_t var_38_1 = var_258;
        int128_t var_268;
        int128_t var_48_1 = var_268;
        int128_t var_278;
        int128_t var_58_1 = var_278;
        int128_t var_288;
        int128_t var_68_1 = var_288;
        int128_t var_b8_1 = var_1e8;
        int128_t var_a8_1 = var_2c8;
        int128_t var_98_1 = var_2b8;
        int128_t var_88_1 = var_2a8;
        int128_t var_78_1 = var_298;
        int64_t* var_c0 = rax;
        bat::assets::HighlightingAssets::get_syntaxes::hb13e605a35b83eb8(&var_2e0, &var_c0);
        char rax_1 = var_2e0;
        
        if (rax_1 == 0xd)
        {
            void var_3a8;
            core::iter::traits::iterator::Iterator::collect::h1d2b0159c4b94336(&var_3a8, var_2d8);
            char* var_348_1 = arg1;
            void* var_3a0;
            void* rbx_1 = var_3a0;
            int64_t var_398;
            int64_t r14_1;
            
            if (!var_398)
                r14_1 = 0;
            else
            {
                int64_t i_2 = var_398 * 0xf8;
                int64_t i;
                
                do
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1e8, rbx_1);
                    var_2e0 = &var_c0;
                    var_2d8 = arg2;
                    *var_2d8[8] = &var_1e8;
                    alloc::vec::Vec$LT$T$C$A$GT$::retain::hc0acb9d64fbd4486(rbx_1 + 0x18, &var_2e0);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(
                        &var_1e8);
                    rbx_1 += 0xf8;
                    i = i_2;
                    i_2 -= 0xf8;
                } while (i != 0xf8);
                rbx_1 = var_3a0;
                r14_1 = var_398;
            }
            
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by_key::ha079dd644275ed0b(rbx_1, 
                r14_1);
            bat::syntax_mapping::SyntaxMapping::all_mappings::h5a5a656b12955f8c(&var_2e0, 
                arg2 + 0x28);
            void var_f0;
            bat::get_syntax_mapping_to_paths::h9c51b3997eaf3405(&var_f0, &var_2e0);
            
            if (r14_1)
            {
                void* rbx_3 = rbx_1 + 0x18;
                int64_t i_3 = r14_1 * 0xf8;
                int64_t i_1;
                
                do
                {
                    void* rax_6 =
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h4c75de5cd84a9e5e(
                        &var_f0, *(rbx_3 - 0x10), *(rbx_3 - 8));
                    
                    if (rax_6)
                    {
                        int64_t rsi_9 = *(rax_6 + 0x18);
                        alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::h1ce18729bcd139d2(rbx_3, 
                            rsi_9, rsi_9 + *(rax_6 + 0x20) * 0x18);
                    }
                    
                    rbx_3 += 0xf8;
                    i_1 = i_3;
                    i_3 -= 0xf8;
                } while (i_1 != 0xf8);
            }
            
            int64_t** var_410;
            void* const var_3d8;
            int128_t var_390;
            int128_t var_328;
            
            if (!*(arg2 + 0x123))
            {
                char rax_10;
                int64_t rdx_7;
                rax_10 = core::iter::traits::iterator::Iterator::reduce::hffb96c7a5570ce55(var_3a0, 
                    var_398 * 0xf8 + var_3a0);
                int64_t rcx_4 = 0x20;
                
                if (rax_10 & 1)
                    rcx_4 = rdx_7;
                
                char const* const var_300 = " ";
                int64_t var_2f8_1 = 1;
                int64_t rcx_6 = ~rcx_4 + *(arg2 + 0x100);
                int32_t rcx_7 = 0x15;
                
                if (*(arg2 + 0x124))
                    rcx_7 = 4;
                
                void* var_418_1;
                var_418_1 = rcx_7;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h93501f41781be2d5(&var_328, &var_3a8);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf2b98c6eb4cadcc(&var_1e8, &var_328);
                
                if (var_1e8 != -0x8000000000000000)
                {
                    if (rcx_4 > 0xffff)
                    {
                        memcpy(&var_2e0, &var_1e8, 0xf8);
                        var_390 = &data_ac8790;
                        *var_390[8] = 1;
                        int64_t var_380_3 = 8;
                        int64_t var_378;
                        var_378 = {0};
                        core::panicking::panic_fmt::h96f341d36638c225(&var_390);
                        /* no return */
                    }
                    
                    do
                    {
                        memcpy(&var_2e0, &var_1e8, 0xf8);
                        var_410 = &var_2e0;
                        int64_t (* var_408_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        char const* const* var_400_2 = &var_300;
                        int64_t (* var_3f8_2)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                        int64_t var_3f0_1 = 0;
                        int16_t var_3e8_1 = rcx_4;
                        var_3d8 = &data_485820;
                        int64_t*** var_3d0_1 = 2;
                        void* const var_3b8_1 = &data_488e50;
                        int64_t var_3b0_1 = 2;
                        int64_t*** var_3c8 = &var_410;
                        int64_t var_3c0_1 = 3;
                        _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h01c243a426bccba9(&var_340, &var_3d8);
                        int64_t*** rax_12 = *var_2c8[8];
                        var_3c8 = rax_12;
                        char rax_13 = 0;
                        int64_t r14_2 = 0;
                        
                        while (true)
                        {
                            int64_t*** r12_1 = var_3d0_1;
                            var_3d8 = nullptr;
                            
                            if (!(rax_13 & 1))
                            {
                                r12_1 = var_3c8;
                                
                                if (r12_1 == &rax_12[var_2b8 * 3])
                                    break;
                                
                                var_3c8 = &r12_1[3];
                            }
                            else if (!r12_1)
                                break;
                            
                            int64_t r15_2 = r12_1[2];
                            int64_t rax_15 = r15_2;
                            
                            if (r15_2 + r14_2 + 2 >= rcx_6)
                            {
                                var_390 = &data_47f780;
                                *var_390[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                                char const* const* var_380_1 = &var_300;
                                int64_t (* var_378_2)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                                int64_t var_370_2 = 0;
                                int16_t var_368_1 = rcx_4;
                                var_410 = &data_ac87a0;
                                int64_t var_408_3 = 2;
                                void* const var_3f0_2 = &data_488e50;
                                var_3e8_1 = 2;
                                int128_t* var_400_3 = &var_390;
                                int64_t var_3f8_3 = 3;
                                _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h01c243a426bccba9(&var_340, &var_410);
                                rax_15 = r12_1[2];
                                r14_2 = 0;
                            }
                            
                            char var_358_1 = 0;
                            int64_t var_360_1 = 0;
                            int32_t var_357_1 = var_418_1;
                            int32_t var_353_1 = 0x15;
                            var_390 = -0x8000000000000000;
                            *var_390[8] = r12_1[1];
                            int64_t var_380_2 = rax_15;
                            int64_t var_378_3 = -0x7ffffffffffffffe;
                            int128_t* var_2f0 = &var_390;
                            uint64_t (* var_2e8_1)(int64_t* arg1, int64_t arg2) = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
                            var_410 = &data_47f780;
                            int64_t var_408_4 = 1;
                            int64_t var_3f0_3 = 0;
                            int128_t** var_400_4 = &var_2f0;
                            int64_t var_3f8_4 = 1;
                            _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h01c243a426bccba9(&var_340, &var_410);
                            core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hf79116e6dab6a5da(&var_390);
                            
                            if (*core::option::Option$LT$T$GT$::get_or_insert_with::hc50396b1ea8e97d8(&var_3d8, &var_3c8))
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb822dd115b0224bf(&var_340, ", ,: ", ",: ");
                            
                            r14_2 += r15_2 + 2;
                            rax_13 = var_3d8;
                        }
                        
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb822dd115b0224bf(&var_340, "\n/home/34r7hm4n/.cargo/registry…", 
                            "/home/34r7hm4n/.cargo/registry/s…");
                        core::ptr::drop_in_place$LT$syntect..parsing..syntax_set..SyntaxReference$GT$::h4b13976353a53b68(&var_2e0);
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf2b98c6eb4cadcc(&var_1e8, &var_328);
                    } while (var_1e8 != -0x8000000000000000);
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$syntect..parsing..syntax_set..SyntaxReference$GT$$GT$::haad72e17d6daa07f(&var_328);
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h93501f41781be2d5(&var_3d8, &var_3a8);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf2b98c6eb4cadcc(&var_1e8, &var_3d8);
                
                while (var_1e8 != -0x8000000000000000)
                {
                    memcpy(&var_2e0, &var_1e8, 0xf8);
                    alloc::str::join_generic_copy::h3f5fb1fe01a54bb1(&var_390, *var_2c8[8], 
                        var_2b8, ",: ");
                    int64_t*** var_380;
                    int64_t*** var_318_1 = var_380;
                    var_328 = var_390;
                    var_410 = &var_2e0;
                    int64_t (* var_408_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    int128_t* var_400_1 = &var_328;
                    int64_t (* var_3f8_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_390 = &data_ac8760;
                    *var_390[8] = 3;
                    int64_t var_370_1 = 0;
                    var_380 = &var_410;
                    int64_t var_378_1 = 2;
                    _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h01c243a426bccba9(&var_340, &var_390);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(
                        &var_328);
                    core::ptr::drop_in_place$LT$syntect..parsing..syntax_set..SyntaxReference$GT$::h4b13976353a53b68(&var_2e0);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf2b98c6eb4cadcc(&var_1e8, &var_3d8);
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$syntect..parsing..syntax_set..SyntaxReference$GT$$GT$::haad72e17d6daa07f(&var_3d8);
            }
            *(var_348_1 + 0x18) = var_330;
            *(var_348_1 + 8) = var_340;
            *var_348_1 = 0xd;
            core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$$RF$str$C$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::h34603be1044ade9e(&var_f0);
            return 
                core::ptr::drop_in_place$LT$bat..assets..HighlightingAssets$GT$::h6be43cd2c3f1f295(
                &var_c0);
        }
        
        int32_t rcx_2 = *var_2e0[1];
        *(arg1 + 4) = *var_2e0[4];
        *(arg1 + 1) = rcx_2;
        *(arg1 + 0x18) = var_2c8;
        *(arg1 + 0x28) = var_2b8;
        *(arg1 + 0x38) = var_2a8;
        *(arg1 + 0x48) = var_298;
        *arg1 = rax_1;
        *(arg1 + 8) = var_2d8;
        core::ptr::drop_in_place$LT$bat..assets..HighlightingAssets$GT$::h6be43cd2c3f1f295(&var_c0);
    }
    else
    {
        arg1[4] = var_298;
        int128_t zmm0 = var_1e8;
        arg1[3] = var_2a8;
        arg1[2] = var_2b8;
        arg1[1] = var_2c8;
        *arg1 = zmm0;
    }
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_340);
}
