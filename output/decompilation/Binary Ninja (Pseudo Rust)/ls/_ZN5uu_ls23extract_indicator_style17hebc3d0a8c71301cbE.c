
  fn uu_ls::extract_indicator_style::hebc3d0a8c71301cb(arg1: *mut c_void) -> u64

{
    let mut var_48: *mut i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&var_48, 
        arg1, "indicator-styletime-stylefull-ti…", 0xf);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
        "indicator-styletime-stylefull-ti…", 0xf, &var_48);
    let mut rbp: u64;
    
    if rax == 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(
            &var_48, arg1, &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409, 8);
        let rax_5: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
            &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409, 8, &var_48);
        
        if rax_5 == 0
        {
            rbp = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "pfile-type/rustc/8bfcae730a5db24…", 1) == 0
            {
                rbp = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, "file-type/rustc/8bfcae730a5db243…", 9) * 2;
            }
        }
        else
        {
            let rbx_2: i64 = *rax_5.byte_offset(8);
            let r14_2: u64 = *rax_5.byte_offset(0x10);
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "nevernointernal error: entered u…", 5) != 0
            {
                rbp = 0;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "nointernal error: entered unreac…", 2) != 0
            {
                rbp = 0;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "nonehelpNoneshimcallSlimname\x1b…", 4) == 0
            {
                rbp = 3;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "alwaysyesforcettyif-ttynevernoin…", 6) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, 
                    "yesforcettyif-ttynevernointernal…", 3) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, 
                    "forcettyif-ttynevernointernal er…", 5) == 0
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "autoBoolcodetimeHashtip:\x1b[3mC…", 4) != 0
                    {
                        'label_51feeb:
                        std::io::stdio::stdout::h077da66234850927();
                        var_48 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                        let mut rcx_1: i64;
                        rcx_1 = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e() != 0;
                        rbp = rcx_1 * 3;
                    }
                    else
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "ttyif-ttynevernointernal error: …", 3) != 0
                        {
                            goto 'label_51feeb;
                        }
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_2, r14_2, "if-ttynevernointernal error: ent…", 6) != 0
                        {
                            goto 'label_51feeb;
                        }
                        
                        rbp = 0;
                    }
                }
            }
            else
            {
                rbp = 0;
            }
        }
    }
    else
    {
        let rbx_1: i64 = *rax.byte_offset(8);
        let r14_1: u64 = *rax.byte_offset(0x10);
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "nonehelpNoneshimcallSlimname\x1b…", 4) != 0
        {
            rbp = 0;
        }
        else
        {
            rbp = 2;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "file-typeslashCOLUMNS: ignoring …", 9) == 0
            {
                rbp = 3;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, 
                    &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409, 8) == 0
                {
                    rbp = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "slashCOLUMNS: ignoring invalid w…", 5);
                }
            }
        }
    }
    
    rbp
}
