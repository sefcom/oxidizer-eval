
  fn ruff_python_formatter::statement::stmt_assign::has_target_own_parentheses::h34ae9872ca5846a0(arg1: *mut i32, arg2: *mut c_void) -> i64

{
    let mut result: i64;
    result = 1;
    
    if *arg1 != 0x1e
    {
        let result_1: i64 = result;
        result =
            ruff_python_formatter::expression::has_own_parentheses::he088d283b6b32ebc(arg1, arg2)
            != 2;
    }
    
    result
}
