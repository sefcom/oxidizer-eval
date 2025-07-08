
  int128_t* uu_uniq::uumain::uumain::h12cede16e06915d0(int64_t arg1, int64_t arg2)

{
    int64_t r15;
    int64_t var_10 = r15;
    int64_t var_2f8;
    uu_uniq::handle_obsolete::h1becbb41acd03a45(&var_2f8, arg1, arg2, r15);
    int64_t r15_1 = var_2f8;
    uint64_t var_2f0;
    uint64_t rbp = var_2f0;
    int64_t var_2d0;
    int64_t r12 = var_2d0;
    uu_uniq::uu_app::h21a3be98fe4bed5d(&var_2f8);
    int128_t var_2e8;
    int128_t var_388 = var_2e8;
    int64_t var_3f8;
    clap_builder::builder::command::Command::try_get_matches_from::h9bc1bd8bc5327abb(&var_3f8, 
        &var_2f8, &var_388);
    int64_t rax_2 = var_3f8;
    int128_t* var_3f0;
    int32_t* rdi_3 = var_3f0;
    int128_t* r13_1;
    
    if (rax_2 != -0x8000000000000000)
    {
        int128_t var_3e0;
        int128_t var_3a8_1 = var_3e0;
        int128_t var_3d0;
        int128_t var_398_1 = var_3d0;
        int64_t var_3c0 = rax_2;
        int32_t* var_3b8_1 = rdi_3;
        int64_t* var_3e8;
        int64_t* var_3b0_1 = var_3e8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4ea59ec990ab1227(
            &var_2f8, &var_3c0, "filesInvalid argument for : -f-s…", 5);
        int64_t var_338;
        clap_builder::parser::error::MatchesError::unwrap::h703efa06b8fc7e2c(&var_338, 
            "filesInvalid argument for : -f-s…", 5, &var_2f8);
        int64_t rax_4 = var_338;
        
        if (!rax_4)
            core::tuple::_$LT$impl$u20$core..default..Default$u20$for$u20$$LP$U$C$T$RP$$GT$::default::hfc62a109b3f4d822(&var_2f8);
        else
        {
            int64_t var_300;
            int64_t var_2c0_1 = var_300;
            int128_t var_310;
            var_2d0 = var_310;
            int128_t var_320;
            var_2e8 = var_320;
            int128_t var_330;
            var_2f0 = var_330;
            var_2f8 = rax_4;
            uu_uniq::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h91733f00e94e2087(&var_3f8, 
                &var_2f8, r15_1);
            var_2f8 = var_3f8;
            var_2e8 = var_3e8;
        }
        
        int64_t rbx_1 = var_2f8;
        int64_t rax_5 = var_2e8;
        uint64_t rax_6 = *var_2e8[8];
        uu_uniq::opt_parsed::h9a0a76b92d9f982c(&var_2f8, "skip-fieldsskip-charsuniquezero-…", 0xb, 
            &var_3c0);
        
        if (var_2f8)
            r13_1 = var_2f0;
        else
        {
            uu_uniq::opt_parsed::h9a0a76b92d9f982c(&var_2f8, "skip-charsuniquezero-terminatedg…", 
                0xa, &var_3c0);
            
            if (!var_2f8)
            {
                char var_414_1 = 1;
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3c0, "repeatedNoEqualsargumentNO_COLOR…", 8))
                    var_414_1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_3c0, "all-repeatedcheck-charscountigno…", 0xc);
                
                char rax_14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3c0, "uniquezero-terminatedgroup", 6);
                char var_415_1 = 1;
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_3c0, "all-repeatedcheck-charscountigno…", 0xc))
                    var_415_1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_3c0, "group", 5);
                
                char rax_17 = uu_uniq::get_delimiter::hdb564f484ea1739f(&var_3c0);
                char rax_18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3c0, "countignore-caseskip-fieldsskip-…", 5);
                
                if (var_2f0)
                    r15_1 = 1;
                
                uint64_t rcx_6 = var_2e8;
                
                if (!var_2f0)
                    rcx_6 = rbp;
                
                if (var_2f0)
                    r12 = 1;
                
                int64_t rax_19 = var_2e8;
                int64_t var_2c8;
                
                if (!var_2f0)
                    rax_19 = var_2c8;
                
                uu_uniq::opt_parsed::h9a0a76b92d9f982c(&var_3f8, 
                    "check-charscountignore-caseskip-…", 0xb, &var_3c0);
                r13_1 = var_3f0;
                
                if (!var_3f8)
                {
                    uint64_t var_408_1;
                    var_408_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3c0, "ignore-caseskip-fieldsskip-chars…", 0xb);
                    char rax_21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3c0, "zero-terminatedgroup", 0xf);
                    var_2c8 = var_414_1;
                    *var_2c8[1] = rax_14;
                    *var_2c8[2] = var_415_1;
                    *var_2c8[6] = rax_17;
                    *var_2c8[3] = rax_18;
                    var_2f8 = r15_1;
                    uint64_t var_2f0_1 = rcx_6;
                    var_2e8 = r12;
                    *var_2e8[8] = rax_19;
                    int128_t* var_2d8_1 = r13_1;
                    int64_t* var_2d0_1 = var_3e8;
                    *var_2c8[4] = var_408_1;
                    *var_2c8[5] = rax_21;
                    
                    if (!(var_415_1 & rax_18))
                    {
                        uu_uniq::open_input_file::h792d730de2d63225(&var_3f8, rbx_1, var_2f0);
                        r13_1 = var_3f0;
                        
                        if (!var_3f8)
                        {
                            uu_uniq::open_output_file::h6c5c0ef7c704597c(&var_3f8, rax_5, rax_6);
                            
                            if (var_3f8)
                            {
                                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h2ae1655ce00f55b1(r13_1, var_3e8);
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8d6813b76c48873b(&var_3c0);
                                return var_3f0;
                            }
                            
                            int128_t* rax_24;
                            int64_t* rdx_8;
                            rax_24 = uu_uniq::Uniq::print_uniq::h818dd57e8b925a7a(&var_2f8, r13_1, 
                                var_3e8, var_3f0, var_3e8);
                            r13_1 = rax_24;
                        }
                    }
                    else
                    {
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd6c812b231802126(&var_388);
                        int64_t var_2d8;
                        int64_t var_3e8_1 = var_2d8;
                        var_3f8 = var_388;
                        var_3e0 = 1;
                        r13_1 = alloc::boxed::Box$LT$T$GT$::new::h80806647e8784038(&var_3f8);
                    }
                }
            }
            else
                r13_1 = var_2f0;
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8d6813b76c48873b(&var_3c0);
    }
    else
    {
        int128_t* rax_3;
        int64_t* rdx_2;
        rax_3 = core::ops::function::FnOnce::call_once::hba3591183ae98aa9(rdi_3);
        r13_1 = rax_3;
    }
    
    return r13_1;
}
