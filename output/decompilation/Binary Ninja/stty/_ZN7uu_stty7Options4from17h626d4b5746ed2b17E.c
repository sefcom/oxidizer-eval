
  int64_t* uu_stty::Options::from::h626d4b5746ed2b17(int64_t* arg1, void* arg2, int64_t* arg3 @ r13)

{
    int64_t* var_20 = arg3;
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        arg2, "allthe options for verbose and s…", 3);
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "save\x1b[0mnameCyan    stopEADVt…", 4);
    int64_t var_d0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h905fee06855682e2(&var_d0, 
        arg2);
    void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h003d302a17359fba(&var_d0);
    int32_t var_e4;
    int32_t var_c8;
    int32_t r12_1;
    
    if (!rax_2)
    {
        r12_1 = 1;
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        arg3 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        label_4585c2:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he363e2117379e867(
            &var_d0, arg2);
        int64_t var_70;
        clap_builder::parser::error::MatchesError::unwrap::hdbc5c14b771241e0(&var_70, &var_d0);
        int128_t var_88;
        int64_t rax_5;
        
        if (!var_70)
            rax_5 = -0x8000000000000000;
        else
        {
            core::iter::traits::iterator::Iterator::collect::heb47997e29649baa(&var_d0, &var_70);
            rax_5 = var_d0;
            var_88 = var_c8;
        }
        
        *arg1 = rax_5;
        *(arg1 + 8) = var_88;
        arg1[3] = r12_1;
        *(arg1 + 0x1c) = var_e4;
        arg1[4] = arg3;
        arg1[5] = rax;
        *(arg1 + 0x29) = rax_1;
    }
    else
    {
        var_c8 = 0;
        int16_t var_c4_1 = 0;
        var_c8 = 1;
        var_d0 = 0x1b600000800;
        char var_e0;
        std::fs::OpenOptions::open::h8081b96e677a3669(&var_e0, &var_d0, rax_2);
        
        if (!(var_e0 & 1))
        {
            int32_t var_dc;
            var_e4 = var_dc;
            r12_1 = 0;
            goto label_4585c2;
        }
        
        int64_t var_d8;
        arg1[1] = var_d8;
        *arg1 = -0x7fffffffffffffff;
    }
    return arg1;
}
