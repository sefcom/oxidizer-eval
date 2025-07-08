
  int128_t* uu_wc::Settings::new::h34807c3ccfb33cdb(int128_t* arg1, void* arg2)

{
    int128_t var_58;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haeae6a80429df494(&var_58, 
        arg2, "files0-fromlinesmax-line-lengtht…", 0xb);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h2e8e84f85343b8e4(
        "files0-fromlinesmax-line-lengtht…", 0xb, &var_58);
    int64_t var_78;
    int64_t var_68;
    
    if (!rax)
        var_78 = -0x7ffffffffffffffe;
    else
    {
        core::ops::function::FnOnce::call_once::hd72670be98e9ca09(&var_58, rax);
        int64_t var_48;
        var_68 = var_48;
        var_78 = var_58;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he5d9c5ec371f7c77(&var_58, 
        arg2, "totalwordscapacity overflow/rust…", 5);
    void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h3533af4150754c61(
        "totalwordscapacity overflow/rust…", 5, &var_58);
    char var_9c;
    
    if (!rax_2)
        var_9c = 0;
    else
        var_9c = core::ops::function::FnOnce::call_once::h04c9fe66688ddd3e(rax_2);
    
    char rax_4 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "bytescharsfiles0-fromlinesmax-li…", 5);
    char rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "charsfiles0-fromlinesmax-line-le…", 5);
    char rax_6 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "linesmax-line-lengthtotalwordsca…", 5);
    char rax_7 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "wordscapacity overflow/rustc/8bf…", 5);
    char rax_8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "max-line-lengthtotalwordscapacit…", 0xf);
    int128_t var_98 = var_78;
    char var_80 = rax_4;
    char var_7f = rax_5;
    char var_7e = rax_6;
    char var_7d = rax_7;
    char var_7c = rax_8;
    char var_7b = var_9c;
    
    if (!uu_wc::Settings::number_enabled::he133dd856851d2dc(&var_98))
    {
        arg1[1] = var_68;
        *arg1 = var_98;
        int32_t var_40_1 = 0x1010001;
        int16_t var_3c_1 = 0;
        var_58 = -0x7ffffffffffffffe;
        *(arg1 + 0x18) = 0x1010001;
        *(arg1 + 0x1c) = 0;
        *(arg1 + 0x1d) = var_9c;
        core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::hcafeb69c0c0d0c8c(&var_58);
    }
    else
    {
        int128_t zmm0_3 = var_98;
        arg1[1] = var_68;
        *arg1 = zmm0_3;
    }
    
    return arg1;
}
