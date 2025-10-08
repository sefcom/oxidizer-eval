
  fn ruff_python_formatter::expression::expr_f_string::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprFString$GT$::needs_parentheses::hacd5263d47a01197(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64) -> i64

{
    if *arg1 < -0x7ffffffffffffffe
    {
        return 0;
    }
    
    let var_18: *mut i64 = arg1;
    let mut var_20: i64 = 2;
    
    if _$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_20, arg4) == 0 && ruff_python_formatter::other::interpolated_string::InterpolatedStringLayout::from_interpolated_string_elements::h05f33683f43ba465(arg1[1], arg1[2], *arg4, arg4[1]) == 0
    {
        return 2;
    }
    
    3
}
