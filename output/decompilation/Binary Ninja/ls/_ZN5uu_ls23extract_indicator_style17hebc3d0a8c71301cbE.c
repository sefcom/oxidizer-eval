
  uint64_t uu_ls::extract_indicator_style::hebc3d0a8c71301cb(void* arg1)

{
    int64_t* var_48;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&var_48, 
        arg1, "indicator-styletime-stylefull-ti…", 0xf);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
        "indicator-styletime-stylefull-ti…", 0xf, &var_48);
    uint64_t rbp;
    
    if (!rax)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(
            &var_48, arg1, &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409, 8);
        void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
            &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409, 8, &var_48);
        
        if (!rax_5)
        {
            rbp = 1;
            
            if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, "pfile-type/rustc/8bfcae730a5db24…", 1))
                rbp = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, "file-type/rustc/8bfcae730a5db243…", 9) * 2;
        }
        else
        {
            int64_t rbx_2 = *(rax_5 + 8);
            uint64_t r14_2 = *(rax_5 + 0x10);
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "nevernointernal error: entered u…", 5))
                rbp = 0;
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "nointernal error: entered unreac…", 2))
                rbp = 0;
            else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "nonehelpNoneshimcallSlimname\x1b…", 4))
            {
                rbp = 3;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "alwaysyesforcettyif-ttynevernoin…", 6) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, 
                    "yesforcettyif-ttynevernointernal…", 3) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, 
                    "forcettyif-ttynevernointernal er…", 5))
                {
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "autoBoolcodetimeHashtip:\x1b[3mC…", 4))
                    {
                        label_51feeb:
                        std::io::stdio::stdout::h077da66234850927();
                        var_48 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                        int64_t rcx_1;
                        rcx_1 = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e();
                        rbp = rcx_1 * 3;
                    }
                    else
                    {
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "ttyif-ttynevernointernal error: …", 3))
                            goto label_51feeb;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "if-ttynevernointernal error: ent…", 6))
                            goto label_51feeb;
                        
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
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "nonehelpNoneshimcallSlimname\x1b…", 4))
            rbp = 0;
        else
        {
            rbp = 2;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "file-typeslashCOLUMNS: ignoring …", 9))
            {
                rbp = 3;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, 
                        &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409, 8))
                    rbp = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "slashCOLUMNS: ignoring invalid w…", 5);
            }
        }
    }
    
    return rbp;
}
