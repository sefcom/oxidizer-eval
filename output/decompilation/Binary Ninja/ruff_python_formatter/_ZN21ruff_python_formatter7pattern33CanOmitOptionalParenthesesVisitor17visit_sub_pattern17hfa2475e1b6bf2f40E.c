
  int64_t ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_sub_pattern::hfa2475e1b6bf2f40(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    arg1[3] = arg2;
    void* rax_1 = *(arg3[2] + 0x60);
    char result = ruff_python_formatter::pattern::is_pattern_parenthesized::h69f247e6dcabd7b6(arg2, 
        *(rax_1 + 8), *(rax_1 + 0x10), *arg3, arg3[1]);
    
    if (!result)
    {
        result = ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_pattern::he68f7da45c4f1f30(arg1, arg2, arg3);
        
        if (*arg1)
            return result;
    }
    else
    {
        arg1[4] = 1;
        
        if (*arg1)
            return result;
    }
    
    *arg1 = 2;
    arg1[1] = arg2;
    return result;
}
