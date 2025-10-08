
  fn fuel_core_client::client::FuelClient::required_block_height::h470eea40bb77c49a(arg1: *mut c_void, arg2: u64 @ rbx) -> u64

{
    let var_10: u64 = arg2;
    
    if *arg1.byte_offset(0x58) == 1
    {
        *arg1.byte_offset(0x60);
        return *arg1.byte_offset(0x5c);
    }
    
    let mut var_28: i8;
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h275b793663e667f3(&var_28, 
        (*arg1.byte_offset(0x60)).byte_offset(0x10));
    
    if (var_28 & 1) != 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..sync..poison..mutex..MutexGuard$LT$core..option..Option$LT$fuel_types..numeric_types..BlockHeight$GT$$GT$$C$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$core..option..Option$LT$fuel_types..numeric_types..BlockHeight$GT$$GT$$GT$$GT$$GT$::hab8a56bb85fec130(&var_28);
        return 0;
    }
    
    let var_20: *mut i32;
    let rbp_1: i32 = var_20[2];
    var_20[3];
    let var_18: i8;
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$core..option..Option$LT$fuel_types..numeric_types..BlockHeight$GT$$GT$$GT$::he101c9a7d19eefea(var_20, var_18);
    rbp_1
}
