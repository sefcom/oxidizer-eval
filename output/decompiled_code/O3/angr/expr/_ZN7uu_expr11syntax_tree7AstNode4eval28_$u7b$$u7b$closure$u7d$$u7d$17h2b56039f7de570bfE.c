long long uu_expr::syntax_tree::AstNode::eval::_$u7b$$u7b$closure$u7d$$u7d$::h2b56039f7de570bf(struct_0 *a0)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long v2;  // rax
    unsigned long long v3;  // r14
    unsigned long long v4;  // rax

    v0 = v2;
    v3 = a0->field_18;
    if ((unsigned int)v3)
    {
        if ((unsigned int)v3 == 1 || (v4 = a0->field_10, !v4))
            v3 = 1;
        else
            v3 = (v4 == 1 ? 1 : 0);
    }
    if (a0->field_0)
        __rust_dealloc(a0->field_8);
    return v3;
}
