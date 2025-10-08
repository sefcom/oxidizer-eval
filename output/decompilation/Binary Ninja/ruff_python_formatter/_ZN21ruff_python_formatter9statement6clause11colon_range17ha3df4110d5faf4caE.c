
  uint32_t ruff_python_formatter::statement::clause::colon_range::ha3df4110d5faf4ca(int32_t* arg1, int32_t arg2, char* arg3, int64_t arg4)

{
    void var_48;
    ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_48, arg2, 
        arg3, arg4);
    char var_18 = 0;
    int64_t var_58;
    core::iter::traits::iterator::Iterator::try_fold::he09c5ab8ab2b918d(&var_58, &var_48, &var_18);
    char result_1;
    uint32_t result = result_1;
    
    if (result == 0xc)
    {
        *(arg1 + 4) = var_58;
        *arg1 = 4;
        return result;
    }
    
    if (result == 0x5a)
    {
        *arg1 = 0;
        *(arg1 + 8) = "Expected the colon marking the e…";
        *(arg1 + 0x10) = 0x55;
        return result;
    }
    
    *arg1 = 0;
    *(arg1 + 8) = "Expected colon marking the end o…";
    *(arg1 + 0x10) = 0x52;
    return result;
}
