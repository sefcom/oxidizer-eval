
  int64_t* uu_join::parse_print_settings::h08c07f537be3ed8c(int64_t* arg1, void* arg2)

{
    void var_b0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h31fcb76f23e502bd(
        &var_b0, arg2, "vaj12itoenocheck-ordercheck-orde…");
    int64_t var_f0;
    clap_builder::parser::error::MatchesError::unwrap::h9c7a7351e7410c87(&var_f0, 
        "vaj12itoenocheck-ordercheck-orde…", &var_b0);
    int64_t rax = var_f0;
    void (* var_1b8)() __noreturn;
    
    if (!rax)
    {
        var_1b8 = core::ops::function::FnOnce::call_once::he87907dc6527952d;
        char const* const var_1b0_1 = "/home/34r7hm4n/.cargo/registry/s…";
        char const* const var_1a8_1 = "/home/34r7hm4n/.cargo/registry/s…";
        int64_t var_1a0_1 = 0;
        int64_t var_190_1 = 0;
        int64_t var_180_1 = 0;
    }
    else
    {
        int128_t var_c0;
        int128_t var_188_1 = var_c0;
        int128_t var_d0;
        int128_t var_198_1 = var_d0;
        int64_t var_1a8;
        int128_t var_e0;
        var_1a8 = var_e0;
        var_1b8 = var_f0;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h31fcb76f23e502bd(
        &var_b0, arg2, "aj12itoenocheck-ordercheck-order…");
    int64_t* result_1;
    clap_builder::parser::error::MatchesError::unwrap::h9c7a7351e7410c87(&result_1, 
        "aj12itoenocheck-ordercheck-order…", &var_b0);
    void (* var_178)() __noreturn;
    
    if (!result_1)
    {
        var_178 = core::ops::function::FnOnce::call_once::he87907dc6527952d;
        char const* const var_170_1 = "/home/34r7hm4n/.cargo/registry/s…";
        char const* const var_168_1 = "/home/34r7hm4n/.cargo/registry/s…";
        int64_t var_160_1 = 0;
        int64_t var_150_1 = 0;
        int64_t var_140_1 = 0;
    }
    else
    {
        int128_t var_100;
        int128_t var_148_1 = var_100;
        int128_t var_110;
        int128_t var_158_1 = var_110;
        int64_t var_168;
        int128_t var_120;
        var_168 = var_120;
        var_178 = result_1;
    }
    
    core::iter::traits::iterator::Iterator::chain::h80d51f583fc17b8b(&var_b0, &var_1b8, &var_178);
    void var_70;
    void* rax_2 = core::option::Option$LT$T$GT$::or_else::hb3426d0860447af9(
        core::iter::adapters::chain::and_then_or_clear::h36d039b17ed0b5e7(&var_b0), &var_70);
    int64_t* result;
    char rbp;
    char r13;
    
    if (!rax_2)
    {
        r13 = 0;
        rbp = 0;
        label_46d929:
        result = arg1;
        result[1] = !rax;
        *(result + 9) = rbp;
        *(result + 0xa) = r13;
        *result = 0;
    }
    else
    {
        rbp = 0;
        r13 = 0;
        
        while (true)
        {
            uu_join::parse_file_number::h9b8850bce422b1b9(&result_1, *(rax_2 + 8), *(rax_2 + 0x10));
            result = result_1;
            int64_t var_128;
            
            if (result)
            {
                void** rdx_4 = arg1;
                *rdx_4 = result;
                rdx_4[1] = var_128;
                break;
            }
            
            char temp0_1 = var_128;
            
            if (temp0_1)
                r13 = 1;
            
            if (!temp0_1)
                rbp = 1;
            
            rax_2 = core::option::Option$LT$T$GT$::or_else::hb3426d0860447af9(
                core::iter::adapters::chain::and_then_or_clear::h36d039b17ed0b5e7(&var_b0), 
                &var_70);
            
            if (!rax_2)
                goto label_46d929;
        }
    }
    return result;
}
