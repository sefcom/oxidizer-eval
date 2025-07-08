
  int64_t* uu_df::blocks::read_block_size::h03278a4ead33fd1d(int64_t* arg1, void* arg2)

{
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg2, "blocksizetotalhuman-readable-bin…", 9))
    {
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "portabilityprint-typeexclude-typ…", 0xb))
        {
            int64_t rax_4;
            int64_t rdx_3;
            rax_4 = uu_df::blocks::block_size_from_env::h0875cabe2802aae1();
            
            if (rax_4 != 1)
                rdx_3 = _$LT$uu_df..blocks..BlockSize$u20$as$u20$core..default..Default$GT$::default::hcd56ba661cd7b884();
            
            arg1[1] = rdx_3;
            *arg1 = 3;
        }
        else
        {
            arg1[1] = _$LT$uu_df..blocks..BlockSize$u20$as$u20$core..default..Default$GT$::default::hcd56ba661cd7b884();
            *arg1 = 3;
        }
    }
    else
    {
        int128_t* const var_80;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::had32a7dafbe4cc99(
            &var_80, arg2, "blocksizetotalhuman-readable-bin…", 9);
        void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::h16d97371a8658236(
            "blocksizetotalhuman-readable-bin…", 9, &var_80);
        
        if (!rax_1)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        void* r14_1 = *(rax_1 + 8);
        uint64_t r15_1 = *(rax_1 + 0x10);
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_80, r14_1, r15_1);
        int128_t* const rcx_1 = var_80;
        int64_t var_78;
        int128_t var_70;
        
        if (rcx_1 != 3)
        {
            *(arg1 + 0x10) = var_70;
            *arg1 = rcx_1;
            arg1[1] = var_78;
        }
        else if (var_78)
        {
            arg1[1] = var_78;
            *arg1 = 3;
        }
        else
        {
            int64_t var_40 = 0;
            void* var_38_1 = r14_1;
            uint64_t var_30_1 = r15_1;
            char var_28_1 = 1;
            int64_t* var_50 = &var_40;
            int64_t (* var_48_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_80 = &data_40ba30;
            int64_t var_78_1 = 1;
            int64_t var_60_1 = 0;
            var_70 = &var_50;
            *var_70[8] = 1;
            core::option::Option$LT$T$GT$::map_or_else::h87f8290896e212c8(&arg1[1], &var_80);
            *arg1 = 1;
        }
    }
    
    return arg1;
}
