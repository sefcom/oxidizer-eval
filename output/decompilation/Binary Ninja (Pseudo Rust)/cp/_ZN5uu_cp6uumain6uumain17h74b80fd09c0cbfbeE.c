
  fn uu_cp::uumain::uumain::h74b80fd09c0cbfbe(arg1: i64) -> *mut i64

{
    let mut var_2f8: i64;
    uu_cp::uu_app::h07bd295c994b8bb6(&var_2f8);
    let mut var_330: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h651af958e68d2ef9(&var_330, 
        &var_2f8, arg1);
    let mut result: *mut i64;
    let mut var_4b8: i128;
    let mut var_3c8: i128;
    let mut var_390: i64;
    let mut rbp: i64;
    
    if var_330 != -0x8000000000000000
    {
        let var_300: i64;
        let var_398_1: i64 = var_300;
        let var_310: i128;
        let var_3a8_1: i128 = var_310;
        let var_320: i128;
        let var_3b8_1: i128 = var_320;
        var_3c8 = var_330;
        uu_cp::Options::from_matches::h583c69bc9ce4dd71(&var_2f8, &var_3c8);
        let rax_2: i64 = var_2f8;
        let mut var_2f0: i128;
        var_4b8 = var_2f0;
        let mut var_2c0: i128;
        let var_488_1: i128 = var_2c0;
        let mut var_2e0: i128;
        let mut var_2d0: i128;
        
        if rax_2 != -0x8000000000000000
        {
            let var_358_1: i40 = var_488_1;
            let var_388_1: i128 = var_4b8;
            let var_378_1: i128 = var_2e0;
            let var_368_1: i128 = var_2d0;
            var_390 = rax_2;
            let var_2b0: i64;
            let var_348_1: i64 = var_2b0;
            
            if _$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::hba025a570c73f0e5(
                *var_358_1[4]) == 0 || (var_2b0 & 0xff00000000) == 0
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many::hf6069bd586c08c95(&var_2f8);
                let mut rcx_2: *mut i64 = &var_2f8;
                let mut rdx_2: i64 = 5;
                clap_builder::parser::error::MatchesError::unwrap::hbf61384cbe11cbdd(&var_4b8, 
                    "pathsUnknownErrnoEPERMENOENTESRC…", 5, rcx_2);
                let mut var_448: *mut c_void;
                let mut rax_10: *mut c_void;
                
                if var_4b8 == 0
                {
                    rax_10 = -0x8000000000000000;
                }
                else
                {
                    let var_458: i128;
                    let var_298_1: i128 = var_458;
                    let var_468: i128;
                    let var_2a8_1: i128 = var_468;
                    let var_478: i128;
                    var_2c0 = var_478;
                    let zmm1_3: i128 = var_2e0;
                    let zmm2_3: i128 = var_2d0;
                    var_2d0 = var_488_1;
                    var_2e0 = zmm2_3;
                    var_2f0 = zmm1_3;
                    var_2f8 = var_4b8;
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::he9171c490969f9a3(&var_448, &var_2f8);
                    rax_10 = var_448;
                    let var_440: i64;
                    rdx_2 = var_440;
                    let var_438: *mut i64;
                    rcx_2 = var_438;
                }
                
                let cond:0_1: bool = rax_10 != -0x8000000000000000;
                let cond:1_1: bool = rax_10 == -0x8000000000000000;
                
                if rax_10 == -0x8000000000000000
                {
                    rax_10 = nullptr;
                }
                
                let mut rdi_21: i64 = 8;
                
                if cond:0_1
                {
                    rdi_21 = rdx_2;
                }
                
                if cond:1_1
                {
                    rcx_2 = nullptr;
                }
                
                var_448 = rax_10;
                let var_440_1: i64 = rdi_21;
                let var_438_1: *mut i64 = rcx_2;
                uu_cp::parse_path_args::h55a50a93a970390a(&var_2f8, &var_448, &var_390);
                let rax_11: i64 = var_2f8;
                var_4b8 = var_2f0;
                
                if rax_11 == 0xd
                {
                    let rdx_4: i64 = var_2e0;
                    let var_3f8_1: i64 = rdx_4;
                    let mut var_408: i128 = var_4b8;
                    let r8_1: u64 = *var_2d0[8];
                    let var_3d8_1: u64 = r8_1;
                    let mut var_3e8: i128 = var_2e0;
                    uu_cp::copy::h5586f24b20d7299d(&var_4b8, *var_408[8], rdx_4, *var_3e8[8], r8_1, 
                        &var_390);
                    let r14_2: i64 = var_4b8;
                    rbp = 1;
                    
                    if r14_2 != 0xd
                    {
                        let zmm1_5: i128 = var_2e0;
                        let zmm2_5: i128 = var_2d0;
                        var_2f8 = var_4b8;
                        var_2d0 = var_488_1;
                        var_2e0 = zmm2_5;
                        var_2f0 = zmm1_5;
                        
                        if var_2f8 != 5
                        {
                            let mut rax_12: *mut i64;
                            let mut rdx_5: i64;
                            rax_12 = uucore::util_name::h60d842bf27b05e82();
                            let mut var_418: *mut i64 = rax_12;
                            let var_410_1: i64 = rdx_5;
                            let mut var_340: *mut i64 = &var_418;
                            let var_338_1: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb9d827e717605a19;
                            var_448 = &data_5b2220;
                            let var_440_2: i64 = 2;
                            let var_428_1: i64 = 0;
                            let var_438_2: *mut *mut i64 = &var_340;
                            let var_430_1: i64 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_448);
                            var_418 = &var_2f8;
                            let var_410_2: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$uu_cp..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hb0ee62246d91c7b9;
                            var_448 = &data_5b2240;
                            let var_440_3: i64 = 2;
                            let var_428_2: i64 = 0;
                            let var_438_3: *mut *mut i64 = &var_418;
                            let var_430_2: i64 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_448);
                        }
                        
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                        core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h7e81e8370de57ef1(&var_2f8);
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc6dd044fb69db49e(&var_3e8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hefbacff032b8b327(&var_408);
                    core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h09fe722a3f614d90(&var_390);
                    
                    if r14_2 == 0xd && var_4b8 != 0xd
                    {
                        core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h7e81e8370de57ef1(&var_4b8);
                    }
                    
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h67c8a88181f3246d(&var_3c8);
                    return nullptr;
                }
                
                let var_2d0_1: i128 = var_2d0;
                let var_2e0_1: i128 = var_2e0;
                let var_2f0_1: i128 = var_4b8;
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
            let zmm1_2: i128 = var_2e0;
            let zmm2_2: i128 = var_2d0;
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
        let var_328: *mut i32;
        let rax: u32 = *var_328.byte_offset(0xd5);
        
        if rax == 0xc
        {
            rbp = 1;
            
            if clap_builder::builder::command::Command::print_help::ha75f02ad65e70b14(&var_2f8) == 0
            {
                goto 'label_4a6b5b;
            }
            
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha30265b204388bf3(&var_2f8);
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h738614231796cf96(var_328);
        }
        else
        {
            if rax == 0xe
            {
                rbp = 1;
                clap_builder::builder::command::Command::render_version::h6726fbcc2d48ef38(
                    &var_390, &var_2f8);
                var_3c8 = &var_390;
                *var_3c8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_4b8 = &data_41e7f0;
                *var_4b8[8] = 1;
                let mut var_498: i128;
                var_498 = 0;
                let mut var_4a8: i128;
                var_4a8 = &var_3c8;
                *var_4a8[8] = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_4b8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8dfa2e974c7791a7(&var_390);
                'label_4a6b5b:
                core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha30265b204388bf3(&var_2f8);
                core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h738614231796cf96(
                    var_328);
                return nullptr;
            }
            
            result = alloc::boxed::Box$LT$T$GT$::new::h7f9c3bcb3656a690(var_328);
            core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha30265b204388bf3(&var_2f8);
        }
    }
    result
}
