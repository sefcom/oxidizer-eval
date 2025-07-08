
  int128_t* uu_more::Options::from::hc98fb754786f3522(int128_t* arg1, void* arg2)

{
    int128_t var_78;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5faaeded7704dcb7(&var_78, 
        arg2, "linesnumberfrom-linepatternclean…", 5);
    uint64_t rax = clap_builder::parser::error::MatchesError::unwrap::h2202a89f344cb1a0(
        "linesnumberfrom-linepatternclean…", 5, &var_78);
    uint64_t var_80 = rax;
    
    if (rax)
        rax = *rax;
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5faaeded7704dcb7(&var_78, 
        arg2, "numberfrom-linepatternclean-prin…", 6);
    uint64_t rax_1 = clap_builder::parser::error::MatchesError::unwrap::h2202a89f344cb1a0(
        "numberfrom-linepatternclean-prin…", 6, &var_78);
    int16_t* r12 = rax_1;
    
    if (rax_1)
        rax_1 = *r12;
    
    int16_t var_90 = rax_1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc3ec2a4b53b285b0(&var_78, 
        arg2, "from-linepatternclean-printprint…", 9);
    int64_t* rax_2 = clap_builder::parser::error::MatchesError::unwrap::hf31638e1afc90cd2(
        "from-linepatternclean-printprint…", 9, &var_78);
    void* var_88;
    
    if (rax_2)
        var_88 = *rax_2;
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0776bc345d7a7a82(&var_78, 
        arg2, "patternclean-printprint-oversile…", 7);
    void* rax_4 = clap_builder::parser::error::MatchesError::unwrap::h64788ee122c687a0(
        "patternclean-printprint-oversile…", 7, &var_78);
    int64_t var_48;
    
    if (!rax_4)
        var_48 = -0x8000000000000000;
    else
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_48, rax_4);
    
    char rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "clean-printprint-oversilentsquee…", 0xb);
    var_78 = var_48;
    char rax_7 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "print-oversilentsqueezeDisplay t…", 0xa);
    char rax_8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "silentsqueezeDisplay the content…", 6);
    char rax_9 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "squeezeDisplay the contents of a…", 7);
    int16_t rdi_9 = rax;
    bool rcx_1 = rdi_9;
    
    if (!var_80)
        rcx_1 = var_90 & r12;
    
    if (!var_80)
        rdi_9 = var_90;
    
    int64_t* rsi_5 = nullptr;
    
    if (var_88 >= 2)
        rsi_5 = var_88 - 1;
    
    if (!rax_2)
        rsi_5 = rax_2;
    
    *(arg1 + 0x24) = rax_5;
    *(arg1 + 0x18) = rsi_5;
    arg1[2] = rcx_1;
    *(arg1 + 0x22) = rdi_9 + 1;
    *arg1 = var_78;
    int64_t var_38;
    arg1[1] = var_38;
    *(arg1 + 0x25) = rax_7;
    *(arg1 + 0x26) = rax_8;
    *(arg1 + 0x27) = rax_9;
    return arg1;
}
