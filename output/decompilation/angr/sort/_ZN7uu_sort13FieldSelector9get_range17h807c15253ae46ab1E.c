long long uu_sort::FieldSelector::get_range(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    struct struct_0 v0[8];  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    char *v3;  // [bp-0x50]
    uint128_t v4;  // [bp-0x48]
    unsigned long v7;  // rdx

    switch (uu_sort::FieldSelector::get_range::resolve_index(a1, a2, a3, a4, &a0[1].padding_0[7]))
    {
    case 0:
        if (a0->field_10 == 2)
        {
            if (v7 > a2)
                break;
            else
                break;
            return v7;
        }
        goto (long long)(g_443ad0[uu_sort::FieldSelector::get_range::resolve_index(a1, a2, a3, a4, a0)] + (char *)&g_443ad0[0]);
    case 3:
        return a2;
    default:
        v1 = &g_670758;
        v2 = 1;
        v3 = &v0[0].field_0;
        v4 = 0;
        core::panicking::panic_fmt(&v1, &g_670780); /* do not return */
    }
}
