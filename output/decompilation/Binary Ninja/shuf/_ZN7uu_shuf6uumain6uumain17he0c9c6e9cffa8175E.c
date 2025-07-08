
  int64_t* uu_shuf::uumain::uumain::he0c9c6e9cffa8175(int64_t arg1)

{
    int128_t var_318;
    uu_shuf::uu_app::h710a705446bc3bb0(&var_318);
    int64_t** var_4b8;
    clap_builder::builder::command::Command::try_get_matches_from::hb99de62d0bac49c5(&var_4b8, 
        &var_318, arg1);
    int64_t** rax = var_4b8;
    int64_t* result;
    char* var_4b0;
    
    if (rax != -0x8000000000000000)
    {
        char* var_488;
        char* var_3b8_1 = var_488;
        int128_t var_498;
        int128_t var_3c8_1 = var_498;
        uint128_t var_4a8;
        uint128_t var_3d8_1 = var_4a8;
        int64_t** var_3e8 = rax;
        char* var_3e0_1 = var_4b0;
        int64_t var_480;
        int64_t var_458_1;
        int128_t var_450;
        void** var_440_1;
        void** var_308;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3e8, "echoERANGEEDEADLKENAMETOOLONGENO…", 4))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1c55b0f937b7ea2b(
                &var_318, &var_3e8, "file-or-argssrc/uu/shuf/src/shuf…", 0xc);
            char const* const rsi_3 = "file-or-argssrc/uu/shuf/src/shuf…";
            clap_builder::parser::error::MatchesError::unwrap::h15a6d75047b4cc93(&var_4b8, 
                "file-or-argssrc/uu/shuf/src/shuf…", 0xc, &var_318);
            int64_t** rax_3 = var_4b8;
            char const* const rcx_3;
            int64_t rdx_1;
            int128_t zmm0_2;
            uint128_t zmm1_2;
            
            if (!rax_3)
            {
                zmm0_2 = {0};
                zmm1_2 = "a Display implementation returne…";
                rcx_3 = "a Display implementation returne…";
                rax_3 = core::ops::function::FnOnce::call_once::h1a1f904dbec84d2c;
                rdx_1 = 0;
            }
            else
            {
                rcx_3 = var_4b0;
                zmm1_2 = var_4a8;
                zmm0_2 = var_498;
                rsi_3 = var_488;
                rdx_1 = var_480;
            }
            
            int64_t** var_398 = rax_3;
            char const* const var_390_1 = rcx_3;
            uint128_t var_388_1 = zmm1_2;
            int128_t var_378_1 = zmm0_2;
            char const* const var_368_1 = rsi_3;
            int64_t var_360_1 = rdx_1;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd3beca26ae3e93d6(&var_318, &var_398);
            var_440_1 = var_308;
            var_450 = var_318;
            var_458_1 = 1;
            goto label_47017a;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5130577ecdee41f3(
            &var_318, &var_3e8, "input-rangehead-countoutputrando…", 0xb);
        void* rax_4 = clap_builder::parser::error::MatchesError::unwrap::h700c3f9b5e5ff3dc(
            "input-rangehead-countoutputrando…", 0xb, &var_318);
        int64_t* result_1;
        void** var_4c8;
        int64_t var_478;
        void** var_468;
        void (* var_438)() __noreturn;
        int64_t var_420;
        int128_t var_418;
        int128_t var_408;
        int16_t var_400;
        
        if (!rax_4)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1c55b0f937b7ea2b(
                &var_318, &var_3e8, "file-or-argssrc/uu/shuf/src/shuf…", 0xc);
            clap_builder::parser::error::MatchesError::unwrap::h15a6d75047b4cc93(&var_4b8, 
                "file-or-argssrc/uu/shuf/src/shuf…", 0xc, &var_318);
            
            if (!var_4b8)
            {
                var_438 = core::ops::function::FnOnce::call_once::h1a1f904dbec84d2c;
                char const* const var_430_1 = "a Display implementation returne…";
                char const* const var_428_2 = "a Display implementation returne…";
                var_420 = 0;
                int64_t var_410_2 = 0;
                var_400 = 0;
            }
            else
            {
                var_408 = var_488;
                var_418 = var_498;
                int64_t var_428;
                var_428 = var_4a8;
                var_438 = var_4b8;
            }
            
            void* rax_24 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5474297f1719323f(&var_438);
            
            if (!rax_24)
                result_1 = -0x8000000000000000;
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_318, rax_24);
                var_4c8 = var_308;
                result_1 = var_318;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h118a158527e98cdc(
                &var_318, "-unexpected argument '' foundno …", 1);
            var_4a8 = var_308;
            var_4b8 = var_318;
            
            if (result_1 != -0x8000000000000000)
            {
                var_468 = var_4c8;
                var_478 = result_1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_4b8);
            }
            else
            {
                var_468 = var_4a8;
                var_478 = var_4b8;
            }
            
            int64_t* result_6 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5474297f1719323f(&var_438);
            
            if (!result_6)
            {
                var_440_1 = var_468;
                var_450 = var_478;
                var_458_1 = 0;
                goto label_47017a;
            }
            
            result_1 = result_6;
            var_4b8 = &result_1;
            int64_t (* var_4b0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb52ac8e4df106051;
            var_318 = &data_534da0;
            *var_318[8] = 2;
            int64_t var_2f8_1 = 0;
            int64_t*** var_308_3 = &var_4b8;
            int32_t var_300;
            var_300 = 1;
            int128_t var_3b0;
            core::option::Option$LT$T$GT$::map_or_else::h56059d1a533ad2f3(&var_3b0, &var_318);
            int32_t var_300_3 = 1;
            var_318 = var_3b0;
            int64_t var_3a0;
            int64_t var_308_4 = var_3a0;
            result = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&var_318);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_478);
        }
        else
        {
            uu_shuf::parse_range::h895d1bf452e4062a(&var_4b8, *(rax_4 + 8), *(rax_4 + 0x10));
            
            if (!var_4b8)
            {
                var_440_1 = *var_4a8[8];
                var_450 = var_4b0;
                var_458_1 = 2;
                label_47017a:
                int64_t r13;
                r13 = 1;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1c55b0f937b7ea2b(&var_318, &var_3e8, "head-countoutputrandom-sourcerep…", 0xa);
                r13 = 1;
                char* rsi_8 = "head-countoutputrandom-sourcerep…";
                clap_builder::parser::error::MatchesError::unwrap::h15a6d75047b4cc93(&var_4b8, 
                    "head-countoutputrandom-sourcerep…", 0xa, &var_318);
                int64_t** rax_7 = var_4b8;
                char const* const rcx_6;
                int64_t rdx_4;
                int128_t zmm0_5;
                uint128_t zmm1_3;
                
                if (!rax_7)
                {
                    zmm0_5 = {0};
                    zmm1_3 = "a Display implementation returne…";
                    rcx_6 = "a Display implementation returne…";
                    rax_7 = core::ops::function::FnOnce::call_once::h1a1f904dbec84d2c;
                    rdx_4 = 0;
                }
                else
                {
                    rcx_6 = var_4b0;
                    zmm1_3 = var_4a8;
                    zmm0_5 = var_498;
                    rsi_8 = var_488;
                    rdx_4 = var_480;
                }
                
                int64_t** var_358 = rax_7;
                char const* const var_350_1 = rcx_6;
                uint128_t var_348_1 = zmm1_3;
                int128_t var_338_1 = zmm0_5;
                char* var_328_1 = rsi_8;
                int64_t var_320_1 = rdx_4;
                r13 = 1;
                void var_48;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h8ae58320f9a9f8d8(&var_48, &var_358);
                r13 = 1;
                uu_shuf::parse_head_count::h8e9cdbfd7a5f28a8(&var_478, &var_48);
                char rax_20;
                
                if (var_478 != -0x8000000000000000)
                {
                    void** var_308_2 = var_468;
                    var_318 = var_478;
                    int32_t var_300_2 = 1;
                    r13 = 1;
                    result = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&var_318);
                    r13 = 1;
                    rax_20 = 0;
                }
                else
                {
                    r13 = 1;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5130577ecdee41f3(&var_318, &var_3e8, "outputrandom-sourcerepeatzero-te…", 6);
                    r13 = 1;
                    void* rax_8 =
                        clap_builder::parser::error::MatchesError::unwrap::h700c3f9b5e5ff3dc(
                        "outputrandom-sourcerepeatzero-te…", 6, &var_318);
                    
                    if (!rax_8)
                        result_1 = -0x8000000000000000;
                    else
                    {
                        r13 = 1;
                        core::ops::function::FnOnce::call_once::h7c91e57bb3d70dfc(&var_318, rax_8);
                        var_4c8 = var_308;
                        result_1 = var_318;
                    }
                    
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5130577ecdee41f3(&var_318, &var_3e8, "random-sourcerepeatzero-terminat…", 0xd);
                    void* rax_12 =
                        clap_builder::parser::error::MatchesError::unwrap::h700c3f9b5e5ff3dc(
                        "random-sourcerepeatzero-terminat…", 0xd, &var_318);
                    
                    if (!rax_12)
                        var_4b8 = -0x8000000000000000;
                    else
                    {
                        core::ops::function::FnOnce::call_once::h7c91e57bb3d70dfc(&var_318, rax_12);
                        var_4a8 = var_308;
                        var_4b8 = var_318;
                    }
                    
                    int32_t rax_14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3e8, "repeatzero-terminatedfile-or-arg…", 6);
                    char rax_16 = 0xa;
                    
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3e8, "zero-terminatedfile-or-argssrc/u…", 0xf))
                        rax_16 = 0;
                    
                    void** var_470;
                    var_408 = var_470;
                    var_438 = result_1;
                    var_420 = var_4b8;
                    int64_t var_410_1 = var_4a8;
                    var_400 = rax_14;
                    *var_400[1] = rax_16;
                    int32_t var_4d0;
                    bool rax_21;
                    int32_t rbp_1;
                    
                    if (var_470)
                    {
                        int64_t var_2f8;
                        
                        if (!var_458_1)
                        {
                            void** var_468_1 = var_440_1;
                            var_478 = var_450;
                            rbp_1 = 1;
                            uu_shuf::read_input_file::h39a00d9d5113d201(&var_318, var_470, 
                                var_440_1);
                            int64_t* result_5 = var_318;
                            result = *var_318[8];
                            bool rbx_1 = result_5 != -0x8000000000000000;
                            bool var_3f0_1;
                            
                            if (result_5 == -0x8000000000000000)
                            {
                                var_3f0_1 = rbx_1;
                                rbp_1 = 1;
                            }
                            else
                            {
                                result_1 = result_5;
                                var_4d0 = result;
                                void** const var_4c8_2 = var_308;
                                int128_t* rax_22 =
                                    alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 0x10);
                                
                                if (!rax_22)
                                {
                                    rbp_1 = 1;
                                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                                    /* no return */
                                }
                                
                                *rax_22 = var_4d0;
                                rbp_1 = 1;
                                alloc::slice::hack::into_vec::hd1dfd8daa9e7ad57(&var_4b8, rax_22, 
                                    1);
                                rbp_1 = 1;
                                uu_shuf::find_seps::h99b31571ceae9626(&var_4b8, *var_400[1]);
                                int128_t var_2e8_2 = var_408;
                                var_2f8 = var_418;
                                var_308 = var_4c8;
                                var_318 = var_438;
                                int128_t* result_3;
                                void** rdx_10;
                                result_3 =
                                    uu_shuf::shuf_exec::hac410ad30c9cf5e0(&var_4b8, &var_318);
                                result = result_3;
                                
                                if (!result_3)
                                {
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&var_4b8);
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ef57aee3fe1037c(&result_1);
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_478);
                                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&var_3e8);
                                    return nullptr;
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&var_4b8);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ef57aee3fe1037c(&result_1);
                                var_3f0_1 = rbx_1;
                            }
                            
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_478);
                            r13 = 0;
                            rax_21 = var_3f0_1;
                            goto label_470a3a;
                        }
                        
                        if (var_458_1 != 1)
                        {
                            var_4a8 = var_440_1;
                            var_4b8 = var_450;
                            int128_t var_2e8_3 = var_408;
                            var_2f8 = var_418;
                            var_308 = var_4c8;
                            var_318 = var_438;
                            r13 = 1;
                            int128_t* result_4;
                            void** rdx_11;
                            result_4 = uu_shuf::shuf_exec::h63b6b406387eb323(&var_4b8, &var_318);
                            result = result_4;
                            
                            if (!result_4)
                            {
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&var_3e8);
                                return nullptr;
                            }
                            
                            r13 = 1;
                            rax_20 = 0;
                        }
                        else
                        {
                            void** var_4c8_1 = var_440_1;
                            result_1 = var_450;
                            void* rsi_16 = var_4d0;
                            rbp_1 = 1;
                            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h0c1703a302f6baf2(&var_4b8, rsi_16, rsi_16 + var_440_1 * 0x18);
                            rbp_1 = 1;
                            uu_shuf::find_seps::h99b31571ceae9626(&var_4b8, *var_400[1]);
                            int128_t var_2e8_1 = var_408;
                            var_2f8 = var_418;
                            var_308 = var_4c8;
                            var_318 = var_438;
                            int128_t* result_2;
                            void** rdx_8;
                            result_2 = uu_shuf::shuf_exec::hac410ad30c9cf5e0(&var_4b8, &var_318);
                            result = result_2;
                            
                            if (!result_2)
                            {
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&var_4b8);
                                r13 = 1;
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hecb8eb1545457149(&result_1);
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&var_3e8);
                                return nullptr;
                            }
                            
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&var_4b8);
                            r13 = 1;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hecb8eb1545457149(&result_1);
                            rax_20 = 1;
                            r13 = 1;
                        }
                    }
                    else if (var_438 != -0x8000000000000000)
                    {
                        void** var_308_5 = var_4c8;
                        var_318 = var_438;
                        std::fs::File::create::hb8ccd5b0dd142e83(&var_4b8, *var_318[8]);
                        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h67140753012254c0(&result_1, &var_4b8, &var_318);
                        result = result_1;
                        
                        if (!result)
                        {
                            var_478 = var_4d0;
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::h7b66de550f035524(
                                &var_478);
                            rbp_1 = 1;
                            r13 = 1;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_318);
                            r13 = 1;
                            result = nullptr;
                        }
                        else
                        {
                            rbp_1 = 1;
                            r13 = 1;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_318);
                            r13 = 1;
                        }
                        
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h03d131beae776ea8(&var_420);
                        rax_20 = 0;
                    }
                    else
                    {
                        r13 = 1;
                        result = nullptr;
                        rax_21 = false;
                        label_470a3a:
                        
                        if (!rax_21 && var_438 != -0x8000000000000000)
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_438);
                            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h03d131beae776ea8(&var_420);
                            rax_20 = 0;
                        }
                        else if (!rax_21)
                        {
                            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h03d131beae776ea8(&var_420);
                            rax_20 = 0;
                        }
                        else
                            rax_20 = 0;
                    }
                }
                
                if (!var_458_1)
                {
                    if (r13)
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(
                            &var_450);
                }
                else if (var_458_1 == 1 && !rax_20)
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hecb8eb1545457149(&var_450);
            }
            else
            {
                int64_t var_308_1 = *var_4a8[8];
                var_318 = var_4b0;
                int32_t var_300_1 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&var_318);
            }
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&var_3e8);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_4b0);
    return result;
}
