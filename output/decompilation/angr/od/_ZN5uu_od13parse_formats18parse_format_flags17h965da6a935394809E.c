long long uu_od::parse_formats::parse_format_flags(struct_2 *a0, unsigned long long a1, unsigned long a2)
{
    struct_1 *v1;  // [bp-0x1a0]
    void* v9;  // [bp-0x160]
    unsigned long long v10;  // [bp-0x158]
    void* v11;  // [bp-0x150]
    int v12;  // [bp-0x148]
    int v15;  // [bp-0x148]
    struct_0 v16;  // [bp-0x140]
    unsigned long long v17;  // [bp-0x138]
    int v18;  // [bp-0x138]
    char v20;  // [bp-0x128]
    unsigned long long v24;  // [bp-0x100]
    unsigned long long v25;  // [bp-0xf8]
    unsigned long long v26;  // [bp-0xf0]
    struct_0 *v37;  // r12
    unsigned long long v38;  // rsi
    void* v39;  // r15
    char *v40;  // r14
    unsigned long long v41[3];  // rbx
    struct_2 *v53;  // rbx
    int v54;  // xmm0
    unsigned long long v55;  // [bp-0x148]

    v9 = 0;
    v10 = 8;
    v11 = 0;
    v24 = a1;
    v25 = a1 + a2 * 24;
    v26 = 1;
    v37 = &v16;
    v38 = 1;
    v39 = 0;
    v40 = &v24;
    v26 = 0;
    v41 = v40.nth(v38);
    if (((char)v39 & 1))
    {
        uucore::mods::locale::get_message(&v55, "od-error-missing-format-specod-error-unexpected-charnumberod-error-invalid-numberod-error-invalid-sizecapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 28);
        v53 = a0;
        *((unsigned long long *)((char *)&v1->field_8 + 8)) = v17;
        v54 = (int128_t)v15;
        *((void*)&(&v53->field_0)[1]) = v54;
        v53->field_0 = 1;
        ::0x4ae730::core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(&v9);
        return v53;
    }
    if (!v11)
    {
        *((uint128_t *)&v18) = g_595aa8;
        *((uint128_t *)&v12) = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h684cc6182f9bc233E;
        v20 = 0;
        v9.push(&v55, &g_595960);
    }
    *((void* *)((char *)&v1->field_8 + 8)) = v11;
    *((int128_t *)&(&v1->field_0)[1]) = *((int128_t *)&v9);
    v1->field_0 = 0;
    return a0;
}
