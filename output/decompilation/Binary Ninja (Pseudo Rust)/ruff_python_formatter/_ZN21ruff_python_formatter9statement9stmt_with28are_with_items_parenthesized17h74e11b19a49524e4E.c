
  fn ruff_python_formatter::statement::stmt_with::are_with_items_parenthesized::h74e11b19a49524e4(arg1: *mut i32, arg2: *mut c_void, arg3: *mut i8, arg4: i64)

{
    if *arg2.byte_offset(0x10) <= 1
    {
        arg1[1] = 0;
        *arg1 = 4;
        return;
    }
    
    let rax_1: i32 = *arg2.byte_offset(0x30);
    let r8_1: i32 = *(*arg2.byte_offset(8)).byte_offset(0x50);
    
    if rax_1 > r8_1
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    let mut var_50: ();
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_50, arg3, arg4, 
        rax_1, r8_1);
    let mut var_20: i8 = 0;
    let mut var_5c: ();
    core::iter::traits::iterator::Iterator::try_fold::hf29dc40a84c0638c(&var_5c, &var_50, &var_20);
    let var_54: i8;
    
    if var_54 != 0x5a
    {
        core::iter::traits::iterator::Iterator::try_fold::hf29dc40a84c0638c(&var_5c, &var_50, 
            &var_20);
        arg1[1] = var_54 != 0x5a;
        *arg1 = 4;
    }
    else
    {
        *arg1 = 0;
        *arg1.byte_offset(8) = "Expected a with keyword, didn't …";
        *arg1.byte_offset(0x10) = 0x2e;
    }
}
