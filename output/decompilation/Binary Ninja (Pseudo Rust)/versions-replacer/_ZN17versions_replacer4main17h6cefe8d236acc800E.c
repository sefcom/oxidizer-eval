
  fn versions_replacer::main::h6cefe8d236acc800() -> *mut i8

{
    let mut var_b8: ();
    argh::from_env::ha041fed7dc0b5261(&var_b8);
    let mut var_198: *mut *mut c_void;
    let mut var_a0: ();
    versions_replacer::metadata::collect_versions_from_cargo_toml::hfc1c339465d44313(&var_198, 
        &var_a0);
    let rax: *mut *mut c_void = var_198;
    let result_3: *mut i8;
    let mut result: *mut i8 = result_3;
    
    if rax != 0
    {
        let var_178: i128;
        let var_1a8_1: i128 = var_178;
        let mut var_188: i128;
        let var_1b8_1: i128 = var_188;
        let mut var_1c8: *mut *mut c_void = rax;
        let result_2: *mut i8 = result;
        let mut var_258: i64 = 0;
        let var_250_1: i64 = 8;
        let var_248_1: i64 = 0;
        let mut var_240: i128;
        walkdir::WalkDir::new::hfe01dd7f4cf1d222(&var_240, &var_b8);
        let var_208: i128;
        let var_108_1: i128 = var_208;
        let mut var_218: i128;
        let var_118_1: i128 = var_218;
        let mut var_228: i128;
        let var_128_1: i128 = var_228;
        let var_140_1: i128 = var_240;
        let mut var_230: i64;
        let var_130_1: i64 = var_230;
        var_198 = nullptr;
        var_188 = 0;
        *var_188[8] = 8;
        let mut var_178_1: i128 = {0};
        let var_168_1: i64 = 8;
        let var_160_1: i128 = {0};
        let var_150_1: i64 = 8;
        let var_148_1: i64 = 0;
        let var_f8_1: i128 = {0};
        
        loop
        {
            let mut var_68: i64;
            _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca085ed089cd688a(&var_68, &var_198);
            let mut var_1f8: i64;
            let mut var_e8: i64;
            
            if var_68 == -0x7ffffffffffffffe
            {
                core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h74a10217dc8cc9e3(&var_198);
                var_1f8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hb96c0dc395601aaf(var_250_1, var_250_1 + (var_248_1 << 3));
                var_e8 = var_248_1;
                var_240 = &var_1f8;
                *var_240[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                let var_230_1: *mut i64 = &var_e8;
                var_228 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_198 = &data_62c388;
                let var_190: i64 = 3;
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
            let rax_2: i64 = var_240;
            result = *var_240[8];
            
            if rax_2 != -0x8000000000000000
            {
                let var_1d8_1: i128 = var_228;
                var_1f8 = rax_2;
                let result_1: *mut i8 = result;
                let r15_1: u64 = var_230;
                let var_88: *mut c_void;
                
                if std::path::Path::is_file::h6e28d87ff76ffc41(result, r15_1) == 0
                {
                    core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h1c7f82e77fa4296a(
                        &var_1f8);
                    continue;
                }
                else if var_88 == 0
                {
                    'label_50a811:
                    let mut rax_6: i8;
                    let mut rdx_4: *mut c_void;
                    rax_6 = versions_replacer::replace::replace_versions_in_file::hd2df8f901e71d2fc(
                        result, r15_1, &var_1c8);
                    let mut rax_7: i8;
                    let mut result_4: *mut i8;
                    rax_7 = eyre::context::_$LT$impl$u20$eyre..WrapErr$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::wrap_err_with::h2af13dbc59207415(rax_6, rdx_4, result);
                    result = result_4;
                    
                    if (rax_7 & 1) != 0
                    {
                        core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h1c7f82e77fa4296a(
                            &var_1f8);
                    }
                    else
                    {
                        if result != 0
                        {
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h2718dbc9e5e05a23(&var_258, result);
                        }
                        
                        core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h1c7f82e77fa4296a(
                            &var_1f8);
                        continue;
                    }
                }
                else
                {
                    let mut rax_4: *mut i8;
                    let mut rdx_1: i64;
                    rax_4 = std::path::Path::file_name::h6d40d88bf3fb287a(result, r15_1);
                    
                    if rax_4 == 0
                    {
                        result = versions_replacer::main::_$u7b$$u7b$closure$u7d$$u7d$::hb3dbdd388b13090f(result);
                        core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h1c7f82e77fa4296a(
                            &var_1f8);
                    }
                    else
                    {
                        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_240, rax_4, rdx_1);
                        
                        if var_240 == 1
                        {
                            var_240 = &data_62c378;
                            *var_240[8] = 1;
                            let var_230_2: i64 = 8;
                            let var_228_1: i128 = {0};
                            result = eyre::private::format_err::ha07d25133e5e7f47(&var_240, 
                                &data_62c3d0);
                            core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h1c7f82e77fa4296a(&var_1f8);
                        }
                        else
                        {
                            let rsi_7: i64 = var_230;
                            var_240 = 0;
                            *var_240[8] = *var_240[8];
                            var_230 = rsi_7;
                            var_228 = 0;
                            *var_228[8] = rsi_7;
                            var_218 = 1;
                            regex_automata::util::search::Input::set_span::h281761d27acb2fd6(
                                &var_240);
                            let var_c8_1: i128 = var_228;
                            let var_d8_1: i128 = var_230;
                            var_e8 = var_240;
                            let var_80: *mut c_void;
                            regex_automata::meta::regex::Regex::search_half::hbf4439b22ad82210(
                                &var_240, var_88, var_80, &var_e8);
                            
                            if (var_240 & 1) != 0
                            {
                                goto 'label_50a811;
                            }
                            
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
    result
}
