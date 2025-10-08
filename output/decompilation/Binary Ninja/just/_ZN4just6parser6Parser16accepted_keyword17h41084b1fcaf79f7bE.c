
  int64_t just::parser::Parser::accepted_keyword::h41084b1fcaf79f7b(char* arg1, void* arg2, char arg3)

{
    int128_t var_108;
    just::parser::Parser::next::h26f20bd451ef506f(&var_108, arg2);
    int128_t zmm0 = var_108;
    char result_1;
    char result = result_1;
    int32_t var_c7;
    int32_t var_110 = var_c7;
    char result_2;
    int128_t var_f8;
    int128_t var_e8;
    int128_t var_d8;
    int32_t var_bf;
    
    if (result_2 != 0x25)
    {
        *(arg1 + 0x4c) = var_bf;
        *(arg1 + 0x49) = var_bf;
        *(arg1 + 0x30) = var_d8;
        *(arg1 + 0x20) = var_e8;
        *(arg1 + 0x10) = var_f8;
        *arg1 = zmm0;
        *(arg1 + 0x44) = var_c7;
        *(arg1 + 0x41) = var_c7;
        arg1[0x40] = result;
        arg1[0x48] = result_2;
    }
    else
    {
        int128_t var_78 = zmm0;
        int128_t var_68_1 = var_f8;
        int128_t var_58_1 = var_e8;
        int128_t var_48_1 = var_d8;
        int32_t var_37_1 = var_c7;
        var_37_1 = var_c7;
        char result_3 = result;
        char rax_2;
        
        if (result == 0x18)
        {
            void* rax;
            uint64_t rdx_3;
            rax = just::token::Token::lexeme::h66587cdf67f63270(&var_78);
            void* rax_1;
            int64_t rdx_4;
            rax_1 = just::keyword::Keyword::lexeme::h3532944a9e815f09(arg3);
            rax_2 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax, rdx_3, rax_1, rdx_4);
        }
        
        if (result != 0x18 || !rax_2)
        {
            result = 0;
            *arg1 = result;
            arg1[0x48] = 0x25;
        }
        else
        {
            just::parser::Parser::advance::ha6fdbb87ccd3a5f7(&var_108, arg2);
            result = result_2;
            
            if (result != 0x25)
            {
                int64_t rcx_3 = var_108;
                int128_t zmm0_1 = var_108;
                int128_t var_b8;
                var_b8 = var_c7;
                *var_b8[3] = var_c7;
                *(arg1 + 0x4c) = var_bf;
                *(arg1 + 0x49) = var_bf;
                *(arg1 + 0x44) = *var_b8[3];
                *(arg1 + 0x41) = var_b8;
                *arg1 = rcx_3;
                *(arg1 + 8) = zmm0_1;
                *(arg1 + 0x18) = var_f8;
                *(arg1 + 0x28) = var_e8;
                *(arg1 + 0x38) = *var_d8[8];
                arg1[0x40] = result_1;
                arg1[0x48] = result;
            }
            else
            {
                result = 1;
                *arg1 = result;
                arg1[0x48] = 0x25;
            }
        }
    }
    return result;
}
