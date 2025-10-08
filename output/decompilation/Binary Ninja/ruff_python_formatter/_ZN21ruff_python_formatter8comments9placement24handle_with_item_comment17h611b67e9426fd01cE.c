
  uint64_t ruff_python_formatter::comments::placement::handle_with_item_comment::h611b67e9426fd01c(int64_t* arg1, int128_t* arg2, char* arg3, int64_t arg4)

{
    char* r13 = arg3;
    int128_t* r14 = arg2;
    int64_t rdi = arg2[1];
    uint64_t result = arg2[2];
    arg3 = rdi != 0x5e;
    arg2 = result != 0x5e;
    
    if (arg3 & arg2)
    {
        int64_t rdx = *(r14 + 0x18);
        int64_t rsi = *(r14 + 0x28);
        int64_t var_50 = rdi;
        uint64_t result_1 = result;
        int128_t* r15_1 = &var_50;
        int32_t rdx_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_50);
        int32_t rax = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1);
        
        if (rdx_1 > rax)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        int32_t var_3c;
        ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(&var_3c, rdx_1, 
            rax, 0x35, r13, arg4);
        result = *(r14 + 0x44);
        char rcx = *(r14 + 0x48);
        int64_t rdx_3;
        int64_t rsi_2;
        
        if (result < var_3c)
        {
            rdx_3 = 0x5f;
            rsi_2 = rdx;
        }
        else if (!rcx)
        {
            rsi_2 = *(r14 + 8);
            rdx_3 = 0x60;
            rcx = 0;
            r15_1 = r14;
        }
        else
        {
            rdx_3 = 0x5e;
            rsi_2 = rsi;
            r15_1 = &result_1;
        }
        
        int32_t rdi_4 = r14[4];
        arg1[1] = *r15_1;
        arg1[2] = rsi_2;
        arg1[3] = rdi_4;
        *(arg1 + 0x1c) = result;
        arg1[4] = 0;
        *(arg1 + 0x21) = rcx;
        *arg1 = rdx_3;
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
