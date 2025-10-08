
  bool ruff_python_formatter::pattern::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..Pattern$GT$::needs_parentheses::hed1009ef0a438778(void* arg1)

{
    int64_t rax = -0x8000000000000000 ^ *arg1;
    int64_t r8 = 3;
    
    if (rax < 8)
        r8 = rax;
    
    void* rcx;
    int64_t rdx;
    int64_t rsi;
    
    switch (r8)
    {
        case 0:
        {
            /* tailcall */
            return ruff_python_formatter::pattern::pattern_match_value::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..nodes..PatternMatchValue$GT$::needs_parentheses::h36e0a345340becdd(arg1 + 8, rsi);
        }
        case 1:
        {
            return &*jump_table_4878e8[6][2];
            break;
        }
        case 2:
        case 3:
        case 5:
        {
            return &*jump_table_4878e8[6][3];
            break;
        }
        case 4:
        {
            /* tailcall */
            return ruff_python_formatter::pattern::pattern_match_class::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..nodes..PatternMatchClass$GT$::needs_parentheses::h97ff1cb310e0dd61(arg1 + 8, rsi, rdx, rcx);
        }
        case 6:
        {
            return (*(arg1 + 0x37) == 0xda) * 2;
            break;
        }
        case 7:
        {
            return 0;
            break;
        }
    }
}
