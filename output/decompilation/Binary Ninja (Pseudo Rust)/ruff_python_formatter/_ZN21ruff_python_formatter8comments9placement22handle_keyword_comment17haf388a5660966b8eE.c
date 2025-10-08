
  fn ruff_python_formatter::comments::placement::handle_keyword_comment::haf388a5660966b8e(arg1: *mut i128, arg2: *mut i128, arg3: *mut c_void, arg4: *mut i8, arg5: i64) -> i64

{
    let mut rdi: *mut c_void = nullptr;
    
    if *arg3.byte_offset(0x6f) != 0xda
    {
        rdi = arg3.byte_offset(0x50);
    }
    
    let rax_1: i32 =
        core::option::Option$LT$T$GT$::map_or::hf8edf1a105a2a953(rdi, *arg3.byte_offset(0x78));
    let rbp: i32 = arg2[4];
    
    if rax_1 > rbp
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    let mut var_60: ();
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg4, arg5, 
        rax_1, rbp);
    let mut result: i8 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(
        core::iter::traits::iterator::Iterator::try_fold::h4ec1dc8ff2b2dda0(&var_60), 1);
    
    if result == 0
    {
        result = *arg2.byte_offset(0x48);
        let rcx_1: i32 = *arg2.byte_offset(0x44);
        *arg1.byte_offset(8) = *arg2;
        *arg1.byte_offset(0x18) = rbp;
        *arg1.byte_offset(0x1c) = rcx_1;
        arg1[2] = 0;
        *arg1.byte_offset(0x21) = result;
        *arg1 = 0x5e;
    }
    else
    {
        arg1[4] = arg2[4];
        let zmm0: i128 = *arg2;
        let zmm1_1: i128 = arg2[1];
        let zmm2_1: i128 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2_1;
        arg1[1] = zmm1_1;
        *arg1 = zmm0;
    }
    
    result
}
