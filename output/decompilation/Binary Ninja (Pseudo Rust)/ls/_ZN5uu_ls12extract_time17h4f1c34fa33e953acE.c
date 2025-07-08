
  fn uu_ls::extract_time::h4f1c34fa33e953ac(arg1: *mut c_void) -> i64

{
    let mut var_48: *mut *mut [i8; 0xdc];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&var_48, 
        arg1, "timeHashtip:\x1b[3mCOLSWHENhashu…", 4);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
        "timeHashtip:\x1b[3mCOLSWHENhashu…", 4, &var_48);
    let mut result: i8;
    
    if rax == 0
    {
        result = 1;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg1, "ucFatal internal error. Please c…", 1) == 0
        {
            return 
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "cFatal internal error. Please co…", 1) * 2;
        }
    }
    else
    {
        let rbx_1: i64 = *rax.byte_offset(8);
        let r14_1: u64 = *rax.byte_offset(0x10);
        result = 2;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "ctimestatusaccessatimeusebirthin…", 5) == 0
        {
            result = 2;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "statusaccessatimeusebirthinterna…", 6) == 0
            {
                result = 1;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "accessatimeusebirthinternal erro…", 6) == 0
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "atimeusebirthinternal error: ent…", 5) != 0
                    {
                        return 1;
                    }
                    
                    result = 1;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "usebirthinternal error: entered …", 3) == 0
                    {
                        result = 3;
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "birthinternal error: entered unr…", 5) == 0
                        {
                            result = 3;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "creation*direct*@", 8) == 0
                            {
                                var_48 = &data_6122a0;
                                let var_40: i64 = 1;
                                let mut var_50: ();
                                let var_38: *mut c_void = &var_50;
                                let var_30: i128 = {0};
                                core::panicking::panic_fmt::he12d0d7468628bb4(&var_48);
                                /* no return */
                            }
                        }
                    }
                }
            }
        }
    }
    
    result
}
