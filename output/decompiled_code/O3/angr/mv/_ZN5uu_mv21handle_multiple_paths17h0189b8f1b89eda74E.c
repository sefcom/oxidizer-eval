long long uu_mv::handle_multiple_paths::h0189b8f1b89eda74(struct_1 *a0, unsigned long long a1, struct_0 *a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x90]
    unsigned long v2;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x80]
    unsigned long long v4;  // [sp-0x78]
    unsigned long long v5;  // [sp-0x70]
    void* v6;  // [sp-0x68]
    unsigned long long v7;  // [sp-0x58]
    int v8;  // [sp-0x50]
    char v9;  // [sp-0x40]
    char v10;  // [bp-0x38]
    unsigned int v11;  // [sp-0x20]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // r9

    if (a2->field_30)
    {
        if (a1 <= 2)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v7 = 1;
        *((int128_t *)&v8) = *((int128_t *)&(&a0->padding_0)[1]);
        v9 = 1;
        v0 = &v7;
        v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v2 = &g_587288;
        v3 = 1;
        v6 = 0;
        v4 = &v0;
        v5 = 1;
        ::0x4e6a60::core::option::Option$LT$T$GT$::map_or_else::h34501cc2a6e33d5f(&v10, &v2);
        v11 = 1;
        v13 = alloc::boxed::Box$LT$T$GT$::new::he89af543a86412c4(&v10);
        return v13;
    }
    else
    {
        if (!a1)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v13 = uu_mv::move_files_into_dir::h2094580d118304f1(_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h02aaf289644482d1(a1 - 1, a0, a1), v14, *((long long *)&a0->padding_0[16 + 24 * a1]), *((long long *)&a0->padding_0[8 + 24 * a1]), a2, v15);
        return v13;
    }
}
