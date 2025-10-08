
  uint64_t uu_ls::extract_time::hd6278fc767568d0f(void* arg1)

{
    void** const var_50;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(&var_50, 
        arg1, "timeHashW-SUtip:\x1b[3mCOLSWHENh…", 4);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
        "timeHashW-SUtip:\x1b[3mCOLSWHENh…", 4, &var_50);
    uint64_t rbp;
    
    if (!rax)
    {
        rbp = 1;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg1, "ucblock-sizehuman-readablesikibi…", 1))
            rbp =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg1, "cblock-sizehuman-readablesikibib…", 1) * 2;
    }
    else
    {
        int64_t rbx_1 = *(rax + 8);
        uint64_t r14_1 = *(rax + 0x10);
        rbp = 2;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "ctimestatusaccessatimeusemtimemo…", 5) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, 
            "statusaccessatimeusemtimemodific…", 6))
        {
            rbp = 1;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "accessatimeusemtimemodificationb…", 6) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, 
                "atimeusemtimemodificationbirthin…", 5) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, 
                "usemtimemodificationbirthinterna…", 3))
            {
                char rax_6 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "mtimemodificationbirthinternal e…", 5);
                char rax_7;
                
                if (!rax_6)
                    rax_7 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "modificationbirthinternal error:…", 0xc);
                
                if (!rax_6 && !rax_7)
                {
                    rbp = 3;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "birthinternal error: entered unr…", 5) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, 
                        "creation@", 8))
                    {
                        var_50 = &data_686820;
                        int64_t var_48 = 1;
                        void var_58;
                        void* var_40 = &var_58;
                        int128_t var_38 = {0};
                        core::panicking::panic_fmt::h96f341d36638c225(&var_50);
                        /* no return */
                    }
                }
                else
                    rbp = 0;
            }
        }
    }
    
    return rbp;
}
