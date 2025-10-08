
  void fuel_core_client::client::FuelClient::update_chain_state_info::h151b0e17701ba9b6(void* arg1, void* arg2)

{
    int32_t rbp = *(arg2 + 0x30);
    uint64_t var_48;
    
    if (rbp != 2)
    {
        int32_t* var_40;
        char var_38;
        
        if (*(arg2 + 0x40) == 1)
        {
            int32_t r12_1 = *(arg2 + 0x44);
            std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h177005a9af9870a2(&var_48, 
                *(arg1 + 0x78) + 0x10);
            
            if (var_48 != 1)
            {
                var_40[2] = 1;
                var_40[3] = r12_1;
                core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$core..option..Option$LT$fuel_types..numeric_types..BlockHeight$GT$$GT$$GT$::h1c68491567f5f660(var_40, var_38);
            }
            else
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..sync..poison..mutex..MutexGuard$LT$core..option..Option$LT$u32$GT$$GT$$C$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$core..option..Option$LT$u32$GT$$GT$$GT$$GT$$GT$::h26446d956ab895fa(&var_48);
        }
        
        if (*(arg2 + 0x48) == 1)
        {
            int32_t r12_2 = *(arg2 + 0x4c);
            std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h177005a9af9870a2(&var_48, 
                *(arg1 + 0x80) + 0x10);
            
            if (var_48 != 1)
            {
                var_40[2] = 1;
                var_40[3] = r12_2;
                core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$core..option..Option$LT$fuel_types..numeric_types..BlockHeight$GT$$GT$$GT$::h1c68491567f5f660(var_40, var_38);
            }
            else
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..sync..poison..mutex..MutexGuard$LT$core..option..Option$LT$u32$GT$$GT$$C$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$core..option..Option$LT$u32$GT$$GT$$GT$$GT$$GT$::h26446d956ab895fa(&var_48);
        }
    }
    
    if (!(*(arg1 + 0x58) & 1))
    {
        int64_t* rsi_6 = *(arg1 + 0x60);
        int64_t temp0_1 = *rsi_6;
        *rsi_6 += 1;
        
        if (temp0_1 <= -1)
            trap(6);
        
        int64_t* var_30 = rsi_6;
        
        if (rbp != 2 && *(arg2 + 0x38) == 1)
        {
            int32_t rbx_1 = *(arg2 + 0x3c);
            std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h177005a9af9870a2(&var_48, &rsi_6[2]);
            int32_t* rax_1;
            char rdx_1;
            rax_1 = core::result::Result$LT$T$C$E$GT$::expect::h6ab0340200fba02e(&var_48);
            
            if (rax_1[2] != 1 || rbx_1 >= rax_1[3])
            {
                rax_1[2] = 1;
                rax_1[3] = rbx_1;
            }
            
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$core..option..Option$LT$fuel_types..numeric_types..BlockHeight$GT$$GT$$GT$::h1c68491567f5f660(rax_1, rdx_1 & 1);
        }
        
        core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$core..option..Option$LT$fuel_types..numeric_types..BlockHeight$GT$$GT$$GT$$GT$::h39442335f15a7bc0(&var_30);
    }
}
