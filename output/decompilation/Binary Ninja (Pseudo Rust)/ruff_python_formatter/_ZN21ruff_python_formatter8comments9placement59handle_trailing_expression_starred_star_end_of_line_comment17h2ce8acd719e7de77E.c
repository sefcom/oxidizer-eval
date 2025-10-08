
  fn ruff_python_formatter::comments::placement::handle_trailing_expression_starred_star_end_of_line_comment::h2ce8acd719e7de77(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void, arg4: *mut i8, arg5: i64) -> i512

{
    let mut result: i128;
    
    if arg2[2] == 0x5e
    {
        'label_7037cf:
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
        let rax_1: i32 = *arg3.byte_offset(8);
        let rbp_1: i32 = arg2[4];
        
        if rax_1 > rbp_1
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        let mut var_58: ();
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_58, arg4, arg5, 
            rax_1, rbp_1);
        let mut rax_2: i8;
        rax_2 = core::iter::traits::iterator::Iterator::try_fold::h139f27bef1b5e023(&var_58);
        
        if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(rax_2, 1) != 0
        {
            goto 'label_7037cf;
        }
        
        let rax_4: i8 = *arg2.byte_offset(0x48);
        let rcx_1: i32 = *arg2.byte_offset(0x44);
        arg1[1] = 0x36;
        arg1[2] = arg3;
        arg1[3] = rbp_1;
        *arg1.byte_offset(0x1c) = rcx_1;
        arg1[4] = 0;
        *arg1.byte_offset(0x21) = rax_4;
        *arg1 = 0x5e;
    }
    
    result
}
