
  fn ruff_python_formatter::comments::placement::handle_named_expr_comment::hdecf302068a683cf(arg1: *mut i64, arg2: *mut i128, arg3: *mut i8, arg4: i64) -> i64

{
    let r12: *mut i8 = arg3;
    let r14: *mut i128 = arg2;
    let rdi: i64 = arg2[1];
    let mut result: i64 = arg2[2];
    arg3 = rdi != 0x5e;
    arg2 = result != 0x5e;
    
    if (arg3 & arg2) != 0
    {
        let rdx: i64 = *r14.byte_offset(0x18);
        let rsi: i64 = *r14.byte_offset(0x28);
        let mut var_60: i64 = rdi;
        let mut var_58: i64 = rdx;
        let mut result_1: i64 = result;
        let var_48_1: i64 = rsi;
        let mut r13_1: *mut i128 = &var_60;
        let rdx_1: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_60);
        let rax: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1);
        
        if rdx_1 > rax
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        let mut var_3c: i32;
        ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(&var_3c, rdx_1, 
            rax, 0x30, r12, arg4);
        let rax_1: i32 = *r14.byte_offset(0x44);
        let rcx: i32 = var_3c;
        
        if rax_1 >= rcx
        {
            r13_1 = r14;
        }
        
        let mut rax_2: *mut c_void = &var_58;
        let rcx_1: i8 = *r14.byte_offset(0x48);
        let rdi_4: i64 = r14[4];
        
        if rax_1 >= rcx
        {
            rax_2 = r14.byte_offset(8);
        }
        
        result = *rax_2;
        arg1[1] = *r13_1;
        arg1[2] = result;
        arg1[3] = rdi_4;
        arg1[4] = 0;
        *arg1.byte_offset(0x21) = rcx_1;
        *arg1 = 0x60 - 0;
    }
    else
    {
        *arg1.byte_offset(0x40) = r14[4];
        let zmm0: i128 = *r14;
        let zmm1: i128 = r14[1];
        let zmm2: i128 = r14[2];
        *arg1.byte_offset(0x30) = r14[3];
        *arg1.byte_offset(0x20) = zmm2;
        *arg1.byte_offset(0x10) = zmm1;
        *arg1 = zmm0;
    }
    
    result
}
