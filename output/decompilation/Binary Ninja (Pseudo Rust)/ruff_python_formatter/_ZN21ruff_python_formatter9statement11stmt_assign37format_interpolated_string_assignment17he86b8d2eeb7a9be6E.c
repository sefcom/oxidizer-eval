
  fn ruff_python_formatter::statement::stmt_assign::format_interpolated_string_assignment::he86b8d2eeb7a9be6(arg1: i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut var_28: i64 = arg1;
    let var_20: *mut i64 = arg2;
    let mut rax: i64 = 2;
    let mut r15_1: i64;
    
    if arg1 == 3
    {
        r15_1 = 1;
        
        if !(0 + -(*arg2))
        {
            goto 'label_71c250;
        }
    }
    else if arg1 == 2 && *arg2 >= -0x7ffffffffffffffe
    {
        r15_1 = 0;
        'label_71c250:
        rax = 2;
        
        if ruff_python_formatter::other::interpolated_string::InterpolatedStringLayout::from_interpolated_string_elements::h05f33683f43ba465(arg2[1], arg2[2], *arg3, arg3[1]) != 0
        {
            if _$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_28, arg3) != 0
            {
                return 2;
            }
            
            return r15_1;
        }
    }
    rax
}
