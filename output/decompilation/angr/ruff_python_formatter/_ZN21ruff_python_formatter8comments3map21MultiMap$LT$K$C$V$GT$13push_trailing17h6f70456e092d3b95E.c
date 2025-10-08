long long ruff_python_formatter::comments::map::MultiMap<K,V>::push_trailing(unsigned long long a0[6], unsigned long long a1, unsigned long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x40]
    struct_0 *v5;  // rax
    struct_0 *v6;  // r15
    unsigned long v7;  // r15
    unsigned long long v8;  // rax
    unsigned long v9;  // rdi
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rdx
    unsigned long v12;  // rdi

    v0 = a1;
    v5 = a0 + 1.get_inner_mut(&v0);
    if (!v5)
    {
        a0.push(a3, &g_97cdc0);
        v2.trailing(a0[2], a0[2]);
        return v3.insert(a0 + 1, v0, v1, &v2);
    }
    v6 = v5;
    if (v5->field_10)
    {
        v7 = &v6->field_10;
        v8 = v7.range();
        if (v8 == a0[2])
        {
            a0.push(a3, &g_97ce08);
            return v7.increment_trailing_range();
        }
        v9 = *((long long *)v7.entry_to_out_of_order(a0[1], a0[2], &a0[3])) + 2;
        if (v9 >= a0[5])
            core::panicking::panic_bounds_check(v9, a0[5], &g_97cdd8); /* do not return */
        v10 = v9 * 24 + a0[4];
        v11 = &g_97cdf0;
    }
    else
    {
        v12 = v6->field_18 + 2;
        if (v12 >= a0[5])
            core::panicking::panic_bounds_check(v12, a0[5], &g_97ce20); /* do not return */
        v10 = v12 * 24 + a0[4];
        v11 = &g_97ce38;
    }
    return v10.push(a3, v11);
}
