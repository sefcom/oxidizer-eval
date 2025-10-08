
  uint64_t uu_ls::extract_hyperlink::hae52003f9f8916da(void* arg1)

{
    char const (** const var_48)[0xdf];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(&var_48, 
        arg1, "hyperlink%b %e  %Y%Y-%m-%d %Y-%m…", 9);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
        "hyperlink%b %e  %Y%Y-%m-%d %Y-%m…", 9, &var_48);
    
    if (!rax)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int64_t rbx = *(rax + 8);
    uint64_t r14 = *(rax + 0x10);
    int64_t rbp;
    rbp = 1;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, "alwaysyesforcettyif-ttynevernoin…", 6) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, 
        "yesforcettyif-ttynevernointernal…", 3) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, "forcettyif-ttynevernointernal er…", 5))
    {
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, "auto", 4))
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            /* tailcall */
            return std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
        }
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, "ttyif-ttynevernointernal error: …", 3))
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            /* tailcall */
            return std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
        }
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, "if-ttynevernointernal error: ent…", 6))
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            /* tailcall */
            return std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
        }
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, "nevernointernal error: entered u…", 5) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, 
            "nointernal error: entered unreac…", 2) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx, r14, "noneSDMTHKWTNonecallNZDTshimSlim…", 
            4))
        {
            var_48 = &data_686860;
            int64_t var_40 = 1;
            void var_50;
            void* var_38 = &var_50;
            int128_t var_30 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_48);
            /* no return */
        }
        
        rbp = 0;
    }
    
    return rbp;
}
