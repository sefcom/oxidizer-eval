
  fn ruff_python_formatter::other::arguments::is_single_argument_parenthesized::h45087d389eb098fd(arg1: *mut i32, arg2: i32, arg3: *mut i8, arg4: i64) -> u32

{
    let rdx: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg1);
    
    if rdx > arg2
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    let mut var_50: ();
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_50, arg3, arg4, 
        rdx, arg2);
    let mut var_5c: ();
    let i_2: i8;
    let mut i: u32;
    
    do
    {
        core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_5c, &var_50);
        i = i_2;
    } while i == 0xb;
    
    if i == 6
    {
        let mut i_1: u32;
        
        do
        {
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_5c, &var_50);
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
