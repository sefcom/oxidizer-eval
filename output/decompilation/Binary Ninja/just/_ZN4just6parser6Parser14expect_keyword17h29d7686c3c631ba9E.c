
  int64_t just::parser::Parser::expect_keyword::h29d7686c3c631ba9(uint64_t* arg1, void* arg2, char arg3)

{
    char var_161 = arg3;
    int128_t var_150;
    just::parser::Parser::advance::ha6fdbb87ccd3a5f7(&var_150, arg2);
    char result_1;
    char result = result_1;
    int128_t zmm0 = var_150;
    char var_110;
    char r14 = var_110;
    int32_t var_10f;
    int32_t var_160 = var_10f;
    int128_t var_140;
    int128_t var_130;
    int128_t var_120;
    
    if (result != 0x25)
    {
        int32_t var_107;
        *(arg1 + 0x4c) = var_107;
        *(arg1 + 0x49) = var_107;
        *(arg1 + 0x30) = var_120;
        *(arg1 + 0x20) = var_130;
        *(arg1 + 0x10) = var_140;
        *arg1 = zmm0;
        *(arg1 + 0x44) = var_10f;
        *(arg1 + 0x41) = var_10f;
        arg1[8] = r14;
        arg1[9] = result;
    }
    else
    {
        int128_t var_48_1 = var_140;
        int32_t var_158_1 = var_10f;
        int128_t var_a8 = zmm0;
        int128_t var_98_1 = var_140;
        int128_t var_88_1 = var_130;
        int128_t var_78_1 = var_120;
        char var_68_1 = r14;
        int32_t var_67_1 = var_10f;
        var_67_1 = var_10f;
        
        if (r14 == 0x18)
        {
            void* rax_2;
            int64_t rdx;
            rax_2 = just::token::Token::lexeme::h66587cdf67f63270(&var_a8);
            var_150 = rax_2;
            *var_150[8] = rdx;
            result = _$LT$just..keyword..Keyword$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::h72387ea6ad90b2ef(&var_161, &var_150);
        }
        
        if (r14 != 0x18 || !result)
        {
            uint64_t rax_3 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 1);
            
            if (!rax_3)
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            *rax_3 = arg3;
            *var_150[8] = 1;
            var_140 = rax_3;
            *var_140[8] = 1;
            int128_t var_130_1 = zmm0;
            int128_t var_120_1 = var_48_1;
            var_110 = var_130;
            int128_t var_100_1 = var_120;
            char var_f0_1 = r14;
            int32_t var_ef_1 = var_10f;
            var_ef_1 = var_10f;
            var_150 = -0x7fffffffffffffdf;
            return just::token::Token::error::h986494da066a4455(arg1, &var_a8, &var_150);
        }
        
        arg1[9] = 0x25;
    }
    return result;
}
