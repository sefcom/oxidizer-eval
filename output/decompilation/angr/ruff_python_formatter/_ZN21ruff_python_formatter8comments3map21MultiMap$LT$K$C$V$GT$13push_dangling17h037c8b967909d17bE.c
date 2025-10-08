long long ruff_python_formatter::comments::map::MultiMap<K,V>::push_dangling(unsigned long long a0[6], unsigned long long a1, unsigned long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x40]
    struct_0 *v5;  // rax
    unsigned long v6;  // r15
    unsigned long long v7;  // rax
    unsigned long v8;  // rdi
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rdx
    unsigned long v11;  // rdi

    v0 = a1;
    v5 = a0 + 1.get_inner_mut(&v0);
    if (!v5)
    {
        a0.push(a3, &g_97cd30);
        v2.dangling(a0[2], a0[2]);
        return v3.insert(a0 + 1, v0, v1, &v2);
    }
    if (v5->field_10)
    {
        v6 = &v5->field_10;
        if (!v5->field_18[1])
        {
            v7 = v6.range();
            if (a0[2] == v7)
            {
                a0.push(a3, &g_97cd78);
                return v6.increment_dangling_range();
            }
        }
        v8 = *((long long *)v6.entry_to_out_of_order(a0[1], a0[2], &a0[3])) + 1;
        if (v8 >= a0[5])
            core::panicking::panic_bounds_check(v8, a0[5], &g_97cd48); /* do not return */
        v9 = v8 * 24 + a0[4];
        v10 = &g_97cd60;
    }
    else
    {
        v11 = v5->field_18 + 1;
        if (v11 >= a0[5])
            core::panicking::panic_bounds_check(v11, a0[5], &g_97cd90); /* do not return */
        v9 = v11 * 24 + a0[4];
        v10 = &g_97cda8;
    }
    return v9.push(a3, v10);
}
