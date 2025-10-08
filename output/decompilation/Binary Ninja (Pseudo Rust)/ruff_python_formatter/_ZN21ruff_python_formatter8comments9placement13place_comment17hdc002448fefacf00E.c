
  fn ruff_python_formatter::comments::placement::place_comment::hdc002448fefacf00(arg1: *mut i128, arg2: *mut i32, arg3: i64, arg4: *mut i8, arg5: u64) -> *mut i32

{
    let mut var_80: ();
    ruff_python_formatter::comments::placement::handle_parenthesized_comment::h8e0502a789509c98(
        &var_80, arg2, arg4, arg5);
    let mut var_d0: i64;
    ruff_python_formatter::comments::visitor::CommentPlacement::or_else::hd26c0204f9ea4061(&var_d0, 
        &var_80, arg4, arg5);
    ruff_python_formatter::comments::visitor::CommentPlacement::or_else::h6c4df664162ac8d3(&var_80, 
        &var_d0, arg4, arg5);
    var_d0 = arg3;
    let var_c8: *mut i8 = arg4;
    let var_c0: u64 = arg5;
    ruff_python_formatter::comments::visitor::CommentPlacement::or_else::hc3d15522a75fe24c(arg1, 
        &var_80, &var_d0)
}
