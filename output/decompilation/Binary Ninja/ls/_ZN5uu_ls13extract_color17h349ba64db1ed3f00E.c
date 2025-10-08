
  uint64_t uu_ls::extract_color::h349ba64db1ed3f00(void* arg1)

{
    int64_t rbp;
    
    if (!uu_ls::is_color_compatible_term::h34ae6fe86d1936c0())
        rbp = 0;
    else
    {
        void var_48;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
            &var_48, arg1, "colorpathsindicator-styletime-st…", 5);
        void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
            "colorpathsindicator-styletime-st…", 5, &var_48);
        
        if (!rax_1)
            /* tailcall */
            return clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg1, "colorpathsindicator-styletime-st…", 5);
        
        int64_t rbx_1 = *(rax_1 + 8);
        uint64_t r14_1 = *(rax_1 + 0x10);
        rbp = 1;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, 1, 0) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "alwaysyesforcettyif-ttynevernoin…", 6) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(
            rbx_1, r14_1, "yesforcettyif-ttynevernointernal…", 3) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, 
            "forcettyif-ttynevernointernal er…", 5))
        {
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "auto", 4))
            {
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                /* tailcall */
                return std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
            }
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "ttyif-ttynevernointernal error: …", 3))
            {
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                /* tailcall */
                return std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
            }
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "if-ttynevernointernal error: ent…", 6))
            {
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                /* tailcall */
                return std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
            }
            
            rbp = 0;
        }
    }
    
    return rbp;
}
