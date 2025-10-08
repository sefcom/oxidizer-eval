
  fn uu_ls::extract_time::hd6278fc767568d0f(arg1: *mut c_void) -> u64

{
    let mut var_50: *mut *mut c_void;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(&var_50, 
        arg1, "timeHashW-SUtip:\x1b[3mCOLSWHENh…", 4);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
        "timeHashW-SUtip:\x1b[3mCOLSWHENh…", 4, &var_50);
    let mut rbp: u64;
    
    if rax == 0
    {
        rbp = 1;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg1, "ucblock-sizehuman-readablesikibi…", 1) == 0
        {
            rbp =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg1, "cblock-sizehuman-readablesikibib…", 1) * 2;
        }
    }
    else
    {
        let rbx_1: i64 = *rax.byte_offset(8);
        let r14_1: u64 = *rax.byte_offset(0x10);
        rbp = 2;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "ctimestatusaccessatimeusemtimemo…", 5) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, 
            "statusaccessatimeusemtimemodific…", 6) == 0
        {
            rbp = 1;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "accessatimeusemtimemodificationb…", 6) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, 
                "atimeusemtimemodificationbirthin…", 5) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, 
                "usemtimemodificationbirthinterna…", 3) == 0
            {
                let rax_6: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "mtimemodificationbirthinternal e…", 5);
                let mut rax_7: i8;
                
                if rax_6 == 0
                {
                    rax_7 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "modificationbirthinternal error:…", 0xc);
                }
                
                if rax_6 == 0 && rax_7 == 0
                {
                    rbp = 3;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, "birthinternal error: entered unr…", 5) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(rbx_1, r14_1, 
                        "creation@", 8) == 0
                    {
                        var_50 = &data_686820;
                        let var_48: i64 = 1;
                        let mut var_58: ();
                        let var_40: *mut c_void = &var_58;
                        let var_38: i128 = {0};
                        core::panicking::panic_fmt::h96f341d36638c225(&var_50);
                        /* no return */
                    }
                }
                else
                {
                    rbp = 0;
                }
            }
        }
    }
    
    rbp
}
