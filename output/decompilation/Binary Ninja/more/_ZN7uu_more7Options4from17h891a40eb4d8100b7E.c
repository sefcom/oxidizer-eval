
  int128_t* uu_more::Options::from::h891a40eb4d8100b7(int128_t* arg1, void* arg2)

{
    int16_t r14 = -0xae5;
    void var_58;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he1bd1c63b5c632b9(&var_58, 
        arg2, "linesnumberfrom-linepatternclean…", 5);
    int16_t* rax = clap_builder::parser::error::MatchesError::unwrap::he5942f34b5911f57(
        "linesnumberfrom-linepatternclean…", 5, &var_58);
    
    if (rax)
        r14 = *rax;
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he1bd1c63b5c632b9(&var_58, 
        arg2, "numberfrom-linepatternclean-prin…", 6);
    uint64_t rax_1 = clap_builder::parser::error::MatchesError::unwrap::he5942f34b5911f57(
        "numberfrom-linepatternclean-prin…", 6, &var_58);
    int16_t* r13 = rax_1;
    
    if (rax_1)
        rax_1 = *r13;
    
    int16_t var_84 = rax_1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5c9036044c528d5b(&var_58, 
        arg2);
    int64_t* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h7a5118f34f3edf6d(&var_58);
    void* var_80;
    
    if (rax_2)
        var_80 = *rax_2;
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haf1677129f8b985c(&var_58, 
        arg2);
    void* rax_4 = clap_builder::parser::error::MatchesError::unwrap::ha0af60c966f39268(&var_58);
    int64_t var_70;
    
    if (!rax_4)
        var_70 = -0x8000000000000000;
    else
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_70, rax_4);
    
    char rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "clean-printprint-oversilentsquee…", 0xb);
    char rax_6 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "print-oversilentsqueezeDisplay t…", 0xa);
    char rax_7 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "silentsqueezeDisplay the content…", 6);
    char rax_8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "squeezeDisplay the contents of a…", 7);
    bool rcx_1 = r14;
    
    if (!rax)
        rcx_1 = var_84 & r13;
    
    if (!rax)
        r14 = var_84;
    
    int64_t* rsi_5 = nullptr;
    
    if (var_80 >= 2)
        rsi_5 = var_80 - 1;
    
    if (!rax_2)
        rsi_5 = rax_2;
    
    *(arg1 + 0x24) = rax_5;
    *(arg1 + 0x18) = rsi_5;
    arg1[2] = rcx_1;
    *(arg1 + 0x22) = r14 + 1;
    *arg1 = var_70;
    int64_t var_60;
    arg1[1] = var_60;
    *(arg1 + 0x25) = rax_6;
    *(arg1 + 0x26) = rax_7;
    *(arg1 + 0x27) = rax_8;
    return arg1;
}
