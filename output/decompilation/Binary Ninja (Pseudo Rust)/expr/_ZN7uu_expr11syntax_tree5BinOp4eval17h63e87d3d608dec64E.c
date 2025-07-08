
  fn uu_expr::syntax_tree::BinOp::eval::h63e87d3d608dec64(arg1: *mut i64, arg2: i8, arg3: bool, arg4: *mut i8, arg5: *mut i8) -> i64

{
    if arg2 == 0
    {
        /* tailcall */
        return uu_expr::syntax_tree::RelationOp::eval::hd7a9fc0cf468118d(arg1, arg3, arg4, arg5);
    }
    
    if arg2 == 1
    {
        /* tailcall */
        return uu_expr::syntax_tree::NumericOp::eval::h731cdd98b4e37edb(arg1, arg3, arg4, arg5);
    }
    
    /* tailcall */
    uu_expr::syntax_tree::StringOp::eval::h01695848f5743b72(arg1, arg3, arg4, arg5)
}
