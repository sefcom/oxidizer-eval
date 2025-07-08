
  int64_t uu_dd::parseargs::Parser::validate::hd2b1e31453916e87(int64_t* arg1, int64_t* arg2)

{
    char r13 = arg2[0x14];
    char rdi = *(arg2 + 0xa1);
    char rsi = *(arg2 + 0xa2);
    char rcx = *(arg2 + 0xa3);
    bool rax = *(arg2 + 0xa4);
    char rdx = *(arg2 + 0xa5);
    uint32_t r15 = *(arg2 + 0xa6);
    char r10 = *(arg2 + 0xa7);
    char rdx_1 = arg2[0x15];
    char r11 = *(arg2 + 0xa9);
    uint128_t zmm0 = *(arg2 + 0xaa);
    char r8 = *(arg2 + 0xae);
    char r9 = *(arg2 + 0xaf);
    int64_t rdx_2;
    char var_5e_1;
    char var_5d_1;
    char var_5c_1;
    char var_5b_1;
    uint128_t var_58_1;
    int64_t r12;
    
    if (r13)
    {
        rdx_2 = 1;
        
        if (!(rsi | rdi))
        {
            if (!rcx)
            {
                var_5b_1 = r11;
                var_5e_1 = r10;
                var_5d_1 = r9;
                var_5c_1 = r8;
                var_58_1 = zmm0;
                rax = !rax * 2;
                r12 = 0;
                label_4d2cba:
                uint32_t rbp_1 = r12;
                void* rax_1 = uu_dd::parseargs::get_ctable::h8e7446a764b1d972(rbp_1, rax);
                uint128_t zmm1 = _mm_cmpeq_epi8({0}, _mm_unpacklo_epi8(var_58_1, var_58_1));
                zmm0 = _mm_shufflelo_epi16(zmm1, 0x55) | zmm1;
                uint64_t rcx_1 = _mm_extract_epi16(_mm_cmpeq_epi32(zmm1, zmm1) ^ zmm0, 2);
                rdx_2 = 4;
                
                if (!(rcx_1 & 1))
                {
                    char var_5e_2;
                    char var_5d_2;
                    char var_5c_2;
                    int64_t rdx_4;
                    char r12_1;
                    
                    if (!arg2[6])
                    {
                        rdx_2 = 9;
                        r15 |= rdx;
                        
                        if (!r15)
                        {
                            r12_1 = var_5b_1;
                            var_5e_2 = var_5e_1;
                            var_5d_2 = var_5d_1;
                            var_5c_2 = var_5c_1;
                            rdx_4 = 2;
                            rbp_1 = 0;
                            label_4d2dec:
                            uint128_t var_48;
                            uu_dd::parseargs::conversion_mode::h18084a71126044cd(&var_48, rax_1, 
                                rdx_4, rcx_1, r13, rdx_1);
                            int64_t rsi_5 = *arg2;
                            int64_t rax_3;
                            int64_t rcx_3;
                            
                            if (!rsi_5)
                            {
                                rcx_3 = 0x200;
                                rax_3 = 0x200;
                                
                                if (arg2[2])
                                    rax_3 = arg2[3];
                                
                                zmm1 = var_58_1;
                                
                                if (arg2[4])
                                    rcx_3 = arg2[5];
                            }
                            else
                            {
                                rax_3 = arg2[1];
                                rcx_3 = rax_3;
                                zmm1 = var_58_1;
                            }
                            
                            char rdx_5 = 1;
                            
                            if (rsi_5)
                                rdx_5 = arg2[0x18];
                            
                            int64_t rsi_6 = rax_3;
                            
                            if (*(arg2 + 0xbf))
                                rsi_6 = 1;
                            
                            int64_t temp0_6 = arg2[8];
                            
                            if (temp0_6)
                                rsi_6 = rax_3;
                            
                            if (temp0_6)
                                rsi_6 = 1;
                            
                            int64_t rsi_7 = rsi_6 * arg2[9];
                            int64_t rdi_6 = rcx_3;
                            
                            if (*(arg2 + 0xcf))
                                rdi_6 = 1;
                            
                            int64_t temp1 = arg2[0xa];
                            
                            if (temp1)
                                rdi_6 = rcx_3;
                            
                            if (temp1)
                                rdi_6 = 1;
                            
                            int64_t rdi_7 = rdi_6 * arg2[0xb];
                            uint64_t r9_4 = arg2[0xc];
                            int64_t r8_4 = arg2[0xd];
                            
                            if (!r9_4)
                                r9_4 = *(arg2 + 0xbe);
                            else if (r9_4 == 1)
                                r9_4 = 1;
                            
                            arg1[4] = arg2[0x10];
                            *(arg1 + 0x10) = *(arg2 + 0x70);
                            arg1[7] = arg2[0x13];
                            *(arg1 + 0x28) = *(arg2 + 0x88);
                            *(arg1 + 0x40) = *(arg2 + 0xb0);
                            *(arg1 + 0x96) = *(arg2 + 0xc1);
                            *(arg1 + 0x9d) = arg2[0x19];
                            int64_t var_38;
                            arg1[0xc] = var_38;
                            *(arg1 + 0x50) = var_48;
                            *arg1 = r9_4;
                            arg1[1] = r8_4;
                            arg1[0xd] = rdx_1;
                            *(arg1 + 0x69) = rbp_1;
                            *(arg1 + 0x6a) = var_5e_2;
                            *(arg1 + 0x6b) = r12_1;
                            arg1[0xe] = rax_3;
                            arg1[0xf] = rcx_3;
                            arg1[0x10] = rsi_7;
                            arg1[0x11] = rdi_7;
                            arg1[0x12] = zmm1;
                            *(arg1 + 0x94) = var_5c_2;
                            *(arg1 + 0x95) = var_5d_2;
                            *(arg1 + 0xa5) = rdx_5;
                            char result = arg2[0x1a];
                            *(arg1 + 0xa6) = result;
                            return result;
                        }
                    }
                    else
                    {
                        rcx_1 = arg2[7];
                        
                        if (!r12)
                        {
                            rbp_1 = 0x20;
                            r12_1 = var_5b_1;
                            var_5e_2 = var_5e_1;
                            var_5d_2 = var_5d_1;
                            var_5c_2 = var_5c_1;
                            rdx_4 = 1;
                            goto label_4d2dec;
                        }
                        
                        if (rbp_1 != 3)
                        {
                            label_4d2d57:
                            rbp_1 = 0x20;
                            r12_1 = var_5b_1;
                            var_5e_2 = var_5e_1;
                            var_5d_2 = var_5d_1;
                            var_5c_2 = var_5c_1;
                            rdx_4 = 0;
                            goto label_4d2dec;
                        }
                        
                        if (!rdx)
                        {
                            r12_1 = var_5b_1;
                            var_5e_2 = var_5e_1;
                            var_5d_2 = var_5d_1;
                            var_5c_2 = var_5c_1;
                            rdx_4 = 0 + 1;
                            r15 <<= 5;
                            rbp_1 = r15;
                            goto label_4d2dec;
                        }
                        
                        rdx_2 = 3;
                        
                        if (!r15)
                            goto label_4d2d57;
                    }
                }
            }
            else
            {
                rdx_2 = 2;
                
                if (!rax)
                {
                    var_5b_1 = r11;
                    var_5e_1 = r10;
                    var_5d_1 = r9;
                    var_5c_1 = r8;
                    var_58_1 = zmm0;
                    rax = true;
                    r12 = 0;
                    goto label_4d2cba;
                }
            }
        }
    }
    else if (rdi)
    {
        rdx_2 = 1;
        
        if (!rsi)
        {
            if (!rcx)
            {
                var_5b_1 = r11;
                var_5e_1 = r10;
                var_5d_1 = r9;
                var_5c_1 = r8;
                var_58_1 = zmm0;
                rax = !rax * 2;
                r12 = 1;
                goto label_4d2cba;
            }
            
            rdx_2 = 2;
            
            if (!rax)
            {
                var_5b_1 = r11;
                var_5e_1 = r10;
                var_5d_1 = r9;
                var_5c_1 = r8;
                var_58_1 = zmm0;
                rax = true;
                r12 = 1;
                goto label_4d2cba;
            }
        }
    }
    else if (!rsi)
    {
        if (!rcx)
        {
            var_5b_1 = r11;
            var_5e_1 = r10;
            var_5d_1 = r9;
            var_5c_1 = r8;
            var_58_1 = zmm0;
            rax = !rax * 2;
            r12 = 3;
            goto label_4d2cba;
        }
        
        rdx_2 = 2;
        
        if (!rax)
        {
            var_5b_1 = r11;
            var_5e_1 = r10;
            var_5d_1 = r9;
            var_5c_1 = r8;
            var_58_1 = zmm0;
            r12 = 3;
            label_4d2c46:
            rax = true;
            goto label_4d2cba;
        }
    }
    else
    {
        if (!rcx)
        {
            var_5b_1 = r11;
            var_5e_1 = r10;
            var_5d_1 = r9;
            var_5c_1 = r8;
            var_58_1 = zmm0;
            rax = !rax * 2;
            r12 = 2;
            goto label_4d2cba;
        }
        
        rdx_2 = 2;
        
        if (!rax)
        {
            var_5b_1 = r11;
            var_5e_1 = r10;
            var_5d_1 = r9;
            var_5c_1 = r8;
            var_58_1 = zmm0;
            r12 = 2;
            goto label_4d2c46;
        }
    }
    arg1[1] = rdx_2;
    *arg1 = 3;
    /* tailcall */
    return core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h57b892102145e56e(arg2);
}
