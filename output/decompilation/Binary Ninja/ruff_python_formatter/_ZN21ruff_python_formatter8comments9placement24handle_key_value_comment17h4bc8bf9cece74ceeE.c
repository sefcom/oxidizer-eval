
  uint64_t ruff_python_formatter::comments::placement::handle_key_value_comment::h4bc8bf9cece74cee(int64_t* arg1, int128_t* arg2, char* arg3, int64_t arg4)

{
    char* r12 = arg3;
    int128_t* r14 = arg2;
    uint64_t result = arg2[1];
    int64_t rcx = arg2[2];
    arg3 = rcx != 0x5e;
    arg2 = result != 0x5e;
    
    if (!(arg3 & arg2))
    {
        label_703303:
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
        int64_t var_80 = rcx;
        int64_t var_78_1 = rsi;
        uint64_t result_1 = result;
        int64_t var_68_1 = rdx;
        int32_t rdx_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1);
        int32_t rax = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_80);
        
        if (rdx_1 > rax)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        void var_60;
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, r12, arg4, 
            rdx_1, rax);
        result = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(core::iter::traits::iterator::Iterator::try_fold::h74985cea8eb9b63f(&var_60), 1);
        
        if (!result)
            goto label_703303;
        
        result = *(r14 + 0x48);
        *(arg1 + 8) = *r14;
        arg1[3] = r14[4];
        arg1[4] = 0;
        *(arg1 + 0x21) = result;
        *arg1 = 0x60;
    }
    
    return result;
}
