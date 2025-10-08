
  int512_t ruff_python_formatter::comments::placement::handle_own_line_comment_between_statements::h0bfbc4f1ed6630d6(int64_t* arg1, int128_t* arg2, char* arg3, int64_t arg4)

{
    int64_t rbp = arg2[1];
    int128_t result;
    
    if (rbp == 0x5e)
    {
        label_7020e0:
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
        int64_t rax_1 = arg2[2];
        
        if (rax_1 == 0x5e)
            goto label_7020e0;
        
        int64_t r14_1 = *(arg2 + 0x18);
        int64_t r8_1 = *(arg2 + 0x28);
        int64_t var_40 = rax_1;
        int64_t var_38_1 = r8_1;
        int64_t r8_2;
        r8_2 = rbp - 2 < 0x19;
        int64_t rax_2;
        rax_2 = rax_1 - 2 < 0x19;
        
        if (!(r8_2 & rax_2))
            goto label_7020e0;
        
        char r15_1 = *(arg2 + 0x48);
        
        if (!r15_1)
            goto label_7020e0;
        
        int32_t rbx_1 = *(arg2 + 0x44);
        int32_t rax_3 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_40);
        
        if (rbx_1 > rax_3)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        uint64_t rax_4;
        int64_t rdx;
        rax_4 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rbx_1, rax_3);
        void* rax_5;
        int64_t rdx_2;
        rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_4, rdx, arg3, arg4);
        
        if (!rax_5)
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg3, arg4, rax_4, rdx);
            /* no return */
        }
        
        int32_t rax_6;
        rax_6 = ruff_python_formatter::comments::placement::max_empty_lines::h787bd2fd7fcb014f(
            rax_5, rdx_2);
        int32_t rcx_2 = arg2[4];
        
        if (!rax_6)
        {
            result = var_40;
            *(arg1 + 8) = result;
            arg1[3] = rcx_2;
            *(arg1 + 0x1c) = rbx_1;
            arg1[4] = 0;
            *(arg1 + 0x21) = r15_1;
            *arg1 = 0x5e;
        }
        else
        {
            arg1[1] = rbp;
            arg1[2] = r14_1;
            arg1[3] = rcx_2;
            *(arg1 + 0x1c) = rbx_1;
            arg1[4] = 0;
            *(arg1 + 0x21) = r15_1;
            *arg1 = 0x5f;
        }
    }
    
    return result;
}
