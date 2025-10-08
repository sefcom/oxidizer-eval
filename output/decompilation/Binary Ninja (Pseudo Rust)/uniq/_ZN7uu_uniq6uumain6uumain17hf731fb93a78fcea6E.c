
  fn uu_uniq::uumain::uumain::hf731fb93a78fcea6(arg1: i64, arg2: i64) -> *mut i32

{
    let r15: i64;
    let var_10: i64 = r15;
    let r12: i64;
    let var_28: i64 = r12;
    let mut var_2f8: [u64; 0x2];
    uu_uniq::handle_obsolete::haf9e8c417503fdd5(&var_2f8, arg1, arg2, r15);
    let var_2d8: i64;
    let var_3a8: i64 = var_2d8;
    let var_368: [u64; 0x2] = var_2f8;
    let mut var_2e8: [u64; 0x2];
    let mut var_3b8: [u64; 0x2] = var_2e8;
    let mut var_2d0: [u64; 0x2];
    let var_378: [u64; 0x2] = var_2d0;
    uu_uniq::uu_app::hcc95d1d241a015fc(&var_2f8);
    let mut var_438: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h2106defcecb0b95f(&var_438, 
        &var_2f8, &var_3b8);
    let rax_1: i64 = var_438;
    let result_1: *mut i32;
    
    if -(rax_1) == -0x8000000000000000
    {
        /* tailcall */
        return uu_uniq::map_clap_errors::h040f4515f8b3a62f(result_1);
    }
    
    let mut var_420: i128;
    let var_3e8: i128 = var_420;
    let var_410: i128;
    let var_3d8: i128 = var_410;
    let mut var_400: i64 = rax_1;
    let result_4: *mut i32 = result_1;
    let var_428: *mut i64;
    let var_3f0: *mut i64 = var_428;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h9fa2c6460ba5c603(
        &var_2f8, &var_400, "filessrc/uu/uniq/src/uniq.rsInva…", 5);
    let mut var_338: i64;
    clap_builder::parser::error::MatchesError::unwrap::ha0ece9a4b622f20a(&var_338, 
        "filessrc/uu/uniq/src/uniq.rsInva…", 5, &var_2f8);
    let rax_3: i64 = var_338;
    
    if rax_3 == 0
    {
        core::tuple::_$LT$impl$u20$core..default..Default$u20$for$u20$$LP$U$C$T$RP$$GT$::default::ha1dda083a2d32369(&var_2f8);
    }
    else
    {
        let var_300: i64;
        let var_2c0_1: i64 = var_300;
        let var_310: [u64; 0x2];
        var_2d0 = var_310;
        let var_320: i128;
        var_2e8 = var_320;
        let var_330: i128;
        var_2f8 = var_330;
        var_2f8[0] = rax_3;
        uu_uniq::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h1e4289c06d82c14e(&var_438, 
            &var_2f8, r12);
        var_2f8 = var_438;
        var_2e8 = var_428;
    }
    
    let r15_2: u64 = var_2f8[0];
    let r12_2: u64 = var_2f8[1];
    let rax_4: u64 = var_2e8[0];
    let rax_5: u64 = var_2e8[1];
    uu_uniq::opt_parsed::hf72dfa4667cb2ab6(&var_2f8, "skip-fieldsskip-charsuniquezero-…", 0xb, 
        &var_400);
    let mut result: *mut i32;
    
    if var_2f8[0] == 1
    {
        result = var_2f8[1];
        var_2e8[0];
    }
    else
    {
        let zmm0_5: [u64; 0x2] = var_2f8;
        uu_uniq::opt_parsed::hf72dfa4667cb2ab6(&var_2f8, "skip-charsuniquezero-terminatedg…", 0xa, 
            &var_400);
        
        if var_2f8[0] != 1
        {
            let zmm0_6: [u64; 0x2] = var_2f8;
            let mut var_43c_1: i8 = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_400, "repeatedNoEqualsargumentNO_COLOR…", 8) == 0
            {
                var_43c_1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_400, "all-repeatedcheck-charscountigno…", 0xc);
            }
            
            let rax_9: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_400, "uniquezero-terminatedgroupfiless…", 6);
            let mut rbx_1: i8 = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_400, "all-repeatedcheck-charscountigno…", 0xc) == 0
            {
                rbx_1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_400, "groupfilessrc/uu/uniq/src/uniq.r…", 5);
            }
            
            let rax_12: i8 = uu_uniq::get_delimiter::h924dde71cdd564ba(&var_400);
            let rax_13: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_400, "countignore-caseskip-fieldsskip-…", 5);
            uu_uniq::opt_parsed::hf72dfa4667cb2ab6(&var_438, "check-charscountignore-caseskip-…", 
                0xb, &var_400);
            result = result_1;
            
            if (var_438 & 1) == 0
            {
                let rax_14: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "ignore-caseskip-fieldsskip-chars…", 0xb);
                let rax_15: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "zero-terminatedgroupfilessrc/uu/…", 0xf);
                let mut zmm1_4: u128 = 1;
                let mut zmm3_2: [u32; 0x4] = zmm0_5;
                let mut zmm0_7: [u64; 0x2] = _mm_shuffle_epi32(zmm3_2, 0);
                zmm3_2[0] = zmm1_4;
                zmm1_4 = _mm_shuffle_pd(zmm1_4, zmm0_6, 2);
                let mut zmm2_3: [u64; 0x2] =
                    _mm_srai_epi32(_mm_slli_epi32(_mm_shuffle_epi32(zmm0_6, 0), 0x1f), 0x1f);
                zmm1_4 = _mm_and_pd(zmm1_4, zmm2_3);
                zmm2_3 = _mm_or_pd(__andnpd_xmmxuq_memxuq(zmm2_3, var_378), zmm1_4);
                zmm0_7 = _mm_srai_epi32(_mm_slli_epi32(zmm0_7, 0x1f), 0x1f);
                zmm3_2 = _mm_and_pd(zmm3_2, zmm0_7);
                zmm0_7 = _mm_or_pd(__andnpd_xmmxuq_memxuq(zmm0_7, var_368), zmm3_2);
                var_2d0[1] = var_43c_1;
                *var_2d0[1][1] = rax_9;
                *var_2d0[1][2] = rbx_1;
                *var_2d0[1][6] = rax_12;
                *var_2d0[1][3] = rax_13;
                var_2f8 = zmm0_7;
                let var_2e8_1: [u64; 0x2] = zmm2_3;
                let result_2: *mut i32 = result;
                var_2d0[0] = var_428;
                *var_2d0[1][4] = rax_14;
                *var_2d0[1][5] = rax_15;
                
                if rax_13 == 0 || rbx_1 == 0
                {
                    uu_uniq::open_input_file::hce9e3218d9949fef(&var_438, r15_2, r12_2);
                    
                    if (var_438 & 1) == 0
                    {
                        uu_uniq::open_output_file::h6a2d4c03cb447e31(&var_438, rax_4, rax_5);
                        result = result_1;
                        
                        if var_438 != 1
                        {
                            let mut result_3: u64;
                            let mut rdx_7: *mut i64;
                            result_3 = uu_uniq::Uniq::print_uniq::hec9bb2bfe86d6e3c(&var_2f8, 
                                result_1, var_428, result, var_428);
                            result = result_3;
                        }
                        else
                        {
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h26f815af2d05ced1(result_1, var_428);
                        }
                    }
                    else
                    {
                        result = result_1;
                    }
                }
                else
                {
                    let mut var_350: i128;
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h072e66f27ea17466(&var_350, "printing all duplicated lines an…", 0x66);
                    let var_340: i64;
                    let var_428_1: i64 = var_340;
                    var_438 = var_350;
                    var_420 = 1;
                    result = alloc::boxed::Box$LT$T$GT$::new::he2bc4249440a3bd4(&var_438);
                }
            }
        }
        else
        {
            result = var_2f8[1];
            var_2e8[0];
        }
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h37a794264e178b12(&var_400);
    result
}
