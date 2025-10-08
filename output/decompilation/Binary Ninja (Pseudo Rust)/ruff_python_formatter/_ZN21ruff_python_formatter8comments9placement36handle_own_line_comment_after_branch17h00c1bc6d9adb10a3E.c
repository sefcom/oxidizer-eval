
  fn ruff_python_formatter::comments::placement::handle_own_line_comment_after_branch::h00c1bc6d9adb10a3(arg1: *mut i128, arg2: *mut i128, arg3: i64, arg4: i64, arg5: *mut i8, arg6: u64) -> *mut i128

{
    let mut var_40: i64 = arg3;
    let var_38: i64 = arg4;
    let mut result: *mut i128;
    let mut rdx: u64;
    result = ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::last_child_in_body::h106de3f3c845d12e(&var_40);
    
    if result != 0x5e
    {
        let mut r15_1: u64 = rdx;
        let rdx_1: u64 = arg2[4];
        let rcx: i32 = *arg2.byte_offset(0x44);
        let mut r13_1: u64 = ruff_python_ast::helpers::comment_indentation_after::h010db42c18589fa0(
            arg3, arg4, rdx_1, rcx, arg5, arg6);
        let mut rax_2: *mut c_void;
        let mut rdx_3: *mut c_void;
        rax_2 = ruff_python_trivia::whitespace::indentation_at_offset::hf2ddaa94b2cf2757(
            _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_40), 
            arg5, arg6);
        let mut r12_1: *mut c_void = rdx_3;
        
        if rax_2 == 0
        {
            r12_1 = rax_2;
        }
        
        if r12_1 >> 0x20 == 0
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(0);
            
            if r13_1 == r12_1
            {
                goto 'label_702439;
            }
            
            let rax_5: i32 = r13_1;
            let mut result_1: *mut i128 = result;
            let mut result_3: *mut i128 = 0x5e;
            
            loop
            {
                let mut rax_7: *mut c_void;
                let mut rdx_5: *mut c_void;
                rax_7 = ruff_python_trivia::whitespace::indentation_at_offset::hf2ddaa94b2cf2757(
                    _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1), 
                    arg5, arg6);
                let mut r15_2: *mut c_void = rdx_5;
                
                if rax_7 == 0
                {
                    r15_2 = rax_7;
                }
                
                core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(r15_2 >> 0x20 != 0);
                let c_1: bool = rax_5 < r15_2;
                let mut rax_9: u64;
                rax_9 = rax_5 != r15_2 && !c_1;
                rax_9 = rax_9 - 0;
                let mut rdx_7: *mut i128;
                
                if rax_9 == 1
                {
                    let mut result_2: *mut i128;
                    let mut rdx_6: u64;
                    result_2 = ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::last_child_in_body::h106de3f3c845d12e(&result_1);
                    result_3 = result_1;
                    r13_1 = r15_1;
                    
                    if result_2 == 0x5e
                    {
                        result = *arg2.byte_offset(0x48);
                        rdx_7 = arg1;
                    }
                    else
                    {
                        r15_1 = rdx_6;
                        result_1 = result_2;
                        continue;
                    }
                    
                    *rdx_7.byte_offset(8) = result_3;
                    rdx_7[1] = r13_1;
                }
                else if rax_9 != 0
                {
                    rdx_7 = arg1;
                    result = arg2;
                    
                    if result_3 == 0x5e
                    {
                        rdx_7[4] = result[4];
                        let zmm0_3: i128 = *result;
                        let zmm1_3: i128 = result[1];
                        let zmm2_3: i128 = result[2];
                        rdx_7[3] = result[3];
                        rdx_7[2] = zmm2_3;
                        rdx_7[1] = zmm1_3;
                        *rdx_7 = zmm0_3;
                        break;
                    }
                    
                    result = *result.byte_offset(0x48);
                    *rdx_7.byte_offset(8) = result_3;
                    rdx_7[1] = r13_1;
                }
                else
                {
                    result = *arg2.byte_offset(0x48);
                    rdx_7 = arg1;
                    *rdx_7.byte_offset(8) = result_1;
                }
                
                *rdx_7.byte_offset(0x18) = rdx_1;
                *rdx_7.byte_offset(0x1c) = rcx;
                rdx_7[2] = 0;
                *rdx_7.byte_offset(0x21) = result;
                *rdx_7 = 0x5f;
                break;
            }
        }
        else
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(1);
            'label_702439:
            result = arg1;
            result[4] = arg2[4];
            let zmm0_2: i128 = *arg2;
            let zmm1_2: i128 = arg2[1];
            let zmm2_2: i128 = arg2[2];
            result[3] = arg2[3];
            result[2] = zmm2_2;
            result[1] = zmm1_2;
            *result = zmm0_2;
        }
    }
    else
    {
        arg1[4] = arg2[4];
        let zmm0_1: i128 = *arg2;
        let zmm1_1: i128 = arg2[1];
        let zmm2_1: i128 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2_1;
        arg1[1] = zmm1_1;
        *arg1 = zmm0_1;
    }
    
    result
}
