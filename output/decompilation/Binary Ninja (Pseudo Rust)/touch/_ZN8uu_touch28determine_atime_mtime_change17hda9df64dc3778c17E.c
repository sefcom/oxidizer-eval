
  fn uu_touch::determine_atime_mtime_change::hda9df64dc3778c17(arg1: *mut c_void) -> bool

{
    let mut rbp: u64;
    let var_8: u64 = rbp;
    let mut r14: *const i8;
    let var_18: *const i8 = r14;
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg1, "timeHashj", 4);
    let mut rax_1: *mut c_void;
    
    if rax != 0
    {
        let mut var_48: ();
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf835c51125603d99(
            &var_48, arg1, "timeHashj", 4);
        rax_1 = clap_builder::parser::error::MatchesError::unwrap::h0fd0d44a61af13ca("timeHashj", 
            4, &var_48);
    }
    
    let mut rax_5: bool;
    
    if rax == 0 || rax_1 == 0
    {
        r14 = 2;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg1, "accessmodificationno-createno-de…", 6) != 0
        {
            goto 'label_5c3023;
        }
        
        rax_5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg1, "modificationno-createno-derefere…", 0xc);
        rbp = 0;
    }
    else
    {
        rbp =
            uu_touch::determine_atime_mtime_change::_$u7b$$u7b$closure$u7d$$u7d$::hfdbf3da7597c28ba(
            *rax_1.byte_offset(8), *rax_1.byte_offset(0x10));
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg1, "accessmodificationno-createno-de…", 6) == 0
        {
            rax_5 = true;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "modificationno-createno-derefere…", 0xc) == 0
            {
                rax_5 = rbp ^ 1;
                
                if rbp != 0
                {
                    goto 'label_5c307c;
                }
                
                rbp = 0;
            }
        }
        else
        {
            r14 = rbp;
            'label_5c3023:
            rax_5 = true;
            rbp = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "modificationno-createno-derefere…", 0xc) == 0
            {
                if r14 == 2
                {
                    return false;
                }
                
                r14 ^= 1;
                rax_5 = r14;
                'label_5c307c:
                rbp = 1;
                let cond:0_1: bool = rax_5 == 0;
                rax_5 = true;
                
                if cond:0_1
                {
                    return false;
                }
            }
        }
    }
    
    2 - (rbp == 0 & rax_5 != 0)
}
