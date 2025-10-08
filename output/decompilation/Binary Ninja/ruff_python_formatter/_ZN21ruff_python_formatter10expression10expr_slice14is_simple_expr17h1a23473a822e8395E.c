
  int64_t ruff_python_formatter::expression::expr_slice::is_simple_expr::h1a23473a822e8395(int32_t* arg1)

{
    int32_t i;
    
    for (i = *arg1; i == 3; i = *arg1)
    {
        if (arg1[7] == 1)
        {
            i = 3;
            break;
        }
        
        arg1 = *(arg1 + 8);
    }
    
    int32_t rcx;
    rcx = i - 0x13 < 6;
    i = i == 0x1c;
    i |= rcx;
    return i;
}
