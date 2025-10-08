
  uint64_t ruff_python_formatter::comments::placement::handle_trailing_binary_like_comment::ha53b59540e29e738(int64_t* arg1, int128_t* arg2, char* arg3, int64_t arg4)

{
    char* r12 = arg3;
    int128_t* r14 = arg2;
    int64_t rcx = arg2[1];
    uint64_t result = arg2[2];
    arg3 = rcx != 0x5e;
    arg2 = result != 0x5e;
    
    if (!(arg3 & arg2))
    {
        label_702a68:
        *(arg1 + 0x40) = r14[4];
        int128_t zmm0 = *r14;
        int128_t zmm1 = r14[1];
        int128_t zmm2 = r14[2];
        *(arg1 + 0x30) = r14[3];
        *(arg1 + 0x20) = zmm2;
        *(arg1 + 0x10) = zmm1;
        *arg1 = zmm0;
    }
    else
    {
        int64_t rdx = *(r14 + 0x18);
        int64_t rsi = *(r14 + 0x28);
        int64_t var_98 = rcx;
        int64_t var_90_1 = rdx;
        uint64_t result_1 = result;
        int64_t var_70_1 = rsi;
        int32_t rdx_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_98);
        int32_t rax = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1);
        
        if (rdx_1 > rax)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        void var_68;
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_68, r12, arg4, 
            rdx_1, rax);
        char var_38 = 0;
        int64_t var_88;
        core::iter::traits::iterator::Iterator::try_fold::h574e0d0b6077c929(&var_88, &var_68, 
            &var_38);
        char var_80;
        
        if (var_80 == 0x5a)
        {
            core::option::expect_failed::h3f620cfb8545dc61("Expected a token for the operato…");
            /* no return */
        }
        
        result = *(r14 + 0x44);
        
        if (result >= var_88)
            goto label_702a68;
        
        char rcx_3 = *(r14 + 0x48);
        int32_t rdx_4 = r14[4];
        *(arg1 + 8) = var_98;
        arg1[3] = rdx_4;
        *(arg1 + 0x1c) = result;
        arg1[4] = 0;
        *(arg1 + 0x21) = rcx_3;
        *arg1 = 0x5f;
    }
    
    return result;
}
