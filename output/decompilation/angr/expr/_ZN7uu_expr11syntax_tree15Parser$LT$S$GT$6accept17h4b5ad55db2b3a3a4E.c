long long uu_expr::syntax_tree::Parser<S>::accept(unsigned long long a0[3], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12
    unsigned int v4;  // ebx
    unsigned int v5;  // ebx
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax

    v0 = v2;
    v3 = a0[2];
    v5 = v4 & 0xffffff00 | 3;
    if (v3 >= a0[1])
        return v5;
    v7 = uu_expr::syntax_tree::Parser<S>::parse_op::{{closure}}(a1, *((long long *)(a0[0] + v3 * 24 + 8)).as_ref(*((long long *)(a0[0] + v3 * 24 + 16))), v6);
    if ((char)v7 == 3)
        return v5;
    a0[2] = v3 + 1;
    return v7 & 4294967295;
}
