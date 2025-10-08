
  int512_t ruff_python_formatter::comments::placement::handle_lambda_comment::h540739c62cbca78b(int64_t* arg1, int128_t* arg2, int64_t* arg3, char* arg4, int64_t arg5)

{
    void* r15 = arg3[2];
    int32_t rbp = arg2[4];
    int128_t result;
    void var_60;
    int32_t rcx;
    int64_t rdx;
    char* rsi;
    void* rdi_1;
    
    if (!r15)
    {
        if (rbp < _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3))
        {
            rcx = arg3[1];
            
            if (rcx > rbp)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            rdi_1 = &var_60;
            rsi = arg4;
            rdx = arg5;
            label_703ec3:
            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(rdi_1, rsi, rdx, 
                rcx, rbp);
            
            if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(core::iter::traits::iterator::Iterator::try_fold::h139f27bef1b5e023(&var_60), 1))
                goto label_703f0f;
            
            goto label_703ee7;
        }
        
        label_703ee7:
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
        if (rbp >= *(r15 + 0x48))
        {
            if (*(r15 + 0x4c) >= rbp)
                goto label_703ee7;
            
            if (rbp >= _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3))
                goto label_703ee7;
            
            rcx = *(r15 + 0x4c);
            
            if (rcx > rbp)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            rdi_1 = &var_60;
            rsi = arg4;
            rdx = arg5;
            goto label_703ec3;
        }
        
        label_703f0f:
        result = *arg2;
        char rax_5 = *(arg2 + 0x48);
        int32_t rcx_1 = *(arg2 + 0x44);
        *(arg1 + 8) = result;
        arg1[3] = rbp;
        *(arg1 + 0x1c) = rcx_1;
        arg1[4] = 0;
        *(arg1 + 0x21) = rax_5;
        *arg1 = 0x60;
    }
    return result;
}
