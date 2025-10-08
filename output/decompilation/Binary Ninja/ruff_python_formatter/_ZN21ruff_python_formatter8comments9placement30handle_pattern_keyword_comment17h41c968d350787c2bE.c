
  int64_t ruff_python_formatter::comments::placement::handle_pattern_keyword_comment::h41c968d350787c2b(int128_t* arg1, int128_t* arg2, int32_t arg3, char* arg4, int64_t arg5)

{
    int32_t rbp = arg2[4];
    
    if (arg3 > rbp)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    void var_50;
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_50, arg4, arg5, 
        arg3, rbp);
    char result = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(core::iter::traits::iterator::Iterator::try_fold::h4ec1dc8ff2b2dda0(&var_50), 1);
    
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
