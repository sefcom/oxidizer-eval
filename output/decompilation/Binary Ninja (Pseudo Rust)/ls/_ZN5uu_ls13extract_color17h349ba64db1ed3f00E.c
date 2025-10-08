
  fn uu_ls::extract_color::h349ba64db1ed3f00(arg1: *mut c_void) -> u64

{
    let mut rbp: i64;
    
    if uu_ls::is_color_compatible_term::h34ae6fe86d1936c0() == 0
    {
        rbp = 0;
    }
    else
    {
        let mut var_48: ();
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
            &var_48, arg1, "colorpathsindicator-styletime-st…", 5);
        let rax_1: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
            "colorpathsindicator-styletime-st…", 5, &var_48);
        
        if rax_1 == 0
        {
            /* tailcall */
            return clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg1, "colorpathsindicator-styletime-st…", 5);
        }
        
        let rbx_1: i64 = *rax_1.byte_offset(8);
        let r14_1: u64 = *rax_1.byte_offset(0x10);
        rbp = 1;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, 1, 0) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "alwaysyesforcettyif-ttynevernoin…", 6) == 0
            && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "yesforcettyif-ttynevernointernal…", 3) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, 
            "forcettyif-ttynevernointernal er…", 5) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "auto", 4) != 0
            {
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                /* tailcall */
                return std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
            }
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "ttyif-ttynevernointernal error: …", 3) != 0
            {
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                /* tailcall */
                return std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
            }
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "if-ttynevernointernal error: ent…", 6) != 0
            {
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                /* tailcall */
                return std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
            }
            
            rbp = 0;
        }
    }
    
    rbp
}
