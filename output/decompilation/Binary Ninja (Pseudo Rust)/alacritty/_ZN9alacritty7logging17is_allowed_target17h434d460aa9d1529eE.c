
  fn alacritty::logging::is_allowed_target::h434d460aa9d1529e(arg1: i64, arg2: i64) -> *mut i64

{
    let mut var_28: i64 = arg2;
    let rdx: i64;
    let var_20: i64 = rdx;
    let rcx: *mut i64 = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
    let mut result: *mut i64;
    
    if arg1 == 1 || arg1 == 2
    {
        result = 1;
    }
    
    if (arg1 != 1 && arg1 != 2) || rcx != 5
    {
        result = 1;
        
        if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h04b8c7de0fc8a10c(
            &var_28) == 0
        {
            let mut rax: i64;
            let mut rdx_1: i64;
            rax = alacritty::logging::extra_log_targets::hbdb4e65c7703ac29();
            let mut var_18: i64 = rax;
            let var_10_1: i64 = rax + rdx_1 * 0x18;
            return _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h0ea8184c2df356af(&var_18, &var_28);
        }
    }
    
    result
}
