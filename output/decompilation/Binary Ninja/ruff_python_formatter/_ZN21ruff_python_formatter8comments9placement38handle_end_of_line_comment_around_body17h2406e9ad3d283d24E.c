
  int512_t ruff_python_formatter::comments::placement::handle_end_of_line_comment_around_body::h2406e9ad3d283d24(int64_t* arg1, int64_t* arg2, char* arg3, int64_t arg4)

{
    int128_t result;
    
    if (arg2[9] == 1)
    {
        label_701da0:
        *(arg1 + 0x40) = *(arg2 + 0x40);
        result = *arg2;
        int128_t zmm1 = *(arg2 + 0x10);
        int128_t zmm2 = *(arg2 + 0x20);
        *(arg1 + 0x30) = *(arg2 + 0x30);
        *(arg1 + 0x20) = zmm2;
        *(arg1 + 0x10) = zmm1;
        *arg1 = result;
    }
    else
    {
        int64_t rax_1 = arg2[4];
        int64_t var_60;
        
        if (rax_1 == 0x5e)
        {
            label_701d72:
            int64_t rax_5 = arg2[2];
            
            if (rax_5 == 0x5e)
                goto label_701da0;
            
            int64_t rcx_2 = arg2[3];
            var_60 = rax_5;
            int64_t var_58_1 = rcx_2;
            int64_t rax_6;
            int64_t rdx_2;
            rax_6 = ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::last_child_in_body::h106de3f3c845d12e(&var_60);
            
            if (rax_6 == 0x5e)
                goto label_701da0;
            
            int64_t rax_7;
            int64_t rdx_3;
            rax_7 = core::iter::traits::iterator::Iterator::fold::hc0deaa67c0db3dca(rax_6);
            bool cond:0_1 = rax_7 == 0x5e;
            
            if (rax_7 == 0x5e)
                rax_7 = rax_6;
            
            if (cond:0_1)
                rdx_3 = rdx_2;
            
            arg1[1] = rax_7;
            arg1[2] = rdx_3;
            arg1[3] = arg2[8];
            arg1[4] = 0;
            *arg1 = 0x5f;
        }
        else
        {
            int64_t rcx = arg2[5];
            int64_t var_80 = rax_1;
            int64_t var_78_1 = rcx;
            int64_t r15_1 = *arg2;
            void* r12_1 = arg2[1];
            
            if (!ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::is_first_statement_in_body::h5fab489393000851(&var_80, r15_1, r12_1))
                goto label_701d72;
            
            int32_t rbp_1 = *(arg2 + 0x44);
            int32_t rax_3 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_80);
            
            if (rbp_1 > rax_3)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg3, 
                arg4, rbp_1, rax_3);
            void var_6c;
            result = core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_6c, 
                &var_60);
            char var_64;
            
            if (var_64 != 0x5a)
                goto label_701d72;
            
            int32_t rax_4 = arg2[8];
            arg1[1] = r15_1;
            arg1[2] = r12_1;
            arg1[3] = rax_4;
            *(arg1 + 0x1c) = rbp_1;
            arg1[4] = 0;
            *arg1 = 0x60;
        }
    }
    
    return result;
}
