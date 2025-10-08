long long fish::path::paths_are_equivalent(unsigned int *a0, unsigned long long a1, unsigned int *a2, unsigned long long a3)
{
    void* v0;  // [bp-0x28]
    void* v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // 4096
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v9;  // 4096
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rax
    void* v12;  // rax
    void* v13;  // rdi

    v0 = v2;
    v3 = a0.equal(a1, a2, a3);
    if ((char)v3)
        return v3 & 0xffffffffffffff00 | 1;
    v4 = a1;
    v5 = a1;
    do
    {
        v6 = v5;
        if (v6 < 2)
            goto LABEL_13f0363;
        v7 = v6 - 1;
        if (v7 >= a1)
            core::panicking::panic_bounds_check(v6 - 1, a1, &g_14df108); /* do not return */
        v5 = v7;
    } while (a0[v5] == 47);
    v4 = v7 + 1;
LABEL_13f0363:
    v8 = a3;
    v9 = a3;
    do
    {
        v10 = v9;
        if (v10 < 2)
            goto LABEL_13f0393;
        v11 = v10 - 1;
        if (v11 >= a3)
            core::panicking::panic_bounds_check(v10 - 1, a3, &g_14df120); /* do not return */
        v9 = v11;
    } while (a2[v9] == 47);
    v8 = v11 + 1;
LABEL_13f0393:
    if (!!v8 && !!v4)
    {
        v12 = 0;
        v13 = 0;
        while (true)
        {
            if (v12 >= a1)
                core::panicking::panic_bounds_check(v12, a1, &g_14df138); /* do not return */
            if (v13 >= a3)
                core::panicking::panic_bounds_check(v13, a3, &g_14df150); /* do not return */
            if (*((int *)((char *)a0 + 0x4 * v12)) != *((int *)((char *)a2 + 0x4 * v13)))
                break;
            v12 += 1;
            v13 += 1;
            if (*((int *)((char *)a0 + 0x4 * v12)) == 47)
            {
                if (v12 < a1)
                {
                    while (*((int *)((char *)a0 + 0x4 * v12)) == 47)
                    {
                        if (v12 + 1 >= a1)
                            break;
                    }
                }
                for (; v13 < a3 && *((int *)((char *)a2 + 0x4 * v13)) == 47; v13 += 1);
            }
            if (v12 >= v4 || v13 >= v8)
                break;
        }
    }
    else
    {
        v13 = 0;
        v12 = 0;
    }
    return (v12 ^ v4) & 0xffffffffffffff00 | (!(v13 ^ v8) && !(v12 ^ v4));
}
