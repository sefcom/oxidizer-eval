
  uint32_t ruff_python_formatter::pattern::pattern_arguments::is_single_argument_parenthesized::h5afbb12dd64c2cdd(int32_t* arg1, int32_t arg2, char* arg3, int64_t arg4)

{
    int64_t rax = -0x8000000000000000 ^ *arg1;
    int64_t rsi = 3;
    
    if (rax < 8)
        rsi = rax;
    
    int32_t rax_2 = *(arg1 + *(&data_48d590 + (rsi << 3)));
    
    if (rax_2 > arg2)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    void var_40;
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_40, arg3, arg4, 
        rax_2, arg2);
    void var_4c;
    char i_2;
    uint32_t i;
    
    do
    {
        core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_4c, &var_40);
        i = i_2;
    } while (i == 0xb);
    
    if (i == 6)
    {
        uint32_t i_1;
        
        do
        {
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_4c, &var_40);
            i_1 = i_2;
        } while (i_1 == 0xb);
        
        if (i_1 == 6)
        {
            i_1 = 1;
            return i_1;
        }
    }
    
    return 0;
}
