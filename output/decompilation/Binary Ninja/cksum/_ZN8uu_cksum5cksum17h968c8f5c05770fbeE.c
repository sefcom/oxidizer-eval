
  char* uu_cksum::cksum::h968c8f5c05770fbe(int64_t* arg1)

{
    void* const r13;
    void* const var_20 = r13;
    void var_160;
    int128_t* rsi;
    core::iter::traits::iterator::Iterator::collect::hd51e304b73a29e2d(&var_160, rsi);
    int64_t var_150;
    char* result;
    
    if (*(arg1 + 0x3a) != 1 || var_150 < 2)
    {
        void var_118;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h1fb92bba1baf3ed0(&var_118, &var_160);
        int64_t** rax_1;
        uint64_t rdx_1;
        rax_1 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h64ffba3b6722510b(&var_118);
        
        if (!rax_1)
        {
            label_580124:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hbb2f4177c99bb2cb(&var_118);
            result = nullptr;
        }
        else
        {
            int64_t** rbp_1 = rax_1;
            uint64_t r12_1 = rdx_1;
            char const (** const var_180_1)[0x128] = &data_7527f0;
            
            while (true)
            {
                int64_t** var_308;
                std::path::Path::components::h4f3217acf0fc8653(&var_308, rbp_1, r12_1);
                void* const var_248;
                std::path::Path::components::h4f3217acf0fc8653(&var_248, 
                    "-: \ncrcbsdblake2b  (BLAKE2b (", 1);
                bool rax_5 = _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&var_308, &var_248);
                int64_t (* result_1)(int64_t* arg1, int64_t arg2);
                int32_t* var_2f8;
                int64_t (* var_2f0)(int64_t* arg1);
                int32_t var_2c8;
                int64_t* var_2a8;
                int64_t** var_268;
                int64_t var_240;
                void* const var_238;
                int64_t* rax_6;
                void* const rcx_2;
                
                if (!rax_5)
                {
                    if (std::path::Path::is_dir::h9ac0db933706da51(rbp_1, r12_1))
                    {
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4959fc360751633b(&var_248, 0x2000);
                        rax_6 = alloc::boxed::Box$LT$T$GT$::new::hd4bad29e7eee4d0f(&var_248);
                        rcx_2 = &data_7526b0;
                        goto label_57f360;
                    }
                    
                    std::fs::File::open::h7ee72332435a5b84(&var_2c8, rbp_1);
                    
                    if (!var_2c8)
                    {
                        int32_t var_2c4;
                        rax_6 = alloc::boxed::Box$LT$T$GT$::new::hf9ffa0e11f6228ff(var_2c4);
                        rcx_2 = &data_752658;
                        goto label_57f360;
                    }
                    
                    var_268 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h3fe001604be527b2();
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    int64_t* rax_9;
                    int64_t rdx_6;
                    rax_9 = uucore::util_name::h60d842bf27b05e82();
                    var_2a8 = rax_9;
                    int64_t var_2a0_1 = rdx_6;
                    var_308 = &var_2a8;
                    result_1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
                    var_2f8 = &var_268;
                    var_2f0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hecc426ab1f5da2eb;
                    var_248 = &data_7524d8;
                    var_240 = 3;
                    int64_t var_228_1 = 0;
                    var_238 = &var_308;
                    int64_t var_230_1 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_248);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h15e3a96f6f9dbf4f(var_268);
                }
                else
                {
                    std::io::stdio::stdin::h7215cc131abb55d8();
                    rax_6 = alloc::boxed::Box$LT$T$GT$::new::h8a8cfe4d0220fa65(
                        &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
                    rcx_2 = &data_752708;
                    label_57f360:
                    void var_68;
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc4db813bde19958a(&var_68, 0x2000, rax_6, rcx_2);
                    uint64_t var_2c0;
                    
                    if (!std::path::Path::is_dir::h9ac0db933706da51(rbp_1, r12_1))
                    {
                        uucore::features::checksum::digest_reader::hb3e7cc01e934b03f(&var_248, 
                            &arg1[4], &var_68, 0, arg1[6]);
                        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6371967b4e91eb46(&var_308, &var_248);
                        int64_t** rax_16 = var_308;
                        result = result_1;
                        r13 = var_2f8;
                        
                        if (rax_16 == -0x8000000000000000)
                        {
                            label_58013a:
                            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h35ed789f6648ed59(&var_68);
                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hbb2f4177c99bb2cb(&var_118);
                            break;
                        }
                        
                        int64_t (* r15_1)(int64_t* arg1) = var_2f0;
                        int64_t** var_1a0 = rax_16;
                        int64_t (* var_168)(int64_t* arg1) = r15_1;
                        uint32_t rax_18 = *(arg1 + 0x3a);
                        char* result_2;
                        void* const var_258;
                        
                        if (!rax_18)
                        {
                            var_258 = r13;
                            var_268 = var_1a0;
                            result_2 = result;
                        }
                        else
                        {
                            if (rax_18 != 2)
                            {
                                r15_1 = 1;
                                
                                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(arg1[2], arg1[3], "crcbsdblake2b  (BLAKE2b (", 3))
                                {
                                    char rax_81 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(arg1[2], arg1[3], "sysvCoreTextSlimm", 4);
                                    char rax_82;
                                    
                                    if (!rax_81)
                                        rax_82 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(arg1[2], arg1[3], "bsdblake2b  (BLAKE2b (", 3);
                                    
                                    if (!rax_81 && !rax_82)
                                    {
                                        var_238 = r13;
                                        var_248 = var_1a0;
                                        _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$hex..FromHex$GT$::from_hex::h6fda53b93a1b4a9b(&var_308, &var_248);
                                        core::result::Result$LT$T$C$E$GT$::unwrap::h72eff9fffdfc2e9e(&var_248, &var_308);
                                        rbp_1 = 1;
                                    }
                                    else
                                    {
                                        var_308 = ROLW(
                                            core::result::Result$LT$T$C$E$GT$::unwrap::h2fb53f7747cb9e4e(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::haf22888ecbeba9aa(result, r13)), 
                                            8);
                                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h30fbc9471dcc217c(&var_248, &var_308, 2);
                                        r15_1 = 1;
                                        rbp_1 = nullptr;
                                    }
                                }
                                else
                                {
                                    var_308 = _bswap(core::result::Result$LT$T$C$E$GT$::unwrap::hf3b40991d8ebbd58(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u32$GT$::from_str::hecf13f2b24d2aba7(result, r13)));
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h30fbc9471dcc217c(&var_248, &var_308, 4);
                                    r15_1 = 1;
                                    rbp_1 = nullptr;
                                }
                                
                                std::io::stdio::stdout::h077da66234850927();
                                var_308 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                                
                                if (!_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&var_308, var_240, var_238))
                                    result = nullptr;
                                else
                                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h33f821fc08e83651(&var_248);
                                
                                if (!rbp_1)
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h23113bc82093f2bc(&var_1a0);
                                
                                goto label_58013a;
                            }
                            
                            int64_t (* r13_1)(int64_t* arg1) = r15_1;
                            r15_1 = 1;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(arg1[2], arg1[3], "crcbsdblake2b  (BLAKE2b (", 3))
                            {
                                var_258 = r13;
                                var_268 = var_1a0;
                            }
                            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(arg1[2], arg1[3], "sysvCoreTextSlimm", 4))
                            {
                                var_258 = r13;
                                var_268 = var_1a0;
                            }
                            else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(arg1[2], arg1[3], "bsdblake2b  (BLAKE2b (", 3))
                            {
                                __builtin_memcpy(&var_2a8, 
                                    "\x00\x00\x00\x00\x00\x00\x00\x80\xb1\x5c\x45\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
                                var_238 = r13;
                                var_248 = var_1a0;
                                _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$hex..FromHex$GT$::from_hex::h6fda53b93a1b4a9b(&var_308, &var_248);
                                core::result::Result$LT$T$C$E$GT$::unwrap::h72eff9fffdfc2e9e(
                                    &var_248, &var_308);
                                data_encoding::Encoding::encode::h8eff78e31b7db764(&var_268, 
                                    &var_2a8, var_240, var_238);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h33f821fc08e83651(&var_248);
                                core::ptr::drop_in_place$LT$data_encoding..Encoding$GT$::ha055e00dd9a05262(&var_2a8);
                            }
                            else
                            {
                                var_258 = r13;
                                var_268 = var_1a0;
                            }
                            
                            r15_1 = r13_1;
                        }
                        
                        int16_t var_188;
                        void* rax_52;
                        bool r14_1;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(arg1[2], arg1[3], "sysvCoreTextSlimm", 4))
                        {
                            var_188 = core::result::Result$LT$T$C$E$GT$::unwrap::h2fb53f7747cb9e4e(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::haf22888ecbeba9aa(
                                result_2, var_258));
                            int64_t rcx_3 = arg1[6];
                            
                            if (!rcx_3)
                            {
                                var_180_1 = &data_752820;
                                core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
                                /* no return */
                            }
                            
                            uint64_t rax_38;
                            uint64_t rdx_11;
                            
                            if (!((r15_1 | rcx_3) >> 0x20))
                            {
                                int32_t rax_53 = r15_1;
                                int32_t temp2_3 = rcx_3;
                                rax_38 = COMBINE(0, rax_53) / temp2_3;
                                rdx_11 = COMBINE(0, rax_53) % temp2_3;
                            }
                            else
                            {
                                int64_t rdx_10 = 0;
                                int32_t temp2_1 = rcx_3;
                                rax_38 = COMBINE(rdx_10, r15_1) / temp2_1;
                                rdx_11 = COMBINE(rdx_10, r15_1) % temp2_1;
                            }
                            
                            void* const rcx_6 = "  (BLAKE2b (";
                            
                            if (rax_5)
                                rcx_6 = 1;
                            
                            var_2c8 = rax_38 + 1;
                            r14_1 = rax_5 ^ 1;
                            var_2a8 = rcx_6;
                            uint64_t var_2a0_5 = r14_1;
                            var_248 = &var_188;
                            uint64_t (* var_240_3)(int16_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                            int32_t* var_238_4 = &var_2c8;
                            uint64_t (* var_230_5)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            int64_t** var_228_5 = &var_2a8;
                            int64_t (* var_220_2)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
                            var_308 = &data_752528;
                            int64_t var_300_2 = 3;
                            int64_t var_2e8_2 = 0;
                            void* const* var_2f8_2 = &var_248;
                            int64_t var_2f0_2 = 3;
                            int128_t var_e0;
                            core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&var_e0, 
                                &var_308);
                            var_248 = var_e0;
                            void* var_d0;
                            rax_52 = var_d0;
                            goto label_57fbff;
                        }
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(arg1[2], arg1[3], "bsdblake2b  (BLAKE2b (", 3))
                        {
                            int16_t var_26a =
                                core::result::Result$LT$T$C$E$GT$::unwrap::h2fb53f7747cb9e4e(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::haf22888ecbeba9aa(
                                result_2, var_258));
                            int64_t rcx_4 = arg1[6];
                            
                            if (!rcx_4)
                            {
                                core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
                                /* no return */
                            }
                            
                            uint64_t rax_48;
                            uint64_t rdx_13;
                            
                            if (!((r15_1 | rcx_4) >> 0x20))
                            {
                                int32_t rax_61 = r15_1;
                                int32_t temp2_4 = rcx_4;
                                rax_48 = COMBINE(0, rax_61) / temp2_4;
                                rdx_13 = COMBINE(0, rax_61) % temp2_4;
                            }
                            else
                            {
                                int64_t rdx_12 = 0;
                                int32_t temp2_2 = rcx_4;
                                rax_48 = COMBINE(rdx_12, r15_1) / temp2_2;
                                rdx_13 = COMBINE(rdx_12, r15_1) % temp2_2;
                            }
                            
                            void* const rcx_8 = "  (BLAKE2b (";
                            
                            if (rax_5)
                                rcx_8 = 1;
                            
                            var_188 = rax_48 + 1;
                            r14_1 = rax_5 ^ 1;
                            var_2c8 = rcx_8;
                            var_2c0 = r14_1;
                            var_308 = &var_26a;
                            uint64_t (* var_300_4)(int16_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                            int16_t* var_2f8_4 = &var_188;
                            uint64_t (* var_2f0_3)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            int32_t* var_2e8_3 = &var_2c8;
                            int64_t (* var_2e0_1)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
                            int64_t var_2d8_1 = 5;
                            int64_t var_2d0_1 = 0;
                            var_248 = 2;
                            int64_t var_238_6 = 1;
                            int64_t var_230_7 = 3;
                            int64_t var_228_7 = 0;
                            int64_t var_220_3 = 0x800000020;
                            char var_218_1 = 3;
                            int64_t var_210_1 = 2;
                            int64_t var_200;
                            __builtin_memcpy(&var_200, 
                                "\x01\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x21);
                            int64_t var_1d8_1 = 2;
                            int64_t var_1c8_1 = 2;
                            int64_t var_1b8_1 = 2;
                            int64_t var_1b0_1 = 0x20;
                            char var_1a8_1 = 3;
                            var_2a8 = &data_752528;
                            int64_t var_2a0_6 = 3;
                            void* const* var_288_1 = &var_248;
                            int64_t var_280_1 = 3;
                            int64_t*** var_298_1 = &var_308;
                            int64_t var_290_1 = 4;
                            int128_t var_c8;
                            core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&var_c8, 
                                &var_2a8);
                            var_248 = var_c8;
                            void* var_b8;
                            rax_52 = var_b8;
                            goto label_57fbff;
                        }
                        
                        void* var_298;
                        void* const var_238_7;
                        int64_t rax_64;
                        int64_t* rcx_9;
                        void* rdx_15;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(arg1[2], arg1[3], "crcbsdblake2b  (BLAKE2b (", 3))
                        {
                            char rax_57 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(arg1[2], arg1[3], "blake2b  (BLAKE2b (", 7);
                            char rcx_7 = arg1[7];
                            
                            if (rax_57 & rcx_7)
                            {
                                void* const var_2f8_3;
                                
                                if (!*arg1)
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h30fbc9471dcc217c(&var_248, "BLAKE2b (", 9);
                                    var_2f8_3 = var_238;
                                    var_308 = var_248;
                                }
                                else
                                {
                                    var_2a8 = arg1[1] << 3;
                                    var_308 = &var_2a8;
                                    uint64_t (* var_300_3)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                                    var_248 = &data_752558;
                                    int64_t var_240_4 = 2;
                                    int64_t var_228_6 = 0;
                                    int64_t*** var_238_5 = &var_308;
                                    int64_t var_230_6 = 1;
                                    int128_t var_98;
                                    core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(
                                        &var_98, &var_248);
                                    var_308 = var_98;
                                    void* var_88;
                                    var_2f8_3 = var_88;
                                }
                                
                                var_2a8 = &var_268;
                                int64_t (* var_2a0_9)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                var_248 = &data_752578;
                                int64_t var_240_8 = 1;
                                int64_t var_228_12 = 0;
                                int64_t** var_238_11 = &var_2a8;
                                int64_t var_230_12 = 1;
                                int64_t* var_148;
                                core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(
                                    &var_148, &var_248);
                                var_248 = var_308;
                                var_238_7 = var_2f8_3;
                                rcx_9 = var_148;
                                int64_t var_140;
                                rax_64 = var_140;
                                void* var_138;
                                rdx_15 = var_138;
                                r14_1 = true;
                            }
                            else if (!rcx_7)
                            {
                                int64_t* rax_74 = "*Try ' --help' for more informat…";
                                
                                if (!*(arg1 + 0x39))
                                    rax_74 = "  (BLAKE2b (";
                                
                                var_2a8 = rax_74;
                                int64_t var_2a0_10 = 1;
                                var_308 = &var_268;
                                int64_t (* var_300_6)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                int64_t** var_2f8_6 = &var_2a8;
                                int64_t (* var_2f0_4)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
                                var_248 = &data_7525a8;
                                int64_t var_240_9 = 2;
                                int64_t var_228_13 = 0;
                                int64_t*** var_238_12 = &var_308;
                                int64_t var_230_13 = 2;
                                int128_t var_80;
                                core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(
                                    &var_80, &var_248);
                                var_248 = var_80;
                                void* var_70;
                                var_238_7 = var_70;
                                rax_64 = 1;
                                r14_1 = true;
                                rcx_9 = nullptr;
                                rdx_15 = nullptr;
                            }
                            else
                            {
                                alloc::str::_$LT$impl$u20$str$GT$::to_ascii_uppercase::h60b631a23b970e6a(&var_308, arg1[2], arg1[3]);
                                var_2c8 = &var_308;
                                var_2c0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                var_248 = &data_752588;
                                int64_t var_240_6 = 2;
                                int64_t var_228_10 = 0;
                                int32_t* var_238_9 = &var_2c8;
                                int64_t var_230_10 = 1;
                                core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(
                                    &var_2a8, &var_248);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h23113bc82093f2bc(&var_308);
                                var_308 = var_2a8;
                                var_2a8 = &var_268;
                                int64_t (* var_2a0_8)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                var_248 = &data_752578;
                                int64_t var_240_7 = 1;
                                int64_t var_228_11 = 0;
                                int64_t** var_238_10 = &var_2a8;
                                int64_t var_230_11 = 1;
                                int64_t* var_130;
                                core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(
                                    &var_130, &var_248);
                                var_248 = var_308;
                                var_238_7 = var_298;
                                rcx_9 = var_130;
                                int64_t var_128;
                                rax_64 = var_128;
                                void* var_120;
                                rdx_15 = var_120;
                                r14_1 = true;
                            }
                        }
                        else
                        {
                            int64_t* rax_51 = "  (BLAKE2b (";
                            
                            if (rax_5)
                                rax_51 = 1;
                            
                            r14_1 = rax_5 ^ 1;
                            var_2a8 = rax_51;
                            uint64_t var_2a0_4 = r14_1;
                            var_248 = &var_268;
                            int64_t (* var_240_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            int64_t (** var_238_3)(int64_t* arg1) = &var_168;
                            uint64_t (* var_230_4)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            int64_t** var_228_4 = &var_2a8;
                            int64_t (* var_220_1)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
                            var_308 = &data_752528;
                            int64_t var_300_1 = 3;
                            int64_t var_2e8_1 = 0;
                            void* const* var_2f8_1 = &var_248;
                            int64_t var_2f0_1 = 3;
                            int128_t var_b0;
                            core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&var_b0, 
                                &var_308);
                            var_248 = var_b0;
                            void* var_a0;
                            rax_52 = var_a0;
                            label_57fbff:
                            var_238_7 = rax_52;
                            rax_64 = 1;
                            rcx_9 = nullptr;
                            rdx_15 = nullptr;
                        }
                        
                        void* const var_2b8_1 = var_238_7;
                        var_2c8 = var_248;
                        var_2a8 = rcx_9;
                        int64_t var_2a0_7 = rax_64;
                        var_298 = rdx_15;
                        var_308 = &var_2c8;
                        int64_t (* var_300_5)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        var_248 = &data_454f40;
                        int64_t var_240_5 = 1;
                        int64_t var_228_8 = 0;
                        int64_t*** var_238_8 = &var_308;
                        int64_t var_230_8 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&var_248);
                        
                        if (r14_1)
                        {
                            std::io::stdio::stdout::h077da66234850927();
                            var_248 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h62fbe6402467233a(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&var_248, rbp_1, r12_1));
                        }
                        
                        var_308 = &var_2a8;
                        result_1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        var_2f8 = arg1 + 0x3b;
                        var_2f0 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                        var_248 = &data_455720;
                        var_240 = 2;
                        int64_t var_228_9 = 0;
                        var_238 = &var_308;
                        int64_t var_230_9 = 2;
                        std::io::stdio::_print::he918bceb0c89db46(&var_248);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h23113bc82093f2bc(
                            &var_2a8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h23113bc82093f2bc(
                            &var_2c8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h23113bc82093f2bc(
                            &var_268);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h35ed789f6648ed59(&var_68);
                    }
                    else
                    {
                        var_308 = rbp_1;
                        uint64_t var_300 = r12_1;
                        var_2a8 = &var_308;
                        int64_t (* var_2a0_2)(int64_t* arg1, void* arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        var_248 = &data_752508;
                        int64_t var_240_1 = 2;
                        int64_t var_228_2 = 0;
                        int64_t** var_238_1 = &var_2a8;
                        int64_t var_230_2 = 1;
                        int128_t var_f8;
                        core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&var_f8, 
                            &var_248);
                        var_230_2 = 1;
                        var_248 = var_f8;
                        int64_t var_e8;
                        int64_t var_238_2 = var_e8;
                        int128_t* rax_12 =
                            alloc::boxed::Box$LT$T$GT$::new::h7e187ac5f822efad(&var_248);
                        var_2c8 = rax_12;
                        var_2c0 = &data_752870;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_12));
                        int64_t* rax_14;
                        int64_t rdx_8;
                        rax_14 = uucore::util_name::h60d842bf27b05e82();
                        var_2a8 = rax_14;
                        int64_t var_2a0_3 = rdx_8;
                        var_308 = &var_2a8;
                        result_1 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
                        var_2f8 = &var_2c8;
                        var_2f0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h412ef4f961bd2408;
                        var_248 = &data_7524d8;
                        var_240 = 3;
                        int64_t var_228_3 = 0;
                        var_238 = &var_308;
                        int64_t var_230_3 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_248);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h88065cc496e49ab5(var_2c8, var_2c0);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h35ed789f6648ed59(&var_68);
                    }
                }
                int64_t** rax_4;
                uint64_t rdx_2;
                rax_4 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h64ffba3b6722510b(&var_118);
                rbp_1 = rax_4;
                r12_1 = rdx_2;
                
                if (!rax_4)
                    goto label_580124;
            }
        }
    }
    else
    {
        result = alloc::boxed::Box$LT$T$GT$::new::hf9354996cb72aa80(0);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h6eb853ba25e83800(&var_160);
    }
    
    core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::h97266c7ff74129ed(arg1[4], arg1[5]);
    return result;
}
