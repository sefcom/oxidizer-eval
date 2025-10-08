
  char* fuel_core_client::client::schema::tx::_$LT$impl$u20$core..convert..TryFrom$LT$fuel_core_client..client..schema..tx..ProgramState$GT$$u20$for$u20$fuel_vm..state..ProgramState$GT$::try_from::h02db243cd6ccd8ca(char* arg1, int64_t* arg2)

{
    uint32_t rbp = arg2[3];
    int64_t var_60;
    int64_t* rsi;
    int64_t* rdi_1;
    
    if (!rbp)
    {
        int64_t var_38_1 = arg2[2];
        int128_t var_48 = *arg2;
        rdi_1 = &var_60;
        rsi = &var_48;
        label_713f24:
        alloc::vec::_$LT$impl$u20$core..convert..TryFrom$LT$alloc..vec..Vec$LT$T$C$A$GT$$GT$$u20$for$u20$$u5b$T$u3b$$u20$N$u5d$$GT$::try_from::hda5e3366c1b56843(rdi_1, rsi);
        int64_t rdi_2 = var_60;
        uint64_t var_58;
        
        if (-(rdi_2) != -0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha84acb6fbde5c50f(rdi_2, 
                var_58);
            *(arg1 + 8) = 8;
            *arg1 = 5;
        }
        else
        {
            uint64_t rax_6 = _bswap(var_58);
            *arg1 = rbp;
            *(arg1 + 8) = rax_6;
        }
    }
    else
    {
        if (rbp != 1)
        {
            int64_t var_18_1 = arg2[2];
            int128_t var_28 = *arg2;
            rdi_1 = &var_60;
            rsi = &var_28;
            goto label_713f24;
        }
        
        int32_t* rax = arg2[1];
        
        if (arg2[2] != 0x20)
        {
            *(arg1 + 8) = 8;
            *arg1 = 5;
        }
        else
        {
            int64_t rcx_1 = *(rax + 7);
            arg1[0x20] = *(rax + 0x1f);
            *(arg1 + 0x10) = *(rax + 0xf);
            *arg1 = 1;
            int32_t rdi = *(rax + 3);
            *(arg1 + 1) = *rax;
            *(arg1 + 4) = rdi;
            *(arg1 + 8) = rcx_1;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha84acb6fbde5c50f(*arg2, rax);
    }
    return arg1;
}
