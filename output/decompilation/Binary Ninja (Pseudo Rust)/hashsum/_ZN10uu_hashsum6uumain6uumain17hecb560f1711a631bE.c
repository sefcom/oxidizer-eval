
  fn uu_hashsum::uumain::uumain::hecb560f1711a631b(arg1: i64, arg2: *mut *mut c_void @ r12) -> u64

{
    let var_28: *mut *mut c_void = arg2;
    let mut var_6a0: i64 = arg1;
    let rsi: i64;
    let var_698: i64 = rsi;
    let mut var_678: *mut i8;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6809b91796b50035(&var_678, &var_6a0);
    let mut r14: *mut i8 = var_678;
    let mut var_608: *mut i8;
    let result_1: u64;
    let var_5f8: *mut *mut c_void;
    let mut rbx: u64;
    let mut result_8: u64;
    
    if -(r14) != -0x8000000000000000
    {
        let result_9: u64;
        result_8 = result_9;
        let var_668: u64;
        rbx = var_668;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h924082c101e1bf1c(&var_608, "hashsum", 7);
        r14 = var_608;
        result_8 = result_1;
        rbx = var_5f8;
    }
    
    let mut rax_2: *mut i16;
    let mut rdx: u64;
    rax_2 = std::path::Path::file_stem::hc69c2d2c61933548(result_8, rbx);
    
    if rax_2 == 0
    {
        rdx = 7;
    }
    
    let mut rsi_3: *mut i16 = "hashsum";
    
    if rax_2 != 0
    {
        rsi_3 = rax_2;
    }
    
    let mut var_690: i64;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_690, rsi_3, rdx);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h24ad0c64921854a8(
        &var_608, result_8, rbx);
    let var_668_1: *mut *mut c_void = var_5f8;
    var_678 = var_608;
    let mut var_630: ();
    core::iter::traits::iterator::Iterator::chain::h3bf3d42a328ca9e8(&var_630, &var_678, var_6a0);
    let var_688: i64;
    let var_680: u64;
    uu_hashsum::uu_app::hd115e3ccac06eb0b(&var_608, var_688, var_680);
    let mut var_2f8: ();
    memcpy(&var_2f8, &var_608, 0x2c8);
    clap_builder::builder::command::Command::try_get_matches_from::h2477954b5349bfdf(&var_608, 
        &var_2f8, &var_630);
    let rax_4: *mut i8 = var_608;
    let mut result: u64;
    
    if rax_4 != -0x8000000000000000
    {
        let var_5d8: i64;
        let var_6a8_1: i64 = var_5d8;
        let mut var_5e8: i128;
        let var_6b8_1: i128 = var_5e8;
        let var_6c8_1: i128 = var_5f8;
        let mut var_6d8: *mut i8 = rax_4;
        let result_6: u64 = result_1;
        let rax_6: i8 = alloc::string::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$alloc..borrow..Cow$LT$str$GT$$GT$::eq::hd1cc9c84389cf4ad(var_688, var_680);
        let mut rax_7: *mut i64;
        
        if rax_6 != 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0c80e907b5f15bf5(
                &var_608, &var_6d8);
            rax_7 = clap_builder::parser::error::MatchesError::unwrap::h81d2f4b559f3983c(&var_608);
        }
        
        let var_340: i8;
        
        if rax_6 != 0 && rax_7 != 0
        {
            uucore::features::checksum::calculate_blake2b_length::hd9514fcefba150b6(&var_608, 
                *rax_7);
            result = result_1;
            arg2 = var_5f8;
            
            if (var_608 & 1) != 0
            {
                goto 'label_476ed8;
            }
            
            if var_340 == 0
            {
                goto 'label_476c6f;
            }
            
            goto 'label_476c4b;
        }
        
        result = 0;
        
        if var_340 != 0
        {
            'label_476c4b:
            uu_hashsum::create_algorithm_from_flags::h1839fc02dfbf2f14(&var_608, &var_6d8);
        }
        else
        {
            'label_476c6f:
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_608, var_688, var_680, 
                result, arg2);
        }
        
        let r14_2: *mut i8 = var_608;
        result = result_1;
        
        if r14_2 == 0
        {
            goto 'label_476ed8;
        }
        
        let rax_9: u64 = var_5e8;
        let rax_10: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "binary", 6);
        
        if rax_10 == 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_6d8, "textSomedumb\x1b[5m\x1b[9m <= tr…", 4);
        }
        
        let rax_11: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "checkstatusquietstrictignore-mis…", 5);
        let rax_12: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "statusquietstrictignore-missingB…", 6);
        let rax_13: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "quietstrictignore-missingBLAKE2b…", 5);
        let rax_14: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "strictignore-missingBLAKE2b-SHA3…", 6);
        let rax_15: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "warnZero\x1b[7mBool", 4);
        let mut var_708_1: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "ignore-missingBLAKE2b-SHA3-384Tr…", 0xe);
        let rbp_1: i8 = rax_13 | rax_12;
        let mut rax_16: i8;
        
        if var_708_1 != 0
        {
            rax_16 = 1;
            
            if rax_11 != 0
            {
                goto 'label_476dd8;
            }
            
            goto 'label_476eb9;
        }
        
        if rax_11 != 0
        {
            'label_476dd8:
            rax_16 = 0xb;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_6d8, "textSomedumb\x1b[5m\x1b[9m <= tr…", 4) |
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_6d8, "binary", 6)) == 1
            {
                goto 'label_476eb9;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3bf65901b64431cc(
                &var_608, &var_6d8);
            clap_builder::parser::error::MatchesError::unwrap::h844fa1597afcc0f3(&var_678, 
                &var_608);
            core::option::Option$LT$T$GT$::map_or_else::hd2bbec04d9e613ae(&var_608, &var_678);
            let mut rcx_4: i32 = 0x1000000;
            
            if rbp_1 == 0
            {
                rcx_4 = ((rax_15 & (rax_12 ^ 1)) | 2) << 0x18;
            }
            
            let mut rax_22: i32 = 0;
            
            if rax_12 == 0
            {
                rax_22 = rcx_4;
            }
            
            let mut result_4: u64;
            let mut rdx_7: *mut *mut c_void;
            result_4 = uucore::features::checksum::perform_checksum_validation::hdca86bf9f51b5f06(
                result_1, (var_5f8 << 4) + result_1, r14_2, result, rax_9, 
                var_708_1 << 8 | rax_14 << 0x10 | rax_22);
            result = result_4;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::h9116bb9b09c5e2b0(var_608, result_1);
            goto 'label_476ecb;
        }
        
        let temp2_1: i8 = rax_14 | rbp_1;
        let var_70b_2: i8 = temp2_1;
        let var_5f0: *mut i64;
        
        if temp2_1 == 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h60048b160616f56c(
                &var_608, &var_6d8);
            let mut result_7: u64;
            
            if var_608 != 2
            {
                result_7 = 0;
            }
            else
            {
                result_7 = result_1;
            }
            
            let mut result_10: u64 = &data_411c1a[0xae];
            
            if result_7 != 0
            {
                result_10 = result_7;
            }
            
            let r14_4: i8 = *result_10;
            let rax_25: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_6d8, "zeroAnsi -- \x1b[8mhelpNonesha1s…", 4);
            let mut rax_27: i64;
            let mut rdx_9: i64;
            rax_27 = var_5f0[5](var_5f8);
            var_708_1 = rdx_9;
            let rax_28: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_6d8, "tagBLAKE2b ( ( *blake2bfailed to…", 3);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3bf65901b64431cc(
                &var_608, &var_6d8);
            let mut var_338: i64;
            clap_builder::parser::error::MatchesError::unwrap::h844fa1597afcc0f3(&var_338, 
                &var_608);
            let mut result_5: *mut *mut i8;
            let mut rdx_10: *mut *mut c_void;
            
            if var_338 == 0
            {
                var_608 = r14_2;
                let result_3: u64 = result;
                let var_5f8_2: i64 = rax_27;
                let var_5f0_2: i64 = var_708_1;
                var_5e8 = rax_9;
                *var_5e8[8] = rax_10;
                *var_5e8[9] = rax_28;
                *var_5e8[0xa] = r14_4;
                *var_5e8[0xb] = rax_25;
                result_5 = uu_hashsum::hashsum::h4817e91e428ae9c2(&var_608);
            }
            else
            {
                var_608 = r14_2;
                let result_2: u64 = result;
                let var_5f8_1: i64 = rax_27;
                let var_5f0_1: i64 = var_708_1;
                var_5e8 = rax_9;
                *var_5e8[8] = rax_10;
                *var_5e8[9] = rax_28;
                *var_5e8[0xa] = r14_4;
                *var_5e8[0xb] = rax_25;
                result_5 = uu_hashsum::hashsum::ha460cf47583be7f8(&var_608, &var_338);
            }
            result = result_5;
            core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h43498a49004cb0ef(var_5f8, 
                var_5f0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h638b7599765dd6a7(&var_6d8);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h057b5ef728678ee6(
                var_690, var_688);
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hbb2cfa0fbf9d6d2c(r14, 
                result_8);
        }
        else
        {
            rax_16 = rbp_1 | 2;
            'label_476eb9:
            result = alloc::boxed::Box$LT$T$GT$::new::h737a891a790d792d(rax_16);
            'label_476ecb:
            core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h43498a49004cb0ef(var_5f8, 
                var_5f0);
            'label_476ed8:
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h638b7599765dd6a7(&var_6d8);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h057b5ef728678ee6(
                var_690, var_688);
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hbb2cfa0fbf9d6d2c(r14, 
                result_8);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(result_1);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h057b5ef728678ee6(var_690, 
            var_688);
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hbb2cfa0fbf9d6d2c(r14, 
            result_8);
    }
    
    result
}
