
  int128_t* uu_csplit::CsplitOptions::new::h18a4d0e2255fb53b(int128_t* arg1, void* arg2)

{
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        arg2, "keep-filesquietelide-empty-files…", 0xa);
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "quietelide-empty-filesFailed to …", 5);
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "elide-empty-filesFailed to elide…", 0x11);
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "suppress-matcheduespemosarenegyl…", 0x10);
    int128_t var_c8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf15a83bd2d124092(&var_c8, 
        arg2, "prefixsuffix-formatdigits: \nkee…", 6);
    void* rax_4 = clap_builder::parser::error::MatchesError::unwrap::hd942431c9d8b51dc(
        "prefixsuffix-formatdigits: \nkee…", 6, &var_c8);
    int64_t* var_e0;
    
    if (!rax_4)
        var_e0 = -0x8000000000000000;
    else
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_e0, rax_4);
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf15a83bd2d124092(&var_c8, 
        arg2, "suffix-formatdigits: \nkeep-file…", 0xd);
    void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::hd942431c9d8b51dc(
        "suffix-formatdigits: \nkeep-file…", 0xd, &var_c8);
    int64_t var_b8;
    int64_t var_68;
    int64_t var_58;
    
    if (!rax_5)
        var_68 = -0x8000000000000000;
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_c8, rax_5);
        var_58 = var_b8;
        var_68 = var_c8;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf15a83bd2d124092(&var_c8, 
        arg2, "digits: \nkeep-filesquietelide-e…", 6);
    void* rax_7 = clap_builder::parser::error::MatchesError::unwrap::hd942431c9d8b51dc(
        "digits: \nkeep-filesquietelide-e…", 6, &var_c8);
    void* const var_118;
    
    if (!rax_7)
        var_118 = -0x8000000000000000;
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_c8, rax_7);
        int64_t var_108_1 = var_b8;
        var_118 = var_c8;
    }
    
    uu_csplit::split_name::SplitName::new::h3397569db94b2c64(&var_c8, &var_e0, &var_68, &var_118);
    int128_t var_b0;
    
    if (var_c8 != -0x8000000000000000)
    {
        int128_t var_78;
        arg1[5] = var_78;
        int128_t var_88;
        arg1[4] = var_88;
        int128_t zmm0_3 = var_c8;
        int128_t var_98;
        arg1[3] = var_98;
        arg1[2] = var_b0;
        arg1[1] = var_b8;
        *arg1 = zmm0_3;
        arg1[6] = rax;
        *(arg1 + 0x61) = rax_1;
        *(arg1 + 0x62) = rax_2;
        *(arg1 + 0x63) = rax_3;
        return arg1;
    }
    
    int64_t var_a0;
    int64_t var_48 = var_a0;
    var_58 = var_b0;
    var_68 = var_c8;
    int64_t* rax_14;
    int64_t rdx_4;
    rax_14 = uucore::util_name::h60d842bf27b05e82();
    var_e0 = rax_14;
    int64_t var_d8 = rdx_4;
    int64_t** var_40 = &var_e0;
    int64_t (* var_38)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2dda48c026ef89eb;
    var_118 = &data_6e1d78;
    int64_t var_110 = 2;
    int64_t var_f8 = 0;
    int64_t*** var_108_2 = &var_40;
    int64_t var_100 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_118);
    var_e0 = &var_68;
    int64_t (* var_d8_1)(int64_t* arg1, void* arg2) = _$LT$uu_csplit..csplit_error..CsplitError$u20$as$u20$core..fmt..Display$GT$::fmt::hf6930a6d48bf4e10;
    var_118 = &data_6e1d98;
    int64_t var_110_1 = 2;
    int64_t var_f8_1 = 0;
    int64_t* var_108_3 = &var_e0;
    int64_t var_100_1 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_118);
    std::process::exit::hf8c1b9d00a2a86fd(1);
    /* no return */
}
