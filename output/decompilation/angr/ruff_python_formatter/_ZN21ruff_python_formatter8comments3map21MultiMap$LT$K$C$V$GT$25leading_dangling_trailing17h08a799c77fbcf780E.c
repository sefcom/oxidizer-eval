long long ruff_python_formatter::comments::map::MultiMap<K,V>::leading_dangling_trailing(unsigned long long a0[6], unsigned long long a1[6], unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    void* v2;  // rax
    unsigned long v3;  // rbp
    unsigned long long v4;  // r14
    unsigned long long v5;  // r15
    void* v6;  // r12
    unsigned long v7;  // rsi
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long v11;  // rdi
    unsigned long long v12;  // rsi
    unsigned long v13;  // rax
    unsigned long v14;  // rcx
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rsi
    unsigned long v17;  // rsi
    unsigned long long v18;  // rax
    unsigned long v19;  // r13
    unsigned long long v20;  // rcx
    unsigned long v21;  // rdx

    v2 = a1 + 1.get_inner(a2);
    if (v2)
    {
        v3 = v2 + 16;
        if (*((int *)v3))
        {
            v4 = a1[1];
            v5 = a1[2];
            v6 = v2;
            v0 = *((int *)v3) - 1.index((int)v2[20] - 1, v4, v5, &g_97cf70);
            v7 = (int)v6[24] - 1;
            if ((int)v6[24] < 1)
                v7 = (int)v6[20] - 1;
            v8 = (int)v6[20] - 1.index(v7, v4, v5, &g_97cf88);
            v10 = v3.trailing_range().index(v9, v4, v5, &g_97cfa0);
        }
        else
        {
            v11 = (long long)v2[24];
            v12 = a1[5];
            if (v11 >= v12)
                core::panicking::panic_bounds_check(v11, v12, &g_97cfb8); /* do not return */
            v13 = v11 + 1;
            if (v13 >= v12)
                core::panicking::panic_bounds_check(v13, v12, &g_97cfd0); /* do not return */
            v14 = v11 + 2;
            if (v14 >= v12)
                core::panicking::panic_bounds_check(v14, v12, &g_97cfe8); /* do not return */
            v15 = a1[4];
            v16 = v11 * 3;
            v0 = *((long long *)(v15 + v16 * 8 + 8));
            v17 = *((long long *)(v15 + v16 * 8 + 16));
            v18 = v13 * 3;
            v8 = *((long long *)(v15 + v18 * 8 + 8));
            v19 = *((long long *)(v15 + v18 * 8 + 16));
            v20 = v14 * 3;
            v10 = *((long long *)(v15 + v20 * 8 + 8));
            v21 = *((long long *)(v15 + v20 * 8 + 16));
        }
    }
    else
    {
        v17 = 0;
        v0 = 4;
        v8 = 4;
        v19 = 0;
        v10 = 4;
        v21 = 0;
    }
    a0[0] = v0;
    a0[1] = v17;
    a0[2] = v8;
    a0[3] = v19;
    a0[4] = v10;
    a0[5] = v21;
    return v10;
}
