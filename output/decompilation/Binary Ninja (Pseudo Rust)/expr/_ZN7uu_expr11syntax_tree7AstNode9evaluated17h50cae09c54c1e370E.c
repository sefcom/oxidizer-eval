
  fn uu_expr::syntax_tree::AstNode::evaluated::h50cae09c54c1e370(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let rax: i32 = uu_expr::syntax_tree::get_next_id::hf082ef3e5b1b606f();
    let mut var_40: i32;
    uu_expr::syntax_tree::AstNode::eval::h7294554a61514ede(&var_40, arg2);
    let var_38: i128;
    let var_28: i128;
    
    if var_40 != 1
    {
        *arg1.byte_offset(0x10) = var_28;
        *arg1 = var_38;
        arg1[4] = rax;
    }
    else
    {
        *arg1.byte_offset(0x18) = var_28;
        *arg1.byte_offset(8) = var_38;
        *arg1 = -0x7ffffffffffffffb;
    }
    core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h2611257ee6ccabb2(arg2);
    arg1
}
