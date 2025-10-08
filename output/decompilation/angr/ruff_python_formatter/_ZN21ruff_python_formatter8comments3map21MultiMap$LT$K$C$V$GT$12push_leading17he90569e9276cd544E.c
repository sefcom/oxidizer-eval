long long ruff_python_formatter::comments::map::MultiMap<K,V>::push_leading(unsigned long long a0[6], unsigned long long a1, unsigned long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x40]
    void* v5;  // rax
    unsigned long v6;  // r15
    unsigned long long v7;  // rax
    unsigned long long *v8;  // rax
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rdx

    v0 = a1;
    v5 = a0 + 1.get_inner_mut(&v0);
    if (!v5)
    {
        a0.push(a3, &g_97cca0);
        v2.leading(a0[2], a0[2]);
        return v3.insert(a0 + 1, v0, v1, &v2);
    }
    if ((int)v5[16])
    {
        v6 = v5 + 16;
        if (!(int)v5[24])
        {
            v7 = v6.range();
            if (a0[2] == v7)
            {
                a0.push(a3, &g_97cce8);
                return v6.increment_leading_range();
            }
        }
        v8 = v6.entry_to_out_of_order(a0[1], a0[2], &a0[3]);
        if (*(v8) >= a0[5])
            core::panicking::panic_bounds_check(*(v8), a0[5], &g_97ccb8); /* do not return */
        v9 = *(v8) * 24 + a0[4];
        v10 = &g_97ccd0;
    }
    else if ((long long)v5[24] < a0[5])
    {
        v9 = (long long)v5[24] * 24 + a0[4];
        v10 = &g_97cd18;
    }
    else
    {
        core::panicking::panic_bounds_check((long long)v5[24], a0[5], &g_97cd00); /* do not return */
    }
    return v9.push(a3, v10);
}
