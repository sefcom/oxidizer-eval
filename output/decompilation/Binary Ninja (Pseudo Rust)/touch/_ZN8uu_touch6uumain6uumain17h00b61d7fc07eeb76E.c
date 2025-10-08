
  fn uu_touch::uumain::uumain::h00b61d7fc07eeb76(arg1: i64) -> u64

{
    let mut var_2f8: u64;
    uu_touch::uu_app::h87dc9501cc8a91b8(&var_2f8);
    let mut var_3a8: i64;
    clap_builder::builder::command::Command::try_get_matches_from::ha75500579b5057ef(&var_3a8, 
        &var_2f8, arg1);
    let rax: i64 = var_3a8;
    let mut var_3a0: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3a0);
    }
    
    let var_378: i64;
    let var_3b0_1: i64 = var_378;
    let mut var_388: i128;
    let var_3c0_1: i128 = var_388;
    let mut var_398: i128;
    let var_3d0_1: i128 = var_398;
    let mut var_3e0: i64 = rax;
    let var_3d8_1: i64 = var_3a0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h2f81de9b8b326350(
        &var_2f8, &var_3e0, "filessrc/uu/touch/src/touch.rs19…", 5);
    clap_builder::parser::error::MatchesError::unwrap::h7a77c11b74ac35e8(&var_3a8, 
        "filessrc/uu/touch/src/touch.rs19…", 5, &var_2f8);
    let rax_2: i64 = var_3a8;
    let mut result: u64;
    
    if rax_2 == 0
    {
        result = uu_touch::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hfa7db5e5c19c49bd();
    }
    else
    {
        let var_370: i64;
        let var_300_1: i64 = var_370;
        let var_310_1: i128 = var_388;
        let var_320_1: i128 = var_398;
        let mut var_338: i64 = rax_2;
        let var_330_1: i128 = var_3a0;
        let mut var_438: i64;
        core::iter::traits::iterator::Iterator::collect::h6af070cfaf069711(&var_438, &var_338);
        let mut result_3: u64 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3e0, "no-dereferencefilessrc/uu/touch/…", 0xe);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h836d00c007cc38f2(
            &var_2f8, &var_3e0, "referencetimestampaccessmodifica…", 9);
        let rax_4: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h72b734edb63d908d(
            "referencetimestampaccessmodifica…", 9, &var_2f8);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0b60f984f29437ad(
            &var_2f8, &var_3e0, "datethur]", 4);
        let rax_5: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h72b734edb63d908d("datethur]", 4, 
            &var_2f8);
        let mut r12_1: u64 = -0x8000000000000000;
        let var_459_1: i8 = result_3;
        let mut var_400: u64;
        let result_1: u64;
        let var_2e8: u64;
        
        if rax_5 != 0
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_2f8, rax_5);
            r12_1 = var_2f8;
            result_3 = result_1;
            var_400 = var_2e8;
        }
        
        let mut rbx_1: u64 = "timestampaccessmodificationno-cr…";
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0b60f984f29437ad(
            &var_2f8, &var_3e0, "timestampaccessmodificationno-cr…", 9);
        let mut result_2: *mut i64 = &var_2f8;
        let rax_8: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h72b734edb63d908d(
            "timestampaccessmodificationno-cr…", 9, result_2);
        let mut rdi_12: u64;
        
        if rax_8 == 0
        {
            rdi_12 = -0x8000000000000000;
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_2f8, rax_8);
            rdi_12 = var_2f8;
            result_2 = result_1;
            rbx_1 = var_2e8;
        }
        
        let mut result_8: *mut i64 = nullptr;
        let mut result_9: u64 = result_3;
        
        if r12_1 == -0x8000000000000000
        {
            result_9 = 0;
        }
        
        if rdi_12 != -0x8000000000000000
        {
            result_8 = result_2;
        }
        
        let mut var_458_2: u64;
        let mut result_5: u64;
        let var_430: *mut i64;
        let var_428: i64;
        let mut r12_2: u64;
        let mut result_4: u64;
        
        if uu_touch::is_first_filename_timestamp::h32f3ea922c596898(rax_4, result_9, var_400, 
            result_8, rbx_1, var_430, var_428) != 0
        {
            if var_428 == 0
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
                /* no return */
            }
            
            let rsi_9: *mut c_void = *var_430;
            
            if *rsi_9.byte_offset(0x10) != 0xa
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_2f8, rsi_9);
            }
            else
            {
                uu_touch::shr2::h8714b431bd575308(&var_2f8, *rsi_9.byte_offset(8), 0xa);
            }
            
            r12_2 = var_2f8;
            result_4 = result_1;
            rbx_1 = var_2e8;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h601344d7e62d7c5b(rdi_12, result_2);
            let result_6: u64 = result_4;
            let var_458_3: u64 = r12_2;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1206d63c58f066cf(&var_2f8, &var_430[1], var_428 - 1);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h4a208bc490968955(
                var_438, var_430);
            let var_428_1: u64 = var_2e8;
            var_438 = var_2f8;
            result_5 = result_4;
            var_458_2 = r12_2;
            
            if rax_4 != 0
            {
                goto 'label_52a94b;
            }
            
            goto 'label_52aa0c;
        }
        
        result_4 = result_2;
        r12_2 = rdi_12;
        result_5 = result_4;
        var_458_2 = r12_2;
        let mut var_418: i128;
        let mut var_408: u64;
        let mut rbp_1: *mut c_void;
        
        if rax_4 == 0
        {
            'label_52aa0c:
            
            if r12_2 == -0x8000000000000000
            {
                var_418 = -0x7fffffffffffffff;
                rbp_1 = 1;
                goto 'label_52aac1;
            }
            
            uu_touch::parse_timestamp::h36e945b547dfef75(&var_2f8, result_4, rbx_1);
            result = result_1;
            
            if var_2f8 != 1
            {
                *var_418[8] = result;
                var_408 = var_2e8;
                var_418 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8d2cce2e40acf799(var_458_2, 
                    result_5);
                rbp_1 = nullptr;
                goto 'label_52aac1;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8d2cce2e40acf799(var_458_2, 
                result_5);
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h601344d7e62d7c5b(r12_1, result_3);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h4a208bc490968955(
                var_438, var_430);
        }
        else
        {
            'label_52a94b:
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfebea16f99122a4b(&var_2f8, *rax_4.byte_offset(8), *rax_4.byte_offset(0x10));
            var_408 = var_2e8;
            var_418 = var_2f8;
            rbp_1 = 1;
            'label_52aac1:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h01224e89f645dead(&var_2f8, &var_438);
            let mut var_3f8: ();
            core::iter::traits::iterator::Iterator::collect::he9a1102dc169f52d(&var_3f8, &var_2f8);
            let rax_12: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_3e0, "no-createno-dereferencefilessrc/…", 9);
            let rax_13: i8 = uu_touch::determine_atime_mtime_change::he34ebc95df27ae4a(&var_3e0);
            let var_2c8_1: i8 = rax_12;
            let var_2c7_1: i8 = var_459_1;
            let var_2e0_1: i128 = var_418;
            let var_2d0_1: u64 = var_408;
            var_2f8 = r12_1;
            let result_7: u64 = result_3;
            let var_2e8_1: u64 = var_400;
            let var_2c5_1: i8 = rax_13;
            let var_2c6_1: i8 = 0;
            let var_3f0: i64;
            let var_3e8: i64;
            let mut var_368: i64;
            uu_touch::touch::h0be58da63b86e7de(&var_368, var_3f0, var_3e8, &var_2f8);
            let rax_14: i64 = var_368;
            
            if rax_14 == -0x7ffffffffffffffc
            {
                core::ptr::drop_in_place$LT$uu_touch..Options$GT$::hb0e39d6893f0637e(&var_2f8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_touch..InputFile$GT$$GT$::h71b89a8908b0edfb(&var_3f8);
                
                if var_458_2 != -0x8000000000000000 && rbp_1 != 0
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8d2cce2e40acf799(
                        var_458_2, result_5);
                }
                
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf089da88c992188d(&var_3e0);
                return 0;
            }
            
            let var_340: i64;
            *var_388[8] = var_340;
            let var_350: i128;
            var_398 = var_350;
            let var_360: i128;
            var_3a0 = var_360;
            var_3a8 = rax_14;
            result = alloc::boxed::Box$LT$T$GT$::new::h3ec608fb377dcd08(&var_3a8);
            core::ptr::drop_in_place$LT$uu_touch..Options$GT$::hb0e39d6893f0637e(&var_2f8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_touch..InputFile$GT$$GT$::h71b89a8908b0edfb(&var_3f8);
            
            if (var_458_2 != -0x8000000000000000 & rbp_1) == 1
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8d2cce2e40acf799(var_458_2, 
                    result_5);
            }
        }
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf089da88c992188d(&var_3e0);
    result
}
