
  uint64_t ruff_python_formatter::comments::placement::handle_own_line_comment_between_branches::h2e114d08ca69ba0e(int128_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, char* arg5, uint64_t arg6)

{
    int64_t var_50 = arg3;
    uint64_t result = arg2[4];
    
    if (result == 0x5e)
    {
        label_70224f:
        arg1[4] = *(arg2 + 0x40);
        int128_t zmm0 = *arg2;
        int128_t zmm1 = *(arg2 + 0x10);
        int128_t zmm2 = *(arg2 + 0x20);
        arg1[3] = *(arg2 + 0x30);
        arg1[2] = zmm2;
        arg1[1] = zmm1;
        *arg1 = zmm0;
    }
    else
    {
        int64_t rcx = arg2[5];
        uint64_t result_2 = result;
        int64_t rsi = *arg2;
        void* rdx = arg2[1];
        result = ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::is_first_statement_in_alternate_body::hd90b606c1959148f(&result_2, rsi, rdx);
        
        if (!result)
            goto label_70224f;
        
        uint64_t rdx_1 = arg2[8];
        int32_t rax = *(arg2 + 0x44);
        int32_t result_1 = rdx_1;
        int32_t rax_1 = ruff_python_ast::helpers::comment_indentation_after::h010db42c18589fa0(
            arg3, arg4, rdx_1, rax, arg5, arg6);
        void* rax_3;
        void* rdx_3;
        rax_3 = ruff_python_trivia::whitespace::indentation_at_offset::hf2ddaa94b2cf2757(
            _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_50), 
            arg5, arg6);
        void* r12_2 = rdx_3;
        
        if (!rax_3)
            r12_2 = rax_3;
        
        core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(r12_2 >> 0x20);
        bool c_1 = rax_1 < r12_2;
        uint64_t rax_5;
        rax_5 = rax_1 != r12_2 && !c_1;
        rax_5 = rax_5 - 0;
        
        if (!rax_5)
        {
            int64_t rax_6 = var_50;
            
            if (rax_6 == 0x3c || rax_6 == 0x57)
            {
                label_702301:
                result = arg2[9];
                *(arg1 + 8) = rsi;
                arg1[1] = rdx;
                *(arg1 + 0x18) = result_1;
                *(arg1 + 0x1c) = rax;
                arg1[2] = 0;
                *(arg1 + 0x21) = result;
                *arg1 = 0x60;
            }
            else
            {
                char rcx_2 = arg2[9];
                *(arg1 + 8) = rax_6;
                arg1[1] = arg4;
                result = result_1;
                *(arg1 + 0x18) = result;
                *(arg1 + 0x1c) = rax;
                arg1[2] = 0;
                *(arg1 + 0x21) = rcx_2;
                *arg1 = 0x5f;
            }
        }
        else
        {
            result = rax_5;
            
            if (result == 1)
                goto label_70224f;
            
            uint64_t result_3 = result_2;
            
            if (result_3 != 0x3c && result_3 != 0x57)
                goto label_702301;
            
            char rcx_3 = arg2[9];
            *(arg1 + 8) = result_3;
            arg1[1] = rcx;
            result = result_1;
            *(arg1 + 0x18) = result;
            *(arg1 + 0x1c) = rax;
            arg1[2] = 0;
            *(arg1 + 0x21) = rcx_3;
            *arg1 = 0x5e;
        }
    }
    
    return result;
}
