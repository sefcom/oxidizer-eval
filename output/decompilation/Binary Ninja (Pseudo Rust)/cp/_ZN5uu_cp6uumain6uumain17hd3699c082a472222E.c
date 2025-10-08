
  fn uu_cp::uumain::uumain::hd3699c082a472222(arg1: i64) -> u64

{
    let mut var_358: *mut c_void;
    uu_cp::uu_app::h625d3e37003a837d(&var_358);
    let mut var_390: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h956caabaae4f0d3c(&var_390, 
        &var_358, arg1);
    let mut result: u64;
    let mut var_538: i64;
    let mut var_4b8: i128;
    let mut var_440: *mut c_void;
    
    if !(0 + -(var_390))
    {
        let var_360: i64;
        let var_488_1: i64 = var_360;
        let var_370: i128;
        let var_498_1: i128 = var_370;
        let var_380: i128;
        let var_4a8_1: i128 = var_380;
        var_4b8 = var_390;
        uu_cp::Options::from_matches::hd95c2961bde82c15(&var_358, &var_4b8);
        let rax_2: *mut c_void = var_358;
        let mut var_350: i128;
        let mut var_3c8: i128 = var_350;
        
        if rax_2 != -0x8000000000000000
        {
            let var_308: i128;
            let var_3f0_1: i40 = var_308;
            let var_318: i128;
            let var_400_1: i128 = var_318;
            let var_438_1: i128 = var_3c8;
            let mut var_340: i128;
            let var_428_1: i128 = var_340;
            let mut var_330: i128;
            let var_418_1: i128 = var_330;
            let var_320: i64;
            let var_408_1: i64 = var_320;
            var_440 = rax_2;
            let var_2f8: i48;
            let mut var_528: i64;
            
            if _$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::h7b31402d4d005f5e(
                *var_3f0_1[4]) == 0 || *var_2f8[5] == 0
            {
                let mut rcx_4: i64;
                let mut rdx_1: i64;
                rcx_4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many::h77f30ab5f8558081(&var_358, &var_4b8);
                let mut var_90: i64;
                clap_builder::parser::error::MatchesError::unwrap::he9e2082e2eb3b21b(&var_90, 
                    &var_358);
                let mut rax_10: *mut c_void;
                
                if var_90 == 0
                {
                    rax_10 = -0x8000000000000000;
                }
                else
                {
                    core::iter::traits::iterator::Iterator::collect::h0fea1ef21f65de6a(&var_358, 
                        &var_90);
                    rax_10 = var_358;
                    rdx_1 = var_350;
                    rcx_4 = *var_350[8];
                }
                
                if rax_10 == -0x8000000000000000
                {
                    rcx_4 = 0;
                }
                
                let mut rdi_21: i64 = 8;
                
                if rax_10 != -0x8000000000000000
                {
                    rdi_21 = rdx_1;
                }
                
                if rax_10 == -0x8000000000000000
                {
                    rax_10 = nullptr;
                }
                
                let mut var_4f8: *mut c_void = rax_10;
                let var_4f0_1: i64 = rdi_21;
                let var_4e8_1: i64 = rcx_4;
                uu_cp::parse_path_args::h97e31098febb5d39(&var_358, &var_4f8, &var_440);
                let rax_11: *mut c_void = var_358;
                var_538 = var_350;
                var_528 = var_340;
                
                if rax_11 == -0x7ffffffffffffff4
                {
                    let var_468_1: i64 = var_528;
                    let mut var_478: i128 = var_538;
                    let r8_1: u64 = *var_330[8];
                    let var_448_1: u64 = r8_1;
                    let var_520: i128;
                    let mut var_458: i128 = var_520;
                    uu_cp::copy::h4c277fa9041cf566(&var_538, *var_478[8], var_528, *var_458[8], 
                        r8_1, &var_440);
                    
                    if var_538 != -0x7ffffffffffffff4
                    {
                        let zmm2_4: i128 = var_330;
                        var_358 = var_538;
                        let var_508: i64;
                        *var_330[8] = var_508;
                        var_340 = zmm2_4;
                        var_350 = var_528;
                        
                        if var_358 != -0x7ffffffffffffffc
                        {
                            let mut rax_15: *mut *mut c_void;
                            let mut rdx_5: i64;
                            rax_15 = uucore::util_name::h074417a1e6395129();
                            let mut var_4c8: *mut *mut c_void = rax_15;
                            let var_4c0_1: i64 = rdx_5;
                            let mut var_3d8: *mut *mut *mut c_void = &var_4c8;
                            let var_3d0_1: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb98d0b1b977b6c90;
                            var_4f8 = &data_55ccb8;
                            let var_4f0_2: i64 = 2;
                            let var_4d8_1: i64 = 0;
                            let var_4e8_2: *mut *mut *mut *mut c_void = &var_3d8;
                            let var_4e0_1: i64 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_4f8);
                            var_4c8 = &var_358;
                            let var_4c0_2: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$uu_cp..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hd7b2210609aafcda;
                            var_4f8 = &data_55ccd8;
                            let var_4f0_3: i64 = 2;
                            let var_4d8_2: i64 = 0;
                            let var_4e8_3: *mut *mut *mut c_void = &var_4c8;
                            let var_4e0_2: i64 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_4f8);
                        }
                        
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                        core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h00f8dbb904576b06(&var_358);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_cp..Error$GT$$GT$::he18f4cab0e47db48(&var_538);
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha968234e16ea0383(&var_458);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::ha780561a797e8738(&var_478);
                    core::ptr::drop_in_place$LT$uu_cp..Options$GT$::hd0a504f70147ffcd(&var_440);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb6d896348043e701(&var_4b8);
                    return 0;
                }
                
                let var_330_1: i128 = var_330;
                let var_340_1: i128 = var_528;
                let var_350_1: i128 = var_538;
                var_358 = rax_11;
                result = alloc::boxed::Box$LT$T$GT$::new::hfde4ef50edbf0fc9(&var_358);
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h08a861deafaa742d(&var_538, "options --backup and --no-clobbe…", 0x38);
                *var_350[8] = var_528;
                var_358 = var_538;
                var_340 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::h3a8fb888b0a7a206(&var_358);
            }
            core::ptr::drop_in_place$LT$uu_cp..Options$GT$::hd0a504f70147ffcd(&var_440);
        }
        else
        {
            result = alloc::boxed::Box$LT$T$GT$::new::hfde4ef50edbf0fc9(&var_3c8);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb6d896348043e701(&var_4b8);
    }
    else
    {
        uu_cp::uu_app::h625d3e37003a837d(&var_358);
        let var_388: *mut i32;
        let rax: u32 = *var_388.byte_offset(0xdd);
        let mut rbp: i64;
        
        if rax == 0xc
        {
            rbp = 1;
            
            if clap_builder::builder::command::Command::print_help::h99ccf3e1a23a10fd(&var_358) == 0
            {
                goto 'label_486859;
            }
            
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hb2ae59aa38e8799b(&var_358);
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hdec709022a3ebb47(var_388);
        }
        else
        {
            if rax == 0xe
            {
                rbp = 1;
                clap_builder::builder::command::Command::render_version::heecbe8fc335d188f(
                    &var_538, &var_358);
                var_4b8 = &var_538;
                *var_4b8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_440 = &data_420910;
                let mut var_438: i128;
                var_438 = 1;
                let mut var_428: i128;
                *var_428[8] = 0;
                *var_438[8] = &var_4b8;
                var_428 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_440);
                let var_530: i64;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8d07151f2e89b5fc(var_538, 
                    var_530);
                'label_486859:
                core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hb2ae59aa38e8799b(&var_358);
                core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hdec709022a3ebb47(
                    var_388);
                return 0;
            }
            
            result = alloc::boxed::Box$LT$T$GT$::new::h0fde6174ccd91266(var_388);
            core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hb2ae59aa38e8799b(&var_358);
        }
    }
    result
}
