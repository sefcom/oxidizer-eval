
  fn uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut var_40: ();
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc8975813854a9a38(&var_40, 
        arg2, arg3, 1);
    let mut rdx: *mut c_void = &var_40;
    let rax: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::he70031129adfbfcb(arg3, 1, rdx);
    let mut rsi: *mut i8;
    
    if rax == 0
    {
        rsi = nullptr;
    }
    else
    {
        rsi = *rax.byte_offset(8);
        rdx = *rax.byte_offset(0x10);
    }
    
    /* tailcall */
    uu_join::parse_field_number_option::h48fa1297dd47f55b(arg1, rsi, rdx)
}
