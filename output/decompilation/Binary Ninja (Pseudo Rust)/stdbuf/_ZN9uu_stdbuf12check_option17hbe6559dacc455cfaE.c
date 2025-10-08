
  fn uu_stdbuf::check_option::hbe6559dacc455cfa(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: u64) -> *mut c_void

{
    let mut var_50: ();
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7c505c187957c244(&var_50, 
        arg2, arg3, arg4);
    let mut result: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::hd4ff38606b85a4b5(arg3, arg4, &var_50);
    
    if result == 0
    {
        arg1[1] = 0;
    }
    else
    {
        let r12_1: *mut c_void = *result.byte_offset(8);
        let r13_1: u64 = *result.byte_offset(0x10);
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h28b68c75f758574c(r12_1, r13_1, "Lline buffering stdin is meaning…", 1) == 0
        {
            uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_50, r12_1, 
                r13_1);
            return core::result::Result$LT$T$C$E$GT$::map_or_else::h9be4422441522c52(arg1, &var_50);
        }
        
        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h28b68c75f758574c(arg3, arg4, "inputoutputerrorLline buffering …", 5);
        
        if result != 0
        {
            /* tailcall */
            return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1f3fa2d8817656ee(arg1, "line buffering stdin is meaningl…", 0x23);
        }
        
        arg1[1] = 1;
    }
    
    *arg1 = -0x8000000000000000;
    result
}
