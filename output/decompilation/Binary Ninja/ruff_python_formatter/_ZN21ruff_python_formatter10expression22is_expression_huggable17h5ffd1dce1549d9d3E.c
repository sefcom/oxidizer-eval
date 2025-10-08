
  int64_t ruff_python_formatter::expression::is_expression_huggable::h5ffd1dce1549d9d3(int32_t* arg1, char arg2)

{
    char rax = arg2;
    uint64_t i;
    
    for (i = *arg1; i == 0x1b; i = *arg1)
        arg1 = *(arg1 + 8);
    
    if (TEST_BITQ(0x197fff83f, i))
        rax = 0;
    
    return rax & 1;
}
