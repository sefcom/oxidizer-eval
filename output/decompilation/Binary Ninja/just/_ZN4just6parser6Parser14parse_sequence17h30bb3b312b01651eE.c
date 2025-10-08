
  uint64_t just::parser::Parser::parse_sequence::h30bb3b312b01651e(char* arg1, void* arg2)

{
    int64_t var_130;
    just::parser::Parser::presume::he2055272497a907b(&var_130, arg2, 0x1c);
    char result_2;
    uint64_t result = result_2;
    int128_t var_128;
    int128_t var_118;
    int128_t var_108;
    int64_t var_f8;
    char var_f0;
    int32_t var_ef;
    int32_t var_e7;
    int32_t var_e4;
    
    if (result != 0x25)
    {
        int64_t rcx_3 = var_130;
        int32_t var_188_1 = var_ef;
        *(arg1 + 0x4c) = var_e4;
        *(arg1 + 0x49) = var_e7;
        *(arg1 + 0x44) = var_ef;
        *(arg1 + 0x41) = var_ef;
        *arg1 = rcx_3;
        *(arg1 + 8) = var_128;
        *(arg1 + 0x18) = var_118;
        *(arg1 + 0x28) = var_108;
        *(arg1 + 0x38) = var_f8;
        arg1[0x40] = var_f0;
        arg1[0x48] = result;
    }
    else
    {
        int64_t var_1a0 = 0;
        int64_t var_198_1 = 8;
        uint64_t result_1 = 0;
        
        while (true)
        {
            if (just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x1d))
            {
                label_67ebdd:
                just::parser::Parser::expect::h35e1151927597ac7(&var_130, arg2, 0x1d);
                
                if (result_2 == 0x25)
                {
                    result = result_1;
                    *(arg1 + 0x10) = result;
                    *arg1 = var_1a0;
                    arg1[0x48] = 0x25;
                    break;
                }
                
                int64_t rcx_4 = var_130;
                int32_t var_188_2 = var_ef;
                *(arg1 + 0x4c) = var_e4;
                *(arg1 + 0x49) = var_e7;
                *(arg1 + 0x44) = var_ef;
                *(arg1 + 0x41) = var_ef;
                *arg1 = rcx_4;
                *(arg1 + 8) = var_128;
                *(arg1 + 0x18) = var_118;
                *(arg1 + 0x28) = var_108;
                *(arg1 + 0x38) = var_f8;
                arg1[0x40] = var_f0;
                arg1[0x48] = result_2;
            }
            else
            {
                just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_130, arg2);
                int64_t rax_1 = var_130;
                int128_t zmm3_1 = var_f8;
                int32_t var_188;
                var_188 = var_128;
                int128_t var_148_1 = result_2;
                
                if (rax_1 == 0x12)
                {
                    *(arg1 + 0x40) = var_148_1;
                    *(arg1 + 0x30) = zmm3_1;
                    *(arg1 + 0x20) = var_108;
                    *(arg1 + 0x10) = var_118;
                    *arg1 = var_188;
                }
                else
                {
                    int64_t var_b8;
                    int64_t var_38_1 = var_b8;
                    int128_t var_c8;
                    int128_t var_48_1 = var_c8;
                    int128_t var_d8;
                    int128_t var_58_1 = var_d8;
                    int64_t var_b0 = rax_1;
                    int128_t var_68_1 = var_148_1;
                    int128_t var_78_1 = zmm3_1;
                    int128_t var_88_1 = var_108;
                    int128_t var_98_1 = var_118;
                    int128_t var_a8_1 = var_188;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::he19d83f3939ac21c(&var_1a0, &var_b0);
                    just::parser::Parser::accepted::h762a87b5f98dff30(&var_130, arg2, 0xf);
                    char rax_2 = var_130;
                    
                    if (result_2 != 0x25)
                    {
                        *(arg1 + 0x40) = var_f0;
                        int128_t zmm0_3 = *var_130[1];
                        *(arg1 + 0x31) = var_108;
                        *(arg1 + 0x21) = var_118;
                        *(arg1 + 0x11) = var_128;
                        *(arg1 + 1) = zmm0_3;
                        *(arg1 + 0x49) = var_e7;
                        *(arg1 + 0x4c) = var_e4;
                        *arg1 = rax_2;
                        arg1[0x48] = result_2;
                    }
                    else
                    {
                        if (!(rax_2 & 1))
                            goto label_67ebdd;
                        
                        continue;
                    }
                }
            }
            
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..expression..Expression$GT$$GT$::hd865f9e8bf24b460(&var_1a0);
        }
    }
    return result;
}
