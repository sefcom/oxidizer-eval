long long fish::history::HistoryImpl::save_internal_via_rewrite(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xe0]
    void* v2;  // [bp-0xd8]
    void* v3;  // [bp-0xd0], Other Possible Types: char
    unsigned long long v4;  // [bp-0xc8]
    void* v5;  // [bp-0xc0]
    char v6;  // [bp-0xb8]
    void* v7;  // [bp-0xa8]
    char v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    int v10;  // [bp-0x80]
    int v11;  // [bp-0x70]
    char v12;  // [bp-0x60]
    int v13;  // [bp-0x58], Other Possible Types: char
    int v14;  // [bp-0x48]
    int v15;  // [bp-0x38]

    if ((char)core::sync::atomic::atomic_load(&g_15a9860, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3.to_flog_str(&g_15a9850);
        v8.into_iter(&v3);
        v0.spec_extend(&v8);
        v0.push(58, &g_14d9e08);
        v0.push(32, &g_14d9e08);
        v3 = 0;
        v4 = 4;
        v5 = 0;
        if (a0->field_50 < a0->field_b0)
            core::panicking::panic_const::panic_const_sub_overflow(&g_14d9e20); /* do not return */
        v8 = 4;
        v9 = a0->field_50 - a0->field_b0;
        fish_printf::printf_impl::sprintf_locale(&v6, &v3, "Saving %lu items via rewriteSaving %lu items via appendingassertion failed: self.deleted_items.is_empty()Appending to history failed:Rewriting history failed:Saving history failed:save vacuumsave no vacuumassertion failed: self.first_unwritten_new_item_ind", 28, &v8, 1);
        v6.unwrap(&g_14d9e08);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v8);
        memcpy(&v6, &v3, 16);
        v7 = 0;
        v3.to_flog_str(&v6);
        v8.into_iter(&v3);
        v0.spec_extend(&v8);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
        v0.push(10, &g_14d9e08);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    fish::fs::rewrite_via_temporary_file(&v8, a1, a2, a0);
    if (v12 == 2)
        return *((long long *)&v8);
    v15 = v11;
    v14 = v10;
    memcpy(&v13, &v9, 16);
    a0->field_b8 = *((long long *)&v8);
    *((void*)&a0->field_c0) = v13;
    *((void*)&a0->field_d0) = v14;
    *((void*)&a0->field_e0) = v15;
    a0->field_b0 = a0->field_50;
    a0->padding_58[40].clear();
    a0.clear_file_state();
    return 0;
}
