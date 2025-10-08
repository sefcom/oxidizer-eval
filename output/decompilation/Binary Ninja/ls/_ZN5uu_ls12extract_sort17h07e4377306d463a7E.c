
  char uu_ls::extract_sort::h07e4377306d463a7(void* arg1)

{
    char const (** const var_48)[0xb9];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(&var_48, 
        arg1, &data_4cfeac[0x38], 4);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
        &data_4cfeac[0x38], 4, &var_48);
    char result;
    
    if (!rax)
    {
        result = 3;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg1, "tUvXucblock-sizehuman-readablesi…", 1))
        {
            result = 2;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg1, "StUvXucblock-sizehuman-readables…", 1))
            {
                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, "UvXucblock-sizehuman-readablesik…", 1))
                    return 0;
                
                result = 4;
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, "vXucblock-sizehuman-readablesiki…", 1))
                    return (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, "Xucblock-sizehuman-readablesikib…", 1) << 2) + 1;
            }
        }
    }
    else
    {
        int64_t rbx_1 = *(rax + 8);
        uint64_t r14_1 = *(rax + 0x10);
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "noneSDMTHKWTNonecallNZDTshimSlim…", 4))
            return 0;
        
        result = 1;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "nameSJMTYDDTACDTBDSTCyanWAST    …", 4))
        {
            result = 3;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "timeHashW-SUtip:\x1b[3mCOLSWHENh…", 4))
            {
                result = 2;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "sizeIranWESTAKSTHKSTACSTi128 as …", 4))
                {
                    result = 4;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "versionextensioninternal error: …", 7))
                    {
                        result = 5;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "extensioninternal error: entered…", 9))
                        {
                            result = 6;
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "widthauthorformatignore-backupsd…", 5))
                            {
                                var_48 = &data_6867f8;
                                int64_t var_40 = 1;
                                void var_50;
                                void* var_38 = &var_50;
                                int128_t var_30 = {0};
                                core::panicking::panic_fmt::h96f341d36638c225(&var_48);
                                /* no return */
                            }
                        }
                    }
                }
            }
        }
    }
    
    return result;
}
