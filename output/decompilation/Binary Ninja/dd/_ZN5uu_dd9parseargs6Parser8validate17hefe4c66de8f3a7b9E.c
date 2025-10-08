
  int64_t* uu_dd::parseargs::Parser::validate::hefe4c66de8f3a7b9(int64_t* arg1, int64_t* arg2)

{
    char rbp = arg2[0x14];
    char rdx = *(arg2 + 0xa1);
    uint32_t rsi = *(arg2 + 0xa2);
    uint32_t rcx = *(arg2 + 0xa3);
    uint32_t rax = *(arg2 + 0xa4);
    char rdi = *(arg2 + 0xa5);
    char rdi_1 = *(arg2 + 0xa6);
    char r9 = *(arg2 + 0xa7);
    char r10 = arg2[0x15];
    char rdi_2 = *(arg2 + 0xa9);
    uint64_t r11 = *(arg2 + 0xaa);
    char r13 = *(arg2 + 0xae);
    char r8 = *(arg2 + 0xaf);
    uint32_t var_68_1;
    uint64_t rdx_1;
    
    if (!rbp)
    {
        if (rdx)
        {
            rdx_1 = 1;
            
            if (rsi)
                goto label_48cb6a;
            
            if (!rcx)
            {
                rax ^= 1;
                rax *= 2;
                rcx = 1;
                var_68_1 = rcx;
                goto label_48cab9;
            }
            
            rcx = 1;
            rdx_1 = 2;
            rsi = 1;
            var_68_1 = rsi;
            
            if (!rax)
                goto label_48cafd;
            
            goto label_48cb6a;
        }
        
        if (!rsi)
        {
            if (!rcx)
            {
                rax ^= 1;
                rax *= 2;
                rcx = 3;
                var_68_1 = rcx;
                goto label_48cab9;
            }
            
            rdx_1 = 2;
            
            if (rax)
                goto label_48cb6a;
            
            rax = 3;
        }
        else
        {
            if (!rcx)
            {
                rax ^= 1;
                rax *= 2;
                rcx = 2;
                var_68_1 = rcx;
                goto label_48cab9;
            }
            
            rdx_1 = 2;
            
            if (rax)
                goto label_48cb6a;
            
            rax = 2;
        }
        
        var_68_1 = rax;
        rcx = 1;
        goto label_48cafd;
    }
    
    rdx_1 = 1;
    
    if (rdx | rsi)
    {
        label_48cb6a:
        arg1[1] = rdx_1;
        *arg1 = 3;
        core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::hddf27aabfacd7e95(arg2);
    }
    else
    {
        if (rcx)
        {
            rdx_1 = 2;
            
            if (rax)
                goto label_48cb6a;
            
            rcx = 1;
            var_68_1 = 0;
            goto label_48cafd;
        }
        
        rax ^= 1;
        rax *= 2;
        var_68_1 = 0;
        label_48cab9:
        rcx = rax;
        label_48cafd:
        uint128_t zmm1 = _mm_shuffle_epi32(r11 >> 8 & 1, 0x44);
        char r15_1 = _mm_movemask_epi8(_mm_slli_epi16(
            (r11 << 5 & 0x1000000) | (r11 >> 2 & 0x10000) | (r11 >> 0x10 & 1) | (r11 >> 9 & 0x100), 
            7)) & 1;
        char r12_3 = _mm_movemask_epi8(_mm_slli_epi16(zmm1, 7)) >> 8 & 1;
        uint32_t rdi_3 = var_68_1;
        void* rax_11 = uu_dd::parseargs::get_ctable::h3225cb694e4d92e4(rdi_3, rcx);
        rdx_1 = 4;
        
        if (r15_1 & r12_3)
            goto label_48cb6a;
        
        uint64_t rcx_1;
        int64_t rdx_10;
        
        if (arg2[6] != 1)
        {
            rcx_1 = rdi | rdi_1;
            rdx_1 = 9;
            
            if (rcx_1)
                goto label_48cb6a;
            
            rdx_10 = 2;
            var_68_1 = 0;
        }
        else
        {
            rcx_1 = arg2[7];
            
            if (!var_68_1)
            {
                rdx_1 = 0x20;
                var_68_1 = rdx_1;
                rdx_10 = 1;
            }
            else if (rdi_3 != 3)
            {
                label_48cbbc:
                rdx_1 = 0x20;
                var_68_1 = rdx_1;
                rdx_10 = 0;
            }
            else
            {
                if (rdi)
                {
                    rdx_1 = 3;
                    
                    if (rdi_1)
                        goto label_48cb6a;
                    
                    goto label_48cbbc;
                }
                
                uint64_t rdi_5 = rdi_1;
                rdx_10 = 2 - rdi_5;
                rdi_5 <<= 5;
                var_68_1 = rdi_5;
            }
        }
        
        uint128_t var_50;
        uu_dd::parseargs::conversion_mode::he1b2907b7b2f438d(&var_50, rax_11, rdx_10, rcx_1, rbp, 
            r10);
        int64_t rsi_4 = *arg2;
        int64_t rax_13;
        int64_t rcx_2;
        char rdx_11;
        
        if (!rsi_4)
        {
            rcx_2 = 0x200;
            rax_13 = 0x200;
            
            if (arg2[2])
            {
                rax_13 = arg2[3];
                
                if (arg2[4])
                    goto label_48ccf1;
            }
            else if (arg2[4])
            {
                label_48ccf1:
                rcx_2 = arg2[5];
                rdx_11 = 1;
                
                if (!rsi_4)
                    goto label_48cc3b;
                
                goto label_48cc7b;
            }
            
            rdx_11 = 1;
            
            if (!rsi_4)
                goto label_48cc3b;
            
            goto label_48cc7b;
        }
        
        rax_13 = arg2[1];
        rcx_2 = rax_13;
        rdx_11 = 1;
        int64_t rsi_5;
        
        if (rsi_4)
        {
            label_48cc7b:
            rdx_11 = arg2[0x18];
            rsi_5 = arg2[9];
            
            if (arg2[8] == 1)
                rsi_5 *= 1;
            else
            {
                label_48cc9a:
                
                if (*(arg2 + 0xbf) != 1)
                    rsi_5 *= rax_13;
            }
        }
        else
        {
            label_48cc3b:
            rsi_5 = arg2[9];
            
            if (arg2[8] != 1)
                goto label_48cc9a;
            
            rsi_5 *= 1;
        }
        
        int64_t rdi_8 = arg2[0xb];
        int64_t r8_2 = 1;
        
        if (arg2[0xa] != 1)
            r8_2 = rcx_2;
        
        if (arg2[0xa] == 1 || *(arg2 + 0xcf) != 1)
            rdi_8 *= r8_2;
        
        uint128_t zmm0 = r11;
        int64_t r8_3 = arg2[0xc];
        
        if (r8_3 != 2)
        {
            r11 = arg2[0xd];
            
            if (!(r8_3 & 1) && *(arg2 + 0xbe))
                r8_3 = 1;
        }
        else
            r8_3 = 2;
        
        arg1[4] = arg2[0x10];
        *(arg1 + 0x10) = *(arg2 + 0x70);
        arg1[7] = arg2[0x13];
        *(arg1 + 0x28) = *(arg2 + 0x88);
        *(arg1 + 0x40) = *(arg2 + 0xb0);
        *(arg1 + 0x9d) = arg2[0x19];
        *(arg1 + 0x96) = *(arg2 + 0xc1);
        *arg1 = r8_3;
        arg1[1] = r11;
        int64_t var_40;
        arg1[0xc] = var_40;
        *(arg1 + 0x50) = var_50;
        arg1[0xd] = r10;
        *(arg1 + 0x69) = var_68_1;
        *(arg1 + 0x6a) = r9;
        *(arg1 + 0x6b) = rdi_2;
        arg1[0xe] = rax_13;
        arg1[0xf] = rcx_2;
        arg1[0x10] = rsi_5;
        arg1[0x11] = rdi_8;
        arg1[0x12] = zmm0;
        *(arg1 + 0x94) = r13;
        *(arg1 + 0x95) = r8;
        *(arg1 + 0xa5) = rdx_11;
        *(arg1 + 0xa6) = arg2[0x1a];
    }
    
    return arg1;
}
