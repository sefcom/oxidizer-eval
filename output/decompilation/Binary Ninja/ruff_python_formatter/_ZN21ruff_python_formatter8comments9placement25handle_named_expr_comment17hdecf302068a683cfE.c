
  int64_t ruff_python_formatter::comments::placement::handle_named_expr_comment::hdecf302068a683cf(int64_t* arg1, int128_t* arg2, char* arg3, int64_t arg4)

{
    char* r12 = arg3;
    int128_t* r14 = arg2;
    int64_t rdi = arg2[1];
    int64_t result = arg2[2];
    arg3 = rdi != 0x5e;
    arg2 = result != 0x5e;
    
    if (arg3 & arg2)
    {
        int64_t rdx = *(r14 + 0x18);
        int64_t rsi = *(r14 + 0x28);
        int64_t var_60 = rdi;
        int64_t var_58 = rdx;
        int64_t result_1 = result;
        int64_t var_48_1 = rsi;
        int128_t* r13_1 = &var_60;
        int32_t rdx_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_60);
        int32_t rax = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1);
        
        if (rdx_1 > rax)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        int32_t var_3c;
        ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(&var_3c, rdx_1, 
            rax, 0x30, r12, arg4);
        int32_t rax_1 = *(r14 + 0x44);
        int32_t rcx = var_3c;
        
        if (rax_1 >= rcx)
            r13_1 = r14;
        
        void* rax_2 = &var_58;
        char rcx_1 = *(r14 + 0x48);
        int64_t rdi_4 = r14[4];
        
        if (rax_1 >= rcx)
            rax_2 = r14 + 8;
        
        result = *rax_2;
        arg1[1] = *r13_1;
        arg1[2] = result;
        arg1[3] = rdi_4;
        arg1[4] = 0;
        *(arg1 + 0x21) = rcx_1;
        *arg1 = 0x60 - 0;
    }
    else
    {
        *(arg1 + 0x40) = r14[4];
        int128_t zmm0 = *r14;
        int128_t zmm1 = r14[1];
        int128_t zmm2 = r14[2];
        *(arg1 + 0x30) = r14[3];
        *(arg1 + 0x20) = zmm2;
        *(arg1 + 0x10) = zmm1;
        *arg1 = zmm0;
    }
    
    return result;
}
