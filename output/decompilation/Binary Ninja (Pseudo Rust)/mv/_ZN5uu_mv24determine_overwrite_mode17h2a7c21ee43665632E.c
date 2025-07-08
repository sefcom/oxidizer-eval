
  fn uu_mv::determine_overwrite_mode::h2a7c21ee43665632(arg1: *mut c_void) -> i64

{
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, 
        "no-clobberstrip-trailing-slashes…", 0xa) == 0
    {
        return 2 -
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg1, "interactiveno-clobberstrip-trail…", 0xb);
    }
    
    0
}
