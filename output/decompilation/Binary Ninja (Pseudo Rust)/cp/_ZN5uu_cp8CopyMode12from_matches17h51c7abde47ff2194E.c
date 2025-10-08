
  fn uu_cp::CopyMode::from_matches::h51c7abde47ff2194(arg1: *mut c_void) -> u64

{
    let mut rbp: u64;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, 
        "link/", 4) == 0
    {
        rbp = 1;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg1, "symbolic-linkattributes-onlycopy…", 0xd) == 0
        {
            let mut var_50: ();
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb77b56fb07963162(
                &var_50, arg1, "updateumove only when the SOURCE…", 6);
            rbp = 3;
            
            if clap_builder::parser::error::MatchesError::unwrap::hf9289e9da1ed9625(
                "updateumove only when the SOURCE…", 6, &var_50) == 0 &&
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg1, "umove only when the SOURCE file …", 1) == 0
            {
                rbp = 2;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, "attributes-onlycopy-contentshard…", 0xf) != 0
                {
                    rbp = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, "remove-destinationremove each ex…", 0x12) ^ 1;
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
