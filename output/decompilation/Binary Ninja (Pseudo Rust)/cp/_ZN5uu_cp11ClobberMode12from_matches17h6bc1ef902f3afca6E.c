
  fn uu_cp::ClobberMode::from_matches::h6bc1ef902f3afca6(arg1: *mut c_void) -> i64

{
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, 
        "forceif an existing destination …", 5) == 0
    {
        return 2 -
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg1, "remove-destinationremove each ex…", 0x12);
    }
    
    0
}
