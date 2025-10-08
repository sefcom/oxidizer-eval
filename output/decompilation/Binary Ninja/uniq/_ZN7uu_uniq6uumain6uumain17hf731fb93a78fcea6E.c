
  int32_t* uu_uniq::uumain::uumain::hf731fb93a78fcea6(int64_t arg1, int64_t arg2)

{
    int64_t r15;
    int64_t var_10 = r15;
    int64_t r12;
    int64_t var_28 = r12;
    uint64_t var_2f8[0x2];
    uu_uniq::handle_obsolete::haf9e8c417503fdd5(&var_2f8, arg1, arg2, r15);
    int64_t var_2d8;
    int64_t var_3a8 = var_2d8;
    uint64_t var_368[0x2] = var_2f8;
    uint64_t var_2e8[0x2];
    uint64_t var_3b8[0x2] = var_2e8;
    uint64_t var_2d0[0x2];
    uint64_t var_378[0x2] = var_2d0;
    uu_uniq::uu_app::hcc95d1d241a015fc(&var_2f8);
    int64_t var_438;
    clap_builder::builder::command::Command::try_get_matches_from::h2106defcecb0b95f(&var_438, 
        &var_2f8, &var_3b8);
    int64_t rax_1 = var_438;
    int32_t* result_1;
    
    if (-(rax_1) == -0x8000000000000000)
        /* tailcall */
        return uu_uniq::map_clap_errors::h040f4515f8b3a62f(result_1);
    
    int128_t var_420;
    int128_t var_3e8 = var_420;
    int128_t var_410;
    int128_t var_3d8 = var_410;
    int64_t var_400 = rax_1;
    int32_t* result_4 = result_1;
    int64_t* var_428;
    int64_t* var_3f0 = var_428;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h9fa2c6460ba5c603(
        &var_2f8, &var_400, "filessrc/uu/uniq/src/uniq.rsInva…", 5);
    int64_t var_338;
    clap_builder::parser::error::MatchesError::unwrap::ha0ece9a4b622f20a(&var_338, 
        "filessrc/uu/uniq/src/uniq.rsInva…", 5, &var_2f8);
    int64_t rax_3 = var_338;
    
    if (!rax_3)
        core::tuple::_$LT$impl$u20$core..default..Default$u20$for$u20$$LP$U$C$T$RP$$GT$::default::ha1dda083a2d32369(&var_2f8);
    else
    {
        int64_t var_300;
        int64_t var_2c0_1 = var_300;
        uint64_t var_310[0x2];
        var_2d0 = var_310;
        int128_t var_320;
        var_2e8 = var_320;
        int128_t var_330;
        var_2f8 = var_330;
        var_2f8[0] = rax_3;
        uu_uniq::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h1e4289c06d82c14e(&var_438, 
            &var_2f8, r12);
        var_2f8 = var_438;
        var_2e8 = var_428;
    }
    
    uint64_t r15_2 = var_2f8[0];
    uint64_t r12_2 = var_2f8[1];
    uint64_t rax_4 = var_2e8[0];
    uint64_t rax_5 = var_2e8[1];
    uu_uniq::opt_parsed::hf72dfa4667cb2ab6(&var_2f8, "skip-fieldsskip-charsuniquezero-…", 0xb, 
        &var_400);
    int32_t* result;
    
    if (var_2f8[0] == 1)
    {
        result = var_2f8[1];
        var_2e8[0];
    }
    else
    {
        uint64_t zmm0_5[0x2] = var_2f8;
        uu_uniq::opt_parsed::hf72dfa4667cb2ab6(&var_2f8, "skip-charsuniquezero-terminatedg…", 0xa, 
            &var_400);
        
        if (var_2f8[0] != 1)
        {
            uint64_t zmm0_6[0x2] = var_2f8;
            char var_43c_1 = 1;
            
            if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "repeatedNoEqualsargumentNO_COLOR…", 8))
                var_43c_1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_400, "all-repeatedcheck-charscountigno…", 0xc);
            
            char rax_9 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_400, "uniquezero-terminatedgroupfiless…", 6);
            char rbx_1 = 1;
            
            if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_400, "all-repeatedcheck-charscountigno…", 0xc))
                rbx_1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_400, "groupfilessrc/uu/uniq/src/uniq.r…", 5);
            
            char rax_12 = uu_uniq::get_delimiter::h924dde71cdd564ba(&var_400);
            char rax_13 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_400, "countignore-caseskip-fieldsskip-…", 5);
            uu_uniq::opt_parsed::hf72dfa4667cb2ab6(&var_438, "check-charscountignore-caseskip-…", 
                0xb, &var_400);
            result = result_1;
            
            if (!(var_438 & 1))
            {
                char rax_14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "ignore-caseskip-fieldsskip-chars…", 0xb);
                char rax_15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "zero-terminatedgroupfilessrc/uu/…", 0xf);
                uint128_t zmm1_4 = 1;
                uint32_t zmm3_2[0x4] = zmm0_5;
                uint64_t zmm0_7[0x2] = _mm_shuffle_epi32(zmm3_2, 0);
                zmm3_2[0] = zmm1_4;
                zmm1_4 = _mm_shuffle_pd(zmm1_4, zmm0_6, 2);
                uint64_t zmm2_3[0x2] =
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
                uint64_t var_2e8_1[0x2] = zmm2_3;
                int32_t* result_2 = result;
                var_2d0[0] = var_428;
                *var_2d0[1][4] = rax_14;
                *var_2d0[1][5] = rax_15;
                
                if (!rax_13 || !rbx_1)
                {
                    uu_uniq::open_input_file::hce9e3218d9949fef(&var_438, r15_2, r12_2);
                    
                    if (!(var_438 & 1))
                    {
                        uu_uniq::open_output_file::h6a2d4c03cb447e31(&var_438, rax_4, rax_5);
                        result = result_1;
                        
                        if (var_438 != 1)
                        {
                            uint64_t result_3;
                            int64_t* rdx_7;
                            result_3 = uu_uniq::Uniq::print_uniq::hec9bb2bfe86d6e3c(&var_2f8, 
                                result_1, var_428, result, var_428);
                            result = result_3;
                        }
                        else
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h26f815af2d05ced1(result_1, var_428);
                    }
                    else
                        result = result_1;
                }
                else
                {
                    int128_t var_350;
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h072e66f27ea17466(&var_350, "printing all duplicated lines an…", 0x66);
                    int64_t var_340;
                    int64_t var_428_1 = var_340;
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
    return result;
}
