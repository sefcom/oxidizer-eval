long long uu_sort::FieldSelector::get_range::h91411669e247756b(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x68]
    unsigned long v1;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x58]
    unsigned long long v3;  // [sp-0x50]
    int v4;  // [sp-0x48]

    switch (uu_sort::FieldSelector::get_range::resolve_index::hf7b31684476c2c1a(a1, a2, a3, a4, &a0[1].padding_0[7]))
    {
    case 0:
        if (a0->field_10 != 2)
        {
            goto *((int *)(4362120 + uu_sort::FieldSelector::get_range::resolve_index::hf7b31684476c2c1a(a1, a2, a3, a4, a0) * 4)) + 4362120;
        }
        else
        {
            if (a2 > a2)
                break;
            else
                break;
            return a2;
        }
    case 3:
        return a2;
    default:
        v1 = &g_592b60;
        v2 = 1;
        v3 = &v0;
        *((int128_t *)&v4) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v1); /* do not return */
    }
}
