
  uint64_t uu_ls::extract_color::h0f500b6ec1664277(void* arg1)

{
    uint64_t rbp;
    
    if (!uu_ls::is_color_compatible_term::h4d28f84ec695f678())
        rbp = 0;
    else
    {
        int64_t* var_48;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(
            &var_48, arg1, "colorpathsindicator-styletime-st…", 5);
        void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
            "colorpathsindicator-styletime-st…", 5, &var_48);
        
        if (!rax_1)
            /* tailcall */
            return clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg1, "colorpathsindicator-styletime-st…", 5);
        
        int64_t rbx_1 = *(rax_1 + 8);
        uint64_t r14_1 = *(rax_1 + 0x10);
        rbp = 1;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, 1, 0) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "alwaysyesforcettyif-ttynevernoin…", 6) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(
            rbx_1, r14_1, "yesforcettyif-ttynevernointernal…", 3) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, 
            "forcettyif-ttynevernointernal er…", 5))
        {
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "autoBoolcodetimeHashtip:\x1b[3mC…", 4))
            {
                label_51f5ef:
                std::io::stdio::stdout::h077da66234850927();
                var_48 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                rbp = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e();
            }
            else
            {
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "ttyif-ttynevernointernal error: …", 3))
                    goto label_51f5ef;
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "if-ttynevernointernal error: ent…", 6))
                    goto label_51f5ef;
                
                rbp = 0;
            }
        }
    }
    
    return rbp;
}
