
  fn uu_ls::extract_format::h7d78a4a0dcc4169d(arg1: *mut i8, arg2: *mut c_void) -> i64

{
    let mut var_58: *mut *mut [i8; 0x95];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&var_58, 
        arg2, "formatignore-backupsdirectoryino…", 6);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
        "formatignore-backupsdirectoryino…", 6, &var_58);
    let mut result: i8;
    
    if rax == 0
    {
        result =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "long\x1b[7m", 4);
        
        if result == 0
        {
            result =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "xtabsizemgonumeric-uid-giducFata…", 1);
            
            if result == 0
            {
                result = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "mgonumeric-uid-giducFatal intern…", 1);
                
                if result == 0
                {
                    result = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "Cxtabsizemgonumeric-uid-giducFat…", 1);
                    
                    if result == 0
                    {
                        std::io::stdio::stdout::h077da66234850927();
                        var_58 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                        result = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e();
                        
                        if result == 0
                        {
                            *arg1 = 2;
                        }
                        else
                        {
                            *arg1 = 0;
                        }
                        
                        *arg1.byte_offset(8) = 0;
                    }
                    else
                    {
                        *arg1 = 0;
                        *arg1.byte_offset(8) = "Cxtabsizemgonumeric-uid-giducFat…";
                        *arg1.byte_offset(0x10) = 1;
                    }
                }
                else
                {
                    *arg1 = 4;
                    *arg1.byte_offset(8) = "mgonumeric-uid-giducFatal intern…";
                    *arg1.byte_offset(0x10) = 1;
                }
            }
            else
            {
                *arg1 = 3;
                *arg1.byte_offset(8) = "xtabsizemgonumeric-uid-giducFata…";
                *arg1.byte_offset(0x10) = 1;
            }
        }
        else
        {
            *arg1 = 1;
            *arg1.byte_offset(8) = "long\x1b[7m";
            *arg1.byte_offset(0x10) = 4;
        }
    }
    else
    {
        let r15_1: i64 = *rax.byte_offset(8);
        let r12_1: u64 = *rax.byte_offset(0x10);
        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "long\x1b[7m", 4);
        let mut rbp: i64;
        rbp = 1;
        
        if result == 0
        {
            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "verbosesingle-columncolumnsacros…", 7);
            
            if result == 0
            {
                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "single-columncolumnsacrosshorizo…", 0xd);
                rbp = 2;
                
                if result == 0
                {
                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "columnsacrosshorizontalcommasint…", 7);
                    
                    if result != 0
                    {
                        rbp = 0;
                    }
                    else
                    {
                        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "verticalNovember", 8);
                        
                        if result == 0
                        {
                            result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "acrosshorizontalcommasinternal e…", 6);
                            rbp = 3;
                            
                            if result == 0
                            {
                                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "horizontalcommasinternal error: …", 0xa);
                                
                                if result == 0
                                {
                                    result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r15_1, r12_1, "commasinternal error: entered un…", 6);
                                    rbp = 4;
                                    
                                    if result == 0
                                    {
                                        var_58 = &data_612250;
                                        let var_50: i64 = 1;
                                        let mut var_60: ();
                                        let var_48: *mut c_void = &var_60;
                                        let var_40: i128 = {0};
                                        core::panicking::panic_fmt::he12d0d7468628bb4(&var_58);
                                        /* no return */
                                    }
                                }
                            }
                        }
                        else
                        {
                            rbp = 0;
                        }
                    }
                }
            }
        }
        
        *arg1 = rbp;
        *arg1.byte_offset(8) = "formatignore-backupsdirectoryino…";
        *arg1.byte_offset(0x10) = 6;
    }
    
    result
}
