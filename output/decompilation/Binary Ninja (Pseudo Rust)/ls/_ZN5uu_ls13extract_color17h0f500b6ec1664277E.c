
  fn uu_ls::extract_color::h0f500b6ec1664277(arg1: *mut c_void) -> u64

{
    let mut rbp: u64;
    
    if uu_ls::is_color_compatible_term::h4d28f84ec695f678() == 0
    {
        rbp = 0;
    }
    else
    {
        let mut var_48: *mut i64;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(
            &var_48, arg1, "colorpathsindicator-styletime-st…", 5);
        let rax_1: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
            "colorpathsindicator-styletime-st…", 5, &var_48);
        
        if rax_1 == 0
        {
            /* tailcall */
            return clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg1, "colorpathsindicator-styletime-st…", 5);
        }
        
        let rbx_1: i64 = *rax_1.byte_offset(8);
        let r14_1: u64 = *rax_1.byte_offset(0x10);
        rbp = 1;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, 1, 0) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "alwaysyesforcettyif-ttynevernoin…", 6) == 0
            && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "yesforcettyif-ttynevernointernal…", 3) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, 
            "forcettyif-ttynevernointernal er…", 5) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "autoBoolcodetimeHashtip:\x1b[3mC…", 4) != 0
            {
                'label_51f5ef:
                std::io::stdio::stdout::h077da66234850927();
                var_48 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                rbp = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e();
            }
            else
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "ttyif-ttynevernointernal error: …", 3) != 0
                {
                    goto 'label_51f5ef;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "if-ttynevernointernal error: ent…", 6) != 0
                {
                    goto 'label_51f5ef;
                }
                
                rbp = 0;
            }
        }
    }
    
    rbp
}
