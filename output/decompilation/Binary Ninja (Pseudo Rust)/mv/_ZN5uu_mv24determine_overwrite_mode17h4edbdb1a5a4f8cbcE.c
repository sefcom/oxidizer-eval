
  fn uu_mv::determine_overwrite_mode::h4edbdb1a5a4f8cbc(arg1: *mut c_void) -> i64

{
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, 
        "no-clobberstrip-trailing-slashes…", 0xa) == 0
    {
        return 2 -
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg1, "interactiveno-clobberstrip-trail…", 0xb);
    }
    
    0
}
