
  int64_t ruff_python_formatter::expression::expr_f_string::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprFString$GT$::needs_parentheses::hacd5263d47a01197(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    if (*arg1 < -0x7ffffffffffffffe)
        return 0;
    
    int64_t* var_18 = arg1;
    int64_t var_20 = 2;
    
    if (!_$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_20, arg4) && !ruff_python_formatter::other::interpolated_string::InterpolatedStringLayout::from_interpolated_string_elements::h05f33683f43ba465(arg1[1], arg1[2], *arg4, arg4[1]))
        return 2;
    
    return 3;
}
