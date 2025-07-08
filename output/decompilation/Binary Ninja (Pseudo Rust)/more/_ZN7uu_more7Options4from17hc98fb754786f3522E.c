
  fn uu_more::Options::from::hc98fb754786f3522(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut var_78: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5faaeded7704dcb7(&var_78, 
        arg2, "linesnumberfrom-linepatternclean…", 5);
    let mut rax: u64 = clap_builder::parser::error::MatchesError::unwrap::h2202a89f344cb1a0(
        "linesnumberfrom-linepatternclean…", 5, &var_78);
    let var_80: u64 = rax;
    
    if rax != 0
    {
        rax = *rax;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5faaeded7704dcb7(&var_78, 
        arg2, "numberfrom-linepatternclean-prin…", 6);
    let mut rax_1: u64 = clap_builder::parser::error::MatchesError::unwrap::h2202a89f344cb1a0(
        "numberfrom-linepatternclean-prin…", 6, &var_78);
    let r12: *mut i16 = rax_1;
    
    if rax_1 != 0
    {
        rax_1 = *r12;
    }
    
    let var_90: i16 = rax_1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc3ec2a4b53b285b0(&var_78, 
        arg2, "from-linepatternclean-printprint…", 9);
    let rax_2: *mut i64 = clap_builder::parser::error::MatchesError::unwrap::hf31638e1afc90cd2(
        "from-linepatternclean-printprint…", 9, &var_78);
    let mut var_88: *mut c_void;
    
    if rax_2 != 0
    {
        var_88 = *rax_2;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0776bc345d7a7a82(&var_78, 
        arg2, "patternclean-printprint-oversile…", 7);
    let rax_4: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h64788ee122c687a0(
        "patternclean-printprint-oversile…", 7, &var_78);
    let mut var_48: i64;
    
    if rax_4 == 0
    {
        var_48 = -0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_48, rax_4);
    }
    
    let rax_5: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "clean-printprint-oversilentsquee…", 0xb);
    var_78 = var_48;
    let rax_7: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "print-oversilentsqueezeDisplay t…", 0xa);
    let rax_8: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "silentsqueezeDisplay the content…", 6);
    let rax_9: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "squeezeDisplay the contents of a…", 7);
    let mut rdi_9: i16 = rax;
    let mut rcx_1: bool = rdi_9 != 0;
    
    if var_80 == 0
    {
        rcx_1 = var_90 != 0 & r12 != 0;
    }
    
    if var_80 == 0
    {
        rdi_9 = var_90;
    }
    
    let mut rsi_5: *mut i64 = nullptr;
    
    if var_88 >= 2
    {
        rsi_5 = var_88.byte_offset(-1);
    }
    
    if rax_2 == 0
    {
        rsi_5 = rax_2;
    }
    
    *arg1.byte_offset(0x24) = rax_5;
    *arg1.byte_offset(0x18) = rsi_5;
    arg1[2] = rcx_1;
    *arg1.byte_offset(0x22) = rdi_9 + 1;
    *arg1 = var_78;
    let var_38: i64;
    arg1[1] = var_38;
    *arg1.byte_offset(0x25) = rax_7;
    *arg1.byte_offset(0x26) = rax_8;
    *arg1.byte_offset(0x27) = rax_9;
    arg1
}
