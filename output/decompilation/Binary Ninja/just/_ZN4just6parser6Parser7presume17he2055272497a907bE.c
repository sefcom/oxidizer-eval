
  uint32_t just::parser::Parser::presume::he2055272497a907b(int128_t* arg1, void* arg2, char arg3)

{
    char var_1a1 = arg3;
    int128_t var_118;
    just::parser::Parser::advance::ha6fdbb87ccd3a5f7(&var_118, arg2);
    int128_t var_178 = var_118;
    char result_1;
    uint32_t result = result_1;
    uint32_t result_5;
    uint32_t result_3 = result_5;
    result_3 = result_5;
    char var_d0;
    int128_t var_108;
    int128_t var_f8;
    int128_t var_e8;
    int128_t zmm0;
    
    if (var_d0 != 0x25)
    {
        int32_t var_cf;
        *(arg1 + 0x4c) = var_cf;
        *(arg1 + 0x49) = var_cf;
        zmm0 = var_178;
        arg1[3] = var_e8;
        arg1[2] = var_f8;
        arg1[1] = var_108;
        *arg1 = zmm0;
        uint32_t result_8 = result_3;
        *(arg1 + 0x44) = result_3;
        *(arg1 + 0x41) = result_8;
        arg1[4] = result;
        *(arg1 + 0x48) = var_d0;
    }
    else
    {
        zmm0 = var_178;
        uint32_t result_2 = result_3;
        uint32_t result_4 = result_3;
        int128_t var_68_1 = zmm0;
        int128_t var_58_1 = var_108;
        int128_t var_48_1 = var_f8;
        int128_t var_38_1 = var_e8;
        char var_28 = result;
        uint64_t result_7 = result_3;
        uint32_t result_6 = result_3;
        result_6 = result_7;
        
        if (result != arg3)
        {
            result_3 = &var_1a1;
            int64_t (* var_190_1)(char* arg1, int64_t* arg2) = _$LT$just..token_kind..TokenKind$u20$as$u20$core..fmt..Debug$GT$::fmt::h1677e8287b3038f4;
            char* var_188_1 = &var_28;
            int64_t (* var_180_1)(char* arg1, int64_t* arg2) = _$LT$just..token_kind..TokenKind$u20$as$u20$core..fmt..Debug$GT$::fmt::h1677e8287b3038f4;
            var_178 = &data_8306d8;
            *var_178[8] = 2;
            int128_t var_158;
            var_158 = 0;
            int128_t var_168;
            var_168 = &result_3;
            *var_168[8] = 2;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&*var_118[8], 0, 
                result_7, &var_178);
            var_118 = -0x7fffffffffffffd8;
            result = just::parser::Parser::error::hcfcee5ba02637174(&var_178, arg2, &var_118);
            int128_t var_130;
            result_1 = var_130;
            int128_t zmm1_1 = var_178;
            int128_t var_e8_1 = var_e8;
            int128_t var_f8_1 = var_158;
            int128_t var_108_1 = var_168;
            var_118 = zmm1_1;
            arg1[4] = var_130;
            arg1[3] = var_e8;
            arg1[2] = var_158;
            arg1[1] = var_168;
            *arg1 = zmm1_1;
        }
        else
        {
            arg1[3] = var_e8;
            arg1[2] = var_f8;
            arg1[1] = var_108;
            *arg1 = zmm0;
            arg1[4] = arg3;
            result = result_2;
            *(arg1 + 0x41) = result;
            *(arg1 + 0x44) = result_2;
            *(arg1 + 0x48) = 0x25;
        }
    }
    return result;
}
