
  fn ruff_python_formatter::comments::placement::handle_pattern_match_mapping_comment::h5703d2f319014972(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void, arg4: *mut i8, arg5: i64) -> i512

{
    let mut result: i128;
    
    if arg2[2] != 0x5e || *arg3.byte_offset(0x4f) == 0xda
    {
        *arg1.byte_offset(0x40) = arg2[4];
        result = *arg2;
        let zmm1: i128 = arg2[1];
        let zmm2: i128 = arg2[2];
        *arg1.byte_offset(0x30) = arg2[3];
        *arg1.byte_offset(0x20) = zmm2;
        *arg1.byte_offset(0x10) = zmm1;
        *arg1 = result;
    }
    else
    {
        let rbx_1: i32 = arg2[4];
        
        if rbx_1 <= *arg3.byte_offset(0x34)
        {
            let rax_2: i64 = arg2[1];
            let mut var_58: i64;
            let mut rcx_1: i32;
            
            if rax_2 != 0x5e
            {
                let rcx_2: i64 = *arg2.byte_offset(0x18);
                var_58 = rax_2;
                let var_50_1: i64 = rcx_2;
                rcx_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_58);
            }
            else
            {
                var_58 = *arg2;
                rcx_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_58);
            }
            
            if rcx_1 > rbx_1
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_58, arg4, 
                arg5, rcx_1, rbx_1);
            
            if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(core::iter::traits::iterator::Iterator::try_fold::h12bf6dc1167f662c(&var_58), 1) == 0
            {
                *arg1.byte_offset(0x40) = arg2[4];
                result = *arg2;
                let zmm1_1: i128 = arg2[1];
                let zmm2_1: i128 = arg2[2];
                *arg1.byte_offset(0x30) = arg2[3];
                *arg1.byte_offset(0x20) = zmm2_1;
                *arg1.byte_offset(0x10) = zmm1_1;
                *arg1 = result;
            }
            else
            {
                result = *arg2;
                let rax_6: i8 = *arg2.byte_offset(0x48);
                let rcx_3: i32 = *arg2.byte_offset(0x44);
                *arg1.byte_offset(8) = result;
                arg1[3] = rbx_1;
                *arg1.byte_offset(0x1c) = rcx_3;
                arg1[4] = 0;
                *arg1.byte_offset(0x21) = rax_6;
                *arg1 = 0x60;
            }
        }
        else
        {
            result = *arg2;
            let rax_1: i8 = *arg2.byte_offset(0x48);
            let rcx: i32 = *arg2.byte_offset(0x44);
            *arg1.byte_offset(8) = result;
            arg1[3] = rbx_1;
            *arg1.byte_offset(0x1c) = rcx;
            arg1[4] = 0;
            *arg1.byte_offset(0x21) = rax_1;
            *arg1 = 0x60;
        }
    }
    
    result
}
