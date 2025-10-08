
  fn ruff_python_formatter::pattern::pattern_arguments::is_single_argument_parenthesized::h5afbb12dd64c2cdd(arg1: *mut i32, arg2: i32, arg3: *mut i8, arg4: i64) -> u32

{
    let rax: i64 = -0x8000000000000000 ^ *arg1;
    let mut rsi: i64 = 3;
    
    if rax < 8
    {
        rsi = rax;
    }
    
    let rax_2: i32 = *arg1.byte_offset(*(&data_48d590).byte_offset(rsi << 3));
    
    if rax_2 > arg2
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    let mut var_40: ();
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_40, arg3, arg4, 
        rax_2, arg2);
    let mut var_4c: ();
    let i_2: i8;
    let mut i: u32;
    
    do
    {
        core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_4c, &var_40);
        i = i_2;
    } while i == 0xb;
    
    if i == 6
    {
        let mut i_1: u32;
        
        do
        {
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_4c, &var_40);
            i_1 = i_2;
        } while i_1 == 0xb;
        
        if i_1 == 6
        {
            i_1 = 1;
            return i_1;
        }
    }
    
    0
}
