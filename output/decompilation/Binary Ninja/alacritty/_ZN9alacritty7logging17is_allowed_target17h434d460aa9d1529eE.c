
  int64_t* alacritty::logging::is_allowed_target::h434d460aa9d1529e(int64_t arg1, int64_t arg2)

{
    int64_t var_28 = arg2;
    int64_t rdx;
    int64_t var_20 = rdx;
    int64_t* rcx = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
    int64_t* result;
    
    if (arg1 == 1 || arg1 == 2)
        result = 1;
    
    if ((arg1 != 1 && arg1 != 2) || rcx != 5)
    {
        result = 1;
        
        if (!_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h04b8c7de0fc8a10c(&var_28))
        {
            int64_t rax;
            int64_t rdx_1;
            rax = alacritty::logging::extra_log_targets::hbdb4e65c7703ac29();
            int64_t var_18 = rax;
            int64_t var_10_1 = rax + rdx_1 * 0x18;
            return _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h0ea8184c2df356af(&var_18, &var_28);
        }
    }
    
    return result;
}
