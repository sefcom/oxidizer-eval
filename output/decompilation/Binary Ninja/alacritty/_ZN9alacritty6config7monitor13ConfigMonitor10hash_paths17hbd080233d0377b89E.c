
  int64_t alacritty::config::monitor::ConfigMonitor::hash_paths::hbd080233d0377b89(int64_t arg1, int64_t arg2)

{
    int64_t var_1010 = 0;
    int64_t var_2010 = 0;
    
    if (arg2 > 0x400)
        return 0;
    
    memset(&var_2010, 0, 0x2000);
    int64_t var_2058 = arg1;
    int64_t var_2050 = arg1 + arg2 * 0x18;
    int64_t var_2048 = 0;
    int64_t rax_3;
    int64_t i;
    rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0877e22635b0eae3(&var_2058);
    
    while (i)
    {
        if (rax_3 >= 0x400)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_3, 0x400);
            /* no return */
        }
        
        (&var_2010)[rax_3] = i;
        rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0877e22635b0eae3(&var_2058);
    }
    
    void var_2059;
    core::slice::sort::unstable::ipnsort::h564da9b7d84c9ea3(&var_2010, &var_2059);
    __builtin_strncpy(&var_2058, "uespemosarenegylmodnarodsetybdet", 0x48);
    core::hash::Hash::hash_slice::hcd45d8a7ab48ceec(&var_2010, &var_2058);
    _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::finish::hc4e334d8e4871601(&var_2058);
    return 1;
}
