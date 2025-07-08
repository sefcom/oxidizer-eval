
  void* uu_join::parse_print_settings::h7df2ac24ec40344e(void** arg1, void* arg2)

{
    void var_b0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hdf06f95a7b97cd47(
        &var_b0, arg2, "vaj12itoenocheck-ordercheck-orde…", 1);
    int64_t var_f0;
    clap_builder::parser::error::MatchesError::unwrap::h1dd9f4a8c089b7df(&var_f0, 
        "vaj12itoenocheck-ordercheck-orde…", 1, &var_b0);
    int64_t rax = var_f0;
    void (* var_1b8)() __noreturn;
    
    if (!rax)
    {
        var_1b8 = core::ops::function::FnOnce::call_once::hd000ac33043b820c;
        char const* const var_1b0_1 = "a Display implementation returne…";
        char const* const var_1a8_1 = "a Display implementation returne…";
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
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hdf06f95a7b97cd47(
        &var_b0, arg2, "aj12itoenocheck-ordercheck-order…", 1);
    void* i_1;
    clap_builder::parser::error::MatchesError::unwrap::h1dd9f4a8c089b7df(&i_1, 
        "aj12itoenocheck-ordercheck-order…", 1, &var_b0);
    void (* var_178)() __noreturn;
    
    if (!i_1)
    {
        var_178 = core::ops::function::FnOnce::call_once::hd000ac33043b820c;
        char const* const var_170_1 = "a Display implementation returne…";
        char const* const var_168_1 = "a Display implementation returne…";
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
        var_178 = i_1;
    }
    
    core::iter::traits::iterator::Iterator::chain::h151f974d6a98c263(&var_b0, &var_1b8, &var_178);
    void var_70;
    void* i = core::option::Option$LT$T$GT$::or_else::h73b79e6fbab2ae65(
        core::iter::adapters::chain::and_then_or_clear::hd7f35116e82399f1(&var_b0), &var_70);
    char rbp;
    char r13;
    
    if (!i)
    {
        r13 = 0;
        rbp = 0;
    }
    else
    {
        rbp = 0;
        r13 = 0;
        
        do
        {
            uu_join::parse_file_number::h95ac4b0d73e9ada5(&i_1, *(i + 8), *(i + 0x10));
            i = i_1;
            int64_t var_128;
            
            if (i)
            {
                *arg1 = i;
                arg1[1] = var_128;
                goto label_4c3f9e;
            }
            
            char temp0_1 = var_128;
            
            if (!temp0_1)
                r13 = 1;
            
            if (temp0_1)
                rbp = 1;
            
            i = core::option::Option$LT$T$GT$::or_else::h73b79e6fbab2ae65(
                core::iter::adapters::chain::and_then_or_clear::hd7f35116e82399f1(&var_b0), 
                &var_70);
        } while (i);
        
        r13 &= 1;
        rbp &= 1;
    }
    
    arg1[1] = !rax;
    *(arg1 + 9) = r13;
    *(arg1 + 0xa) = rbp;
    *arg1 = nullptr;
    label_4c3f9e:
    return i;
}
