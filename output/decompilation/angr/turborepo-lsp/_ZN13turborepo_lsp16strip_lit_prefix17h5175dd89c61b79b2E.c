long long turborepo_lsp::strip_lit_prefix(unsigned long long a0[5], unsigned long long a1[5], unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12
    unsigned long long v4;  // rax
    unsigned long long v5;  // r14
    unsigned long long v6;  // rcx
    unsigned long v7;  // rdx

    v0 = v2;
    v3 = 0x8000000000000000;
    v4 = a2.strip_prefix_of(a3, a1[1], a1[2]);
    if (v4)
    {
        v5 = a3 + a1[3];
        v6 = a1[4];
        a0[1] = v4;
        a0[2] = v7;
        a0[3] = v5;
        a0[4] = v6;
    }
    else
    {
        v3 = 9223372036854775809;
    }
    a0[0] = v3;
    return a0;
}
