
  int64_t uu_uniq::get_delimiter::hdb564f484ea1739f(void* arg1)

{
    void** const var_48;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7d7d706f95974719(&var_48, 
        arg1, "all-repeatedcheck-charscountigno…", 0xc);
    void* rax_1 = core::option::Option$LT$T$GT$::or_else::h88234b026605109b(
        clap_builder::parser::error::MatchesError::unwrap::h99da2efbc6cd79ff(
            "all-repeatedcheck-charscountigno…", 0xc, &var_48), 
        arg1);
    
    if (!rax_1)
        return (
            clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
            arg1, "group", 5) ^ 1) * 2 + 2;
    
    int64_t rbx_1 = *(rax_1 + 8);
    uint64_t r14_1 = *(rax_1 + 0x10);
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(rbx_1, r14_1, "appendshow all items, separating…", 6))
        return 0;
    
    char result = 1;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(rbx_1, r14_1, "prependprint all duplicate lines…", 7))
    {
        result = 2;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(rbx_1, r14_1, "separate\n       extern "", 8))
        {
            result = 3;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(rbx_1, r14_1, &data_415d10, 4))
            {
                result = 4;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(rbx_1, r14_1, "nonehelpNoneshimbothname\x1b[0m …", 4))
                {
                    var_48 = &data_530548;
                    int64_t var_40 = 1;
                    void var_50;
                    void* var_38 = &var_50;
                    int128_t var_30 = {0};
                    core::panicking::panic_fmt::he12d0d7468628bb4(&var_48);
                    /* no return */
                }
            }
        }
    }
    
    return result;
}
