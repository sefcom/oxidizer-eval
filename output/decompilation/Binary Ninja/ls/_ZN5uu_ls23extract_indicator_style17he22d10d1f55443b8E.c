
  uint64_t uu_ls::extract_indicator_style::he22d10d1f55443b8(void* arg1)

{
    void var_48;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(&var_48, 
        arg1, "indicator-styletime-stylefull-ti…", 0xf);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
        "indicator-styletime-stylefull-ti…", 0xf, &var_48);
    uint64_t rbp;
    
    if (!rax)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
            &var_48, arg1, "classi", 8);
        void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
            "classi", 8, &var_48);
        
        if (!rax_5)
        {
            rbp = 1;
            
            if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, "pfile-typedereferencedereference…", 1))
                rbp = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, "file-typedereferencedereference-…", 9) * 2;
        }
        else
        {
            int64_t rbx_2 = *(rax_5 + 8);
            uint64_t r14_2 = *(rax_5 + 0x10);
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "nevernointernal error: entered u…", 5))
                rbp = 0;
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "nointernal error: entered unreac…", 2))
                rbp = 0;
            else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "noneSDMTHKWTNonecallNZDTshimSlim…", 4))
            {
                rbp = 3;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "alwaysyesforcettyif-ttynevernoin…", 6) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, 
                    "yesforcettyif-ttynevernointernal…", 3) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, 
                    "forcettyif-ttynevernointernal er…", 5))
                {
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "auto", 4))
                    {
                        label_5926cb:
                        std::io::stdio::stdout::hb6a8e10bcccf3287();
                        int64_t rcx_1;
                        rcx_1 = std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
                        rbp = rcx_1 * 3;
                    }
                    else
                    {
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "ttyif-ttynevernointernal error: …", 3))
                            goto label_5926cb;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "if-ttynevernointernal error: ent…", 6))
                            goto label_5926cb;
                        
                        rbp = 0;
                    }
                }
            }
            else
                rbp = 0;
        }
    }
    else
    {
        int64_t rbx_1 = *(rax + 8);
        uint64_t r14_1 = *(rax + 0x10);
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "noneSDMTHKWTNonecallNZDTshimSlim…", 4))
            rbp = 0;
        else
        {
            rbp = 2;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "file-typedereferencedereference-…", 9))
            {
                rbp = 3;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "classi", 8))
                    rbp = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "slashCOLUMNS: ignoring invalid w…", 5);
            }
        }
    }
    
    return rbp;
}
