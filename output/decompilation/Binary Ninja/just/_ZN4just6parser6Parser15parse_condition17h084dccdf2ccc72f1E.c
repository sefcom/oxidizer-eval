
  uint64_t just::parser::Parser::parse_condition::h084dccdf2ccc72f1(int64_t* arg1, void* arg2)

{
    uint64_t result_1;
    just::parser::Parser::parse_expression::h8b701a5fe27dff96(&result_1, arg2);
    uint64_t result = result_1;
    int128_t var_1e0;
    int128_t var_1d0;
    int128_t var_1c0;
    int128_t var_1b0;
    int128_t var_1a0;
    
    if (result != 0x12)
    {
        int64_t var_170;
        int64_t var_20_1 = var_170;
        uint64_t result_2 = result;
        just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 4);
        char rax = result_1;
        char rcx_2 = var_1a0;
        
        if (rcx_2 != 0x25)
        {
            label_67c895:
            arg1[8] = *var_1b0[8];
            int128_t zmm0_1 = *result_1[1];
            *(arg1 + 0x31) = var_1c0;
            *(arg1 + 0x21) = var_1d0;
            *(arg1 + 0x11) = var_1e0;
            *(arg1 + 1) = zmm0_1;
            *(arg1 + 0x49) = *var_1a0[1];
            *(arg1 + 0x4c) = *var_1a0[4];
            *arg1 = rax;
            arg1[9] = rcx_2;
            return core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                &result_2);
        }
        
        int64_t rbp;
        rbp = 1;
        int128_t var_168;
        
        if (!(rax & 1))
        {
            just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x17);
            rax = result_1;
            rcx_2 = var_1a0;
            
            if (rcx_2 != 0x25)
                goto label_67c895;
            
            rbp = 2;
            
            if (!(rax & 1))
            {
                just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 5);
                rax = result_1;
                rcx_2 = var_1a0;
                
                if (rcx_2 != 0x25)
                    goto label_67c895;
                
                rbp = 3;
                
                if (!(rax & 1))
                {
                    just::parser::Parser::expect::h35e1151927597ac7(&result_1, arg2, 0x16);
                    char rax_1 = var_1a0;
                    
                    if (rax_1 != 0x25)
                    {
                        uint64_t result_4 = result_1;
                        var_168 = *var_1b0[9];
                        *var_168[3] = *var_1b0[0xc];
                        *(arg1 + 0x4c) = *var_1a0[4];
                        *(arg1 + 0x49) = *var_1a0[1];
                        *(arg1 + 0x44) = *var_168[3];
                        *(arg1 + 0x41) = var_168;
                        *arg1 = result_4;
                        *(arg1 + 8) = var_1e0;
                        *(arg1 + 0x18) = var_1d0;
                        *(arg1 + 0x28) = var_1c0;
                        arg1[7] = var_1b0;
                        arg1[8] = *var_1b0[8];
                        arg1[9] = rax_1;
                        return core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(&result_2);
                    }
                    
                    rbp = 0;
                }
            }
        }
        
        just::parser::Parser::parse_expression::h8b701a5fe27dff96(&result_1, arg2);
        uint64_t result_3 = result_1;
        
        if (result_3 == 0x12)
        {
            *(arg1 + 0x40) = var_1a0;
            *(arg1 + 0x30) = var_1b0;
            *(arg1 + 0x20) = var_1c0;
            *(arg1 + 0x10) = var_1d0;
            *arg1 = var_1e0;
            return core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                &result_2);
        }
        
        int64_t var_f0_1 = var_170;
        var_168 = var_1e0;
        int128_t var_158 = var_1d0;
        int128_t var_148 = var_1c0;
        int128_t var_138 = var_1b0;
        int128_t var_128 = var_1a0;
        var_168 = result_3;
        result_1 = result_2;
        uint64_t rax_2 = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&result_1);
        int128_t var_e8_1;
        var_e8_1 = rax_2;
        int128_t var_180 = var_180;
        int128_t var_190 = var_190;
        int128_t var_118;
        var_1a0 = var_118;
        var_1b0 = var_128;
        var_1c0 = var_138;
        var_1d0 = var_148;
        var_1e0 = var_158;
        result_1 = var_168;
        result = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&result_1);
        *arg1 = rax_2;
        arg1[1] = result;
        arg1[2] = rbp;
        arg1[9] = 0x25;
    }
    else
    {
        *(arg1 + 0x40) = var_1a0;
        *(arg1 + 0x30) = var_1b0;
        *(arg1 + 0x20) = var_1c0;
        *(arg1 + 0x10) = var_1d0;
        *arg1 = var_1e0;
    }
    return result;
}
