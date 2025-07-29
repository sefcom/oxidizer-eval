long long uu_sort::month_parse(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char *v3;  // rbx
    struct_0 *v4;  // rax
    unsigned long v5;  // r13
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax

    v3 = core::str::<impl str>::trim_matches(a0, a1);
    v0 = &g_670a18;
    v1 = &g_670b38;
    if (v0.next())
    {
        do
        {
            v5 = v4->field_8;
            if (v5)
            {
                if (v5 < v6)
                {
                    if (v3[v5] <= 191)
                        continue;
                }
                else
                {
                    if (!(v5 == v6))
                        continue;
                }
            }
            v7 = v5.get(v3, v6);
            if (!v7)
            {
                core::str::slice_error_fail(v3, v6, 0, v5, &g_670b38); /* do not return */
            }
            else if ((char)::0x508470::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v7, v6, v4->field_0, v5))
            {
                return v4->field_10;
            }
            v4 = v0.next();
        } while (v4);
    }
    return 0;
}
