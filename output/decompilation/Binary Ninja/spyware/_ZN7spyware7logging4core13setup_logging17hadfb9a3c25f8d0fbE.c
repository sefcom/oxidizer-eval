
  int64_t spyware::logging::core::setup_logging::hadfb9a3c25f8d0fb(int64_t* arg1)

{
    int128_t* rbx = arg1;
    core::sync::atomic::atomic_store::hcdb68c044bd3631f(*arg1);
    int64_t var_b0 = 0;
    char var_a8 = 0;
    int64_t var_a0 = 0;
    char var_98 = 0;
    int64_t var_90 = 0;
    int64_t var_88 = 8;
    int64_t var_80 = 0;
    uint64_t var_78 = *(rbx + 8) >> 2;
    int128_t var_c8 = *rbx;
    int64_t var_b8 = rbx[1];
    void var_68;
    once_cell::sync::OnceCell$LT$T$GT$::try_insert::h31b4b9b30fac51fa(&var_68, 
        &spyware::logging::core::MEMORY_LOGGER_INSTANCE::h716e29c46813bbfa, &var_c8);
    int128_t var_128;
    int32_t var_60;
    
    if (var_60 != 6)
    {
        var_128 = var_60;
        int64_t var_10;
        int64_t var_d8_1 = var_10;
        int128_t var_20;
        int128_t var_e8_1 = var_20;
        int128_t var_30;
        int128_t var_f8_1 = var_30;
        int128_t var_40;
        int128_t var_108_1 = var_40;
        int128_t var_50;
        int128_t var_118_1 = var_50;
        
        if (var_128 != 6)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$spyware..logging..core..MemoryLogger$GT$$GT$::h253edf7ce6e0679b(&var_128);
            int64_t rax_6;
            rax_6 = 2;
            return rax_6;
        }
    }
    else
        var_128 = 6;
    
    int64_t rax_3 = spyware::logging::core::MemoryLogger::global::h99d7eb6ce0974984();
    
    if (!rax_3)
    {
        core::option::unwrap_failed::hf53ee17a2013bd69();
        /* no return */
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap::hb116e08a8e7e6c8f(log::set_logger::h154ac6d5c2538341(
        rax_3));
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$spyware..logging..core..MemoryLogger$GT$$GT$::h253edf7ce6e0679b(&var_128);
    int64_t rax_5;
    rax_5 = 3;
    return rax_5;
}
