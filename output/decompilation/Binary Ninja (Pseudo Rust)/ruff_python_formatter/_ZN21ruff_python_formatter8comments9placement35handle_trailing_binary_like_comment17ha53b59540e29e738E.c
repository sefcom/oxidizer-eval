
  fn ruff_python_formatter::comments::placement::handle_trailing_binary_like_comment::ha53b59540e29e738(arg1: *mut i64, arg2: *mut i128, arg3: *mut i8, arg4: i64) -> u64

{
    let r12: *mut i8 = arg3;
    let r14: *mut i128 = arg2;
    let rcx: i64 = arg2[1];
    let mut result: u64 = arg2[2];
    arg3 = rcx != 0x5e;
    arg2 = result != 0x5e;
    
    if (arg3 & arg2) == 0
    {
        'label_702a68:
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
        let mut var_98: i64 = rcx;
        let var_90_1: i64 = rdx;
        let mut result_1: u64 = result;
        let var_70_1: i64 = rsi;
        let rdx_1: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_98);
        let rax: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1);
        
        if rdx_1 > rax
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        let mut var_68: ();
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_68, r12, arg4, 
            rdx_1, rax);
        let mut var_38: i8 = 0;
        let mut var_88: i64;
        core::iter::traits::iterator::Iterator::try_fold::h574e0d0b6077c929(&var_88, &var_68, 
            &var_38);
        let var_80: i8;
        
        if var_80 == 0x5a
        {
            core::option::expect_failed::h3f620cfb8545dc61("Expected a token for the operato…");
            /* no return */
        }
        
        result = *r14.byte_offset(0x44);
        
        if result >= var_88
        {
            goto 'label_702a68;
        }
        
        let rcx_3: i8 = *r14.byte_offset(0x48);
        let rdx_4: i32 = r14[4];
        *arg1.byte_offset(8) = var_98;
        arg1[3] = rdx_4;
        *arg1.byte_offset(0x1c) = result;
        arg1[4] = 0;
        *arg1.byte_offset(0x21) = rcx_3;
        *arg1 = 0x5f;
    }
    
    result
}
