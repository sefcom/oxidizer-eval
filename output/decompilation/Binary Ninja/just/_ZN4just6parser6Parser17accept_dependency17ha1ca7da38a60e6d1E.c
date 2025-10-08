
  uint64_t just::parser::Parser::accept_dependency::ha1ca7da38a60e6d1(int128_t* arg1, void* arg2)

{
    int128_t var_260;
    just::parser::Parser::accept_namepath::h8de08bec8d574b76(&var_260, arg2);
    char result_1;
    uint64_t result = result_1;
    int128_t var_250;
    int128_t var_240;
    int128_t var_230;
    int64_t var_220;
    int32_t var_217;
    int32_t var_214;
    int128_t zmm0;
    
    if (result != 0x25)
    {
        zmm0 = var_260;
        *(arg1 + 0x4c) = var_214;
        *(arg1 + 0x49) = var_217;
        arg1[4] = var_220;
        arg1[3] = var_230;
        arg1[2] = var_240;
        arg1[1] = var_250;
        *arg1 = zmm0;
        *(arg1 + 0x48) = result;
    }
    else
    {
        uint64_t result_2 = var_250;
        zmm0 = var_260;
        int128_t var_108 = zmm0;
        uint64_t result_3 = result_2;
        
        if (!(0 + -(var_108)))
        {
            result = result_2;
            *(arg1 + 0x28) = result;
            *(arg1 + 0x18) = zmm0;
            *arg1 = 0;
            *(arg1 + 8) = 8;
            arg1[1] = 0;
        }
        else
        {
            just::parser::Parser::accepted::h762a87b5f98dff30(&var_260, arg2, 0x1c);
            result = var_260;
            
            if (result_1 != 0x25)
            {
                arg1[4] = var_220;
                int128_t zmm0_1 = var_260;
                *(arg1 + 0x31) = var_230;
                *(arg1 + 0x21) = var_240;
                *(arg1 + 0x11) = var_250;
                *(arg1 + 1) = zmm0_1;
                *(arg1 + 0x49) = var_217;
                *(arg1 + 0x4c) = var_214;
                *arg1 = result;
                *(arg1 + 0x48) = result_1;
                return core::ptr::drop_in_place$LT$core..option..Option$LT$just..namepath..Namepath$GT$$GT$::h24538336dfc925c3(&var_108);
            }
            
            if (result & 1)
            {
                just::parser::Parser::parse_namepath::hf7b725240a87d50f(&var_260, arg2);
                
                if (result_1 != 0x25)
                {
                    int128_t zmm0_2 = var_260;
                    *(arg1 + 0x4c) = var_214;
                    *(arg1 + 0x49) = var_217;
                    arg1[4] = var_220;
                    arg1[3] = var_230;
                    arg1[2] = var_240;
                    arg1[1] = var_250;
                    *arg1 = zmm0_2;
                    *(arg1 + 0x48) = result_1;
                }
                else
                {
                    int128_t var_178 = var_260;
                    int64_t var_1e0 = 0;
                    int64_t var_1d8_1 = 8;
                    int64_t var_1d0_1 = 0;
                    
                    while (true)
                    {
                        just::parser::Parser::accepted::h762a87b5f98dff30(&var_260, arg2, 0x1d);
                        char rax_2 = var_260;
                        int128_t zmm0_3;
                        
                        if (result_1 != 0x25)
                        {
                            arg1[4] = var_220;
                            zmm0_3 = var_260;
                            *(arg1 + 0x31) = var_230;
                            *(arg1 + 0x21) = var_240;
                            *(arg1 + 0x11) = var_250;
                            *(arg1 + 1) = zmm0_3;
                            *(arg1 + 0x49) = var_217;
                            *(arg1 + 0x4c) = var_214;
                            *arg1 = rax_2;
                            *(arg1 + 0x48) = result_1;
                        }
                        else
                        {
                            if (rax_2 & 1)
                            {
                                zmm0_3 = var_1e0;
                                int128_t var_e8_1 = zmm0_3;
                                int128_t zmm1_4 = var_178;
                                *arg1 = zmm0_3;
                                arg1[1] = var_1d0_1;
                                *(arg1 + 0x18) = zmm1_4;
                                arg1[2] = *zmm1_4[8];
                                result = var_250;
                                *(arg1 + 0x28) = result;
                                goto label_677d1f;
                            }
                            
                            just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_260, 
                                arg2);
                            int64_t rax_3 = var_260;
                            int128_t var_1c8_1 = var_260;
                            int64_t var_188;
                            var_188 = result_1;
                            
                            if (rax_3 == 0x12)
                            {
                                arg1[4] = var_188;
                                arg1[3] = var_230;
                                arg1[2] = var_240;
                                arg1[1] = var_250;
                                *arg1 = var_1c8_1;
                            }
                            else
                            {
                                int64_t var_1e8;
                                int64_t var_38_1 = var_1e8;
                                int128_t var_1f8;
                                int128_t var_48_1 = var_1f8;
                                int128_t var_208;
                                int128_t var_58_1 = var_208;
                                int64_t var_b0 = rax_3;
                                int128_t var_68_1 = var_188;
                                int128_t var_78_1 = var_230;
                                int128_t var_88_1 = var_240;
                                int128_t var_98_1 = var_250;
                                int128_t var_a8_1 = var_1c8_1;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::he19d83f3939ac21c(&var_1e0, 
                                    &var_b0);
                                continue;
                            }
                        }
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..expression..Expression$GT$$GT$::hd865f9e8bf24b460(&var_1e0);
                        core::ptr::drop_in_place$LT$just..namepath..Namepath$GT$::h15a9b2a7c35752fb(
                            &var_178);
                        break;
                    }
                }
                
                return core::ptr::drop_in_place$LT$core..option..Option$LT$just..namepath..Namepath$GT$$GT$::h24538336dfc925c3(&var_108);
            }
            
            *arg1 = -0x8000000000000000;
        }
        
        label_677d1f:
        *(arg1 + 0x48) = 0x25;
    }
    return result;
}
