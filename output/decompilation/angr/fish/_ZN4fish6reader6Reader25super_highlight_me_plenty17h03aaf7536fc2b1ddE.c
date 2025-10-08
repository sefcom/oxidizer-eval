long long fish::reader::Reader::super_highlight_me_plenty(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0]
    int v3;  // [bp-0xa8], Other Possible Types: char
    char v4;  // [bp-0x98]
    char v5;  // [bp-0x88]
    char v6;  // [bp-0x70]
    char v7;  // [bp-0x58]
    unsigned long long v9;  // rax
    unsigned long v10;  // rax

    if (a0->field_4f5 != 1)
        return v10;
    v9 = a0->field_28.equal(a0->field_30, a0->field_788[1], a0->field_790);
    if ((char)v9)
        return v9;
    v3.to_vec(a0->field_28, a0->field_30);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&a0->field_788);
    a0->field_790 = *((long long *)&v4);
    *((void*)&a0->field_788[0]) = v3;
    if ((char)core::sync::atomic::atomic_load(&g_15a99e0, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v5.to_flog_str(&g_15a99d0);
        v3.into_iter(&v5);
        v0.spec_extend(&v3);
        v0.push(58, &g_14e0bd8);
        v0.push(32, &g_14e0bd8);
        v6.to_vec("Highlightingassertion failed: result.range.start < result.range.end", 12);
        v3.into_iter(&v6);
        v0.spec_extend(&v3);
        v0.push(10, &g_14e0bd8);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    fish::reader::get_highlight_performer(&v7, a1, a0, 1);
    *((long long *)&a0->padding_7a0[128]).downgrade();
    return fish::reader::debounce_highlighting().perform_with_completion(&v7, *((long long *)&a0->padding_7a0[128]));
}
