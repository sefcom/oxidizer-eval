
  fn ruff_python_formatter::pattern::is_pattern_parenthesized::h69f247e6dcabd7b6(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i8, arg5: i64) -> i64

{
    let mut rax_1: i64 = *arg1 ^ 0x8000000000000000;
    let mut rbx: i64 = 3;
    
    if rax_1 >= 8
    {
        rax_1 = 3;
    }
    
    let mut var_78: ();
    ruff_python_trivia::tokenizer::first_non_trivia_token::h0374298a6b2ddd94(&var_78, 
        *arg1.byte_offset(*(&data_48d590).byte_offset(rax_1 << 3)), arg4, arg5);
    let var_70: i8;
    
    if var_70 != 6
    {
        return 0;
    }
    
    let rbp_1: i64 = -0x8000000000000000 ^ *arg1;
    
    if rbp_1 < 8
    {
        rbx = rbp_1;
    }
    
    ruff_python_trivia::tokenizer::BackwardsTokenizer::up_to::h10c703c3dd949d71(&var_78, 
        *arg1.byte_offset(*(&data_48d5d0).byte_offset(rbx << 3)), arg4, arg5, arg2, arg3);
    let mut var_84: ();
    core::iter::traits::iterator::Iterator::try_fold::h84c5c22150ea5174(&var_84, &var_78);
    let var_7c: i8;
    let mut result: i64;
    result = var_7c == 5;
    result
}
