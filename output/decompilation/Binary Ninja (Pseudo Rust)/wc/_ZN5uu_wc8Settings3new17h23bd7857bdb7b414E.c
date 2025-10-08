
  fn uu_wc::Settings::new::h23bd7857bdb7b414(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut var_58: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he062f5150264a99d(&var_58, 
        arg2);
    let rax: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h8ef5750e6559027d(&var_58);
    let mut var_70: i64;
    
    if rax == 0
    {
        var_70 = -0x7ffffffffffffffe;
    }
    else
    {
        *rax.byte_offset(0x10);
        _$LT$uu_wc..Input$u20$as$u20$core..convert..From$LT$$RF$T$GT$$GT$::from::h1ca2dfb37c66956c(
            &var_70, *rax.byte_offset(8));
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h06cd51b03da68e21(&var_58, 
        arg2);
    let rax_1: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h0b622a6a871a5391(&var_58);
    let mut var_9c: i8;
    
    if rax_1 == 0
    {
        var_9c = 0;
    }
    else
    {
        var_9c = _$LT$uu_wc..TotalWhen$u20$as$u20$core..convert..From$LT$T$GT$$GT$::from::ha52cb1a4586ff1d3(rax_1);
    }
    
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "bytescharsfiles0-fromlinesmax-li…", 5);
    let rax_4: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "charsfiles0-fromlinesmax-line-le…", 5);
    let rax_5: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "linesmax-line-lengthtotalwordsfi…", 5);
    let rax_6: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "wordsfile", 5);
    let rax_7: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "max-line-lengthtotalwordsfile", 0xf);
    let mut var_98: i128 = var_70;
    let var_80: i8 = rax_3;
    let var_7f: i8 = rax_4;
    let var_7e: i8 = rax_5;
    let var_7d: i8 = rax_6;
    let var_7c: i8 = rax_7;
    let var_7b: i8 = var_9c;
    let var_60: i64;
    
    if uu_wc::Settings::number_enabled::h3b82edec78a8e904(&var_98) == 0
    {
        arg1[1] = var_60;
        *arg1 = var_70;
        let var_40_1: i32 = 0x1010001;
        let var_3c_1: i16 = 0;
        var_58 = -0x7ffffffffffffffe;
        *arg1.byte_offset(0x18) = 0x1010001;
        *arg1.byte_offset(0x1c) = 0;
        *arg1.byte_offset(0x1d) = var_9c;
        core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::h7cbb0dba993a32a1(&var_58);
    }
    else
    {
        let zmm0_1: i128 = var_98;
        arg1[1] = var_60;
        *arg1 = zmm0_1;
    }
    arg1
}
