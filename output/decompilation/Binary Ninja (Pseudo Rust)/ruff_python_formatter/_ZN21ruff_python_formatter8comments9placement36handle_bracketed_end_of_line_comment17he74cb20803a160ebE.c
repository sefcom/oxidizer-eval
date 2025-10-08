
  fn ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment::he74cb20803a160eb(arg1: *mut i128, arg2: *mut i128, arg3: *mut i8, arg4: i64) -> i512

{
    let mut result: i128;
    
    if *arg2.byte_offset(0x48) == 0
    {
        let mut result_1: i128 = *arg2;
        let rax_1: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1);
        let rbp_1: i32 = arg2[4];
        
        if rax_1 > rbp_1
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        let mut var_60: ();
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg3, arg4, 
            rax_1, rbp_1);
        let mut var_7c: ();
        core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_7c, &var_60);
        let var_74: i8;
        
        if var_74 != 0x5a
        {
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_7c, &var_60);
            
            if var_74 != 0x5a
            {
                goto 'label_7040bb;
            }
            
            let rax_2: i32 = *arg2.byte_offset(0x44);
            result = result_1;
            *arg1.byte_offset(8) = result;
            *arg1.byte_offset(0x18) = rbp_1;
            *arg1.byte_offset(0x1c) = rax_2;
            arg1[2] = 0;
            *arg1 = 0x60;
        }
        else
        {
            arg1[4] = arg2[4];
            result = *arg2;
            let zmm1_1: i128 = arg2[1];
            let zmm2_1: i128 = arg2[2];
            arg1[3] = arg2[3];
            arg1[2] = zmm2_1;
            arg1[1] = zmm1_1;
            *arg1 = result;
        }
    }
    else
    {
        'label_7040bb:
        arg1[4] = arg2[4];
        result = *arg2;
        let zmm1: i128 = arg2[1];
        let zmm2: i128 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2;
        arg1[1] = zmm1;
        *arg1 = result;
    }
    
    result
}
