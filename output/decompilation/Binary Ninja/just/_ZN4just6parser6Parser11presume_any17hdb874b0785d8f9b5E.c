
  uint64_t just::parser::Parser::presume_any::hdb874b0785d8f9b5(int128_t* arg1, void* arg2)

{
    int128_t var_118;
    uint64_t rdx = just::parser::Parser::advance::ha6fdbb87ccd3a5f7(&var_118, arg2);
    char result_1;
    uint64_t result = result_1;
    int128_t var_178 = var_118;
    int128_t var_108;
    int128_t var_f8;
    int128_t var_e8;
    uint64_t result_3;
    int128_t zmm0;
    
    if (result != 0x25)
    {
        int32_t var_cf;
        *(arg1 + 0x4c) = var_cf;
        *(arg1 + 0x49) = var_cf;
        arg1[4] = result_3;
        zmm0 = var_178;
        arg1[3] = var_e8;
        arg1[2] = var_f8;
        arg1[1] = var_108;
        *arg1 = zmm0;
        *(arg1 + 0x48) = result;
    }
    else
    {
        zmm0 = var_178;
        uint64_t result_2 = result_3;
        
        if (!_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hcb8c8d897295a20b(&result_2))
        {
            char const* const var_88 = "orattributeaan";
            int64_t var_80_1 = 2;
            void* const var_78_1 = &data_4715ee;
            void* const var_70_1 = &data_4715f0;
            char const* const* var_a8 = &var_88;
            int64_t (* var_a0_1)(int64_t* arg1, int64_t* arg2) = _$LT$just..list..List$LT$T$C$I$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcecfb4dad3a4dc01;
            uint64_t* var_98_1 = &result_2;
            int64_t (* var_90_1)(char* arg1, int64_t* arg2) = _$LT$just..token_kind..TokenKind$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9518a42607a95;
            var_178 = &data_830728;
            *var_178[8] = 2;
            int128_t var_158;
            var_158 = 0;
            int128_t var_168;
            var_168 = &var_a8;
            *var_168[8] = 2;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&*var_118[8], 0, rdx, 
                &var_178);
            var_118 = -0x7fffffffffffffd8;
            result = just::parser::Parser::error::hcfcee5ba02637174(&var_178, arg2, &var_118);
            int128_t var_130;
            result_3 = var_130;
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
            result = result_2;
            arg1[4] = result;
            arg1[3] = var_e8;
            arg1[2] = var_f8;
            arg1[1] = var_108;
            *arg1 = zmm0;
            *(arg1 + 0x48) = 0x25;
        }
    }
    return result;
}
