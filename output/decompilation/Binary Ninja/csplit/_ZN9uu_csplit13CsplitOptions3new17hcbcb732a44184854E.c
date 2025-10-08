
  int64_t* uu_csplit::CsplitOptions::new::hcbcb732a44184854(int64_t* arg1, void* arg2)

{
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        arg2, "keep-filesquietelide-empty-files…", 0xa);
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "quietelide-empty-filesprefixsuff…", 5);
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "elide-empty-filesprefixsuffix-fo…", 0x11);
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "suppress-matcheduespemosarenegyl…", 0x10);
    int128_t var_108;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6e5d98b7c91df41c(
        &var_108, arg2, "prefixsuffix-formatdigitsstream …", 6);
    void* rax_4 = clap_builder::parser::error::MatchesError::unwrap::hf5c40b70d611d755(
        "prefixsuffix-formatdigitsstream …", 6, &var_108);
    int64_t var_c0;
    
    if (!rax_4)
        var_c0 = -0x8000000000000000;
    else
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_c0, rax_4);
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6e5d98b7c91df41c(
        &var_108, arg2, "suffix-formatdigitsstream did no…", 0xd);
    void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::hf5c40b70d611d755(
        "suffix-formatdigitsstream did no…", 0xd, &var_108);
    int64_t var_f8;
    int64_t var_d8;
    
    if (!rax_5)
        var_d8 = -0x8000000000000000;
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_108, rax_5);
        int64_t var_c8_1 = var_f8;
        var_d8 = var_108;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6e5d98b7c91df41c(
        &var_108, arg2, "digitsstream did not contain val…", 6);
    void* rax_7 = clap_builder::parser::error::MatchesError::unwrap::hf5c40b70d611d755(
        "digitsstream did not contain val…", 6, &var_108);
    int64_t var_a8;
    
    if (!rax_7)
        var_a8 = -0x8000000000000000;
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_108, rax_7);
        int64_t var_98_1 = var_f8;
        var_a8 = var_108;
    }
    
    int64_t var_90;
    uu_csplit::split_name::SplitName::new::he14f8b59b0de5c0b(&var_90, &var_c0, &var_d8, &var_a8);
    int64_t rax_10 = var_90;
    int128_t var_88;
    var_108 = var_88;
    int128_t var_78;
    var_f8 = var_78;
    int64_t var_68;
    int128_t zmm0_3;
    
    if (rax_10 != -0x8000000000000000)
    {
        int128_t var_40;
        *(arg1 + 0x50) = var_40;
        int128_t var_50;
        *(arg1 + 0x40) = var_50;
        int128_t var_60;
        *(arg1 + 0x30) = var_60;
        arg1[5] = var_68;
        zmm0_3 = var_108;
        *(arg1 + 0x18) = var_f8;
        *(arg1 + 8) = zmm0_3;
        arg1[0xc] = rax;
        *(arg1 + 0x61) = rax_1;
        *(arg1 + 0x62) = rax_2;
        *(arg1 + 0x63) = rax_3;
    }
    else
    {
        arg1[5] = var_68;
        zmm0_3 = var_108;
        *(arg1 + 0x18) = var_f8;
        *(arg1 + 8) = zmm0_3;
    }
    *arg1 = rax_10;
    return arg1;
}
