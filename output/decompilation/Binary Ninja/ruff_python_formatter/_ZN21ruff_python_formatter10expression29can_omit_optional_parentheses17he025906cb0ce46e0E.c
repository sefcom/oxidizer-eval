
  uint64_t ruff_python_formatter::expression::can_omit_optional_parentheses::he025906cb0ce46e0(int32_t* arg1, char** arg2)

{
    int64_t var_38 = 0;
    int32_t* var_20 = nullptr;
    var_20 = 0;
    char** var_28 = arg2;
    ruff_python_formatter::expression::CanOmitOptionalParenthesesVisitor::visit_subexpression::h8d70ca0c45844b66(&var_38, arg1);
    int32_t rbp = 0;
    int32_t var_18;
    char var_14;
    
    if (var_14 == 1 && var_18 < 2)
    {
        rbp = 1;
        char var_13;
        
        if (var_13 >= 2)
        {
            if (!var_20)
            {
                label_70fe73:
                int32_t* var_30;
                
                if (var_38 >= 2)
                    /* tailcall */
                    return ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized::h96a2abf8babbfaf8(var_30, arg2);
                rbp = 0;
            }
            else if (!ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized::h96a2abf8babbfaf8(var_20, arg2))
                goto label_70fe73;
        }
    }
    
    return rbp;
}
