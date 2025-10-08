long long fish::path::path_make_canonical(unsigned long long a0[3])
{
    unsigned long long v1;  // rcx
    unsigned long long v2;  // rsi
    void* v3;  // rdx
    void* v4;  // rax
    char v5;  // r8b
    unsigned int v6;  // r9d
    unsigned long long v7;  // rax
    unsigned long v8;  // rax

    v1 = a0[1];
    v2 = a0[2];
    v3 = 0;
    v4 = 0;
    if (1)
        goto LABEL_13f02b0;
    while (v3 < v2)
    {
        v3 += 1;
        if (*((int *)(v1 + v3 * 4)) == 47)
            continue;
        while (true)
        {
            if (v4 == v2)
                core::panicking::panic_bounds_check(v2, v2, &g_14df0f0); /* do not return */
            *((unsigned int *)(v1 + v4 * 4)) = v6;
            v4 += 1;
            if ((v5 & 1))
                break;
LABEL_13f02b0:
            if (v3 >= v2)
                goto LABEL_13f02d8;
            v6 = *((int *)(v1 + v3 * 4));
            v3 += 1;
            v5 = v6 == 47;
        }
    }
LABEL_13f02d8:
    if (v4 <= 1)
        return v8;
    v7 = v4 - v5;
    if (v7 > v2)
        return v8;
    a0[2] = v7;
    return v8;
}
