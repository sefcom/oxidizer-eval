
  fn uu_more::Options::from::h891a40eb4d8100b7(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut r14: i16 = -0xae5;
    let mut var_58: ();
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he1bd1c63b5c632b9(&var_58, 
        arg2, "linesnumberfrom-linepatternclean…", 5);
    let rax: *mut i16 = clap_builder::parser::error::MatchesError::unwrap::he5942f34b5911f57(
        "linesnumberfrom-linepatternclean…", 5, &var_58);
    
    if rax != 0
    {
        r14 = *rax;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he1bd1c63b5c632b9(&var_58, 
        arg2, "numberfrom-linepatternclean-prin…", 6);
    let mut rax_1: u64 = clap_builder::parser::error::MatchesError::unwrap::he5942f34b5911f57(
        "numberfrom-linepatternclean-prin…", 6, &var_58);
    let r13: *mut i16 = rax_1;
    
    if rax_1 != 0
    {
        rax_1 = *r13;
    }
    
    let var_84: i16 = rax_1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5c9036044c528d5b(&var_58, 
        arg2);
    let rax_2: *mut i64 =
        clap_builder::parser::error::MatchesError::unwrap::h7a5118f34f3edf6d(&var_58);
    let mut var_80: *mut c_void;
    
    if rax_2 != 0
    {
        var_80 = *rax_2;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haf1677129f8b985c(&var_58, 
        arg2);
    let rax_4: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::ha0af60c966f39268(&var_58);
    let mut var_70: i64;
    
    if rax_4 == 0
    {
        var_70 = -0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_70, rax_4);
    }
    
    let rax_5: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "clean-printprint-oversilentsquee…", 0xb);
    let rax_6: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "print-oversilentsqueezeDisplay t…", 0xa);
    let rax_7: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "silentsqueezeDisplay the content…", 6);
    let rax_8: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "squeezeDisplay the contents of a…", 7);
    let mut rcx_1: bool = r14 != 0;
    
    if rax == 0
    {
        rcx_1 = var_84 != 0 & r13 != 0;
    }
    
    if rax == 0
    {
        r14 = var_84;
    }
    
    let mut rsi_5: *mut i64 = nullptr;
    
    if var_80 >= 2
    {
        rsi_5 = var_80.byte_offset(-1);
    }
    
    if rax_2 == 0
    {
        rsi_5 = rax_2;
    }
    
    *arg1.byte_offset(0x24) = rax_5;
    *arg1.byte_offset(0x18) = rsi_5;
    arg1[2] = rcx_1;
    *arg1.byte_offset(0x22) = r14 + 1;
    *arg1 = var_70;
    let var_60: i64;
    arg1[1] = var_60;
    *arg1.byte_offset(0x25) = rax_6;
    *arg1.byte_offset(0x26) = rax_7;
    *arg1.byte_offset(0x27) = rax_8;
    arg1
}
