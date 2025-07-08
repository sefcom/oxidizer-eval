
  int128_t* uu_mv::move_files_into_dir::hea74a81b456dd214(int64_t arg1, int64_t arg2, char* arg3, uint64_t arg4, void* arg5)

{
    void** var_178;
    std::thread::local::LocalKey$LT$T$GT$::try_with::ha3d0a2de6b6a2a9f(&var_178);
    int64_t rax;
    int64_t rdx;
    rax = core::result::Result$LT$T$C$E$GT$::expect::hf1b80da9ba1f81f4(&var_178);
    void var_88;
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hdc874b6797fedd23(&var_88, 
        arg2, rax, rdx);
    int128_t var_2d0;
    int64_t* var_2c0;
    int128_t** var_228;
    
    if (!std::path::Path::is_dir::h9ac0db933706da51(arg3, arg4))
    {
        var_228 = 1;
        char* var_220_1 = arg3;
        uint64_t var_218_1 = arg4;
        char var_210_1 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&var_2d0, 
            &var_228);
        int64_t* var_160_1 = var_2c0;
        int128_t var_170_1 = var_2d0;
        var_178 = 7;
        int128_t* result = alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_178);
        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h3a17ce3d5c845dcb(&var_88);
        return result;
    }
    
    std::fs::canonicalize::hde632c5d9c152691(&var_178, arg3);
    int128_t var_198;
    int64_t var_188;
    int128_t var_170;
    
    if (var_178 != -0x8000000000000000)
    {
        var_188 = *var_170[8];
        var_198 = var_178;
    }
    else
        uu_mv::move_files_into_dir::_$u7b$$u7b$closure$u7d$$u7d$::he4f083fce89ebeff(&var_198, arg3, 
            arg4, var_170);
    
    int64_t* var_2e8;
    int64_t var_278;
    
    if (!*(arg5 + 0x33))
    {
        var_2e8 = nullptr;
        var_278 = 0;
    }
    else
    {
        var_2e8 = core::ops::function::FnOnce::call_once::hbf1b5780df2247c4();
        
        if (arg2 <= 1)
            var_278 = 0;
        else
        {
            indicatif::progress_bar::ProgressBar::new::h3f65a405722ce42a(&var_2d0, arg2);
            indicatif::style::ProgressStyle::with_template::hadd9cefcdac397a1(&var_178);
            core::result::Result$LT$T$C$E$GT$::unwrap::h7d26c333f6a83544(&var_228, &var_178);
            indicatif::progress_bar::ProgressBar::with_style::hfb345490eb32754b(&var_178, &var_2d0, 
                &var_228);
            indicatif::multi::MultiProgress::add::h9f882db003b558ae(&var_228, &var_2e8, &var_178);
            var_278 = var_228;
            int64_t var_218;
            int64_t var_268_1 = var_218;
        }
    }
    
    int64_t var_a8 = arg1;
    int64_t var_a0_1 = arg1 + arg2 * 0x18;
    void* i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h68171754d1dad8d6(&var_a8);
    
    if (i_2)
    {
        void* i_1 = i_2;
        char rax_13 = *(arg5 + 0x36);
        void* i;
        
        do
        {
            void* r15_1 = *(i_1 + 8);
            size_t r14_1 = *(i_1 + 0x10);
            std::fs::metadata::h1d9ddf5324749f9a(&var_178, r15_1);
            int128_t* var_300;
            char var_210;
            
            if (var_178 != 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_178);
                
                if (var_278)
                {
                    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_178, 
                        r15_1, r14_1);
                    _$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(&var_228, var_170, *var_170[8]);
                    indicatif::progress_bar::ProgressBar::set_message::h77492990969b1322(&var_278, 
                        &var_228);
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hee6ae0c580e79f89(&var_178);
                }
                
                int64_t rax_16;
                int64_t rdx_12;
                rax_16 = std::path::Path::file_name::h79ecbb7850a9c7f3(r15_1, r14_1);
                
                if (!rax_16)
                {
                    var_228 = 1;
                    void* var_220_6 = r15_1;
                    size_t var_218_6 = r14_1;
                    var_210 = 1;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                        &var_2d0, &var_228);
                    int64_t* var_160_5 = var_2c0;
                    var_170 = var_2d0;
                    var_178 = nullptr;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    int128_t* rax_23;
                    int64_t rdx_15;
                    rax_23 = uucore::util_name::h60d842bf27b05e82();
                    var_300 = rax_23;
                    int64_t var_2f8_3 = rdx_15;
                    var_2d0 = &var_300;
                    *var_2d0[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                    var_2c0 = &var_178;
                    int64_t (* var_2b8_2)(int64_t* arg1, void* arg2) = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::h51bb9d950ecc6a52;
                    var_228 = &data_5880d0;
                    int64_t var_220_7 = 3;
                    int64_t var_208_2 = 0;
                    int128_t* var_218_7 = &var_2d0;
                    var_210 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_228);
                    core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hb0f2c59e69cfedd9(
                        &var_178);
                }
                else
                {
                    void var_258;
                    std::path::Path::join::h3b80008b40549e98(&var_258, arg3, arg4, rax_16);
                    int128_t var_250;
                    
                    if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h5c44f985d977b358(
                        &var_88, &var_258) || rax_13 == 2)
                    {
                        uint64_t var_240;
                        std::fs::canonicalize::hde632c5d9c152691(&var_240, r15_1);
                        void** var_290;
                        
                        if (var_240 != -0x8000000000000000)
                        {
                            int128_t var_c8 = var_240;
                            int64_t var_230;
                            int64_t var_b8_1 = var_230;
                            
                            if (!_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(*var_c8[8], var_230, *var_198[8], var_188))
                            {
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&var_c8);
                                
                                if (var_240 == -0x8000000000000000)
                                    goto label_4ea624;
                                
                                goto label_4ea639;
                            }
                            
                            void* var_98 = r15_1;
                            size_t var_90_1 = r14_1;
                            uucore::features::fs::normalize_path::hf9d1827f61a753a1(&var_290, arg3);
                            int128_t var_288;
                            int128_t var_40 = var_288;
                            std::path::Path::components::h4f3217acf0fc8653(&var_178, *var_198[8], 
                                var_188);
                            var_228 = 0xa;
                            core::iter::traits::iterator::Iterator::fold::h37e4f9fde7d2dd93(
                                &var_2d0, &var_178, &var_228);
                            core::option::Option$LT$T$GT$::map_or_else::ha11fb6aa50fc66bf(&var_300, 
                                &var_2d0, arg3);
                            var_178 = &var_98;
                            var_170 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            *var_170[8] = &var_40;
                            int64_t (* var_160_6)(int64_t* arg1, void* arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            int128_t** var_158_3 = &var_300;
                            int64_t (* var_150_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_228 = &data_588130;
                            int64_t var_220_8 = 4;
                            int64_t var_208_3 = 0;
                            void*** var_218_8 = &var_178;
                            var_210 = 3;
                            core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_2d0, 
                                &var_228);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&var_300);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(
                                &var_290);
                            *var_170[8] = var_2c0;
                            var_178 = var_2d0;
                            var_160_6 = 1;
                            int128_t* rax_28 =
                                alloc::boxed::Box$LT$T$GT$::new::hb29f62ded121125b(&var_178);
                            var_300 = rax_28;
                            int64_t* var_2f8_4 = &data_587f60;
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_28));
                            int64_t rax_30;
                            int64_t rdx_25;
                            rax_30 = uucore::util_name::h60d842bf27b05e82();
                            var_2d0 = rax_30;
                            *var_2d0[8] = rdx_25;
                            var_228 = &var_2d0;
                            int64_t (* var_220_9)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                            int128_t** var_218_9 = &var_300;
                            var_210 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7a0d8bad1d3a886c;
                            var_178 = &data_5880d0;
                            var_170 = 3;
                            int64_t var_158_4 = 0;
                            *var_170[8] = &var_228;
                            int64_t var_160_7 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_178);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::ha3c2118ebdfb1144(var_300, var_2f8_4);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(
                                &var_c8);
                            
                            if (var_240 == -0x8000000000000000)
                                core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h57ad1af1f1c9aa26(&var_240);
                            
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(
                                &var_258);
                        }
                        else
                        {
                            label_4ea624:
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h57ad1af1f1c9aa26(&var_240);
                            label_4ea639:
                            int64_t* r9_1 = var_2e8;
                            
                            if (r9_1)
                                r9_1 = &var_2e8;
                            
                            void** rax_24;
                            int64_t rdx_18;
                            rax_24 = uu_mv::rename::hfc95a4bd2fcddeec(r15_1, r14_1, var_250, 
                                *var_250[8], arg5, r9_1);
                            var_290 = rax_24;
                            
                            if (rax_24)
                            {
                                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h23e5007a1b44b441(&var_178, &var_290, rdx_18);
                                
                                if (!*var_170[8])
                                {
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&var_178);
                                    var_178 = var_290;
                                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hbb55e5b4020a58ba(&var_178);
                                }
                                else
                                {
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&var_178);
                                    int128_t* rax_25 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc501c0ef7d3cfc3f(var_290, i_1, &var_258);
                                    
                                    if (!var_2e8)
                                    {
                                        var_300 = rax_25;
                                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                                        int64_t rax_32;
                                        int64_t rdx_26;
                                        rax_32 = uucore::util_name::h60d842bf27b05e82();
                                        var_2d0 = rax_32;
                                        *var_2d0[8] = rdx_26;
                                        var_228 = &var_2d0;
                                        int64_t (* var_220_10)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                                        int128_t** var_218_10 = &var_300;
                                        var_210 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d9a93934d3f4680;
                                        var_178 = &data_5880d0;
                                        var_170 = 3;
                                        int64_t var_158_5 = 0;
                                        *var_170[8] = &var_228;
                                        int64_t var_160_8 = 2;
                                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_178);
                                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::hd70df9f725f15388(var_300);
                                    }
                                    else
                                        indicatif::multi::MultiProgress::suspend::hfe9402cb2a1cce7f(
                                            &var_2e8, rax_25);
                                }
                            }
                            
                            if (var_278)
                                indicatif::progress_bar::ProgressBar::inc::he12f7743cfc9ae04(
                                    &var_278, 1);
                            
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h1e71081e8e91d8e8(&var_178, &var_258);
                            int64_t var_218_11 = *var_170[8];
                            var_228 = var_178;
                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h663343a02dd1e8c9(
                                &var_88, &var_228);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(
                                &var_258);
                        }
                    }
                    else
                    {
                        var_300 = var_250;
                        var_2d0 = r15_1;
                        *var_2d0[8] = r14_1;
                        var_228 = &var_300;
                        int64_t (* var_220_4)(int64_t* arg1, void* arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        int128_t* var_218_4 = &var_2d0;
                        var_210 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        var_178 = &data_588100;
                        var_170 = 3;
                        int64_t var_158_1 = 0;
                        *var_170[8] = &var_228;
                        int64_t var_160_3 = 2;
                        int128_t var_58;
                        core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_58, 
                            &var_178);
                        var_160_3 = 1;
                        var_178 = var_58;
                        int64_t var_48;
                        *var_170[8] = var_48;
                        int128_t* rax_19 =
                            alloc::boxed::Box$LT$T$GT$::new::hb29f62ded121125b(&var_178);
                        var_300 = rax_19;
                        int64_t* var_2f8_2 = &data_587f60;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_19));
                        int64_t rax_21;
                        int64_t rdx_14;
                        rax_21 = uucore::util_name::h60d842bf27b05e82();
                        var_2d0 = rax_21;
                        *var_2d0[8] = rdx_14;
                        var_228 = &var_2d0;
                        int64_t (* var_220_5)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                        int128_t** var_218_5 = &var_300;
                        var_210 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7a0d8bad1d3a886c;
                        var_178 = &data_5880d0;
                        var_170 = 3;
                        int64_t var_158_2 = 0;
                        *var_170[8] = &var_228;
                        int64_t var_160_4 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_178);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::ha3c2118ebdfb1144(var_300, var_2f8_2);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(
                            &var_258);
                    }
                }
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_178);
                var_228 = 1;
                void* var_220_2 = r15_1;
                size_t var_218_2 = r14_1;
                var_210 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_2d0, &var_228);
                int64_t* var_160_2 = var_2c0;
                var_170 = var_2d0;
                var_178 = nullptr;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                int128_t* rax_15;
                int64_t rdx_9;
                rax_15 = uucore::util_name::h60d842bf27b05e82();
                var_300 = rax_15;
                int64_t var_2f8_1 = rdx_9;
                var_2d0 = &var_300;
                *var_2d0[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                var_2c0 = &var_178;
                int64_t (* var_2b8_1)(int64_t* arg1, void* arg2) = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::h51bb9d950ecc6a52;
                var_228 = &data_5880d0;
                int64_t var_220_3 = 3;
                int64_t var_208_1 = 0;
                int128_t* var_218_3 = &var_2d0;
                var_210 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_228);
                core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hb0f2c59e69cfedd9(&var_178);
            }
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h68171754d1dad8d6(&var_a8);
            i_1 = i;
        } while (i);
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h4962931619fca08b(&var_278);
    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..multi..MultiProgress$GT$$GT$::ha439cdb5b0953c56(&var_2e8);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&var_198);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h3a17ce3d5c845dcb(&var_88);
    return nullptr;
}
