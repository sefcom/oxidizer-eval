long long uu_expr::syntax_tree::Parser::accept::hc513adc67d4614e0(struct_0 *a0, unsigned long long a1)
{
    unsigned long long *v1;  // r15
    unsigned long v2;  // rbx
    unsigned int v3;  // ebx
    unsigned long long *v4;  // rcx
    unsigned long long v5;  // rax

    v1 = a0->field_10;
    v3 = v2 | -0x100 | 3;
    if (v1 >= a0->field_8)
        return v3;
    v4 = a0->field_0;
    v5 = uu_expr::syntax_tree::Parser::parse_op::_$u7b$$u7b$closure$u7d$$u7d$::h5f77c7489784a357(a1, *((long long *)((char *)v4 + 0x10 * v1)), *((long long *)(8 + (char *)v4 + 0x10 * v1)));
    if ((char)v5 != 3)
    {
        a0->field_10 = (char *)v1 + 1;
        v3 = v5;
        return v3;
    }
    return v3;
}
