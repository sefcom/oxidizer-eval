long long uu_expr::syntax_tree::BinOp::eval::h32b221dc5401ed9d(unsigned long long a0, unsigned long a1, unsigned int a2, unsigned long long a3, unsigned long long a4)
{
    if ((char)a1)
    {
        if ((unsigned int)a1 == 1)
            goto LABEL_0x52e560;
        return uu_expr::syntax_tree::StringOp::eval::h1bc593ee79146b09(a0, a2, a3, a4);
    }
    return uu_expr::syntax_tree::RelationOp::eval::h1235e9f29a96456a(a0, a2, a3, a4);
}
