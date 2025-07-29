long long uu_sort::FieldSelector::get_range::resolve_index(unsigned long long a0, unsigned long long a1, unsigned long long *a2, unsigned long long a3, struct_0 *a4)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    void* v2;  // [bp-0x30]
    unsigned long long v4;  // rdi
    void* v5;  // r14, Other Possible Types: unsigned long long
    unsigned long v6;  // rdi
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rax
    unsigned long v14;  // rdi

    v4 = a4->field_0;
    if (((v4 <= a3 ^ 1) & a2))
    {
        return 3;
    }
    else if (a4->field_8)
    {
        if (v4 == 1)
        {
            v5 = 0;
            if (!(!a4->field_10))
                goto LABEL_50e371;
        }
        else
        {
            if (!a2)
                core::option::unwrap_failed(&g_6707c8); /* do not return */
            v6 = v4 - 1;
            if (v6 >= a3)
                core::panicking::panic_bounds_check(v6, a3, &g_6707e0); /* do not return */
            v5 = a2[2 * v6];
            if (a4->field_10)
            {
LABEL_50e371:
                v7 = v5.get(a0, a1);
                if (!v7)
                    core::str::slice_error_fail(a0, a1, v5, a1, &g_6707f8); /* do not return */
                v2 = 0;
                v0 = v7;
                v1 = v7 + v8;
                v5 += v0.try_fold().map_or((unsigned int)v8, v8);
            }
        }
        v10 = v5.get(a0, a1);
        if (!v10)
            core::str::slice_error_fail(a0, a1, v5, a1, &g_670810); /* do not return */
        v2 = 0;
        v0 = v10;
        v1 = v10 + v8;
        if (v0.advance_by(a4->field_8 - 1))
        {
            v11 = 0x110000;
        }
        else
        {
            v12 = v0.next();
            v11 = (unsigned int)v8;
        }
        return (a1 <= v12.map_or(v11, v8) + v5) * 3;
    }
    else if (a2)
    {
        v14 = v4 - 1;
        if (v14 >= a3)
            core::panicking::panic_bounds_check(v14, a3, &g_6707b0); /* do not return */
        return 1 + (a2[1 + 2 * v14] < 1);
    }
    else
    {
        core::option::unwrap_failed(&g_670798); /* do not return */
    }
}
