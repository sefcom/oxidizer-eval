
  uint64_t fuel_core_client::client::FuelClient::required_block_height::h470eea40bb77c49a(void* arg1, uint64_t arg2 @ rbx)

{
    uint64_t var_10 = arg2;
    
    if (*(arg1 + 0x58) == 1)
    {
        *(arg1 + 0x60);
        return *(arg1 + 0x5c);
    }
    
    char var_28;
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h275b793663e667f3(&var_28, 
        *(arg1 + 0x60) + 0x10);
    
    if (var_28 & 1)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..sync..poison..mutex..MutexGuard$LT$core..option..Option$LT$fuel_types..numeric_types..BlockHeight$GT$$GT$$C$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$core..option..Option$LT$fuel_types..numeric_types..BlockHeight$GT$$GT$$GT$$GT$$GT$::hab8a56bb85fec130(&var_28);
        return 0;
    }
    
    int32_t* var_20;
    int32_t rbp_1 = var_20[2];
    var_20[3];
    char var_18;
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$core..option..Option$LT$fuel_types..numeric_types..BlockHeight$GT$$GT$$GT$::he101c9a7d19eefea(var_20, var_18);
    return rbp_1;
}
