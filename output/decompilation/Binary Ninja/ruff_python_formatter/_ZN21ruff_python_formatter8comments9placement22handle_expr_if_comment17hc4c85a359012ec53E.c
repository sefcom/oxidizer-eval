
  int512_t ruff_python_formatter::comments::placement::handle_expr_if_comment::hc4c85a359012ec53(int64_t* arg1, int128_t* arg2, int64_t* arg3, char* arg4, int64_t arg5)

{
    int128_t result;
    
    if (*(arg2 + 0x48) == 1)
    {
        label_703706:
        *(arg1 + 0x40) = arg2[4];
        result = *arg2;
        int128_t zmm1 = arg2[1];
        int128_t zmm2 = arg2[2];
        *(arg1 + 0x30) = arg2[3];
        *(arg1 + 0x20) = zmm2;
        *(arg1 + 0x10) = zmm1;
        *arg1 = result;
    }
    else
    {
        int32_t rdx = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3[1]);
        int32_t rax_1 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3);
        
        if (rdx > rax_1)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        int32_t var_48;
        ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(&var_48, rdx, 
            rax_1, 0x45, arg4, arg5);
        int32_t r12_2 = arg2[4];
        int32_t* rdi_4;
        
        if (var_48 >= r12_2)
        {
            label_70368e:
            int32_t rdx_2 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3);
            int32_t rax_3 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3[2]);
            
            if (rdx_2 > rax_3)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            int32_t var_3c;
            ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(&var_3c, 
                rdx_2, rax_3, 0x3f, arg4, arg5);
            
            if (var_3c >= r12_2)
                goto label_703706;
            
            if (r12_2 >= _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3[2]))
                goto label_703706;
            
            rdi_4 = arg3[2];
        }
        else
        {
            if (r12_2 >= _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3))
                goto label_70368e;
            
            rdi_4 = *arg3;
        }
        
        int32_t rbp_3 = *(arg2 + 0x44);
        int64_t rax_5;
        int64_t rdx_4;
        rax_5 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(rdi_4);
        arg1[1] = rax_5;
        arg1[2] = rdx_4;
        arg1[3] = r12_2;
        *(arg1 + 0x1c) = rbp_3;
        arg1[4] = 0;
        *arg1 = 0x5e;
    }
    
    return result;
}
