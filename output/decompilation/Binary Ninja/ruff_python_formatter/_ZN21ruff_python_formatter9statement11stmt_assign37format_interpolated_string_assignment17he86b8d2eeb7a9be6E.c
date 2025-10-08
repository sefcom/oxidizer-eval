
  int64_t ruff_python_formatter::statement::stmt_assign::format_interpolated_string_assignment::he86b8d2eeb7a9be6(int64_t arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t var_28 = arg1;
    int64_t* var_20 = arg2;
    int64_t rax = 2;
    int64_t r15_1;
    
    if (arg1 == 3)
    {
        r15_1 = 1;
        
        if (!(0 + -(*arg2)))
            goto label_71c250;
    }
    else if (arg1 == 2 && *arg2 >= -0x7ffffffffffffffe)
    {
        r15_1 = 0;
        label_71c250:
        rax = 2;
        
        if (ruff_python_formatter::other::interpolated_string::InterpolatedStringLayout::from_interpolated_string_elements::h05f33683f43ba465(arg2[1], arg2[2], *arg3, arg3[1]))
        {
            if (_$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_28, arg3))
                return 2;
            
            return r15_1;
        }
    }
    return rax;
}
