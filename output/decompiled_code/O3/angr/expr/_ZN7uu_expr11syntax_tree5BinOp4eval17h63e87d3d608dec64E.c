long long uu_expr::syntax_tree::BinOp::eval::h63e87d3d608dec64(unsigned long long a0, unsigned long a1, unsigned int a2, unsigned long long a3, unsigned long long a4)
{
    if ((char)a1)
    {
        if ((unsigned int)a1 == 1)
            goto LABEL_0x52ec30;
        return uu_expr::syntax_tree::StringOp::eval::h01695848f5743b72(a0, a2, a3, a4);
    }
    return uu_expr::syntax_tree::RelationOp::eval::hd7a9fc0cf468118d(a0, a2, a3, a4);
}
