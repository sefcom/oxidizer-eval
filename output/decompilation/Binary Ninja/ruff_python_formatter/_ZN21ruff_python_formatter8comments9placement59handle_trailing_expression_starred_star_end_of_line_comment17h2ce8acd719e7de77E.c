
  int512_t ruff_python_formatter::comments::placement::handle_trailing_expression_starred_star_end_of_line_comment::h2ce8acd719e7de77(int64_t* arg1, int128_t* arg2, void* arg3, char* arg4, int64_t arg5)

{
    int128_t result;
    
    if (arg2[2] == 0x5e)
    {
        label_7037cf:
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
        int32_t rax_1 = *(arg3 + 8);
        int32_t rbp_1 = arg2[4];
        
        if (rax_1 > rbp_1)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        void var_58;
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_58, arg4, arg5, 
            rax_1, rbp_1);
        char rax_2;
        rax_2 = core::iter::traits::iterator::Iterator::try_fold::h139f27bef1b5e023(&var_58);
        
        if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(rax_2, 1))
            goto label_7037cf;
        
        char rax_4 = *(arg2 + 0x48);
        int32_t rcx_1 = *(arg2 + 0x44);
        arg1[1] = 0x36;
        arg1[2] = arg3;
        arg1[3] = rbp_1;
        *(arg1 + 0x1c) = rcx_1;
        arg1[4] = 0;
        *(arg1 + 0x21) = rax_4;
        *arg1 = 0x5e;
    }
    
    return result;
}
