
  fn uu_uniq::get_delimiter::h924dde71cdd564ba(arg1: *mut c_void) -> i64

{
    let mut var_48: *mut *mut c_void;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4a2509cd518fbd9f(&var_48, 
        arg1, "all-repeatedcheck-charscountigno…", 0xc);
    let rax_1: *mut c_void = core::option::Option$LT$T$GT$::or_else::h6f9ec205e9cdec7f(
        clap_builder::parser::error::MatchesError::unwrap::h0de382a77e5c484b(
            "all-repeatedcheck-charscountigno…", 0xc, &var_48), 
        arg1);
    
    if rax_1 == 0
    {
        return (
            clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            arg1, "groupfilessrc/uu/uniq/src/uniq.r…", 5) ^ 1) * 2 + 2;
    }
    
    let rbx_1: i64 = *rax_1.byte_offset(8);
    let r14_1: u64 = *rax_1.byte_offset(0x10);
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(rbx_1, r14_1, "appendshow all items, separating…", 6) != 0
    {
        return 0;
    }
    
    let mut result: i8 = 1;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(rbx_1, r14_1, "prependprint all duplicate lines…", 7) == 0
    {
        result = 2;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(rbx_1, r14_1, "separate\n       extern "ENOTUNI…", 8) == 0
        {
            result = 3;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(rbx_1, r14_1, &data_41913c[0x10], 4) == 0
            {
                result = 4;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(rbx_1, r14_1, "nonehelpNoneshimboth\x1b[0mnameC…", 4) == 0
                {
                    var_48 = &data_4f5940;
                    let var_40: i64 = 1;
                    let mut var_50: ();
                    let var_38: *mut c_void = &var_50;
                    let var_30: i128 = {0};
                    core::panicking::panic_fmt::h96f341d36638c225(&var_48);
                    /* no return */
                }
            }
        }
    }
    
    result
}
