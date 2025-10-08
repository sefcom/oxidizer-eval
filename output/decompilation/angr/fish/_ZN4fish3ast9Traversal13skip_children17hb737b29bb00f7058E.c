long long fish::ast::Traversal::skip_children(unsigned long long a0[3], unsigned long long a1, void* a2)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    uint128_t v3;  // [bp-0x28]
    unsigned long long v5;  // r14
    unsigned long v6;  // rax
    unsigned long v7;  // rax
    unsigned long v8;  // r14
    unsigned long v9;  // rcx
    unsigned long long v10;  // rax

    v5 = a0[2];
    v6 = a0[1] + a0[2] * 24 + 16;
    do
    {
        v7 = v6;
        v8 = v5 - 1;
        if (v5 < 1)
        {
            v0 = &g_14c4ea8;
            v1 = 1;
            v2 = 8;
            v3 = 0;
            core::panicking::panic_fmt(&v0, &g_14c4ec8); /* do not return */
        }
        v9 = v7 - 24;
        v5 = v8;
        v6 = v9;
    } while (*((int *)(v7 - 40)) != 1);
    v10 = fish::ast::is_same_node(a1, a2, *((long long *)(v9 - 8)), *((long long *)v9));
    if (!(char)v10)
    {
        v0 = &g_14c4eb8;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14c4ee0); /* do not return */
    }
    a0[2] = v8;
    return v10;
}
