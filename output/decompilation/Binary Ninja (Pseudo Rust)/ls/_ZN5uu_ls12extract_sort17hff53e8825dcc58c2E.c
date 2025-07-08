
  fn uu_ls::extract_sort::hff53e8825dcc58c2(arg1: *mut c_void) -> i8

{
    let mut var_48: *mut *mut c_void;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&var_48, 
        arg1, &anon.3f7e092f2ea554bdd060175bd8ea63d9.21.llvm.16502254941234113161, 4);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
        &anon.3f7e092f2ea554bdd060175bd8ea63d9.21.llvm.16502254941234113161, 4, &var_48);
    let mut result: i8;
    
    if rax == 0
    {
        result = 3;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg1, "tUvXpfile-type/rustc/8bfcae730a5…", 1) == 0
        {
            result = 2;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "StUvXpfile-type/rustc/8bfcae730a…", 1) == 0
            {
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, "UvXpfile-type/rustc/8bfcae730a5d…", 1) != 0
                {
                    return 0;
                }
                
                result = 4;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, "vXpfile-type/rustc/8bfcae730a5db…", 1) == 0
                {
                    return clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, "Xpfile-type/rustc/8bfcae730a5db2…", 1) << 2 | 1;
                }
            }
        }
    }
    else
    {
        let rbx_1: i64 = *rax.byte_offset(8);
        let r14_1: u64 = *rax.byte_offset(0x10);
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "nonehelpNoneshimcallSlimname\x1b…", 4) != 0
        {
            return 0;
        }
        
        result = 1;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "name\x1b[0m    Cyan"`$\Utf8EADVs…", 4) == 0
        {
            result = 3;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "timeHashtip:\x1b[3mCOLSWHENhashu…", 4) == 0
            {
                result = 2;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "sizei128 as dyn Mask\nBacktrace:…", 4) == 0
                {
                    result = 4;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "versionextensionwidthinternal er…", 7) == 0
                    {
                        result = 5;
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "extensionwidthinternal error: en…", 9) == 0
                        {
                            result = 6;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(rbx_1, r14_1, "widthinternal error: entered unr…", 5) == 0
                            {
                                var_48 = &data_612278;
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
