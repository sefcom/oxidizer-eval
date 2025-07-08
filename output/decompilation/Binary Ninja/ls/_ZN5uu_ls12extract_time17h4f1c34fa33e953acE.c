
  int64_t uu_ls::extract_time::h4f1c34fa33e953ac(void* arg1)

{
    char const (** const var_48)[0xdc];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&var_48, 
        arg1, "timeHashtip:\x1b[3mCOLSWHENhashu…", 4);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
        "timeHashtip:\x1b[3mCOLSWHENhashu…", 4, &var_48);
    char result;
    
    if (!rax)
    {
        result = 1;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "ucFatal internal error. Please c…", 1))
            return 
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "cFatal internal error. Please co…", 1) * 2;
    }
    else
    {
        int64_t rbx_1 = *(rax + 8);
        uint64_t r14_1 = *(rax + 0x10);
        result = 2;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "ctimestatusaccessatimeusebirthin…", 5))
        {
            result = 2;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "statusaccessatimeusebirthinterna…", 6))
            {
                result = 1;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "accessatimeusebirthinternal erro…", 6))
                {
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "atimeusebirthinternal error: ent…", 5))
                        return 1;
                    
                    result = 1;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "usebirthinternal error: entered …", 3))
                    {
                        result = 3;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "birthinternal error: entered unr…", 5))
                        {
                            result = 3;
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "creation*direct*@", 8))
                            {
                                var_48 = &data_6122a0;
                                int64_t var_40 = 1;
                                void var_50;
                                void* var_38 = &var_50;
                                int128_t var_30 = {0};
                                core::panicking::panic_fmt::he12d0d7468628bb4(&var_48);
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
