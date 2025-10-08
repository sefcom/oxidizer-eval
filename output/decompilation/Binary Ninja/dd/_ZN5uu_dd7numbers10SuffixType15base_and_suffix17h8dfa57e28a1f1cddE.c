
  int64_t uu_dd::numbers::SuffixType::base_and_suffix::h8dfa57e28a1f1cdd(int64_t* arg1, char arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_d8;
    void var_c0;
    int64_t rcx;
    int64_t rdx;
    int64_t rbp;
    int64_t rsi;
    int64_t rdi_1;
    int64_t r8;
    int64_t r9;
    int64_t r10;
    int64_t r11;
    int64_t r13;
    
    if (!(arg2 & 1))
    {
        memcpy(&var_c0, &data_53d7a0, 0x90);
        __builtin_memcpy(&var_d8, 
            "\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x00", 0x18);
        r9 = 0x1000000000000000;
        r10 = 0x4000000000000;
        r13 = 0x10000000000;
        rbp = 0x40000000;
        rsi = 0x100000;
        rcx = 0x400;
        r8 = 0;
        r11 = 0;
        rdi_1 = 0;
        rdx = 0;
    }
    else
    {
        memcpy(&var_c0, &data_53d830, 0x90);
        __builtin_memcpy(&var_d8, 
            "\x3c\x2e\x3b\x03\x00\x00\x00\x00\xc2\xd3\x00\x00\x00\x00\x00\x00\x36\x00\x00\x00\x00\x00\x00\x00", 0x18);
        rdx = -0x602f7fc318000000;
        rdi_1 = 0x1bcecceda1000000;
        r11 = 0x35c9adc5dea00000;
        r9 = 0xde0b6b3a7640000;
        r10 = 0x38d7ea4c68000;
        r13 = 0xe8d4a51000;
        rbp = 0x3b9aca00;
        rsi = 0xf4240;
        rcx = 0x3e8;
        r8 = 0;
    }
    
    int64_t result = 0 - 1 - arg4;
    bool c_2 = /* bool c_2 = unimplemented  {sbb rax, r14} */;
    void* rdx_2;
    
    if (!c_2)
    {
        rcx = 1;
        rdx_2 = &var_c0;
        r8 = 0;
    }
    else
    {
        result = rsi - rcx;
        bool c_5 = /* bool c_5 = unimplemented  {sbb r12, r14} */;
        void var_b0;
        
        if (!c_5)
            rdx_2 = &var_b0;
        else
        {
            result = rbp - rsi;
            bool c_8 = /* bool c_8 = unimplemented  {sbb rcx, r14} */;
            
            if (!c_8)
            {
                void var_a0;
                rdx_2 = &var_a0;
                rcx = rsi;
            }
            else
            {
                result = r13 - rbp;
                bool c_11 = /* bool c_11 = unimplemented  {sbb rcx, r14} */;
                
                if (!c_11)
                {
                    void var_90;
                    rdx_2 = &var_90;
                    rcx = rbp;
                }
                else
                {
                    result = r10 - r13;
                    bool c_14 = /* bool c_14 = unimplemented  {sbb rcx, r14} */;
                    
                    if (!c_14)
                    {
                        void var_80;
                        rdx_2 = &var_80;
                        rcx = r13;
                    }
                    else
                    {
                        result = r9 - r10;
                        bool c_17 = /* bool c_17 = unimplemented  {sbb rcx, r14} */;
                        
                        if (!c_17)
                        {
                            void var_70;
                            rdx_2 = &var_70;
                            rcx = r10;
                        }
                        else
                        {
                            result = r11 - r9;
                            bool c_20 = /* bool c_20 = unimplemented  {sbb rcx, r14} */;
                            
                            if (!c_20)
                            {
                                void var_60;
                                rdx_2 = &var_60;
                                rcx = r9;
                            }
                            else
                            {
                                result = rdi_1 - r11;
                                int64_t var_d0;
                                r8 = var_d0;
                                bool c_21 = /* bool c_21 = unimplemented  {sbb rcx, r14} */;
                                
                                if (!c_21)
                                {
                                    void var_50;
                                    rdx_2 = &var_50;
                                    rcx = r11;
                                    int64_t var_c8;
                                    r8 = var_c8;
                                }
                                else
                                {
                                    result = var_d8 - r8 - arg4;
                                    bool c_24 = /* bool c_24 = unimplemented  {sbb rax, r14} */;
                                    
                                    if (c_24)
                                    {
                                        core::panicking::panic_bounds_check::h025cadc56a971af7(0xa, 
                                            0xa);
                                        /* no return */
                                    }
                                    
                                    void var_40;
                                    rdx_2 = &var_40;
                                    rcx = rdi_1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    int128_t zmm0 = *rdx_2;
    arg1[1] = r8;
    *arg1 = rcx;
    *(arg1 + 0x10) = zmm0;
    return result;
}
