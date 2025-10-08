
  fn ruff_python_formatter::comments::placement::handle_key_value_comment::h4bc8bf9cece74cee(arg1: *mut i64, arg2: *mut i128, arg3: *mut i8, arg4: i64) -> u64

{
    let r12: *mut i8 = arg3;
    let r14: *mut i128 = arg2;
    let mut result: u64 = arg2[1];
    let rcx: i64 = arg2[2];
    arg3 = rcx != 0x5e;
    arg2 = result != 0x5e;
    
    if (arg3 & arg2) == 0
    {
        'label_703303:
        *arg1.byte_offset(0x40) = r14[4];
        let zmm0: i128 = *r14;
        let zmm1: i128 = r14[1];
        let zmm2: i128 = r14[2];
        *arg1.byte_offset(0x30) = r14[3];
        *arg1.byte_offset(0x20) = zmm2;
        *arg1.byte_offset(0x10) = zmm1;
        *arg1 = zmm0;
    }
    else
    {
        let rdx: i64 = *r14.byte_offset(0x18);
        let rsi: i64 = *r14.byte_offset(0x28);
        let mut var_80: i64 = rcx;
        let var_78_1: i64 = rsi;
        let mut result_1: u64 = result;
        let var_68_1: i64 = rdx;
        let rdx_1: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1);
        let rax: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_80);
        
        if rdx_1 > rax
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        let mut var_60: ();
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, r12, arg4, 
            rdx_1, rax);
        result = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(core::iter::traits::iterator::Iterator::try_fold::h74985cea8eb9b63f(&var_60), 1);
        
        if result == 0
        {
            goto 'label_703303;
        }
        
        result = *r14.byte_offset(0x48);
        *arg1.byte_offset(8) = *r14;
        arg1[3] = r14[4];
        arg1[4] = 0;
        *arg1.byte_offset(0x21) = result;
        *arg1 = 0x60;
    }
    
    result
}
