void fish::history::HistoryImpl::populate_from_file_contents(struct_0 *a0)
{
    void* v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    void* v2;  // [bp-0x78]
    void* v3;  // [bp-0x70], Other Possible Types: char
    unsigned long long v4;  // [bp-0x68]
    void* v5;  // [bp-0x60]
    void* v6;  // [bp-0x58]
    char v7;  // [bp-0x58]
    void* v8;  // [bp-0x50]
    char v9;  // [bp-0x38]
    void* v10;  // [bp-0x28]
    unsigned long long v12;  // rdx

    a0->field_68 = 0;
    if (a0->field_0 == 1)
    {
        v6 = 0;
        if (((char)a0->field_8.offset_of_next_item(a0->field_10, &v6, a0->field_70, a0->field_78) & 1))
        {
            do
            {
                a0->padding_18[64].push(v12, &g_14d9d60);
            } while (((char)a0->field_8.offset_of_next_item(a0->field_10, &v6, a0->field_70, a0->field_78) & 1));
        }
    }
    if (!(char)core::sync::atomic::atomic_load(&g_15a9860, 0))
        return;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3.to_flog_str(&g_15a9850);
    v6.into_iter(&v3);
    v0.spec_extend(&v6);
    v0.push(58, &g_14d9d78);
    v0.push(32, &g_14d9d78);
    v3 = 0;
    v4 = 4;
    v5 = 0;
    v7 = 4;
    v8 = a0->field_68;
    fish_printf::printf_impl::sprintf_locale(&v9, &v3, "Loaded %lu old itemspopulate_from_file_contentsError writing to temporary history file:Saving %lu items via rewriteSaving %lu items via appendingassertion failed: self.deleted_items.is_empty()Appending to history failed:Rewriting history failed:Saving hist", 20, &v7, 1);
    v9.unwrap(&g_14d9d78);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v7);
    memcpy(&v9, &v3, 16);
    v10 = 0;
    v3.to_flog_str(&v9);
    v7.into_iter(&v3);
    v0.spec_extend(&v7);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
    v0.push(10, &g_14d9d78);
    fish::flog::flog_impl(v1, 0);
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    return;
}
