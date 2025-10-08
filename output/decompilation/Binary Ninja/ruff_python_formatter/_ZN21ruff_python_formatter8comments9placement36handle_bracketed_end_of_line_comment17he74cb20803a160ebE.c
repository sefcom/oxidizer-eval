
  int512_t ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment::he74cb20803a160eb(int128_t* arg1, int128_t* arg2, char* arg3, int64_t arg4)

{
    int128_t result;
    
    if (!*(arg2 + 0x48))
    {
        int128_t result_1 = *arg2;
        int32_t rax_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1);
        int32_t rbp_1 = arg2[4];
        
        if (rax_1 > rbp_1)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        void var_60;
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg3, arg4, 
            rax_1, rbp_1);
        void var_7c;
        core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_7c, &var_60);
        char var_74;
        
        if (var_74 != 0x5a)
        {
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_7c, &var_60);
            
            if (var_74 != 0x5a)
                goto label_7040bb;
            
            int32_t rax_2 = *(arg2 + 0x44);
            result = result_1;
            *(arg1 + 8) = result;
            *(arg1 + 0x18) = rbp_1;
            *(arg1 + 0x1c) = rax_2;
            arg1[2] = 0;
            *arg1 = 0x60;
        }
        else
        {
            arg1[4] = arg2[4];
            result = *arg2;
            int128_t zmm1_1 = arg2[1];
            int128_t zmm2_1 = arg2[2];
            arg1[3] = arg2[3];
            arg1[2] = zmm2_1;
            arg1[1] = zmm1_1;
            *arg1 = result;
        }
    }
    else
    {
        label_7040bb:
        arg1[4] = arg2[4];
        result = *arg2;
        int128_t zmm1 = arg2[1];
        int128_t zmm2 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2;
        arg1[1] = zmm1;
        *arg1 = result;
    }
    
    return result;
}
