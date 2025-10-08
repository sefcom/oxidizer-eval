
  int64_t ruff_python_formatter::statement::stmt_assign::has_target_own_parentheses::h34ae9872ca5846a0(int32_t* arg1, void* arg2)

{
    int64_t result;
    result = 1;
    
    if (*arg1 != 0x1e)
    {
        int64_t result_1 = result;
        result =
            ruff_python_formatter::expression::has_own_parentheses::he088d283b6b32ebc(arg1, arg2)
            != 2;
    }
    
    return result;
}
