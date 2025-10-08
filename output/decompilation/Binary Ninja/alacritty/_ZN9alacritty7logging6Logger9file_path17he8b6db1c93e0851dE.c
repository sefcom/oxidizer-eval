
  int64_t alacritty::logging::Logger::file_path::he8b6db1c93e0851d(int64_t* arg1, void* arg2)

{
    char var_30;
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h0356afe7acdc80ff(&var_30, arg2 + 0x30);
    
    if (var_30 & 1)
    {
        int64_t result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..sync..poison..mutex..MutexGuard$LT$alacritty..logging..OnDemandLogFile$GT$$C$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$alacritty..logging..OnDemandLogFile$GT$$GT$$GT$$GT$::h1662b955727f946c(&var_30);
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int32_t* var_28;
    _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
        &var_30, *(var_28 + 0x10), *(var_28 + 0x18));
    char var_20;
    arg1[2] = var_20;
    *arg1 = var_30;
    /* tailcall */
    return core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$alacritty..logging..OnDemandLogFile$GT$$GT$::h04acd6e250735d2b(var_28, var_20);
}
