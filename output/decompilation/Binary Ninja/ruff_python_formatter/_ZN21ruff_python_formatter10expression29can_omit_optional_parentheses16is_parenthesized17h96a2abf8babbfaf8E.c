
  int64_t ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized::h96a2abf8babbfaf8(int32_t* arg1, char** arg2)

{
    if (*arg1 == 0x1a)
    {
        int64_t rax_1;
        rax_1 = 0;
        return 0;
    }
    
    int64_t rax;
    int64_t var_8 = rax;
    return ruff_python_formatter::expression::has_parentheses::heb1fda5cfc7f167d(arg1, arg2) & 1;
}
