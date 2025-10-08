
  int64_t* fuel_core_keygen::Command::exec::h7b13e9ffe44d0813(char* arg1, int64_t* arg2)

{
    int64_t* result;
    char result_1;
    int32_t var_1ff;
    int64_t var_1f8;
    int128_t var_1f0;
    int64_t var_1e0;
    int64_t* result_2;
    int128_t var_1d0;
    int64_t rcx_4;
    char rdx_3;
    
    if (!(0 + -(*arg2)))
    {
        fuel_core_keygen::parse_secret::h9a30821daaaf76fe(&var_1e0, *(arg2 + 0x19), arg2[1], 
            arg2[2]);
        int64_t rcx_2 = var_1e0;
        result = result_2;
        
        if (rcx_2 != 2)
        {
            int128_t var_170;
            int128_t var_d0_1 = var_170;
            int128_t var_180;
            int128_t var_e0_1 = var_180;
            int128_t var_190;
            int128_t var_f0_1 = var_190;
            int128_t var_1a0;
            int128_t var_100_1 = var_1a0;
            int128_t var_1b0;
            int128_t var_110_1 = var_1b0;
            int128_t var_1c0;
            int128_t var_120_1 = var_1c0;
            int128_t var_130_1 = var_1d0;
            int64_t var_140 = rcx_2;
            int64_t* result_3 = result;
            serde_json::value::to_value::h79764bd2822118aa(&result_1, &var_140);
            result = result_1;
            
            if (result == 6)
            {
                label_48b8b2:
                result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::hf165bc09399aedc8(var_1f8);
                *arg1 = result;
                arg1[0x20] = 2;
            }
            else
            {
                *(arg1 + 4) = var_1ff;
                *(arg1 + 1) = var_1ff;
                rcx_4 = var_1f8;
                *(arg1 + 0x10) = var_1f0;
                rdx_3 = arg2[3];
                label_48b895:
                *arg1 = result;
                *(arg1 + 8) = rcx_4;
                arg1[0x20] = rdx_3;
            }
        }
        else
        {
            *arg1 = result;
            arg1[0x20] = 2;
        }
    }
    else
    {
        result = fuel_core_keygen::new_key::h5166178937848b2b(&var_1e0, *(arg2 + 9));
        int64_t r12_1 = var_1e0;
        
        if (r12_1 != 2)
        {
            void var_b0;
            memcpy(&var_b0, &var_1d0, 0x90);
            int64_t var_c0 = r12_1;
            int64_t* result_4 = result_2;
            serde_json::value::to_value::h6580f94fbd1542b4(&result_1, &var_c0);
            result = result_1;
            
            if (result == 6)
                goto label_48b8b2;
            
            *(arg1 + 4) = var_1ff;
            *(arg1 + 1) = var_1ff;
            rcx_4 = var_1f8;
            *(arg1 + 0x10) = var_1f0;
            rdx_3 = arg2[1];
            goto label_48b895;
        }
        
        *arg1 = result_2;
        arg1[0x20] = 2;
    }
    return result;
}
