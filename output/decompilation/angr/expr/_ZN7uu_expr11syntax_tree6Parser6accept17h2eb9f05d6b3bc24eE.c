long long uu_expr::syntax_tree::Parser::accept::h2eb9f05d6b3bc24e(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v1;  // r15
    unsigned long v2;  // rbx
    unsigned int v3;  // ebx
    unsigned long long *v4;  // rcx
    unsigned long long v5;  // rax

    v1 = a0->field_10;
    v3 = v2 & 0xffffffffffffff00 | 3;
    if (v1 >= a0->field_8)
        return v3;
    v4 = a0->field_0;
    v5 = uu_expr::syntax_tree::Parser::parse_op::_$u7b$$u7b$closure$u7d$$u7d$::hae6674a434b8f783(a1, v4[2 * v1], v4[1 + 2 * v1]);
    if ((char)v5 != 3)
    {
        a0->field_10 = v1 + 1;
        v3 = v5;
        return v3;
    }
    return v3;
}
