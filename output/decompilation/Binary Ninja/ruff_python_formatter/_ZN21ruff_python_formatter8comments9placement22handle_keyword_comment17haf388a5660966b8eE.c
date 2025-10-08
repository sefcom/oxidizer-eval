
  int64_t ruff_python_formatter::comments::placement::handle_keyword_comment::haf388a5660966b8e(int128_t* arg1, int128_t* arg2, void* arg3, char* arg4, int64_t arg5)

{
    void* rdi = nullptr;
    
    if (*(arg3 + 0x6f) != 0xda)
        rdi = arg3 + 0x50;
    
    int32_t rax_1 = core::option::Option$LT$T$GT$::map_or::hf8edf1a105a2a953(rdi, *(arg3 + 0x78));
    int32_t rbp = arg2[4];
    
    if (rax_1 > rbp)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    void var_60;
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg4, arg5, 
        rax_1, rbp);
    char result = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(core::iter::traits::iterator::Iterator::try_fold::h4ec1dc8ff2b2dda0(&var_60), 1);
    
    if (!result)
    {
        result = *(arg2 + 0x48);
        int32_t rcx_1 = *(arg2 + 0x44);
        *(arg1 + 8) = *arg2;
        *(arg1 + 0x18) = rbp;
        *(arg1 + 0x1c) = rcx_1;
        arg1[2] = 0;
        *(arg1 + 0x21) = result;
        *arg1 = 0x5e;
    }
    else
    {
        arg1[4] = arg2[4];
        int128_t zmm0 = *arg2;
        int128_t zmm1_1 = arg2[1];
        int128_t zmm2_1 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2_1;
        arg1[1] = zmm1_1;
        *arg1 = zmm0;
    }
    
    return result;
}
