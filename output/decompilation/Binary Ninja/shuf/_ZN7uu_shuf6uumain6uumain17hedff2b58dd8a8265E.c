
  uint64_t uu_shuf::uumain::uumain::hedff2b58dd8a8265(int64_t arg1, int64_t arg2 @ r13)

{
    int64_t var_20 = arg2;
    int128_t var_2f8;
    uu_shuf::uu_app::h51a53df890e82932(&var_2f8);
    void (* var_438)() __noreturn;
    clap_builder::builder::command::Command::try_get_matches_from::h1b56f836ecd248ac(&var_438, 
        &var_2f8, arg1);
    void (* rax)() __noreturn = var_438;
    uint64_t result;
    uint64_t result_1;
    
    if (-(rax) != -0x8000000000000000)
    {
        void* var_408;
        void* var_320_1 = var_408;
        int128_t var_418;
        int128_t var_330_1 = var_418;
        uint128_t var_428;
        uint128_t var_340_1 = var_428;
        void (* var_350)() __noreturn = rax;
        uint64_t result_6 = result_1;
        int64_t var_400;
        int128_t var_3e8;
        char var_3d8;
        char var_2e8;
        int64_t rax_7;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_350, "echoi128 as dyn ERANGEEDEADLKENA…", 4))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h59f6811787992051(
                &var_2f8, &var_350, "file-or-args(uutils coreutils) 0…", 0xc);
            void* const rsi_3 = "file-or-args(uutils coreutils) 0…";
            clap_builder::parser::error::MatchesError::unwrap::h3b06173179f33a28(&var_438, 
                "file-or-args(uutils coreutils) 0…", 0xc, &var_2f8);
            void (* rax_3)() __noreturn = var_438;
            uint64_t result_7;
            int64_t rdx_1;
            int128_t zmm0_2;
            uint128_t zmm1_2;
            
            if (!rax_3)
            {
                zmm0_2 = {0};
                zmm1_2 = "/home/34r7hm4n/.cargo/registry/s…";
                result_7 = "/home/34r7hm4n/.cargo/registry/s…";
                rax_3 = core::ops::function::FnOnce::call_once::hcf99c56a241a2abc;
                rdx_1 = 0;
            }
            else
            {
                result_7 = result_1;
                zmm1_2 = var_428;
                zmm0_2 = var_418;
                rsi_3 = var_408;
                rdx_1 = var_400;
            }
            
            var_2f8 = rax_3;
            *var_2f8[8] = result_7;
            var_2e8 = zmm1_2;
            int128_t var_2d8_1 = zmm0_2;
            void* const var_2c8_1 = rsi_3;
            int64_t var_2c0_1 = rdx_1;
            core::iter::traits::iterator::Iterator::collect::h386b4ae5f25d38a7(&var_438, &var_2f8);
            var_3e8 = var_438;
            var_3d8 = var_428;
            int64_t var_3f0_1 = 1;
            rax_7 = 1;
            goto label_45f287;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h933ae22ec05fedde(
            &var_2f8, &var_350, "input-rangehead-countoutputrando…", 0xb);
        int128_t* rax_4 = clap_builder::parser::error::MatchesError::unwrap::h5b4fae1e20bf99e6(
            "input-rangehead-countoutputrando…", 0xb, &var_2f8);
        int32_t var_3c8;
        
        if (rax_4)
        {
            _$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he208c34151454f8f(&var_2f8, rax_4);
            var_438 = var_2f8;
            int32_t var_2e7;
            var_3c8 = var_2e7;
            var_3c8 = var_2e7;
        }
        
        int64_t var_3b0;
        int64_t var_3a8;
        int16_t var_390;
        uint64_t result_2;
        
        if (rax_4 && var_2e8 != 2)
        {
            var_3e8 = var_438;
            int32_t var_3d7_1 = var_3c8;
            var_3d7_1 = var_3c8;
            var_3d8 = var_2e8;
            int64_t var_3f0_2 = 2;
            rax_7 = 2;
            label_45f287:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h107b91d7d21a3329(
                &var_2f8, &var_350, "head-countoutputrandom-sourcerep…", 0xa);
            void* rsi_13 = "head-countoutputrandom-sourcerep…";
            clap_builder::parser::error::MatchesError::unwrap::h3b06173179f33a28(&var_438, 
                "head-countoutputrandom-sourcerep…", 0xa, &var_2f8);
            void (* rax_13)() __noreturn = var_438;
            uint64_t result_8;
            int64_t rdx_5;
            int128_t zmm0_7;
            uint128_t zmm1_4;
            
            if (!rax_13)
            {
                zmm0_7 = {0};
                zmm1_4 = "/home/34r7hm4n/.cargo/registry/s…";
                result_8 = "/home/34r7hm4n/.cargo/registry/s…";
                rax_13 = core::ops::function::FnOnce::call_once::hbfdf60db88ee0bad;
                rdx_5 = 0;
            }
            else
            {
                result_8 = result_1;
                zmm1_4 = var_428;
                zmm0_7 = var_418;
                rsi_13 = var_408;
                rdx_5 = var_400;
            }
            
            var_2f8 = rax_13;
            *var_2f8[8] = result_8;
            var_2e8 = zmm1_4;
            int128_t var_2d8_2 = zmm0_7;
            void* var_2c8_2 = rsi_13;
            int64_t var_2c0_2 = rdx_5;
            char rax_14;
            int64_t rdx_6;
            rax_14 = core::iter::traits::iterator::Iterator::reduce::h498be5ebde0c0fc3(&var_2f8);
            int128_t* r15_2 = 6;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2717c3350bcb7728(
                &var_2f8, &var_350, "outputrandom-sourcerepeatzero-te…", 6);
            void* rax_15 = clap_builder::parser::error::MatchesError::unwrap::h5b4fae1e20bf99e6(
                "outputrandom-sourcerepeatzero-te…", 6, &var_2f8);
            int64_t var_358;
            int64_t var_318;
            uint64_t rbp_2;
            
            if (!rax_15)
                rbp_2 = -0x8000000000000000;
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h10351ebe9e4824c9(&var_2f8, *(rax_15 + 8), *(rax_15 + 0x10));
                rbp_2 = var_2f8;
                var_358 = *var_2f8[8];
                var_318 = var_2e8;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2717c3350bcb7728(
                &var_2f8, &var_350, "random-sourcerepeatzero-terminat…", 0xd);
            void* rax_18 = clap_builder::parser::error::MatchesError::unwrap::h5b4fae1e20bf99e6(
                "random-sourcerepeatzero-terminat…", 0xd, &var_2f8);
            int64_t var_360;
            int64_t r13;
            
            if (!rax_18)
                r13 = -0x8000000000000000;
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h10351ebe9e4824c9(&var_2f8, *(rax_18 + 8), *(rax_18 + 0x10));
                r13 = var_2f8;
                var_360 = *var_2f8[8];
                r15_2 = var_2e8;
            }
            
            void** const r14_1 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_350, "repeatzero-terminatedfile-or-arg…", 6);
            char rax_22 = 0xa;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                    &var_350, "zero-terminatedfile-or-args(uuti…", 0xf))
                rax_22 = 0;
            
            var_3c8 = rbp_2;
            int64_t var_3c0_2 = var_358;
            int64_t var_3b8_2 = var_318;
            var_3b0 = r13;
            var_3a8 = var_360;
            int128_t* var_3a0_2 = r15_2;
            var_390 = r14_1;
            *var_390[1] = rax_22;
            int64_t r12_4;
            void** var_368;
            uint64_t rax_23;
            void* const rdx_11;
            
            if (rbp_2 != -0x8000000000000000)
            {
                rbp_2 = 1;
                r15_2 = 1;
                r12_4 = rax_7;
                std::fs::File::create::h2f5971c059453d14(&var_438, &var_3c8);
                r15_2 = 1;
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h3a9194a7936d8fc3(&result_2, &var_438);
                result = result_2;
                rbp_2 = 1;
                
                if (!result)
                {
                    rbp_2 = 1;
                    r15_2 = 1;
                    rax_23 = alloc::boxed::Box$LT$T$GT$::new::hbb3d70d0569267e6(var_368);
                    rdx_11 = &data_4f90a0;
                    goto label_45f57b;
                }
                
                r15_2 = 1;
            }
            else
            {
                rbp_2 = 1;
                r15_2 = 1;
                r12_4 = rax_7;
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                r15_2 = 1;
                rax_23 = alloc::boxed::Box$LT$T$GT$::new::hf4381db234660265(
                    &std::io::stdio::STDOUT::h411b213c5c9add46);
                rdx_11 = &data_4f9048;
                label_45f57b:
                rbp_2 = 1;
                r15_2 = 1;
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hde16fa8d922ef556(
                    &var_2f8, rax_23, rdx_11);
                
                if (!((0 - 0) | rdx_6))
                {
                    rbp_2 = 1;
                    result = 0;
                    r15_2 = 1;
                }
                else
                {
                    int32_t var_380;
                    
                    if (var_3b0 != -0x8000000000000000)
                    {
                        rbp_2 = 1;
                        r15_2 = 1;
                        std::fs::File::open::h7a160c4deb55eb11(&var_438, &var_3b0);
                        r15_2 = 1;
                        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h5ca446cc5f876c2d(&result_2, &var_438);
                        result = result_2;
                        rbp_2 = 1;
                        
                        if (!result)
                        {
                            int32_t var_37c_1 = var_368;
                            var_380 = 0;
                            
                            if (r12_4)
                                goto label_45f5e1;
                            
                            goto label_45f720;
                        }
                        
                        r15_2 = 1;
                    }
                    else
                    {
                        rbp_2 = 1;
                        r15_2 = 1;
                        int64_t* var_378_1 = rand::rngs::thread::rng::h4ff389470e265d23();
                        var_380 = 1;
                        
                        if (!r12_4)
                        {
                            label_45f720:
                            int64_t r12_5 = var_3e8;
                            int64_t r15_3 = *var_3e8[8];
                            uu_shuf::read_input_file::h0dd917eae59a80a6(&var_438, r15_3, var_3d8);
                            void (* r13_1)() __noreturn = var_438;
                            result = result_1;
                            
                            if (r13_1 == -0x8000000000000000)
                                goto label_45f7bd;
                            
                            uu_shuf::split_seps::he07f8c4bbcda6c2a(&var_438, result, var_428, 
                                *var_390[1]);
                            uint64_t result_5;
                            void** rdx_22;
                            result_5 = uu_shuf::shuf_exec::h79873914e861185e(&var_438, &var_3c8, 
                                &var_380, &var_2f8);
                            
                            if (!result_5)
                            {
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8013aa03af9fd79f(var_438, result_1);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::he88919c0f298a561(r13_1, result);
                                core::mem::drop::haba8bbc81b3b7f82(r12_5, r15_3);
                                rbp_2 = 1;
                                label_45f89e:
                                core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::ha4d21bee6a71849c(&var_380);
                                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..display..OsWrite$GT$$GT$$GT$::h82c51d27cb490d12(&var_2f8);
                                core::ptr::drop_in_place$LT$uu_shuf..Options$GT$::h26199cbe53904ea6(
                                    &var_3c8);
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h05c4f566b5c53a35(&var_350);
                                return 0;
                            }
                            
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8013aa03af9fd79f(var_438, result_1);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::he88919c0f298a561(r13_1, result);
                            result = result_5;
                            label_45f7bd:
                            core::mem::drop::haba8bbc81b3b7f82(r12_5, r15_3);
                            rbp_2 = 1;
                            r15_2 = nullptr;
                            r12_4 = rax_7;
                            core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::ha4d21bee6a71849c(
                                &var_380);
                        }
                        else
                        {
                            label_45f5e1:
                            
                            if (r12_4 != 1)
                            {
                                var_428 = var_3d8;
                                var_438 = var_3e8;
                                uint64_t result_4;
                                void** rdx_18;
                                result_4 = uu_shuf::shuf_exec::hf79dbab0ae70f8a2(&var_438, 
                                    &var_3c8, &var_380, &var_2f8);
                                result = result_4;
                                
                                if (!result_4)
                                {
                                    rbp_2 = 1;
                                    r15_2 = 1;
                                    goto label_45f89e;
                                }
                                
                                rbp_2 = 1;
                                r15_2 = 1;
                                core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::ha4d21bee6a71849c(&var_380);
                            }
                            else
                            {
                                core::iter::traits::iterator::Iterator::collect::h5369f70057094df7(
                                    &var_438, *var_3e8[8]);
                                uint64_t result_3;
                                void** rdx_15;
                                result_3 = uu_shuf::shuf_exec::h8c6a34276eb3a6e3(&var_438, 
                                    &var_3c8, &var_380, &var_2f8);
                                result = result_3;
                                
                                if (!result_3)
                                {
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8013aa03af9fd79f(var_438, result_1);
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h3d87a4ccf2b72ae9(&var_3e8);
                                    r15_2 = 1;
                                    goto label_45f89e;
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8013aa03af9fd79f(var_438, result_1);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h3d87a4ccf2b72ae9(&var_3e8);
                                r15_2 = 1;
                                rbp_2 = 0;
                                core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::ha4d21bee6a71849c(&var_380);
                            }
                        }
                    }
                }
                
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..display..OsWrite$GT$$GT$$GT$::h82c51d27cb490d12(&var_2f8);
            }
            core::ptr::drop_in_place$LT$uu_shuf..Options$GT$::h26199cbe53904ea6(&var_3c8);
            
            if (r12_4 != 2)
            {
                if (r12_4 != 1)
                {
                    if (r15_2)
                        core::mem::drop::haba8bbc81b3b7f82(var_3e8, *var_3e8[8]);
                }
                else if (rbp_2)
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h3d87a4ccf2b72ae9(&var_3e8);
            }
        }
        else
        {
            void* const r14_2 = "file-or-args(uutils coreutils) 0…";
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h59f6811787992051(
                &var_2f8, &var_350, "file-or-args(uutils coreutils) 0…", 0xc);
            clap_builder::parser::error::MatchesError::unwrap::h3b06173179f33a28(&var_438, 
                "file-or-args(uutils coreutils) 0…", 0xc, &var_2f8);
            
            if (!var_438)
            {
                var_3c8 = core::ops::function::FnOnce::call_once::hcf99c56a241a2abc;
                char const* const var_3c0_1 = "/home/34r7hm4n/.cargo/registry/s…";
                char const* const var_3b8_1 = "/home/34r7hm4n/.cargo/registry/s…";
                var_3b0 = 0;
                int64_t var_3a0_1 = 0;
                var_390 = 0;
            }
            else
            {
                void* var_398 = var_408;
                var_3a8 = var_418;
                int64_t var_3b8;
                var_3b8 = var_428;
                var_3c8 = var_438;
            }
            
            void* rax_8 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h69219f20d5bc9bd7(&var_3c8);
            int64_t rbp_1;
            
            if (!rax_8)
                rbp_1 = -0x8000000000000000;
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h10351ebe9e4824c9(&var_2f8, *(rax_8 + 8), *(rax_8 + 0x10));
                rbp_1 = var_2f8;
                arg2 = *var_2f8[8];
                r14_2 = var_2e8;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h07c2de588eccaa05(&var_2f8, "-failed to open random source fa…", 1);
            int64_t r12_1 = var_2f8;
            int64_t r15_1 = *var_2f8[8];
            
            if (rbp_1 != -0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hda7a5348c59c9f41(
                    r12_1, r15_1);
                r15_1 = arg2;
                r12_1 = rbp_1;
            }
            else
                r14_2 = var_2e8;
            
            void* rax_9 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h69219f20d5bc9bd7(&var_3c8);
            
            if (!rax_9)
            {
                var_3e8 = r12_1;
                *var_3e8[8] = r15_1;
                var_3d8 = r14_2;
                int64_t var_3f0_3 = 0;
                rax_7 = 0;
                goto label_45f287;
            }
            
            int64_t rcx_8 = *(rax_9 + 8);
            int64_t rax_10 = *(rax_9 + 0x10);
            var_438 = 1;
            int64_t var_430 = rcx_8;
            var_428 = rax_10;
            *var_428[8] = 1;
            result_2 = &var_438;
            int64_t (* var_368_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_2f8 = &data_4f8fa0;
            *var_2f8[8] = 2;
            int128_t var_2d8;
            var_2d8 = 0;
            var_2e8 = &result_2;
            int64_t var_2e0_1 = 1;
            int128_t var_310;
            core::option::Option$LT$T$GT$::map_or_else::h0b421a2599015f91(&var_310, &var_2f8);
            var_2e0_1 = 1;
            var_2f8 = var_310;
            int64_t var_300;
            var_2e8 = var_300;
            result = alloc::boxed::Box$LT$T$GT$::new::h27ff8fca799d73dd(&var_2f8);
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hda7a5348c59c9f41(r12_1, 
                r15_1);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h05c4f566b5c53a35(&var_350);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(result_1);
    return result;
}
