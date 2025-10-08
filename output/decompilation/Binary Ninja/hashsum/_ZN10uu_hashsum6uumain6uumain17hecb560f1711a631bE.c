
  uint64_t uu_hashsum::uumain::uumain::hecb560f1711a631b(int64_t arg1, void** const arg2 @ r12)

{
    void** const var_28 = arg2;
    int64_t var_6a0 = arg1;
    int64_t rsi;
    int64_t var_698 = rsi;
    char* var_678;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6809b91796b50035(&var_678, &var_6a0);
    char* r14 = var_678;
    char* var_608;
    uint64_t result_1;
    void** var_5f8;
    uint64_t rbx;
    uint64_t result_8;
    
    if (-(r14) != -0x8000000000000000)
    {
        uint64_t result_9;
        result_8 = result_9;
        uint64_t var_668;
        rbx = var_668;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h924082c101e1bf1c(&var_608, "hashsum", 7);
        r14 = var_608;
        result_8 = result_1;
        rbx = var_5f8;
    }
    
    int16_t* rax_2;
    uint64_t rdx;
    rax_2 = std::path::Path::file_stem::hc69c2d2c61933548(result_8, rbx);
    
    if (!rax_2)
        rdx = 7;
    
    int16_t* rsi_3 = "hashsum";
    
    if (rax_2)
        rsi_3 = rax_2;
    
    int64_t var_690;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_690, rsi_3, rdx);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h24ad0c64921854a8(
        &var_608, result_8, rbx);
    void** var_668_1 = var_5f8;
    var_678 = var_608;
    void var_630;
    core::iter::traits::iterator::Iterator::chain::h3bf3d42a328ca9e8(&var_630, &var_678, var_6a0);
    int64_t var_688;
    uint64_t var_680;
    uu_hashsum::uu_app::hd115e3ccac06eb0b(&var_608, var_688, var_680);
    void var_2f8;
    memcpy(&var_2f8, &var_608, 0x2c8);
    clap_builder::builder::command::Command::try_get_matches_from::h2477954b5349bfdf(&var_608, 
        &var_2f8, &var_630);
    char* rax_4 = var_608;
    uint64_t result;
    
    if (rax_4 != -0x8000000000000000)
    {
        int64_t var_5d8;
        int64_t var_6a8_1 = var_5d8;
        int128_t var_5e8;
        int128_t var_6b8_1 = var_5e8;
        int128_t var_6c8_1 = var_5f8;
        char* var_6d8 = rax_4;
        uint64_t result_6 = result_1;
        char rax_6 = alloc::string::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$alloc..borrow..Cow$LT$str$GT$$GT$::eq::hd1cc9c84389cf4ad(var_688, var_680);
        int64_t* rax_7;
        
        if (rax_6)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0c80e907b5f15bf5(
                &var_608, &var_6d8);
            rax_7 = clap_builder::parser::error::MatchesError::unwrap::h81d2f4b559f3983c(&var_608);
        }
        
        char var_340;
        
        if (rax_6 && rax_7)
        {
            uucore::features::checksum::calculate_blake2b_length::hd9514fcefba150b6(&var_608, 
                *rax_7);
            result = result_1;
            arg2 = var_5f8;
            
            if (var_608 & 1)
                goto label_476ed8;
            
            if (!var_340)
                goto label_476c6f;
            
            goto label_476c4b;
        }
        
        result = 0;
        
        if (var_340)
        {
            label_476c4b:
            uu_hashsum::create_algorithm_from_flags::h1839fc02dfbf2f14(&var_608, &var_6d8);
        }
        else
        {
            label_476c6f:
            uucore::features::checksum::detect_algo::hf5ee5896e94cf2e7(&var_608, var_688, var_680, 
                result, arg2);
        }
        
        char* r14_2 = var_608;
        result = result_1;
        
        if (!r14_2)
            goto label_476ed8;
        
        uint64_t rax_9 = var_5e8;
        char rax_10 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "binary", 6);
        
        if (!rax_10)
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_6d8, "textSomedumb\x1b[5m\x1b[9m <= tr…", 4);
        
        char rax_11 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "checkstatusquietstrictignore-mis…", 5);
        char rax_12 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "statusquietstrictignore-missingB…", 6);
        char rax_13 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "quietstrictignore-missingBLAKE2b…", 5);
        char rax_14 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "strictignore-missingBLAKE2b-SHA3…", 6);
        char rax_15 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "warnZero\x1b[7mBool", 4);
        char var_708_1 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_6d8, "ignore-missingBLAKE2b-SHA3-384Tr…", 0xe);
        char rbp_1 = rax_13 | rax_12;
        char rax_16;
        
        if (var_708_1)
        {
            rax_16 = 1;
            
            if (rax_11)
                goto label_476dd8;
            
            goto label_476eb9;
        }
        
        if (rax_11)
        {
            label_476dd8:
            rax_16 = 0xb;
            
            if ((clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_6d8, "textSomedumb\x1b[5m\x1b[9m <= tr…", 4) | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_6d8, "binary", 6)) == 1)
                goto label_476eb9;
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3bf65901b64431cc(
                &var_608, &var_6d8);
            clap_builder::parser::error::MatchesError::unwrap::h844fa1597afcc0f3(&var_678, 
                &var_608);
            core::option::Option$LT$T$GT$::map_or_else::hd2bbec04d9e613ae(&var_608, &var_678);
            int32_t rcx_4 = 0x1000000;
            
            if (!rbp_1)
                rcx_4 = ((rax_15 & (rax_12 ^ 1)) | 2) << 0x18;
            
            int32_t rax_22 = 0;
            
            if (!rax_12)
                rax_22 = rcx_4;
            
            uint64_t result_4;
            void** rdx_7;
            result_4 = uucore::features::checksum::perform_checksum_validation::hdca86bf9f51b5f06(
                result_1, (var_5f8 << 4) + result_1, r14_2, result, rax_9, 
                var_708_1 << 8 | rax_14 << 0x10 | rax_22);
            result = result_4;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::h9116bb9b09c5e2b0(var_608, result_1);
            goto label_476ecb;
        }
        
        char temp2_1 = rax_14 | rbp_1;
        char var_70b_2 = temp2_1;
        int64_t* var_5f0;
        
        if (!temp2_1)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h60048b160616f56c(
                &var_608, &var_6d8);
            uint64_t result_7;
            
            if (var_608 != 2)
                result_7 = 0;
            else
                result_7 = result_1;
            
            uint64_t result_10 = &data_411c1a[0xae];
            
            if (result_7)
                result_10 = result_7;
            
            char r14_4 = *result_10;
            char rax_25 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_6d8, "zeroAnsi -- \x1b[8mhelpNonesha1s…", 4);
            int64_t rax_27;
            int64_t rdx_9;
            rax_27 = var_5f0[5](var_5f8);
            var_708_1 = rdx_9;
            char rax_28 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_6d8, "tagBLAKE2b ( ( *blake2bfailed to…", 3);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3bf65901b64431cc(
                &var_608, &var_6d8);
            int64_t var_338;
            clap_builder::parser::error::MatchesError::unwrap::h844fa1597afcc0f3(&var_338, 
                &var_608);
            char** result_5;
            void** rdx_10;
            
            if (!var_338)
            {
                var_608 = r14_2;
                uint64_t result_3 = result;
                int64_t var_5f8_2 = rax_27;
                int64_t var_5f0_2 = var_708_1;
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
                uint64_t result_2 = result;
                int64_t var_5f8_1 = rax_27;
                int64_t var_5f0_1 = var_708_1;
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
            label_476eb9:
            result = alloc::boxed::Box$LT$T$GT$::new::h737a891a790d792d(rax_16);
            label_476ecb:
            core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h43498a49004cb0ef(var_5f8, 
                var_5f0);
            label_476ed8:
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
    
    return result;
}
