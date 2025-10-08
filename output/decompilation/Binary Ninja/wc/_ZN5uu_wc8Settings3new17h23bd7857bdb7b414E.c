
  int128_t* uu_wc::Settings::new::h23bd7857bdb7b414(int128_t* arg1, void* arg2)

{
    int64_t var_58;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he062f5150264a99d(&var_58, 
        arg2);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h8ef5750e6559027d(&var_58);
    int64_t var_70;
    
    if (!rax)
        var_70 = -0x7ffffffffffffffe;
    else
    {
        *(rax + 0x10);
        _$LT$uu_wc..Input$u20$as$u20$core..convert..From$LT$$RF$T$GT$$GT$::from::h1ca2dfb37c66956c(
            &var_70, *(rax + 8));
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h06cd51b03da68e21(&var_58, 
        arg2);
    void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::h0b622a6a871a5391(&var_58);
    char var_9c;
    
    if (!rax_1)
        var_9c = 0;
    else
        var_9c = _$LT$uu_wc..TotalWhen$u20$as$u20$core..convert..From$LT$T$GT$$GT$::from::ha52cb1a4586ff1d3(rax_1);
    
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "bytescharsfiles0-fromlinesmax-li…", 5);
    char rax_4 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "charsfiles0-fromlinesmax-line-le…", 5);
    char rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "linesmax-line-lengthtotalwordsfi…", 5);
    char rax_6 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "wordsfile", 5);
    char rax_7 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "max-line-lengthtotalwordsfile", 0xf);
    int128_t var_98 = var_70;
    char var_80 = rax_3;
    char var_7f = rax_4;
    char var_7e = rax_5;
    char var_7d = rax_6;
    char var_7c = rax_7;
    char var_7b = var_9c;
    int64_t var_60;
    
    if (!uu_wc::Settings::number_enabled::h3b82edec78a8e904(&var_98))
    {
        arg1[1] = var_60;
        *arg1 = var_70;
        int32_t var_40_1 = 0x1010001;
        int16_t var_3c_1 = 0;
        var_58 = -0x7ffffffffffffffe;
        *(arg1 + 0x18) = 0x1010001;
        *(arg1 + 0x1c) = 0;
        *(arg1 + 0x1d) = var_9c;
        core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::h7cbb0dba993a32a1(&var_58);
    }
    else
    {
        int128_t zmm0_1 = var_98;
        arg1[1] = var_60;
        *arg1 = zmm0_1;
    }
    return arg1;
}
