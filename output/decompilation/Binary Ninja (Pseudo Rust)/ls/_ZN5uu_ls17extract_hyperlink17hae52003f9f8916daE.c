
  fn uu_ls::extract_hyperlink::hae52003f9f8916da(arg1: *mut c_void) -> u64

{
    let mut var_48: *mut *mut [i8; 0xdf];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(&var_48, 
        arg1, "hyperlink%b %e  %Y%Y-%m-%d %Y-%m…", 9);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
        "hyperlink%b %e  %Y%Y-%m-%d %Y-%m…", 9, &var_48);
    
    if rax == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let rbx: i64 = *rax.byte_offset(8);
    let r14: u64 = *rax.byte_offset(0x10);
    let mut rbp: i64;
    rbp = 1;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, "alwaysyesforcettyif-ttynevernoin…", 6) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, 
        "yesforcettyif-ttynevernointernal…", 3) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, "forcettyif-ttynevernointernal er…", 
        5) == 0
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, "auto", 4) != 0
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            /* tailcall */
            return std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
        }
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, "ttyif-ttynevernointernal error: …", 3) != 0
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            /* tailcall */
            return std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
        }
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, "if-ttynevernointernal error: ent…", 6) != 0
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            /* tailcall */
            return std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
        }
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, "nevernointernal error: entered u…", 5) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, 
            "nointernal error: entered unreac…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, 
            "noneSDMTHKWTNonecallNZDTshimSlim…", 4) == 0
        {
            var_48 = &data_686860;
            let var_40: i64 = 1;
            let mut var_50: ();
            let var_38: *mut c_void = &var_50;
            let var_30: i128 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_48);
            /* no return */
        }
        
        rbp = 0;
    }
    
    rbp
}
