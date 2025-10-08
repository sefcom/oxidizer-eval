
  int64_t just::parser::Parser::presume_keyword::heb52d8ab9717d87e(int128_t* arg1, void* arg2, char arg3)

{
    char var_169 = arg3;
    int128_t var_e8;
    just::parser::Parser::advance::ha6fdbb87ccd3a5f7(&var_e8, arg2);
    int128_t var_148 = var_e8;
    char result_1;
    char result = result_1;
    int32_t var_a7;
    int32_t var_168 = var_a7;
    var_168 = var_a7;
    char var_a0;
    int128_t var_d8;
    int128_t var_c8;
    int128_t var_b8;
    
    if (var_a0 != 0x25)
    {
        int32_t var_9f;
        *(arg1 + 0x4c) = var_9f;
        *(arg1 + 0x49) = var_9f;
        int128_t zmm0 = var_148;
        arg1[3] = var_b8;
        arg1[2] = var_c8;
        arg1[1] = var_d8;
        *arg1 = zmm0;
        int32_t rdx_5 = var_168;
        *(arg1 + 0x44) = var_168;
        *(arg1 + 0x41) = rdx_5;
        arg1[4] = result;
        *(arg1 + 0x48) = var_a0;
    }
    else
    {
        int128_t var_68 = var_148;
        int128_t var_58_1 = var_d8;
        int128_t var_48_1 = var_c8;
        int128_t var_38_1 = var_b8;
        uint64_t rdx_2 = var_168;
        int32_t var_27_1 = var_168;
        var_27_1 = rdx_2;
        char result_2 = result;
        
        if (result != 0x18)
        {
            var_168 = &data_46e88e;
            int64_t (* var_160_1)(char* arg1, int64_t* arg2) = _$LT$just..token_kind..TokenKind$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9518a42607a95;
            char* var_158_1 = &result_2;
            int64_t (* var_150_1)(char* arg1, int64_t* arg2) = _$LT$just..token_kind..TokenKind$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9518a42607a95;
            var_148 = &data_8306d8;
            *var_148[8] = 2;
            label_676ef2:
            int128_t var_128;
            var_128 = 0;
            int128_t var_138;
            var_138 = &var_168;
            *var_138[8] = 2;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&*var_e8[8], 0, rdx_2, 
                &var_148);
            var_e8 = -0x7fffffffffffffd8;
            result = just::parser::Parser::error::hcfcee5ba02637174(&var_148, arg2, &var_e8);
            int128_t var_100;
            result_1 = var_100;
            int128_t zmm1_1 = var_148;
            int128_t var_b8_1 = var_b8;
            int128_t var_c8_1 = var_128;
            int128_t var_d8_1 = var_138;
            var_e8 = zmm1_1;
            arg1[4] = var_100;
            arg1[3] = var_b8;
            arg1[2] = var_128;
            arg1[1] = var_138;
            *arg1 = zmm1_1;
        }
        else
        {
            void* rax;
            int64_t rdx_3;
            rax = just::token::Token::lexeme::h66587cdf67f63270(&var_68);
            var_e8 = rax;
            *var_e8[8] = rdx_3;
            result = _$LT$just..keyword..Keyword$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::h72387ea6ad90b2ef(&var_169, &var_e8);
            
            if (!result)
            {
                void* rax_1;
                rax_1 = just::token::Token::lexeme::h66587cdf67f63270(&var_68);
                void* var_78 = rax_1;
                uint64_t var_70_1 = rdx_2;
                var_168 = &var_169;
                int64_t (* var_160_2)(char* arg1, int64_t* arg2) = _$LT$just..keyword..Keyword$u20$as$u20$core..fmt..Display$GT$::fmt::h38d1b5ba2fdc1664;
                void** var_158_2 = &var_78;
                int64_t (* var_150_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                var_148 = &data_8306f8;
                *var_148[8] = 3;
                goto label_676ef2;
            }
            
            *(arg1 + 0x48) = 0x25;
        }
    }
    return result;
}
