
  int512_t ruff_python_formatter::comments::placement::handle_pattern_match_mapping_comment::h5703d2f319014972(int64_t* arg1, int128_t* arg2, void* arg3, char* arg4, int64_t arg5)

{
    int128_t result;
    
    if (arg2[2] != 0x5e || *(arg3 + 0x4f) == 0xda)
    {
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
        int32_t rbx_1 = arg2[4];
        
        if (rbx_1 <= *(arg3 + 0x34))
        {
            int64_t rax_2 = arg2[1];
            int64_t var_58;
            int32_t rcx_1;
            
            if (rax_2 != 0x5e)
            {
                int64_t rcx_2 = *(arg2 + 0x18);
                var_58 = rax_2;
                int64_t var_50_1 = rcx_2;
                rcx_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_58);
            }
            else
            {
                var_58 = *arg2;
                rcx_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_58);
            }
            
            if (rcx_1 > rbx_1)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_58, arg4, 
                arg5, rcx_1, rbx_1);
            
            if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(core::iter::traits::iterator::Iterator::try_fold::h12bf6dc1167f662c(&var_58), 1))
            {
                *(arg1 + 0x40) = arg2[4];
                result = *arg2;
                int128_t zmm1_1 = arg2[1];
                int128_t zmm2_1 = arg2[2];
                *(arg1 + 0x30) = arg2[3];
                *(arg1 + 0x20) = zmm2_1;
                *(arg1 + 0x10) = zmm1_1;
                *arg1 = result;
            }
            else
            {
                result = *arg2;
                char rax_6 = *(arg2 + 0x48);
                int32_t rcx_3 = *(arg2 + 0x44);
                *(arg1 + 8) = result;
                arg1[3] = rbx_1;
                *(arg1 + 0x1c) = rcx_3;
                arg1[4] = 0;
                *(arg1 + 0x21) = rax_6;
                *arg1 = 0x60;
            }
        }
        else
        {
            result = *arg2;
            char rax_1 = *(arg2 + 0x48);
            int32_t rcx = *(arg2 + 0x44);
            *(arg1 + 8) = result;
            arg1[3] = rbx_1;
            *(arg1 + 0x1c) = rcx;
            arg1[4] = 0;
            *(arg1 + 0x21) = rax_1;
            *arg1 = 0x60;
        }
    }
    
    return result;
}
