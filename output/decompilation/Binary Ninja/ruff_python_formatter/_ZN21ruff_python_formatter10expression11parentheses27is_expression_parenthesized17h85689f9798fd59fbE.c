
  int64_t ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, char* arg5, int64_t arg6)

{
    int64_t var_90 = arg1;
    int64_t var_88 = arg2;
    void var_70;
    ruff_python_trivia::tokenizer::first_non_trivia_token::h0374298a6b2ddd94(&var_70, 
        _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::hfa55c2f3b847fdb7(&var_90), 
        arg5, arg6);
    char var_68;
    
    if (var_68 != 6)
        return 0;
    
    ruff_python_trivia::tokenizer::BackwardsTokenizer::up_to::h10c703c3dd949d71(&var_70, 
        _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::hfa55c2f3b847fdb7(&var_90), 
        arg5, arg6, arg3, arg4);
    void var_7c;
    core::iter::traits::iterator::Iterator::try_fold::h84c5c22150ea5174(&var_7c, &var_70);
    char var_74;
    int64_t result;
    result = var_74 == 5;
    return result;
}
