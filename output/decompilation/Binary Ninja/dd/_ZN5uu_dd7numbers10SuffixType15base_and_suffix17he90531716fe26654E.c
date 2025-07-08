
  int64_t uu_dd::numbers::SuffixType::base_and_suffix::he90531716fe26654(int64_t* arg1, char arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_e0_1;
    int64_t var_d8_1;
    int64_t var_d0_1;
    void var_c0;
    int64_t result;
    int64_t rdx;
    int64_t result_2;
    int64_t rdi_1;
    int64_t result_3;
    int64_t result_4;
    int64_t result_5;
    int64_t result_6;
    int64_t result_1;
    int64_t result_7;
    
    if (!arg2)
    {
        memcpy(&var_c0, &data_561950, 0x90);
        rdx = 0x4000000;
        var_e0_1 = 0x10000;
        var_d8_1 = 0x40;
        result_4 = 0x1000000000000000;
        result_6 = 0x4000000000000;
        result_7 = 0x10000000000;
        result_2 = 0x40000000;
        result = 0x100000;
        result_1 = 0x400;
        rdi_1 = 0;
        result_5 = 0;
        result_3 = 0;
        var_d0_1 = 0;
    }
    else
    {
        memcpy(&var_c0, &data_5619e0, 0x90);
        rdx = 0x33b2e3c;
        __builtin_memcpy(&var_e0_1, 
            "\xc2\xd3\x00\x00\x00\x00\x00\x00\x36\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xe8\x3c\x80\xd0\x9f", 0x18);
        result_3 = 0x1bcecceda1000000;
        result_5 = 0x35c9adc5dea00000;
        result_4 = 0xde0b6b3a7640000;
        result_6 = 0x38d7ea4c68000;
        result_7 = 0xe8d4a51000;
        result_2 = 0x3b9aca00;
        result = 0xf4240;
        result_1 = 0x3e8;
        rdi_1 = 0;
    }
    
    bool c_2 = /* bool c_2 = unimplemented  {sbb rsi, r14} */;
    int32_t rcx_2;
    
    if (!c_2)
    {
        result_1 = 1;
        rdi_1 = 0;
        rcx_2 = 0;
    }
    else
    {
        rcx_2 = 1;
        bool c_5 = /* bool c_5 = unimplemented  {sbb rdx, r14} */;
        
        if (c_5)
        {
            rcx_2 = 2;
            bool c_8 = /* bool c_8 = unimplemented  {sbb rsi, r14} */;
            result_1 = result;
            
            if (c_8)
            {
                result = result_7 - result_2;
                rcx_2 = 3;
                bool c_11 = /* bool c_11 = unimplemented  {sbb rdx, r14} */;
                result_1 = result_2;
                
                if (c_11)
                {
                    result = result_6 - result_7;
                    rcx_2 = 4;
                    bool c_14 = /* bool c_14 = unimplemented  {sbb rdx, r14} */;
                    result_1 = result_7;
                    
                    if (c_14)
                    {
                        result = result_4 - result_6;
                        rcx_2 = 5;
                        bool c_17 = /* bool c_17 = unimplemented  {sbb rdx, r14} */;
                        result_1 = result_6;
                        
                        if (c_17)
                        {
                            result = result_5 - result_4;
                            rcx_2 = 6;
                            bool c_20 = /* bool c_20 = unimplemented  {sbb rdx, r14} */;
                            result_1 = result_4;
                            
                            if (c_20)
                            {
                                result = result_3 - result_5;
                                rdi_1 = var_d8_1;
                                rcx_2 = 7;
                                bool c_23 = /* bool c_23 = unimplemented  {sbb rdx, r14} */;
                                result_1 = result_5;
                                
                                if (c_23)
                                {
                                    rdi_1 = var_e0_1;
                                    rcx_2 = 8;
                                    result = rdx - rdi_1 - arg4;
                                    bool c_26 = /* bool c_26 = unimplemented  {sbb rax, r14} */;
                                    result_1 = result_3;
                                    
                                    if (c_26)
                                    {
                                        core::panicking::panic_bounds_check::h25a5330941572dd1(0xa, 
                                            0xa);
                                        /* no return */
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    int128_t zmm0 = *(&var_c0 + (rcx_2 << 4));
    arg1[1] = rdi_1;
    *arg1 = result_1;
    *(arg1 + 0x10) = zmm0;
    return result;
}
