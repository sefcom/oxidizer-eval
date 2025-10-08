
  uint64_t just::parser::Parser::parse_parameter::h2e23104b2386c6b5(uint64_t* arg1, void* arg2, char arg3)

{
    char var_168;
    just::parser::Parser::accepted::h762a87b5f98dff30(&var_168, arg2, 0x12);
    char r15 = var_168;
    char result_1;
    uint64_t result = result_1;
    int128_t var_167;
    int128_t var_157;
    int128_t var_147;
    int128_t var_137;
    int64_t var_128;
    int32_t var_11f;
    
    if (result != 0x25)
    {
        arg1[9] = var_128;
        *(arg1 + 0x39) = var_137;
        *(arg1 + 0x29) = var_147;
        *(arg1 + 0x19) = var_157;
        *(arg1 + 9) = var_167;
        *(arg1 + 0x51) = var_11f;
        *(arg1 + 0x54) = var_11f;
        arg1[1] = r15;
        arg1[0xa] = result;
        *arg1 = 0x13;
    }
    else
    {
        just::parser::Parser::parse_name::he2804e36e47b7e10(&var_168, arg2);
        result = result_1;
        int128_t zmm0_1 = var_168;
        
        if (result != 0x25)
        {
            *(arg1 + 0x54) = var_11f;
            *(arg1 + 0x51) = var_11f;
            arg1[9] = var_128;
            *(arg1 + 0x38) = var_147;
            *(arg1 + 0x28) = var_157;
            *(arg1 + 0x18) = var_167;
            *(arg1 + 8) = zmm0_1;
            arg1[0xa] = result;
            *arg1 = 0x13;
        }
        else
        {
            just::parser::Parser::accepted::h762a87b5f98dff30(&var_168, arg2, 0x15);
            char rcx_1 = var_168;
            result = result_1;
            
            if (result != 0x25)
            {
                arg1[9] = var_128;
                *(arg1 + 0x39) = var_137;
                *(arg1 + 0x29) = var_147;
                *(arg1 + 0x19) = var_157;
                *(arg1 + 9) = var_167;
                *(arg1 + 0x51) = var_11f;
                *(arg1 + 0x54) = var_11f;
                arg1[1] = rcx_1;
                arg1[0xa] = result;
                *arg1 = 0x13;
            }
            else
            {
                result = 0x12;
                
                if (!(rcx_1 & 1))
                    goto label_680303;
                
                just::parser::Parser::parse_value::h216c4bdeb7f558a6(&var_168, arg2);
                result = var_168;
                int64_t var_178_1;
                var_178_1 = result_1;
                
                if (result != 0x12)
                {
                    uint64_t result_3;
                    uint64_t result_2 = result_3;
                    int128_t var_100;
                    int128_t var_38 = var_100;
                    int128_t var_110;
                    int128_t var_48 = var_110;
                    int128_t var_98 = var_167;
                    int128_t var_88 = var_157;
                    int128_t var_78 = var_147;
                    int128_t var_68 = var_137;
                    int128_t var_58 = var_178_1;
                    label_680303:
                    arg1[0x18] = var_128;
                    *(arg1 + 0xb0) = var_147;
                    *(arg1 + 0xa0) = var_157;
                    *(arg1 + 0x90) = var_167;
                    *(arg1 + 0x80) = zmm0_1;
                    *arg1 = result;
                    *(arg1 + 8) = var_98;
                    *(arg1 + 0x18) = var_88;
                    *(arg1 + 0x28) = var_78;
                    *(arg1 + 0x38) = var_68;
                    *(arg1 + 0x48) = var_58;
                    *(arg1 + 0x58) = var_48;
                    *(arg1 + 0x68) = var_38;
                    result = result_2;
                    arg1[0xf] = result;
                    arg1[0x19] = r15;
                    *(arg1 + 0xc9) = arg3;
                }
                else
                {
                    *(arg1 + 0x48) = var_178_1;
                    *(arg1 + 0x38) = var_137;
                    *(arg1 + 0x28) = var_147;
                    *(arg1 + 0x18) = var_157;
                    *(arg1 + 8) = var_167;
                    *arg1 = 0x13;
                }
            }
        }
    }
    return result;
}
