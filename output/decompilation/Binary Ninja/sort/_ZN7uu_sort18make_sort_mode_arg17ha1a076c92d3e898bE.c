
  int64_t uu_sort::make_sort_mode_arg::ha1a076c92d3e898b(int64_t arg1, int64_t arg2, int64_t arg3, int32_t arg4, int64_t arg5, int64_t arg6)

{
    void var_2b0;
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_2b0, arg2);
    void var_530;
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_530, &var_2b0, arg4);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_2b0, &var_530, arg2);
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_530, &var_2b0, arg5, arg6);
    void var_7b0;
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_7b0, &var_530, 2);
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf24dc1420a1402d1("general-numeric-sorthuman-numeri…", 0x14, arg2, arg3))
    {
        memcpy(&var_2b0, &var_7b0, 0x280);
        clap_builder::builder::arg::Arg::conflicts_with::h64605f66e4fd67ee(&var_530, &var_2b0, 
            "general-numeric-sorthuman-numeri…");
        memcpy(&var_7b0, &var_530, 0x280);
    }
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf24dc1420a1402d1("human-numeric-sortmonth-sortnume…", 0x12, arg2, arg3))
    {
        memcpy(&var_2b0, &var_7b0, 0x280);
        clap_builder::builder::arg::Arg::conflicts_with::h64605f66e4fd67ee(&var_530, &var_2b0, 
            "human-numeric-sortmonth-sortnume…");
        memcpy(&var_7b0, &var_530, 0x280);
    }
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf24dc1420a1402d1("month-sortnumeric-sortversion-so…", 0xa, arg2, arg3))
    {
        memcpy(&var_2b0, &var_7b0, 0x280);
        clap_builder::builder::arg::Arg::conflicts_with::h64605f66e4fd67ee(&var_530, &var_2b0, 
            "month-sortnumeric-sortversion-so…");
        memcpy(&var_7b0, &var_530, 0x280);
    }
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf24dc1420a1402d1("numeric-sortversion-sortrandom-s…", 0xc, arg2, arg3))
    {
        memcpy(&var_2b0, &var_7b0, 0x280);
        clap_builder::builder::arg::Arg::conflicts_with::h64605f66e4fd67ee(&var_530, &var_2b0, 
            "numeric-sortversion-sortrandom-s…");
        memcpy(&var_7b0, &var_530, 0x280);
    }
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf24dc1420a1402d1("version-sortrandom-sortFailed to…", 0xc, arg2, arg3))
    {
        memcpy(&var_2b0, &var_7b0, 0x280);
        clap_builder::builder::arg::Arg::conflicts_with::h64605f66e4fd67ee(&var_530, &var_2b0, 
            "version-sortrandom-sortFailed to…");
        memcpy(&var_7b0, &var_530, 0x280);
    }
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf24dc1420a1402d1("random-sortFailed to fetch rlimi…", 0xb, arg2, arg3))
    {
        memcpy(&var_2b0, &var_7b0, 0x280);
        clap_builder::builder::arg::Arg::conflicts_with::h64605f66e4fd67ee(&var_530, &var_2b0, 
            "random-sortFailed to fetch rlimi…");
        memcpy(&var_7b0, &var_530, 0x280);
    }
    
    return memcpy(arg1, &var_7b0, 0x280);
}
