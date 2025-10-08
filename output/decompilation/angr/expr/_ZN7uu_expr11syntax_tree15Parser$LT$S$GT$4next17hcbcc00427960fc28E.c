long long uu_expr::syntax_tree::Parser<S>::next(void* a0, unsigned long long a1[3])
{
    int v0;  // [bp-0x20], Other Possible Types: char
    char v1;  // [bp-0x10]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdi
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long v7;  // rdx
    unsigned long v8;  // rdi
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax

    v3 = a1[1];
    v4 = a1[2];
    if (v4 < v3)
    {
        v5 = a1[0];
        a1[2] = v4 + 1;
        v6 = *((long long *)(v5 + v4 * 24 + 8)).as_ref(*((long long *)(v5 + v4 * 24 + 16)));
        *((unsigned long long *)&a0[8]) = v6;
        *((unsigned long *)&a0[16]) = v7;
        *((unsigned long long *)a0) = 13;
        return v6;
    }
    v8 = v4 - 1;
    if (v8 >= v3)
        core::panicking::panic_bounds_check(v8, v3, &g_549920); /* do not return */
    v0.to_vec(*((long long *)(a1[0] + v8 * 24 + 8)).as_ref(*((long long *)(a1[0] + v8 * 24 + 16))), v10);
    *((unsigned long long *)a0) = 1;
    a0[8] = v0;
    v11 = *((long long *)&v1);
    *((unsigned long long *)&a0[24]) = v11;
    return v11;
}
