
  int64_t ruff_python_formatter::pattern::is_pattern_parenthesized::h69f247e6dcabd7b6(int64_t* arg1, int64_t arg2, int64_t arg3, char* arg4, int64_t arg5)

{
    int64_t rax_1 = *arg1 ^ 0x8000000000000000;
    int64_t rbx = 3;
    
    if (rax_1 >= 8)
        rax_1 = 3;
    
    void var_78;
    ruff_python_trivia::tokenizer::first_non_trivia_token::h0374298a6b2ddd94(&var_78, 
        *(arg1 + *(&data_48d590 + (rax_1 << 3))), arg4, arg5);
    char var_70;
    
    if (var_70 != 6)
        return 0;
    
    int64_t rbp_1 = -0x8000000000000000 ^ *arg1;
    
    if (rbp_1 < 8)
        rbx = rbp_1;
    
    ruff_python_trivia::tokenizer::BackwardsTokenizer::up_to::h10c703c3dd949d71(&var_78, 
        *(arg1 + *(&data_48d5d0 + (rbx << 3))), arg4, arg5, arg2, arg3);
    void var_84;
    core::iter::traits::iterator::Iterator::try_fold::h84c5c22150ea5174(&var_84, &var_78);
    char var_7c;
    int64_t result;
    result = var_7c == 5;
    return result;
}
