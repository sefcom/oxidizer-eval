long long zoxide::db::stream::Stream::next(struct_0 *a0)
{
    unsigned long v1;  // rbx
    unsigned long v2;  // rbx
    unsigned long v3;  // r13
    unsigned long long v4;  // r12
    unsigned long long v5[5];  // r13

    v1 = a0->field_68;
    if (a0->field_60 >= a0->field_68)
        return 0;
    while (true)
    {
        v2 = v1 - 1;
        a0->field_68 = v2;
        if (v2 >= *((long long *)(*((long long *)&a0->padding_5a[3]) + 16)))
            core::panicking::panic_bounds_check(v2, *((long long *)(*((long long *)&a0->padding_5a[3]) + 16)), &g_5349b0); /* do not return */
        v3 = *((long long *)(*((long long *)&a0->padding_5a[3]) + 8));
        v4 = v2 * 5;
        if ((char)a0->field_8.filter_by_keywords(a0->field_10, *((long long *)(v3 + v4 * 8 + 8)), *((long long *)(v3 + v4 * 8 + 16))))
        {
            v5 = v3 + v4 * 8;
            if (a0.filter_by_base_dir(v5[1], v5[2]))
            {
                if (!a0->field_20.filter_by_exclude(a0->field_28, v5[1], v5[2]))
                {
LABEL_4912bf:
                    *((long long *)&a0->padding_5a[3]).swap_remove(v2);
                }
                else
                {
                    if ((char)(char)a0->field_58.filter_by_exists(a0->field_58[1], v5[1], v5[2]))
                        break;
                    if (v5[4] < a0->field_50)
                        goto LABEL_4912bf;
                }
            }
        }
        v1 = a0->field_68;
        if (a0->field_60 >= a0->field_68)
            return 0;
    }
    if (v2 >= *((long long *)(*((long long *)&a0->padding_5a[3]) + 16)))
        core::panicking::panic_bounds_check(v2, *((long long *)(*((long long *)&a0->padding_5a[3]) + 16)), &g_5349c8); /* do not return */
    return v4 * 8 + *((long long *)(*((long long *)&a0->padding_5a[3]) + 8));
}
