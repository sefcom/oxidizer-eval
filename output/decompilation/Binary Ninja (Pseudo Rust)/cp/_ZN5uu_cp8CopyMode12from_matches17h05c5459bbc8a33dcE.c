
  fn uu_cp::CopyMode::from_matches::h05c5459bbc8a33dc(arg1: *mut c_void) -> u64

{
    let mut rbp: u64;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, 
        "linkBOLDBlue\x1b[4mcyanSome of d…", 4) == 0
    {
        rbp = 1;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg1, "symbolic-linkattributes-onlycopy…", 0xd) == 0
        {
            let mut var_48: ();
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h83269f7c9d3ca029(
                &var_48, arg1, "updateumove only when the SOURCE…", 6);
            rbp = 3;
            
            if clap_builder::parser::error::MatchesError::unwrap::h30948932dbd3ab55(
                "updateumove only when the SOURCE…", 6, &var_48) == 0 &&
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "umove only when the SOURCE file …", 1) == 0
            {
                rbp = 2;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, "attributes-onlycopy-contentshard…", 0xf) != 0
                {
                    rbp = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, "remove-destinationremove each ex…", 0x12) ^ 1;
                    rbp *= 2;
                    rbp += 2;
                }
            }
        }
    }
    else
    {
        rbp = 0;
    }
    
    rbp
}
