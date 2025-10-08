
  fn uu_join::get_and_parse_field_number::hff9b1fd9eb95d74d(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut var_40: ();
    let mut rdx: i64 =
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3493742de87d61eb(
        &var_40, arg2, arg3);
    let rax: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::haf5154e9dc375d47(arg3, &var_40);
    let mut rsi_1: *mut i8;
    
    if rax == 0
    {
        rsi_1 = nullptr;
    }
    else
    {
        rsi_1 = *rax.byte_offset(8);
        rdx = *rax.byte_offset(0x10);
    }
    
    /* tailcall */
    uu_join::parse_field_number_option::hc351970518f2dd89(arg1, rsi_1, rdx)
}
