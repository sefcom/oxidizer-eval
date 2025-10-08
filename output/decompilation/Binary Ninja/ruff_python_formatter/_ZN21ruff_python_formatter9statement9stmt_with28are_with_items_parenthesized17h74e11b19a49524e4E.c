
  void ruff_python_formatter::statement::stmt_with::are_with_items_parenthesized::h74e11b19a49524e4(int32_t* arg1, void* arg2, char* arg3, int64_t arg4)

{
    if (*(arg2 + 0x10) <= 1)
    {
        arg1[1] = 0;
        *arg1 = 4;
        return;
    }
    
    int32_t rax_1 = *(arg2 + 0x30);
    int32_t r8_1 = *(*(arg2 + 8) + 0x50);
    
    if (rax_1 > r8_1)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    void var_50;
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_50, arg3, arg4, 
        rax_1, r8_1);
    char var_20 = 0;
    void var_5c;
    core::iter::traits::iterator::Iterator::try_fold::hf29dc40a84c0638c(&var_5c, &var_50, &var_20);
    char var_54;
    
    if (var_54 != 0x5a)
    {
        core::iter::traits::iterator::Iterator::try_fold::hf29dc40a84c0638c(&var_5c, &var_50, 
            &var_20);
        arg1[1] = var_54 != 0x5a;
        *arg1 = 4;
    }
    else
    {
        *arg1 = 0;
        *(arg1 + 8) = "Expected a with keyword, didn't …";
        *(arg1 + 0x10) = 0x2e;
    }
}
