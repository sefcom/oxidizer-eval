long long fish::history::HistoryImpl::save_internal_via_appending(struct_0 *a0, unsigned long long a1, void* a2)
{
    void* v0;  // [bp-0xb0], Other Possible Types: char
    unsigned long long v1;  // [bp-0xa8]
    void* v2;  // [bp-0xa0]
    unsigned int v3[1];  // [bp-0x98], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0x94]
    void* v5;  // [bp-0x88]
    void* v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    void* v8;  // [bp-0x70]
    char v9;  // [bp-0x68]
    unsigned int v10;  // [bp-0x64]
    unsigned long long v11;  // [bp-0x60]
    int v12;  // [bp-0x58]
    int v13;  // [bp-0x48]
    char v14;  // [bp-0x38]
    unsigned long v16;  // r14
    unsigned long v17;  // r12
    unsigned long long v18;  // rbp
    struct_1 *v19;  // r15
    unsigned long long v20;  // rbp
    unsigned long long v21;  // rbp
    void* v22;  // r15
    int v23;  // xmm0

    if ((char)core::sync::atomic::atomic_load(&g_15a9860, 0))
    {
        v6 = 0;
        v7 = 1;
        v8 = 0;
        v0.to_flog_str(&g_15a9850);
        v9.into_iter(&v0);
        v6.spec_extend(&v9);
        v6.push(58, &g_14d9e38);
        v6.push(32, &g_14d9e38);
        v0 = 0;
        v1 = 4;
        v2 = 0;
        if (a0->field_50 < a0->field_b0)
            core::panicking::panic_const::panic_const_sub_overflow(&g_14d9e50); /* do not return */
        v9 = 4;
        v11 = a0->field_50 - a0->field_b0;
        fish_printf::printf_impl::sprintf_locale(&v3, &v0, "Saving %lu items via appendingassertion failed: self.deleted_items.is_empty()Appending to history failed:Rewriting history failed:Saving history failed:save vacuumsave no vacuumassertion failed: self.first_unwritten_new_item_index <= self.new_items.len()assertion failed: self.disable_automatic_save_counter > 0", 30, &v9, 1);
        v3.unwrap(&g_14d9e38);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
        *((int128_t *)&v3) = *((int128_t *)&v0);
        v5 = 0;
        v0.to_flog_str(&v3);
        v9.into_iter(&v0);
        v6.spec_extend(&v9);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
        v6.push(10, &g_14d9e38);
        fish::flog::flog_impl(v7, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v6, v7);
    }
    if (a0->field_98)
        core::panicking::panic("assertion failed: self.deleted_items.is_empty()Appending to history failed:Rewriting history failed:Saving history failed:save vacuumsave no vacuumassertion failed: self.first_unwritten_new_item_index <= self.new_items.len()assertion failed: self.disable_automatic_save_counter > 0", 47, &g_14d9e68); /* do not return */
    v9.new(0, a1, a2);
    if ((v9 & 1))
        return v11;
    v3 = v10;
    v4 = v11;
    fish::wutil::fileid::file_id_for_file(&v9, &v3);
    v16 = &(&a0->field_b0)[1];
    if (!v9.eq(v16))
        a0.clear_file_state();
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v17 = a0->field_b0;
    v18 = a0->field_50 - v17;
    if (a0->field_50 > v17)
    {
        v19 = v17 * 80 + a0->field_48;
        do
        {
            v20 = v18;
            if (!v19->field_48)
                fish::history::file::append_history_item_to_buffer(v19, &v0);
            v19 = &v19[1].padding_0[7];
            v21 = v20 - 1;
            v18 = v21;
        } while (v20 != 1);
        v17 = a0->field_50;
    }
    v22 = fish::history::flush_to_file(&v0, &v3, 0);
    if (!v22)
    {
        v22 = fish::fs::fsync(&v3);
        if (!v22)
        {
            a0->field_b0 = v17;
            fish::wutil::fileid::file_id_for_file(&v9, &v3);
            *((long long *)(v16 + 48)) = *((long long *)&v14);
            v23 = *((int128_t *)&v9);
            *((void*)(v16 + 32)) = v13;
            *((void*)(v16 + 16)) = v12;
            *((void*)v16) = v23;
            v22 = 0;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, 1);
    core::ptr::drop_in_place<fish::fs::LockedFile>(v3, v4);
    return v22;
}
