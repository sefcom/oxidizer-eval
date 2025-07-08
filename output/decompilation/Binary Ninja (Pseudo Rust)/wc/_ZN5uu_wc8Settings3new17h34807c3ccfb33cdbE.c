
  fn uu_wc::Settings::new::h34807c3ccfb33cdb(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut var_58: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haeae6a80429df494(&var_58, 
        arg2, "files0-fromlinesmax-line-lengtht…", 0xb);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h2e8e84f85343b8e4(
        "files0-fromlinesmax-line-lengtht…", 0xb, &var_58);
    let mut var_78: i64;
    let mut var_68: i64;
    
    if rax == 0
    {
        var_78 = -0x7ffffffffffffffe;
    }
    else
    {
        core::ops::function::FnOnce::call_once::hd72670be98e9ca09(&var_58, rax);
        let var_48: i64;
        var_68 = var_48;
        var_78 = var_58;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he5d9c5ec371f7c77(&var_58, 
        arg2, "totalwordscapacity overflow/rust…", 5);
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h3533af4150754c61(
        "totalwordscapacity overflow/rust…", 5, &var_58);
    let mut var_9c: i8;
    
    if rax_2 == 0
    {
        var_9c = 0;
    }
    else
    {
        var_9c = core::ops::function::FnOnce::call_once::h04c9fe66688ddd3e(rax_2);
    }
    
    let rax_4: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "bytescharsfiles0-fromlinesmax-li…", 5);
    let rax_5: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "charsfiles0-fromlinesmax-line-le…", 5);
    let rax_6: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "linesmax-line-lengthtotalwordsca…", 5);
    let rax_7: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "wordscapacity overflow/rustc/8bf…", 5);
    let rax_8: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "max-line-lengthtotalwordscapacit…", 0xf);
    let mut var_98: i128 = var_78;
    let var_80: i8 = rax_4;
    let var_7f: i8 = rax_5;
    let var_7e: i8 = rax_6;
    let var_7d: i8 = rax_7;
    let var_7c: i8 = rax_8;
    let var_7b: i8 = var_9c;
    
    if uu_wc::Settings::number_enabled::he133dd856851d2dc(&var_98) == 0
    {
        arg1[1] = var_68;
        *arg1 = var_98;
        let var_40_1: i32 = 0x1010001;
        let var_3c_1: i16 = 0;
        var_58 = -0x7ffffffffffffffe;
        *arg1.byte_offset(0x18) = 0x1010001;
        *arg1.byte_offset(0x1c) = 0;
        *arg1.byte_offset(0x1d) = var_9c;
        core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::hcafeb69c0c0d0c8c(&var_58);
    }
    else
    {
        let zmm0_3: i128 = var_98;
        arg1[1] = var_68;
        *arg1 = zmm0_3;
    }
    
    arg1
}
