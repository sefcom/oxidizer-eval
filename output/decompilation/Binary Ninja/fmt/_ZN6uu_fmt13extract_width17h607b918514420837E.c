
  int128_t* uu_fmt::extract_width::h607b918514420837(int64_t* arg1, void* arg2)

{
    char const (** const var_b8)[0xd1];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(&var_b8, 
        arg2, "widthinvalid width: src/uu/fmt/s…", 5);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b(
        "widthinvalid width: src/uu/fmt/s…", 5, &var_b8);
    int128_t* result;
    
    if (!rax)
    {
        int64_t rdx_3;
        result =
            clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(
            arg2, "fileswidthinvalid width: src/uu/…", 5);
        int64_t rcx_1 = 0;
        int64_t r13_1 = 8;
        
        if (result == 1 && rdx_3 == 1)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(
                &var_b8, arg2, "fileswidthinvalid width: src/uu/…", 5);
            void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b(
                "fileswidthinvalid width: src/uu/…", 5, &var_b8);
            
            if (!rax_1)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            var_b8 = 0;
            int64_t rdx_6;
            result = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&var_b8), 
                *(rax_1 + 8), *(rax_1 + 0x10));
            
            if (!result)
                rcx_1 = 0;
            else
            {
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_b8, result, rdx_6);
                int64_t var_b0;
                rcx_1 = var_b0;
                result = var_b8 ^ 1;
                arg1[1] = result;
                r13_1 = 0x10;
            }
        }
        
        *(arg1 + r13_1) = rcx_1;
        *arg1 = 0;
    }
    else
    {
        char* r14_1 = *(rax + 8);
        int64_t r15_1 = *(rax + 0x10);
        char var_88;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_88, r14_1, r15_1);
        void** const rcx;
        int64_t rdx_2;
        
        if (!var_88)
        {
            void** var_80;
            rcx = var_80;
            result = 1;
            rdx_2 = 0;
        }
        else
        {
            int64_t var_68 = 0;
            char* var_60_1 = r14_1;
            int64_t var_58_1 = r15_1;
            char var_50_1 = 1;
            int64_t* var_78 = &var_68;
            int64_t (* var_70_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_b8 = &data_526520;
            int64_t var_b0_1 = 1;
            int64_t var_98_1 = 0;
            int64_t** var_a8_1 = &var_78;
            int64_t var_a0_1 = 1;
            void var_48;
            core::option::Option$LT$T$GT$::map_or_else::h57a000129381aa23(&var_48, &var_b8);
            int32_t var_30_1 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&var_48);
            rdx_2 = 1;
            rcx = &data_526400;
        }
        
        arg1[1] = result;
        arg1[2] = rcx;
        *arg1 = rdx_2;
    }
    
    return result;
}
