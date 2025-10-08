
  fn ruff_python_formatter::comments::placement::handle_unary_op_comment::h4599e1a2dc0ed5cb(arg1: *mut i64, arg2: *mut i128, arg3: *mut i64, arg4: *mut i8, arg5: i64) -> u32

{
    let rbp: i32 = arg3[1];
    let rax: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3);
    
    if rbp > rax
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    let mut var_60: ();
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg4, arg5, 
        rbp, rax);
    let mut var_7c: i64;
    core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_7c, &var_60);
    core::iter::traits::iterator::Iterator::try_fold::h9948eabd495bf282(&var_7c, &var_60);
    let var_74: i8;
    let mut var_70: i64;
    let mut var_68: i32;
    
    if var_74 != 0x5a
    {
        let var_68_1: i32 = var_74;
        var_70 = var_7c;
    }
    else
    {
        var_68 = 0x5a;
    }
    let mut result: u32 = core::option::Option$LT$T$GT$::map_or::h7932729f0d6fa57c(&var_70, 
        _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3));
    let rcx_1: i32 = *arg2.byte_offset(0x44);
    
    if rcx_1 >= result
    {
        *arg1.byte_offset(0x40) = arg2[4];
        let zmm0_1: i128 = *arg2;
        let zmm1_1: i128 = arg2[1];
        let zmm2_1: i128 = arg2[2];
        *arg1.byte_offset(0x30) = arg2[3];
        *arg1.byte_offset(0x20) = zmm2_1;
        *arg1.byte_offset(0x10) = zmm1_1;
        *arg1 = zmm0_1;
    }
    else
    {
        result = *arg2.byte_offset(0x48);
        let rdx_1: i32 = arg2[4];
        arg1[1] = 0x1e;
        arg1[2] = arg3;
        arg1[3] = rdx_1;
        *arg1.byte_offset(0x1c) = rcx_1;
        arg1[4] = 0;
        *arg1.byte_offset(0x21) = result;
        *arg1 = 0x5e;
    }
    
    result
}
