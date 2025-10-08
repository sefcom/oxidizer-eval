
  fn ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: *mut i8, arg6: i64) -> i64

{
    let mut var_90: i64 = arg1;
    let var_88: i64 = arg2;
    let mut var_70: ();
    ruff_python_trivia::tokenizer::first_non_trivia_token::h0374298a6b2ddd94(&var_70, 
        _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::hfa55c2f3b847fdb7(&var_90), 
        arg5, arg6);
    let var_68: i8;
    
    if var_68 != 6
    {
        return 0;
    }
    
    ruff_python_trivia::tokenizer::BackwardsTokenizer::up_to::h10c703c3dd949d71(&var_70, 
        _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::hfa55c2f3b847fdb7(&var_90), 
        arg5, arg6, arg3, arg4);
    let mut var_7c: ();
    core::iter::traits::iterator::Iterator::try_fold::h84c5c22150ea5174(&var_7c, &var_70);
    let var_74: i8;
    let mut result: i64;
    result = var_74 == 5;
    result
}
