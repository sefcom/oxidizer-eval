
  fn uu_ls::extract_indicator_style::he22d10d1f55443b8(arg1: *mut c_void) -> u64

{
    let mut var_48: ();
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(&var_48, 
        arg1, "indicator-styletime-stylefull-ti…", 0xf);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
        "indicator-styletime-stylefull-ti…", 0xf, &var_48);
    let mut rbp: u64;
    
    if rax == 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
            &var_48, arg1, "classi", 8);
        let rax_5: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763("classi", 8, 
            &var_48);
        
        if rax_5 == 0
        {
            rbp = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg1, "pfile-typedereferencedereference…", 1) == 0
            {
                rbp = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, "file-typedereferencedereference-…", 9) * 2;
            }
        }
        else
        {
            let rbx_2: i64 = *rax_5.byte_offset(8);
            let r14_2: u64 = *rax_5.byte_offset(0x10);
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "nevernointernal error: entered u…", 5) != 0
            {
                rbp = 0;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "nointernal error: entered unreac…", 2) != 0
            {
                rbp = 0;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "noneSDMTHKWTNonecallNZDTshimSlim…", 4) == 0
            {
                rbp = 3;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "alwaysyesforcettyif-ttynevernoin…", 6) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, 
                    "yesforcettyif-ttynevernointernal…", 3) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, 
                    "forcettyif-ttynevernointernal er…", 5) == 0
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "auto", 4) != 0
                    {
                        'label_5926cb:
                        std::io::stdio::stdout::hb6a8e10bcccf3287();
                        let mut rcx_1: i64;
                        rcx_1 = std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985()
                            != 0;
                        rbp = rcx_1 * 3;
                    }
                    else
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "ttyif-ttynevernointernal error: …", 3) != 0
                        {
                            goto 'label_5926cb;
                        }
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_2, r14_2, "if-ttynevernointernal error: ent…", 6) != 0
                        {
                            goto 'label_5926cb;
                        }
                        
                        rbp = 0;
                    }
                }
            }
            else
            {
                rbp = 0;
            }
        }
    }
    else
    {
        let rbx_1: i64 = *rax.byte_offset(8);
        let r14_1: u64 = *rax.byte_offset(0x10);
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "noneSDMTHKWTNonecallNZDTshimSlim…", 4) != 0
        {
            rbp = 0;
        }
        else
        {
            rbp = 2;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "file-typedereferencedereference-…", 9) == 0
            {
                rbp = 3;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "classi", 8) == 0
                {
                    rbp = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "slashCOLUMNS: ignoring invalid w…", 5);
                }
            }
        }
    }
    
    rbp
}
