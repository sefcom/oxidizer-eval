
  fn ruff_python_formatter::comments::placement::handle_end_of_line_comment_around_body::h2406e9ad3d283d24(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8, arg4: i64) -> i512

{
    let mut result: i128;
    
    if arg2[9] == 1
    {
        'label_701da0:
        *arg1.byte_offset(0x40) = *arg2.byte_offset(0x40);
        result = *arg2;
        let zmm1: i128 = *arg2.byte_offset(0x10);
        let zmm2: i128 = *arg2.byte_offset(0x20);
        *arg1.byte_offset(0x30) = *arg2.byte_offset(0x30);
        *arg1.byte_offset(0x20) = zmm2;
        *arg1.byte_offset(0x10) = zmm1;
        *arg1 = result;
    }
    else
    {
        let rax_1: i64 = arg2[4];
        let mut var_60: i64;
        
        if rax_1 == 0x5e
        {
            'label_701d72:
            let rax_5: i64 = arg2[2];
            
            if rax_5 == 0x5e
            {
                goto 'label_701da0;
            }
            
            let rcx_2: i64 = arg2[3];
            var_60 = rax_5;
            let var_58_1: i64 = rcx_2;
            let mut rax_6: i64;
            let mut rdx_2: i64;
            rax_6 = ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::last_child_in_body::h106de3f3c845d12e(&var_60);
            
            if rax_6 == 0x5e
            {
                goto 'label_701da0;
            }
            
            let mut rax_7: i64;
            let mut rdx_3: i64;
            rax_7 = core::iter::traits::iterator::Iterator::fold::hc0deaa67c0db3dca(rax_6);
            let cond:0_1: bool = rax_7 == 0x5e;
            
            if rax_7 == 0x5e
            {
                rax_7 = rax_6;
            }
            
            if cond:0_1
            {
                rdx_3 = rdx_2;
            }
            
            arg1[1] = rax_7;
            arg1[2] = rdx_3;
            arg1[3] = arg2[8];
            arg1[4] = 0;
            *arg1 = 0x5f;
        }
        else
        {
            let rcx: i64 = arg2[5];
            let mut var_80: i64 = rax_1;
            let var_78_1: i64 = rcx;
            let r15_1: i64 = *arg2;
            let r12_1: *mut c_void = arg2[1];
            
            if ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::is_first_statement_in_body::h5fab489393000851(&var_80, r15_1, r12_1) == 0
            {
                goto 'label_701d72;
            }
            
            let rbp_1: i32 = *arg2.byte_offset(0x44);
            let rax_3: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_80);
            
            if rbp_1 > rax_3
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg3, 
                arg4, rbp_1, rax_3);
            let mut var_6c: ();
            result = core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_6c, 
                &var_60);
            let var_64: i8;
            
            if var_64 != 0x5a
            {
                goto 'label_701d72;
            }
            
            let rax_4: i32 = arg2[8];
            arg1[1] = r15_1;
            arg1[2] = r12_1;
            arg1[3] = rax_4;
            *arg1.byte_offset(0x1c) = rbp_1;
            arg1[4] = 0;
            *arg1 = 0x60;
        }
    }
    
    result
}
