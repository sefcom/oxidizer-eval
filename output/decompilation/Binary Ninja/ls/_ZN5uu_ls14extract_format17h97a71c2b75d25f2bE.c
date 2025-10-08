
  int64_t uu_ls::extract_format::h97a71c2b75d25f2b(char* arg1, void* arg2)

{
    void** const var_58;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(&var_58, 
        arg2, "formatignore-backupsdirectoryino…", 6);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
        "formatignore-backupsdirectoryino…", 6, &var_58);
    char result;
    
    if (!rax)
    {
        result =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "long', 'FFMTZero\x1b[7mauto", 4);
        
        if (!result)
        {
            result =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "xtabsizemgonumeric-uid-gidallalm…", 1);
            
            if (!result)
            {
                result = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "mgonumeric-uid-gidallalmost-allS…", 1);
                
                if (!result)
                {
                    result = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "Cxtabsizemgonumeric-uid-gidallal…", 1);
                    
                    if (!result)
                    {
                        std::io::stdio::stdout::hb6a8e10bcccf3287();
                        result =
                            std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
                        
                        if (!result)
                            *arg1 = 2;
                        else
                            *arg1 = 0;
                        
                        *(arg1 + 8) = 0;
                    }
                    else
                    {
                        *arg1 = 0;
                        *(arg1 + 8) = "Cxtabsizemgonumeric-uid-gidallal…";
                        *(arg1 + 0x10) = 1;
                    }
                }
                else
                {
                    *arg1 = 4;
                    *(arg1 + 8) = "mgonumeric-uid-gidallalmost-allS…";
                    *(arg1 + 0x10) = 1;
                }
            }
            else
            {
                *arg1 = 3;
                *(arg1 + 8) = "xtabsizemgonumeric-uid-gidallalm…";
                *(arg1 + 0x10) = 1;
            }
        }
        else
        {
            *arg1 = 1;
            *(arg1 + 8) = "long', 'FFMTZero\x1b[7mauto";
            *(arg1 + 0x10) = 4;
        }
    }
    else
    {
        int64_t r15_1 = *(rax + 8);
        uint64_t r12_1 = *(rax + 0x10);
        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(r15_1, r12_1, "long', 'FFMTZero\x1b[7mauto", 4);
        int64_t rbp;
        rbp = 1;
        
        if (!result)
        {
            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(r15_1, r12_1, "verbosesingle-columncolumnsacros…", 7);
            
            if (!result)
            {
                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(r15_1, r12_1, "single-columncolumnsacrosshorizo…", 0xd);
                rbp = 2;
                
                if (!result)
                {
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(r15_1, r12_1, "columnsacrosshorizontalcommasint…", 7);
                    
                    if (result)
                        rbp = 0;
                    else
                    {
                        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(r15_1, r12_1, "vertical", 8);
                        
                        if (!result)
                        {
                            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(r15_1, r12_1, "acrosshorizontalcommasinternal e…", 6);
                            rbp = 3;
                            
                            if (!result)
                            {
                                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(r15_1, r12_1, "horizontalcommasinternal error: …", 0xa);
                                
                                if (!result)
                                {
                                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(r15_1, r12_1, "commasinternal error: entered un…", 6);
                                    rbp = 4;
                                    
                                    if (!result)
                                    {
                                        var_58 = &data_6867d0;
                                        int64_t var_50 = 1;
                                        void var_60;
                                        void* var_48 = &var_60;
                                        int128_t var_40 = {0};
                                        core::panicking::panic_fmt::h96f341d36638c225(&var_58);
                                        /* no return */
                                    }
                                }
                            }
                        }
                        else
                            rbp = 0;
                    }
                }
            }
        }
        
        *arg1 = rbp;
        *(arg1 + 8) = "formatignore-backupsdirectoryino…";
        *(arg1 + 0x10) = 6;
    }
    
    return result;
}
