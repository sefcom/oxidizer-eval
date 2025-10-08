
  uint64_t just::parser::Parser::parse_namepath::hf7b725240a87d50f(int128_t* arg1, void* arg2)

{
    int128_t var_130;
    just::parser::Parser::parse_name::he2804e36e47b7e10(&var_130, arg2);
    char result_1;
    uint64_t result = result_1;
    int128_t zmm0 = var_130;
    int128_t var_120;
    int128_t var_110;
    int128_t var_100;
    int64_t var_f0;
    int32_t var_e7;
    
    if (result != 0x25)
    {
        *(arg1 + 0x4c) = var_e7;
        *(arg1 + 0x49) = var_e7;
        arg1[4] = var_f0;
        arg1[3] = var_100;
        arg1[2] = var_110;
        arg1[1] = var_120;
        *arg1 = zmm0;
        *(arg1 + 0x48) = result;
    }
    else
    {
        int128_t var_c8 = zmm0;
        int128_t var_b8_1 = var_120;
        int128_t var_a8_1 = var_110;
        int128_t var_98_1 = var_100;
        int64_t var_88_1 = var_f0;
        int128_t var_e0;
        _$LT$just..namepath..Namepath$u20$as$u20$core..convert..From$LT$just..name..Name$GT$$GT$::from::ha528c6c76d40d3db(&var_e0, &var_c8);
        
        while (true)
        {
            just::parser::Parser::accepted::h762a87b5f98dff30(&var_130, arg2, 0xd);
            char rax_1 = var_130;
            
            if (result_1 != 0x25)
            {
                arg1[4] = var_f0;
                int128_t zmm0_1 = var_130;
                *(arg1 + 0x31) = var_100;
                *(arg1 + 0x21) = var_110;
                *(arg1 + 0x11) = var_120;
                *(arg1 + 1) = zmm0_1;
                *(arg1 + 0x49) = var_e7;
                *(arg1 + 0x4c) = var_e7;
                *arg1 = rax_1;
                *(arg1 + 0x48) = result_1;
            }
            else
            {
                if (!(rax_1 & 1))
                {
                    uint64_t result_2;
                    result = result_2;
                    arg1[1] = result;
                    *arg1 = var_e0;
                    *(arg1 + 0x48) = 0x25;
                    break;
                }
                
                just::parser::Parser::parse_name::he2804e36e47b7e10(&var_130, arg2);
                int128_t zmm0_2 = var_130;
                
                if (result_1 != 0x25)
                {
                    *(arg1 + 0x4c) = var_e7;
                    *(arg1 + 0x49) = var_e7;
                    arg1[4] = var_f0;
                    arg1[3] = var_100;
                    arg1[2] = var_110;
                    arg1[1] = var_120;
                    *arg1 = zmm0_2;
                    *(arg1 + 0x48) = result_1;
                }
                else
                {
                    int128_t var_78 = zmm0_2;
                    int128_t var_68_1 = var_120;
                    int128_t var_58_1 = var_110;
                    int128_t var_48_1 = var_100;
                    int64_t var_38_1 = var_f0;
                    just::namepath::Namepath::push::h895d03166c8ee08b(&var_e0, &var_78);
                    continue;
                }
            }
            
            return core::ptr::drop_in_place$LT$just..namepath..Namepath$GT$::h15a9b2a7c35752fb(
                &var_e0);
        }
    }
    return result;
}
