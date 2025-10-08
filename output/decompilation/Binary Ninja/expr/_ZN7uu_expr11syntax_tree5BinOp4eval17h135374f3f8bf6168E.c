
  int64_t uu_expr::syntax_tree::BinOp::eval::h135374f3f8bf6168(int64_t* arg1, char arg2, char arg3, int32_t* arg4, char* arg5)

{
    if (!arg2)
        /* tailcall */
        return uu_expr::syntax_tree::RelationOp::eval::he3600cb1c737b18a(arg1, arg3, arg4, arg5);
    
    char* rdx = arg4;
    
    if (arg2 == 1)
        /* tailcall */
        return uu_expr::syntax_tree::NumericOp::eval::h7467ae4d7f97e677(arg1, arg3, rdx, arg5);
    
    /* tailcall */
    return uu_expr::syntax_tree::StringOp::eval::h76d6f11cecdfc211(arg1, arg3, rdx, arg5);
}
