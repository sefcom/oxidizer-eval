
  uint64_t uu_ls::extract_hyperlink::h45e754338713ef3e(void* arg1)

{
    int64_t* var_48;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&var_48, 
        arg1, "hyperlink ", 9);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9("hyperlink ", 
        9, &var_48);
    
    if (!rax)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    int64_t rbx = *(rax + 8);
    uint64_t r14 = *(rax + 0x10);
    uint64_t rbp;
    rbp = 1;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, "alwaysyesforcettyif-ttynevernoin…", 6) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, 
        "yesforcettyif-ttynevernointernal…", 3) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, "forcettyif-ttynevernointernal er…", 5))
    {
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, "autoBoolcodetimeHashtip:\x1b[3mC…", 4))
        {
            label_51f735:
            std::io::stdio::stdout::h077da66234850927();
            var_48 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
            rbp = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e();
        }
        else
        {
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, "ttyif-ttynevernointernal error: …", 3))
                goto label_51f735;
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, "if-ttynevernointernal error: ent…", 6))
                goto label_51f735;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, "nevernointernal error: entered u…", 5) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, 
                "nointernal error: entered unreac…", 2) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, 
                "nonehelpNoneshimcallSlimname\x1b…", 4))
            {
                var_48 = &data_6122e0;
                int64_t var_40 = 1;
                void var_50;
                void* var_38 = &var_50;
                int128_t var_30 = {0};
                core::panicking::panic_fmt::he12d0d7468628bb4(&var_48);
                /* no return */
            }
            
            rbp = 0;
        }
    }
    
    return rbp;
}
