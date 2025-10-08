
  uint64_t ruff_python_formatter::statement::stmt_assign::is_attribute_with_parenthesized_value::hd5324170738abb14(int32_t* arg1, char** arg2)

{
    int32_t* rbx = arg1;
    int32_t i = *rbx;
    int64_t rbp;
    rbp = 1;
    
    while (i == 0x19)
    {
        if (ruff_python_formatter::expression::has_parentheses::heb1fda5cfc7f167d(*(rbx + 0x30), 
                arg2) != 2)
            return rbp;
        
        rbx = *(rbx + 0x30);
        i = *rbx;
        rbp = 1;
    }
    
    if (i != 0x1a)
    {
        if (i != 0x10)
            rbp = 0;
        else
        {
            *(rbx + 0x28);
            rbp = *(rbx + 0x18) != -(*(rbx + 0x28));
        }
    }
    
    return rbp;
}
