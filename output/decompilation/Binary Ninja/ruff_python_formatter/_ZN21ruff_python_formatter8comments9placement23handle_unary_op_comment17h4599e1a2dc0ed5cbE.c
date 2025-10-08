
  uint32_t ruff_python_formatter::comments::placement::handle_unary_op_comment::h4599e1a2dc0ed5cb(int64_t* arg1, int128_t* arg2, int64_t* arg3, char* arg4, int64_t arg5)

{
    int32_t rbp = arg3[1];
    int32_t rax = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3);
    
    if (rbp > rax)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    void var_60;
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg4, arg5, 
        rbp, rax);
    int64_t var_7c;
    core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_7c, &var_60);
    core::iter::traits::iterator::Iterator::try_fold::h9948eabd495bf282(&var_7c, &var_60);
    char var_74;
    int64_t var_70;
    int32_t var_68;
    
    if (var_74 != 0x5a)
    {
        int32_t var_68_1 = var_74;
        var_70 = var_7c;
    }
    else
        var_68 = 0x5a;
    uint32_t result = core::option::Option$LT$T$GT$::map_or::h7932729f0d6fa57c(&var_70, 
        _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3));
    int32_t rcx_1 = *(arg2 + 0x44);
    
    if (rcx_1 >= result)
    {
        *(arg1 + 0x40) = arg2[4];
        int128_t zmm0_1 = *arg2;
        int128_t zmm1_1 = arg2[1];
        int128_t zmm2_1 = arg2[2];
        *(arg1 + 0x30) = arg2[3];
        *(arg1 + 0x20) = zmm2_1;
        *(arg1 + 0x10) = zmm1_1;
        *arg1 = zmm0_1;
    }
    else
    {
        result = *(arg2 + 0x48);
        int32_t rdx_1 = arg2[4];
        arg1[1] = 0x1e;
        arg1[2] = arg3;
        arg1[3] = rdx_1;
        *(arg1 + 0x1c) = rcx_1;
        arg1[4] = 0;
        *(arg1 + 0x21) = result;
        *arg1 = 0x5e;
    }
    
    return result;
}
