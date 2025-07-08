
  fn uu_csplit::CsplitOptions::new::h18a4d0e2255fb53b(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "keep-filesquietelide-empty-files…", 0xa);
    let rax_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "quietelide-empty-filesFailed to …", 5);
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "elide-empty-filesFailed to elide…", 0x11);
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "suppress-matcheduespemosarenegyl…", 0x10);
    let mut var_c8: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf15a83bd2d124092(&var_c8, 
        arg2, "prefixsuffix-formatdigits: \nkee…", 6);
    let rax_4: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hd942431c9d8b51dc(
        "prefixsuffix-formatdigits: \nkee…", 6, &var_c8);
    let mut var_e0: *mut i64;
    
    if rax_4 == 0
    {
        var_e0 = -0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_e0, rax_4);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf15a83bd2d124092(&var_c8, 
        arg2, "suffix-formatdigits: \nkeep-file…", 0xd);
    let rax_5: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hd942431c9d8b51dc(
        "suffix-formatdigits: \nkeep-file…", 0xd, &var_c8);
    let var_b8: i64;
    let mut var_68: i64;
    let mut var_58: i64;
    
    if rax_5 == 0
    {
        var_68 = -0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_c8, rax_5);
        var_58 = var_b8;
        var_68 = var_c8;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf15a83bd2d124092(&var_c8, 
        arg2, "digits: \nkeep-filesquietelide-e…", 6);
    let rax_7: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hd942431c9d8b51dc(
        "digits: \nkeep-filesquietelide-e…", 6, &var_c8);
    let mut var_118: *mut c_void;
    
    if rax_7 == 0
    {
        var_118 = -0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_c8, rax_7);
        let var_108_1: i64 = var_b8;
        var_118 = var_c8;
    }
    
    uu_csplit::split_name::SplitName::new::h3397569db94b2c64(&var_c8, &var_e0, &var_68, &var_118);
    let var_b0: i128;
    
    if var_c8 != -0x8000000000000000
    {
        let var_78: i128;
        arg1[5] = var_78;
        let var_88: i128;
        arg1[4] = var_88;
        let zmm0_3: i128 = var_c8;
        let var_98: i128;
        arg1[3] = var_98;
        arg1[2] = var_b0;
        arg1[1] = var_b8;
        *arg1 = zmm0_3;
        arg1[6] = rax;
        *arg1.byte_offset(0x61) = rax_1;
        *arg1.byte_offset(0x62) = rax_2;
        *arg1.byte_offset(0x63) = rax_3;
        return arg1;
    }
    
    let var_a0: i64;
    let var_48: i64 = var_a0;
    var_58 = var_b0;
    var_68 = var_c8;
    let mut rax_14: *mut i64;
    let mut rdx_4: i64;
    rax_14 = uucore::util_name::h60d842bf27b05e82();
    var_e0 = rax_14;
    let var_d8: i64 = rdx_4;
    let mut var_40: *mut *mut i64 = &var_e0;
    let var_38: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2dda48c026ef89eb;
    var_118 = &data_6e1d78;
    let var_110: i64 = 2;
    let var_f8: i64 = 0;
    let var_108_2: *mut *mut *mut i64 = &var_40;
    let var_100: i64 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_118);
    var_e0 = &var_68;
    let var_d8_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$uu_csplit..csplit_error..CsplitError$u20$as$u20$core..fmt..Display$GT$::fmt::hf6930a6d48bf4e10;
    var_118 = &data_6e1d98;
    let var_110_1: i64 = 2;
    let var_f8_1: i64 = 0;
    let var_108_3: *mut i64 = &var_e0;
    let var_100_1: i64 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_118);
    std::process::exit::hf8c1b9d00a2a86fd(1);
    /* no return */
}
