
  fn alacritty::config::monitor::ConfigMonitor::hash_paths::hbd080233d0377b89(arg1: i64, arg2: i64) -> i64

{
    let var_1010: i64 = 0;
    let mut var_2010: i64 = 0;
    
    if arg2 > 0x400
    {
        return 0;
    }
    
    memset(&var_2010, 0, 0x2000);
    let mut var_2058: i64 = arg1;
    let var_2050: i64 = arg1 + arg2 * 0x18;
    let var_2048: i64 = 0;
    let mut rax_3: i64;
    let mut i: i64;
    rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0877e22635b0eae3(&var_2058);
    
    while i != 0
    {
        if rax_3 >= 0x400
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_3, 0x400);
            /* no return */
        }
        
        (&var_2010)[rax_3] = i;
        rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0877e22635b0eae3(&var_2058);
    }
    
    let mut var_2059: ();
    core::slice::sort::unstable::ipnsort::h564da9b7d84c9ea3(&var_2010, &var_2059);
    __builtin_strncpy(&var_2058, "uespemosarenegylmodnarodsetybdet", 0x48);
    core::hash::Hash::hash_slice::hcd45d8a7ab48ceec(&var_2010, &var_2058);
    _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::finish::hc4e334d8e4871601(&var_2058);
    1
}
