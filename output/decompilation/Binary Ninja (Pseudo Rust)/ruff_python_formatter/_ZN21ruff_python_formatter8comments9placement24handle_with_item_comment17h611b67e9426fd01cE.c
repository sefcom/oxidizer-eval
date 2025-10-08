
  fn ruff_python_formatter::comments::placement::handle_with_item_comment::h611b67e9426fd01c(arg1: *mut i64, arg2: *mut i128, arg3: *mut i8, arg4: i64) -> u64

{
    let r13: *mut i8 = arg3;
    let r14: *mut i128 = arg2;
    let rdi: i64 = arg2[1];
    let mut result: u64 = arg2[2];
    arg3 = rdi != 0x5e;
    arg2 = result != 0x5e;
    
    if (arg3 & arg2) != 0
    {
        let rdx: i64 = *r14.byte_offset(0x18);
        let rsi: i64 = *r14.byte_offset(0x28);
        let mut var_50: i64 = rdi;
        let mut result_1: u64 = result;
        let mut r15_1: *mut i128 = &var_50;
        let rdx_1: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_50);
        let rax: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1);
        
        if rdx_1 > rax
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        let mut var_3c: i32;
        ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(&var_3c, rdx_1, 
            rax, 0x35, r13, arg4);
        result = *r14.byte_offset(0x44);
        let mut rcx: i8 = *r14.byte_offset(0x48);
        let mut rdx_3: i64;
        let mut rsi_2: i64;
        
        if result < var_3c
        {
            rdx_3 = 0x5f;
            rsi_2 = rdx;
        }
        else if rcx == 0
        {
            rsi_2 = *r14.byte_offset(8);
            rdx_3 = 0x60;
            rcx = 0;
            r15_1 = r14;
        }
        else
        {
            rdx_3 = 0x5e;
            rsi_2 = rsi;
            r15_1 = &result_1;
        }
        
        let rdi_4: i32 = r14[4];
        arg1[1] = *r15_1;
        arg1[2] = rsi_2;
        arg1[3] = rdi_4;
        *arg1.byte_offset(0x1c) = result;
        arg1[4] = 0;
        *arg1.byte_offset(0x21) = rcx;
        *arg1 = rdx_3;
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
