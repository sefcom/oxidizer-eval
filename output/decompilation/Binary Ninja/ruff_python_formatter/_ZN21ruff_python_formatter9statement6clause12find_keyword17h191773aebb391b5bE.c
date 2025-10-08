
  int64_t ruff_python_formatter::statement::clause::find_keyword::h191773aebb391b5b(int32_t* arg1, int32_t arg2, char arg3, char* arg4, int64_t arg5)

{
    void var_48;
    ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_48, arg2, 
        arg4, arg5);
    int64_t var_58;
    core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_58, &var_48);
    char result;
    
    if (result == 0x5a | result == 0x5a)
    {
        *arg1 = 0;
        *(arg1 + 8) = "Expected the case header keyword…";
        *(arg1 + 0x10) = 0x51;
    }
    else if (arg3 != result)
    {
        *arg1 = 0;
        *(arg1 + 8) = "Expected the keyword token but f…";
        *(arg1 + 0x10) = 0x3b;
    }
    else
    {
        *(arg1 + 4) = var_58;
        *arg1 = 4;
    }
    
    return result;
}
