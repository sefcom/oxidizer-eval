
  fn uu_expr::syntax_tree::BinOp::eval::h135374f3f8bf6168(arg1: *mut i64, arg2: i8, arg3: i8, arg4: *mut i32, arg5: *mut i8) -> i64

{
    if arg2 == 0
    {
        /* tailcall */
        return uu_expr::syntax_tree::RelationOp::eval::he3600cb1c737b18a(arg1, arg3, arg4, arg5);
    }
    
    let rdx: *mut i8 = arg4;
    
    if arg2 == 1
    {
        /* tailcall */
        return uu_expr::syntax_tree::NumericOp::eval::h7467ae4d7f97e677(arg1, arg3, rdx, arg5);
    }
    
    /* tailcall */
    uu_expr::syntax_tree::StringOp::eval::h76d6f11cecdfc211(arg1, arg3, rdx, arg5)
}
