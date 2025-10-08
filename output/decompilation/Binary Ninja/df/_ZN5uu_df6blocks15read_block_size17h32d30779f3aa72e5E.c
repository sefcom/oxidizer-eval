
  int128_t* uu_df::blocks::read_block_size::h32d30779f3aa72e5(int64_t* arg1, void* arg2)

{
    int128_t* result;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        arg2, "blocksizehuman-readable-binaryhu…", 9))
    {
        char rax_3 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "portabilityprint-typeexclude-typ…", 0xb);
        int64_t rdx_2;
        
        if (!rax_3)
            result = uu_df::blocks::block_size_from_env::hdb573be3e983bfb6();
        
        if (rax_3 || !(result & 1))
        {
            result = _$LT$uu_df..blocks..BlockSize$u20$as$u20$core..default..Default$GT$::default::hd82b76b8049fd167();
            arg1[1] = result;
            *arg1 = 4;
        }
        else
        {
            arg1[1] = rdx_2;
            *arg1 = 4;
        }
    }
    else
    {
        void* const var_78;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h117add036a1ff1af(
            &var_78, arg2);
        void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::h8bc7816bfd18267b(&var_78);
        
        if (!rax_1)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_78, 
            *(rax_1 + 8), *(rax_1 + 0x10));
        void* const rcx_1 = var_78;
        int128_t* result_1;
        result = result_1;
        int128_t var_68;
        
        if (rcx_1 != 4)
        {
            *(arg1 + 0x10) = var_68;
            *arg1 = rcx_1;
            arg1[1] = result;
        }
        else if (result)
        {
            arg1[1] = result;
            *arg1 = 4;
        }
        else
        {
            int64_t rax_2 = *(rax_1 + 8);
            int64_t rcx_2 = *(rax_1 + 0x10);
            int64_t var_38 = 0;
            int64_t var_30_1 = rax_2;
            int64_t var_28_1 = rcx_2;
            char var_20_1 = 1;
            int64_t* var_48 = &var_38;
            int64_t (* var_40_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_78 = &data_419280;
            int64_t var_70 = 1;
            int64_t var_58_1 = 0;
            var_68 = &var_48;
            *var_68[8] = 1;
            result =
                core::option::Option$LT$T$GT$::map_or_else::h7e34be96cbbb4028(&arg1[1], &var_78);
            *arg1 = 1;
        }
    }
    
    return result;
}
