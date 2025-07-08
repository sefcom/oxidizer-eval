
  fn uu_ls::extract_hyperlink::h45e754338713ef3e(arg1: *mut c_void) -> u64

{
    let mut var_48: *mut i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&var_48, 
        arg1, "hyperlink ", 9);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
        "hyperlink ", 9, &var_48);
    
    if rax == 0
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let rbx: i64 = *rax.byte_offset(8);
    let r14: u64 = *rax.byte_offset(0x10);
    let mut rbp: u64;
    rbp = 1;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, "alwaysyesforcettyif-ttynevernoin…", 6) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, 
        "yesforcettyif-ttynevernointernal…", 3) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, "forcettyif-ttynevernointernal er…", 
        5) == 0
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, "autoBoolcodetimeHashtip:\x1b[3mC…", 4) != 0
        {
            'label_51f735:
            std::io::stdio::stdout::h077da66234850927();
            var_48 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
            rbp = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e();
        }
        else
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, "ttyif-ttynevernointernal error: …", 3) != 0
            {
                goto 'label_51f735;
            }
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, "if-ttynevernointernal error: ent…", 6) != 0
            {
                goto 'label_51f735;
            }
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, "nevernointernal error: entered u…", 5) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, 
                "nointernal error: entered unreac…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx, r14, 
                "nonehelpNoneshimcallSlimname\x1b…", 4) == 0
            {
                var_48 = &data_6122e0;
                let var_40: i64 = 1;
                let mut var_50: ();
                let var_38: *mut c_void = &var_50;
                let var_30: i128 = {0};
                core::panicking::panic_fmt::he12d0d7468628bb4(&var_48);
                /* no return */
            }
            
            rbp = 0;
        }
    }
    
    rbp
}
