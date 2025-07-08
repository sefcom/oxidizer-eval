
  int64_t uu_ls::extract_format::h7d78a4a0dcc4169d(char* arg1, void* arg2)

{
    char const (** const var_58)[0x95];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&var_58, 
        arg2, "formatignore-backupsdirectoryino…", 6);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
        "formatignore-backupsdirectoryino…", 6, &var_58);
    char result;
    
    if (!rax)
    {
        result =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "long\x1b[7m", 4);
        
        if (!result)
        {
            result =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "xtabsizemgonumeric-uid-giducFata…", 1);
            
            if (!result)
            {
                result = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "mgonumeric-uid-giducFatal intern…", 1);
                
                if (!result)
                {
                    result = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "Cxtabsizemgonumeric-uid-giducFat…", 1);
                    
                    if (!result)
                    {
                        std::io::stdio::stdout::h077da66234850927();
                        var_58 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                        result = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e();
                        
                        if (!result)
                            *arg1 = 2;
                        else
                            *arg1 = 0;
                        
                        *(arg1 + 8) = 0;
                    }
                    else
                    {
                        *arg1 = 0;
                        *(arg1 + 8) = "Cxtabsizemgonumeric-uid-giducFat…";
                        *(arg1 + 0x10) = 1;
                    }
                }
                else
                {
                    *arg1 = 4;
                    *(arg1 + 8) = "mgonumeric-uid-giducFatal intern…";
                    *(arg1 + 0x10) = 1;
                }
            }
            else
            {
                *arg1 = 3;
                *(arg1 + 8) = "xtabsizemgonumeric-uid-giducFata…";
                *(arg1 + 0x10) = 1;
            }
        }
        else
        {
            *arg1 = 1;
            *(arg1 + 8) = "long\x1b[7m";
            *(arg1 + 0x10) = 4;
        }
    }
    else
    {
        int64_t r15_1 = *(rax + 8);
        uint64_t r12_1 = *(rax + 0x10);
        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "long\x1b[7m", 4);
        int64_t rbp;
        rbp = 1;
        
        if (!result)
        {
            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "verbosesingle-columncolumnsacros…", 7);
            
            if (!result)
            {
                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "single-columncolumnsacrosshorizo…", 0xd);
                rbp = 2;
                
                if (!result)
                {
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "columnsacrosshorizontalcommasint…", 7);
                    
                    if (result)
                        rbp = 0;
                    else
                    {
                        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "verticalNovember", 8);
                        
                        if (!result)
                        {
                            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "acrosshorizontalcommasinternal e…", 6);
                            rbp = 3;
                            
                            if (!result)
                            {
                                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "horizontalcommasinternal error: …", 0xa);
                                
                                if (!result)
                                {
                                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "commasinternal error: entered un…", 6);
                                    rbp = 4;
                                    
                                    if (!result)
                                    {
                                        var_58 = &data_612250;
                                        int64_t var_50 = 1;
                                        void var_60;
                                        void* var_48 = &var_60;
                                        int128_t var_40 = {0};
                                        core::panicking::panic_fmt::he12d0d7468628bb4(&var_58);
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
