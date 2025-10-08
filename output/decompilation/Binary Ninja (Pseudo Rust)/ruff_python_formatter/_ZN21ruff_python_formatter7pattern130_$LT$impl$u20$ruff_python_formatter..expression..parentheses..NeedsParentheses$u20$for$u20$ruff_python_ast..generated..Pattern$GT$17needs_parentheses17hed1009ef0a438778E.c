
  fn ruff_python_formatter::pattern::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..Pattern$GT$::needs_parentheses::hed1009ef0a438778(arg1: *mut c_void) -> bool

{
    let rax: i64 = -0x8000000000000000 ^ *arg1;
    let mut r8: i64 = 3;
    
    if rax < 8
    {
        r8 = rax;
    }
    
    let rcx: *mut c_void;
    let rdx: i64;
    let rsi: i64;
    
    match r8
    {
        0 =>
        {
            /* tailcall */
            ruff_python_formatter::pattern::pattern_match_value::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..nodes..PatternMatchValue$GT$::needs_parentheses::h36e0a345340becdd(arg1.byte_offset(8), rsi)
        }
        1 =>
        {
            &*jump_table_4878e8[6][2]
        }
        2 | 3 | 5 =>
        {
            &*jump_table_4878e8[6][3]
        }
        4 =>
        {
            /* tailcall */
            ruff_python_formatter::pattern::pattern_match_class::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..nodes..PatternMatchClass$GT$::needs_parentheses::h97ff1cb310e0dd61(arg1.byte_offset(8), rsi, rdx, rcx)
        }
        6 =>
        {
            (*arg1.byte_offset(0x37) == 0xda) * 2
        }
        7 =>
        {
            0
        }
    }
}
