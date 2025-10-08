
  int512_t ruff_python_formatter::comments::placement::handle_own_line_comment_around_body::h66e8d27018a5e0d4(int128_t* arg1, int128_t* arg2, char* arg3, uint64_t arg4)

{
    int64_t rax_1;
    
    if (*(arg2 + 0x48))
        rax_1 = arg2[1];
    
    int128_t result;
    
    if (*(arg2 + 0x48) && rax_1 != 0x5e)
    {
        int64_t rcx = *(arg2 + 0x18);
        int64_t var_f8 = rax_1;
        int32_t rdx = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_f8);
        int32_t r8_1 = arg2[4];
        
        if (rdx > r8_1)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        void var_80;
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_80, arg3, arg4, 
            rdx, r8_1);
        void var_d0;
        core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_d0, &var_80);
        char var_c8;
        
        if (var_c8 == 0x5a)
        {
            ruff_python_formatter::comments::placement::handle_own_line_comment_between_branches::h2e114d08ca69ba0e(&var_80, arg2, var_f8, rcx, arg3, arg4);
            int64_t* var_e8 = &var_f8;
            char* var_e0_1 = arg3;
            uint64_t var_d8_1 = arg4;
            ruff_python_formatter::comments::visitor::CommentPlacement::or_else::h7611629345dd40b0(
                &var_d0, &var_80, &var_e8);
            return ruff_python_formatter::comments::visitor::CommentPlacement::or_else::h1eeeae6cff7d3bf8(arg1, &var_d0, arg3, arg4);
        }
        
        arg1[4] = arg2[4];
        result = *arg2;
        int128_t zmm1_1 = arg2[1];
        int128_t zmm2_1 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2_1;
        arg1[1] = zmm1_1;
        *arg1 = result;
    }
    else
    {
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
