
  int64_t uu_expr::syntax_tree::BinOp::eval::h63e87d3d608dec64(int64_t* arg1, char arg2, bool arg3, char* arg4, char* arg5)

{
    if (!arg2)
        /* tailcall */
        return uu_expr::syntax_tree::RelationOp::eval::hd7a9fc0cf468118d(arg1, arg3, arg4, arg5);
    
    if (arg2 == 1)
        /* tailcall */
        return uu_expr::syntax_tree::NumericOp::eval::h731cdd98b4e37edb(arg1, arg3, arg4, arg5);
    
    /* tailcall */
    return uu_expr::syntax_tree::StringOp::eval::h01695848f5743b72(arg1, arg3, arg4, arg5);
}
