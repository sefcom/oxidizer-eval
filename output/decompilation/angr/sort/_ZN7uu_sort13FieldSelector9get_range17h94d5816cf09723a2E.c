long long uu_sort::FieldSelector::get_range::h94d5816cf09723a2(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x68]
    unsigned long v1;  // [sp-0x60]
    unsigned long long v2;  // [sp-0x58]
    unsigned long long v3;  // [sp-0x50]
    int v4;  // [sp-0x48]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx
    unsigned long v8;  // rdx

    v6 = uu_sort::FieldSelector::get_range::resolve_index::hd65278e590ae86b0(a1, a2, a3, a4, &a0[1].padding_0[7]);
    if (v6)
    {
        v7 = a2;
        if (v6 == 3)
            return v7;
        v1 = &g_5ffb28;
        v2 = 1;
        v3 = &v0;
        *((uint128_t *)&v4) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v1, &g_5ffb50); /* do not return */
    }
    v7 = v8;
    if (a0->field_10 == 2)
        return v7;
    goto *((int *)(4385584 + uu_sort::FieldSelector::get_range::resolve_index::hd65278e590ae86b0(vvar_1, a2, vvar_3, a4, a0) * 4)) + 4385584;
}
