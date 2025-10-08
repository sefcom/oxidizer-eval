
  int128_t* ruff_python_formatter::comments::placement::handle_own_line_comment_after_branch::h00c1bc6d9adb10a3(int128_t* arg1, int128_t* arg2, int64_t arg3, int64_t arg4, char* arg5, uint64_t arg6)

{
    int64_t var_40 = arg3;
    int64_t var_38 = arg4;
    int128_t* result;
    uint64_t rdx;
    result = ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::last_child_in_body::h106de3f3c845d12e(&var_40);
    
    if (result != 0x5e)
    {
        uint64_t r15_1 = rdx;
        uint64_t rdx_1 = arg2[4];
        int32_t rcx = *(arg2 + 0x44);
        uint64_t r13_1 = ruff_python_ast::helpers::comment_indentation_after::h010db42c18589fa0(
            arg3, arg4, rdx_1, rcx, arg5, arg6);
        void* rax_2;
        void* rdx_3;
        rax_2 = ruff_python_trivia::whitespace::indentation_at_offset::hf2ddaa94b2cf2757(
            _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_40), 
            arg5, arg6);
        void* r12_1 = rdx_3;
        
        if (!rax_2)
            r12_1 = rax_2;
        
        if (!(r12_1 >> 0x20))
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(0);
            
            if (r13_1 == r12_1)
                goto label_702439;
            
            int32_t rax_5 = r13_1;
            int128_t* result_1 = result;
            int128_t* result_3 = 0x5e;
            
            while (true)
            {
                void* rax_7;
                void* rdx_5;
                rax_7 = ruff_python_trivia::whitespace::indentation_at_offset::hf2ddaa94b2cf2757(
                    _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1), 
                    arg5, arg6);
                void* r15_2 = rdx_5;
                
                if (!rax_7)
                    r15_2 = rax_7;
                
                core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(r15_2 >> 0x20);
                bool c_1 = rax_5 < r15_2;
                uint64_t rax_9;
                rax_9 = rax_5 != r15_2 && !c_1;
                rax_9 = rax_9 - 0;
                int128_t* rdx_7;
                
                if (rax_9 == 1)
                {
                    int128_t* result_2;
                    uint64_t rdx_6;
                    result_2 = ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::last_child_in_body::h106de3f3c845d12e(&result_1);
                    result_3 = result_1;
                    r13_1 = r15_1;
                    
                    if (result_2 == 0x5e)
                    {
                        result = *(arg2 + 0x48);
                        rdx_7 = arg1;
                    }
                    else
                    {
                        r15_1 = rdx_6;
                        result_1 = result_2;
                        continue;
                    }
                    
                    *(rdx_7 + 8) = result_3;
                    rdx_7[1] = r13_1;
                }
                else if (rax_9)
                {
                    rdx_7 = arg1;
                    result = arg2;
                    
                    if (result_3 == 0x5e)
                    {
                        rdx_7[4] = result[4];
                        int128_t zmm0_3 = *result;
                        int128_t zmm1_3 = result[1];
                        int128_t zmm2_3 = result[2];
                        rdx_7[3] = result[3];
                        rdx_7[2] = zmm2_3;
                        rdx_7[1] = zmm1_3;
                        *rdx_7 = zmm0_3;
                        break;
                    }
                    
                    result = *(result + 0x48);
                    *(rdx_7 + 8) = result_3;
                    rdx_7[1] = r13_1;
                }
                else
                {
                    result = *(arg2 + 0x48);
                    rdx_7 = arg1;
                    *(rdx_7 + 8) = result_1;
                }
                
                *(rdx_7 + 0x18) = rdx_1;
                *(rdx_7 + 0x1c) = rcx;
                rdx_7[2] = 0;
                *(rdx_7 + 0x21) = result;
                *rdx_7 = 0x5f;
                break;
            }
        }
        else
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(1);
            label_702439:
            result = arg1;
            result[4] = arg2[4];
            int128_t zmm0_2 = *arg2;
            int128_t zmm1_2 = arg2[1];
            int128_t zmm2_2 = arg2[2];
            result[3] = arg2[3];
            result[2] = zmm2_2;
            result[1] = zmm1_2;
            *result = zmm0_2;
        }
    }
    else
    {
        arg1[4] = arg2[4];
        int128_t zmm0_1 = *arg2;
        int128_t zmm1_1 = arg2[1];
        int128_t zmm2_1 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2_1;
        arg1[1] = zmm1_1;
        *arg1 = zmm0_1;
    }
    
    return result;
}
