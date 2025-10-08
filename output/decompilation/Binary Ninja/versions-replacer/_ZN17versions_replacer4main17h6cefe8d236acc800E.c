
  char* versions_replacer::main::h6cefe8d236acc800()

{
    void var_b8;
    argh::from_env::ha041fed7dc0b5261(&var_b8);
    void** const var_198;
    void var_a0;
    versions_replacer::metadata::collect_versions_from_cargo_toml::hfc1c339465d44313(&var_198, 
        &var_a0);
    void** const rax = var_198;
    char* result_3;
    char* result = result_3;
    
    if (rax)
    {
        int128_t var_178;
        int128_t var_1a8_1 = var_178;
        int128_t var_188;
        int128_t var_1b8_1 = var_188;
        void** const var_1c8 = rax;
        char* result_2 = result;
        int64_t var_258 = 0;
        int64_t var_250_1 = 8;
        int64_t var_248_1 = 0;
        int128_t var_240;
        walkdir::WalkDir::new::hfe01dd7f4cf1d222(&var_240, &var_b8);
        int128_t var_208;
        int128_t var_108_1 = var_208;
        int128_t var_218;
        int128_t var_118_1 = var_218;
        int128_t var_228;
        int128_t var_128_1 = var_228;
        int128_t var_140_1 = var_240;
        int64_t var_230;
        int64_t var_130_1 = var_230;
        var_198 = nullptr;
        var_188 = 0;
        *var_188[8] = 8;
        int128_t var_178_1 = {0};
        int64_t var_168_1 = 8;
        int128_t var_160_1 = {0};
        int64_t var_150_1 = 8;
        int64_t var_148_1 = 0;
        int128_t var_f8_1 = {0};
        
        while (true)
        {
            int64_t var_68;
            _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca085ed089cd688a(&var_68, &var_198);
            int64_t var_1f8;
            int64_t var_e8;
            
            if (var_68 == -0x7ffffffffffffffe)
            {
                core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h74a10217dc8cc9e3(&var_198);
                var_1f8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hb96c0dc395601aaf(var_250_1, var_250_1 + (var_248_1 << 3));
                var_e8 = var_248_1;
                var_240 = &var_1f8;
                *var_240[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                int64_t* var_230_1 = &var_e8;
                var_228 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_198 = &data_62c388;
                int64_t var_190 = 3;
                var_178_1 = 0;
                var_188 = &var_240;
                *var_188[8] = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_198);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$regex_automata..util..primitives..NonMaxUsize$GT$$GT$$GT$::h82db46cefddfb97a(var_258, var_250_1);
                core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::hd78a9aace21418ed(&var_1c8);
                result = nullptr;
                break;
            }
            
            eyre::context::_$LT$impl$u20$eyre..WrapErr$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::wrap_err::h1daad06df65dddf2(&var_240, &var_68);
            int64_t rax_2 = var_240;
            result = *var_240[8];
            
            if (rax_2 != -0x8000000000000000)
            {
                int128_t var_1d8_1 = var_228;
                var_1f8 = rax_2;
                char* result_1 = result;
                uint64_t r15_1 = var_230;
                void* var_88;
                
                if (!std::path::Path::is_file::h6e28d87ff76ffc41(result, r15_1))
                {
                    core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h1c7f82e77fa4296a(
                        &var_1f8);
                    continue;
                }
                else if (!var_88)
                {
                    label_50a811:
                    char rax_6;
                    void* rdx_4;
                    rax_6 = versions_replacer::replace::replace_versions_in_file::hd2df8f901e71d2fc(
                        result, r15_1, &var_1c8);
                    char rax_7;
                    char* result_4;
                    rax_7 = eyre::context::_$LT$impl$u20$eyre..WrapErr$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::wrap_err_with::h2af13dbc59207415(rax_6, rdx_4, result);
                    result = result_4;
                    
                    if (rax_7 & 1)
                        core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h1c7f82e77fa4296a(
                            &var_1f8);
                    else
                    {
                        if (result)
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h2718dbc9e5e05a23(&var_258, result);
                        
                        core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h1c7f82e77fa4296a(
                            &var_1f8);
                        continue;
                    }
                }
                else
                {
                    char* rax_4;
                    int64_t rdx_1;
                    rax_4 = std::path::Path::file_name::h6d40d88bf3fb287a(result, r15_1);
                    
                    if (!rax_4)
                    {
                        result = versions_replacer::main::_$u7b$$u7b$closure$u7d$$u7d$::hb3dbdd388b13090f(result);
                        core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h1c7f82e77fa4296a(
                            &var_1f8);
                    }
                    else
                    {
                        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_240, rax_4, rdx_1);
                        
                        if (var_240 == 1)
                        {
                            var_240 = &data_62c378;
                            *var_240[8] = 1;
                            int64_t var_230_2 = 8;
                            int128_t var_228_1 = {0};
                            result = eyre::private::format_err::ha07d25133e5e7f47(&var_240, 
                                &data_62c3d0);
                            core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h1c7f82e77fa4296a(&var_1f8);
                        }
                        else
                        {
                            int64_t rsi_7 = var_230;
                            var_240 = 0;
                            *var_240[8] = *var_240[8];
                            var_230 = rsi_7;
                            var_228 = 0;
                            *var_228[8] = rsi_7;
                            var_218 = 1;
                            regex_automata::util::search::Input::set_span::h281761d27acb2fd6(
                                &var_240);
                            int128_t var_c8_1 = var_228;
                            int128_t var_d8_1 = var_230;
                            var_e8 = var_240;
                            void* var_80;
                            regex_automata::meta::regex::Regex::search_half::hbf4439b22ad82210(
                                &var_240, var_88, var_80, &var_e8);
                            
                            if (var_240 & 1)
                                goto label_50a811;
                            
                            core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h1c7f82e77fa4296a(&var_1f8);
                            continue;
                        }
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h74a10217dc8cc9e3(&var_198);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$regex_automata..util..primitives..NonMaxUsize$GT$$GT$$GT$::h82db46cefddfb97a(var_258, var_250_1);
            core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::hd78a9aace21418ed(&var_1c8);
            break;
        }
    }
    
    core::ptr::drop_in_place$LT$versions_replacer..VersionsReplacer$GT$::hc569756555df0ae2(&var_b8);
    return result;
}
