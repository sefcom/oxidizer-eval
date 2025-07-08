
  fn uu_ptx::read_char_filter_file::hb5c562555cafe5d8(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let mut var_48: i32;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&var_48, 
        arg2, "break-fileignore-caseignore-file…", 0xa);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(
        "break-fileignore-caseignore-file…", 0xa, &var_48);
    
    if rax == 0
    {
        core::option::expect_failed::h9e03a1f6ff88dbcf("parsing options failed!src/uu/pt…");
        /* no return */
    }
    
    std::fs::File::open::h687c8ff425f1a70d(&var_48, rax);
    
    if var_48 != 0
    {
        let result: i64;
        arg1[1] = result;
        *arg1 = 0;
        return result;
    }
    
    let var_44: i32;
    let mut var_64: i32 = var_44;
    let mut var_60: i64 = 0;
    let var_58_1: i64 = 1;
    let var_50_1: i64 = 0;
    let mut rax_3: i64;
    let mut rdx_1: i64;
    rax_3 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_string::h16b54f4758140c12(
        &var_64, &var_60);
    
    if rax_3 == 0
    {
        _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::hbf1f9522d15aa47d(&var_48, var_58_1);
        let zmm0_1: i128 = var_48;
        let var_28: i128;
        *arg1.byte_offset(0x20) = var_28;
        let var_38: i128;
        *arg1.byte_offset(0x10) = var_38;
        *arg1 = zmm0_1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_60);
    }
    else
    {
        arg1[1] = rdx_1;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_60);
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::hd08ffe348cbe9063(&var_64)
}
