
  uint64_t just::parser::Parser::parse_body::h8d13522a5ff247cf(char* arg1, void* arg2)

{
    int64_t var_178 = 0;
    uint64_t result_2 = 8;
    int64_t var_168 = 0;
    char result_1;
    just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x19);
    uint64_t result = result_1;
    char var_1b0;
    char rcx = var_1b0;
    int128_t var_1f7;
    int128_t var_1e7;
    int128_t var_1d7;
    int128_t var_1c7;
    int64_t var_1b8;
    int32_t var_1af;
    
    if (rcx != 0x25)
    {
        label_6807d8:
        *(arg1 + 0x40) = var_1b8;
        *(arg1 + 0x31) = var_1c7;
        *(arg1 + 0x21) = var_1d7;
        *(arg1 + 0x11) = var_1e7;
        *(arg1 + 1) = var_1f7;
        *(arg1 + 0x49) = var_1af;
        *(arg1 + 0x4c) = var_1af;
        *arg1 = result;
        arg1[0x48] = rcx;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..line..Line$GT$$GT$::hfb7be3c1bcd7265c(&var_178);
    }
    
    int64_t r15_1;
    
    if (!(result & 1))
        r15_1 = 0;
    else
    {
        while (true)
        {
            just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x11);
            result = result_1;
            rcx = var_1b0;
            
            if (rcx != 0x25)
                goto label_6807d8;
            
            if (result & 1)
            {
                result = result_2;
                r15_1 = var_168;
                int64_t rcx_8 = r15_1 << 5;
                int64_t rsi_17;
                rsi_17 = result + rcx_8 == 0x20;
                rsi_17 |= !r15_1;
                
                if (!rsi_17)
                {
                    int64_t r15_2 = r15_1 - 1;
                    uint64_t result_3 = rcx_8 + result - 0x40;
                    
                    while (!*(result_3 + 0x30))
                    {
                        var_1f7 = *(result_3 + 0x30);
                        result_1 = *(result_3 + 0x20);
                        result = core::ptr::drop_in_place$LT$core..option..Option$LT$just..line..Line$GT$$GT$::h351018a9bb1aa703(&result_1);
                        int64_t temp0_1 = r15_2;
                        r15_2 -= 1;
                        
                        if (temp0_1 < 1)
                            break;
                        
                        result = result_3 - 0x20;
                        bool cond:0_1 = result_3;
                        result_3 = result;
                        
                        if (!cond:0_1)
                            break;
                    }
                    
                    r15_1 = r15_2 + 1;
                }
                
                break;
            }
            
            int64_t var_160 = 0;
            int64_t var_158_1 = 8;
            int64_t var_150_1 = 0;
            int64_t rax = *(arg2 + 0x58);
            int64_t rbp_1;
            
            if (rax >= *(arg2 + 0x20))
                rbp_1 = 0;
            else
                rbp_1 = *(*(arg2 + 0x18) + rax * 0x48 + 0x30);
            
            just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x14);
            char result_4 = result_1;
            char rcx_2 = var_1b0;
            
            if (rcx_2 != 0x25)
            {
                label_680840:
                *(arg1 + 0x40) = var_1b8;
                *(arg1 + 0x31) = var_1c7;
                *(arg1 + 0x21) = var_1d7;
                *(arg1 + 0x11) = var_1e7;
                *(arg1 + 1) = var_1f7;
                *(arg1 + 0x49) = var_1af;
                *(arg1 + 0x4c) = var_1af;
                *arg1 = result_4;
                arg1[0x48] = rcx_2;
                label_68097c:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..fragment..Fragment$GT$$GT$::h81de7fdfd3ee3ff6(&var_160);
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..line..Line$GT$$GT$::hfb7be3c1bcd7265c(&var_178);
            }
            
            if (!(result_4 & 1))
            {
                while (true)
                {
                    just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x14);
                    result_4 = result_1;
                    rcx_2 = var_1b0;
                    
                    if (rcx_2 != 0x25)
                        goto label_680840;
                    
                    if (result_4 & 1)
                        break;
                    
                    if (just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x11))
                        break;
                    
                    just::parser::Parser::accept::hbdbbefbcb8377711(&result_1, arg2, 0x22);
                    int128_t zmm0_3 = result_1;
                    char rax_4 = var_1b8;
                    int32_t rsi_6 = *var_1b8[4];
                    int32_t var_200_1 = *var_1b8[1];
                    
                    if (var_1b0 != 0x25)
                    {
                        *(arg1 + 0x4c) = var_1af;
                        *(arg1 + 0x49) = var_1af;
                        *(arg1 + 0x30) = var_1d7;
                        *(arg1 + 0x20) = var_1e7;
                        *(arg1 + 0x10) = var_1f7;
                        *arg1 = zmm0_3;
                        *(arg1 + 0x44) = rsi_6;
                        *(arg1 + 0x41) = rsi_6;
                        arg1[0x40] = rax_4;
                        arg1[0x48] = var_1b0;
                        goto label_68097c;
                    }
                    
                    if (rax_4 != 0x25)
                    {
                        var_1c7 = var_1d7;
                        var_1d7 = var_1e7;
                        var_1e7 = var_1f7;
                        var_1f7 = zmm0_3;
                        var_1af = rsi_6;
                        var_1af = rsi_6;
                        var_1b0 = rax_4;
                        result_1 = 0x12;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h8c5e03d2ce7d530c(&var_160, &result_1);
                    }
                    else
                    {
                        just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x1b);
                        result_4 = result_1;
                        rcx_2 = var_1b0;
                        
                        if (rcx_2 != 0x25)
                            goto label_680840;
                        
                        int128_t var_b8;
                        
                        if (!(result_4 & 1))
                        {
                            just::parser::Parser::unexpected_token::hbee08644eef5d075(&result_1, 
                                arg2);
                            int128_t zmm0_6 = var_1b0;
                            int128_t var_78_1 = zmm0_6;
                            int128_t var_88_1 = var_1c7;
                            int128_t var_98_1 = var_1d7;
                            int128_t var_a8_1 = var_1e7;
                            var_b8 = var_1f7;
                            *(arg1 + 0x40) = zmm0_6;
                            *(arg1 + 0x30) = var_1c7;
                            *(arg1 + 0x20) = var_1d7;
                            *(arg1 + 0x10) = var_1e7;
                            *arg1 = var_1f7;
                            goto label_68097c;
                        }
                        
                        just::parser::Parser::parse_expression::h8b701a5fe27dff96(&result_1, arg2);
                        int64_t rax_5 = result_1;
                        int128_t var_c8_1 = var_1b0;
                        
                        if (rax_5 == 0x12)
                        {
                            *(arg1 + 0x40) = var_c8_1;
                            *(arg1 + 0x30) = var_1c7;
                            *(arg1 + 0x20) = var_1d7;
                            *(arg1 + 0x10) = var_1e7;
                            *arg1 = var_1f7;
                            goto label_68097c;
                        }
                        
                        int64_t var_180;
                        int64_t var_40_1 = var_180;
                        int128_t var_190;
                        int128_t var_50_1 = var_190;
                        int128_t var_1a0;
                        int128_t var_60_1 = var_1a0;
                        int128_t var_78 = var_c8_1;
                        int128_t var_88 = var_1c7;
                        int128_t var_98 = var_1d7;
                        int128_t var_a8 = var_1e7;
                        int128_t var_b0_1 = var_1f7;
                        var_b8 = rax_5;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h8c5e03d2ce7d530c(&var_160, &var_b8);
                        just::parser::Parser::expect::h35e1151927597ac7(&result_1, arg2, 0x1a);
                        
                        if (var_1b0 != 0x25)
                        {
                            int64_t rcx_6 = result_1;
                            var_b8 = *var_1b8[1];
                            *var_b8[3] = *var_1b8[4];
                            *(arg1 + 0x4c) = var_1af;
                            *(arg1 + 0x49) = var_1af;
                            int32_t rdi_15 = var_b8;
                            *(arg1 + 0x44) = *var_b8[3];
                            *(arg1 + 0x41) = rdi_15;
                            *arg1 = rcx_6;
                            *(arg1 + 8) = var_1f7;
                            *(arg1 + 0x18) = var_1e7;
                            *(arg1 + 0x28) = var_1d7;
                            *(arg1 + 0x38) = *var_1c7[7];
                            arg1[0x40] = var_1b8;
                            arg1[0x48] = var_1b0;
                            goto label_68097c;
                        }
                    }
                }
            }
            
            *var_1f7[0xf] = var_150_1;
            result_1 = var_160;
            *var_1e7[7] = rbp_1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbfd0e6f07563321a(&var_178, &result_1);
        }
    }
    
    int64_t var_168_1 = r15_1;
    *(arg1 + 0x10) = r15_1;
    *arg1 = var_178;
    arg1[0x48] = 0x25;
    return result;
}
