
  fn uu_csplit::CsplitOptions::new::hcbcb732a44184854(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "keep-filesquietelide-empty-files…", 0xa);
    let rax_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "quietelide-empty-filesprefixsuff…", 5);
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "elide-empty-filesprefixsuffix-fo…", 0x11);
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "suppress-matcheduespemosarenegyl…", 0x10);
    let mut var_108: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6e5d98b7c91df41c(
        &var_108, arg2, "prefixsuffix-formatdigitsstream …", 6);
    let rax_4: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf5c40b70d611d755(
        "prefixsuffix-formatdigitsstream …", 6, &var_108);
    let mut var_c0: i64;
    
    if rax_4 == 0
    {
        var_c0 = -0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_c0, rax_4);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6e5d98b7c91df41c(
        &var_108, arg2, "suffix-formatdigitsstream did no…", 0xd);
    let rax_5: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf5c40b70d611d755(
        "suffix-formatdigitsstream did no…", 0xd, &var_108);
    let mut var_f8: i64;
    let mut var_d8: i64;
    
    if rax_5 == 0
    {
        var_d8 = -0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_108, rax_5);
        let var_c8_1: i64 = var_f8;
        var_d8 = var_108;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6e5d98b7c91df41c(
        &var_108, arg2, "digitsstream did not contain val…", 6);
    let rax_7: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf5c40b70d611d755(
        "digitsstream did not contain val…", 6, &var_108);
    let mut var_a8: i64;
    
    if rax_7 == 0
    {
        var_a8 = -0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_108, rax_7);
        let var_98_1: i64 = var_f8;
        var_a8 = var_108;
    }
    
    let mut var_90: i64;
    uu_csplit::split_name::SplitName::new::he14f8b59b0de5c0b(&var_90, &var_c0, &var_d8, &var_a8);
    let rax_10: i64 = var_90;
    let var_88: i128;
    var_108 = var_88;
    let var_78: i128;
    var_f8 = var_78;
    let var_68: i64;
    let mut zmm0_3: i128;
    
    if rax_10 != -0x8000000000000000
    {
        let var_40: i128;
        *arg1.byte_offset(0x50) = var_40;
        let var_50: i128;
        *arg1.byte_offset(0x40) = var_50;
        let var_60: i128;
        *arg1.byte_offset(0x30) = var_60;
        arg1[5] = var_68;
        zmm0_3 = var_108;
        *arg1.byte_offset(0x18) = var_f8;
        *arg1.byte_offset(8) = zmm0_3;
        arg1[0xc] = rax;
        *arg1.byte_offset(0x61) = rax_1;
        *arg1.byte_offset(0x62) = rax_2;
        *arg1.byte_offset(0x63) = rax_3;
    }
    else
    {
        arg1[5] = var_68;
        zmm0_3 = var_108;
        *arg1.byte_offset(0x18) = var_f8;
        *arg1.byte_offset(8) = zmm0_3;
    }
    *arg1 = rax_10;
    arg1
}
