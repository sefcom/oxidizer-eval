
  int64_t* uu_cp::uumain::uumain::h74b80fd09c0cbfbe(int64_t arg1)

{
    int64_t var_2f8;
    uu_cp::uu_app::h07bd295c994b8bb6(&var_2f8);
    int64_t var_330;
    clap_builder::builder::command::Command::try_get_matches_from::h651af958e68d2ef9(&var_330, 
        &var_2f8, arg1);
    int64_t* result;
    int128_t var_4b8;
    int128_t var_3c8;
    int64_t var_390;
    int64_t rbp;
    
    if (var_330 != -0x8000000000000000)
    {
        int64_t var_300;
        int64_t var_398_1 = var_300;
        int128_t var_310;
        int128_t var_3a8_1 = var_310;
        int128_t var_320;
        int128_t var_3b8_1 = var_320;
        var_3c8 = var_330;
        uu_cp::Options::from_matches::h583c69bc9ce4dd71(&var_2f8, &var_3c8);
        int64_t rax_2 = var_2f8;
        int128_t var_2f0;
        var_4b8 = var_2f0;
        int128_t var_2c0;
        int128_t var_488_1 = var_2c0;
        int128_t var_2e0;
        int128_t var_2d0;
        
        if (rax_2 != -0x8000000000000000)
        {
            int40_t var_358_1 = var_488_1;
            int128_t var_388_1 = var_4b8;
            int128_t var_378_1 = var_2e0;
            int128_t var_368_1 = var_2d0;
            var_390 = rax_2;
            int64_t var_2b0;
            int64_t var_348_1 = var_2b0;
            
            if (!_$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::hba025a570c73f0e5(*var_358_1[4]) || !(var_2b0 & 0xff00000000))
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many::hf6069bd586c08c95(&var_2f8);
                int64_t* rcx_2 = &var_2f8;
                int64_t rdx_2 = 5;
                clap_builder::parser::error::MatchesError::unwrap::hbf61384cbe11cbdd(&var_4b8, 
                    "pathsUnknownErrnoEPERMENOENTESRC…", 5, rcx_2);
                void* const var_448;
                void* const rax_10;
                
                if (!var_4b8)
                    rax_10 = -0x8000000000000000;
                else
                {
                    int128_t var_458;
                    int128_t var_298_1 = var_458;
                    int128_t var_468;
                    int128_t var_2a8_1 = var_468;
                    int128_t var_478;
                    var_2c0 = var_478;
                    int128_t zmm1_3 = var_2e0;
                    int128_t zmm2_3 = var_2d0;
                    var_2d0 = var_488_1;
                    var_2e0 = zmm2_3;
                    var_2f0 = zmm1_3;
                    var_2f8 = var_4b8;
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::he9171c490969f9a3(&var_448, &var_2f8);
                    rax_10 = var_448;
                    int64_t var_440;
                    rdx_2 = var_440;
                    int64_t* var_438;
                    rcx_2 = var_438;
                }
                
                bool cond:0_1 = rax_10 != -0x8000000000000000;
                bool cond:1_1 = rax_10 == -0x8000000000000000;
                
                if (rax_10 == -0x8000000000000000)
                    rax_10 = nullptr;
                
                int64_t rdi_21 = 8;
                
                if (cond:0_1)
                    rdi_21 = rdx_2;
                
                if (cond:1_1)
                    rcx_2 = nullptr;
                
                var_448 = rax_10;
                int64_t var_440_1 = rdi_21;
                int64_t* var_438_1 = rcx_2;
                uu_cp::parse_path_args::h55a50a93a970390a(&var_2f8, &var_448, &var_390);
                int64_t rax_11 = var_2f8;
                var_4b8 = var_2f0;
                
                if (rax_11 == 0xd)
                {
                    int64_t rdx_4 = var_2e0;
                    int64_t var_3f8_1 = rdx_4;
                    int128_t var_408 = var_4b8;
                    uint64_t r8_1 = *var_2d0[8];
                    uint64_t var_3d8_1 = r8_1;
                    int128_t var_3e8 = var_2e0;
                    uu_cp::copy::h5586f24b20d7299d(&var_4b8, *var_408[8], rdx_4, *var_3e8[8], r8_1, 
                        &var_390);
                    int64_t r14_2 = var_4b8;
                    rbp = 1;
                    
                    if (r14_2 != 0xd)
                    {
                        int128_t zmm1_5 = var_2e0;
                        int128_t zmm2_5 = var_2d0;
                        var_2f8 = var_4b8;
                        var_2d0 = var_488_1;
                        var_2e0 = zmm2_5;
                        var_2f0 = zmm1_5;
                        
                        if (var_2f8 != 5)
                        {
                            int64_t* rax_12;
                            int64_t rdx_5;
                            rax_12 = uucore::util_name::h60d842bf27b05e82();
                            int64_t* var_418 = rax_12;
                            int64_t var_410_1 = rdx_5;
                            int64_t* var_340 = &var_418;
                            int64_t (* var_338_1)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb9d827e717605a19;
                            var_448 = &data_5b2220;
                            int64_t var_440_2 = 2;
                            int64_t var_428_1 = 0;
                            int64_t** var_438_2 = &var_340;
                            int64_t var_430_1 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_448);
                            var_418 = &var_2f8;
                            int64_t (* var_410_2)(int64_t* arg1, void* arg2) = _$LT$uu_cp..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hb0ee62246d91c7b9;
                            var_448 = &data_5b2240;
                            int64_t var_440_3 = 2;
                            int64_t var_428_2 = 0;
                            int64_t** var_438_3 = &var_418;
                            int64_t var_430_2 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_448);
                        }
                        
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                        core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h7e81e8370de57ef1(&var_2f8);
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc6dd044fb69db49e(&var_3e8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hefbacff032b8b327(&var_408);
                    core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h09fe722a3f614d90(&var_390);
                    
                    if (r14_2 == 0xd && var_4b8 != 0xd)
                        core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h7e81e8370de57ef1(&var_4b8);
                    
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h67c8a88181f3246d(&var_3c8);
                    return nullptr;
                }
                
                int128_t var_2d0_1 = var_2d0;
                int128_t var_2e0_1 = var_2e0;
                int128_t var_2f0_1 = var_4b8;
                var_2f8 = rax_11;
                var_2c0 = var_2c0;
                result = alloc::boxed::Box$LT$T$GT$::new::h112e90f6cf14cc0a(&var_2f8);
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3b5d29524d766f5a(
                    &var_4b8);
                *var_2f0[8] = var_2e0;
                var_2f8 = var_4b8;
                var_2e0 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::h755e6a8ebff87d1a(&var_2f8);
            }
            
            core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h09fe722a3f614d90(&var_390);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h67c8a88181f3246d(&var_3c8);
        }
        else
        {
            int128_t zmm1_2 = var_2e0;
            int128_t zmm2_2 = var_2d0;
            var_2d0 = var_488_1;
            var_2e0 = zmm2_2;
            var_2f0 = zmm1_2;
            var_2f8 = var_4b8;
            result = alloc::boxed::Box$LT$T$GT$::new::h112e90f6cf14cc0a(&var_2f8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h67c8a88181f3246d(&var_3c8);
        }
    }
    else
    {
        uu_cp::uu_app::h07bd295c994b8bb6(&var_2f8);
        int32_t* var_328;
        uint32_t rax = *(var_328 + 0xd5);
        
        if (rax == 0xc)
        {
            rbp = 1;
            
            if (!clap_builder::builder::command::Command::print_help::ha75f02ad65e70b14(&var_2f8))
                goto label_4a6b5b;
            
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha30265b204388bf3(&var_2f8);
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h738614231796cf96(var_328);
        }
        else
        {
            if (rax == 0xe)
            {
                rbp = 1;
                clap_builder::builder::command::Command::render_version::h6726fbcc2d48ef38(
                    &var_390, &var_2f8);
                var_3c8 = &var_390;
                *var_3c8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_4b8 = &data_41e7f0;
                *var_4b8[8] = 1;
                int128_t var_498;
                var_498 = 0;
                int128_t var_4a8;
                var_4a8 = &var_3c8;
                *var_4a8[8] = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_4b8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8dfa2e974c7791a7(&var_390);
                label_4a6b5b:
                core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha30265b204388bf3(&var_2f8);
                core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h738614231796cf96(
                    var_328);
                return nullptr;
            }
            
            result = alloc::boxed::Box$LT$T$GT$::new::h7f9c3bcb3656a690(var_328);
            core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha30265b204388bf3(&var_2f8);
        }
    }
    return result;
}
