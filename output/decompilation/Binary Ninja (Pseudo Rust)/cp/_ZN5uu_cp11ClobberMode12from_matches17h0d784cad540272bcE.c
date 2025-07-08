
  fn uu_cp::ClobberMode::from_matches::h0d784cad540272bc(arg1: *mut c_void) -> i64

{
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, 
        "forceif an existing destination …", 5) == 0
    {
        return 2 -
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg1, "remove-destinationremove each ex…", 0x12);
    }
    
    0
}
