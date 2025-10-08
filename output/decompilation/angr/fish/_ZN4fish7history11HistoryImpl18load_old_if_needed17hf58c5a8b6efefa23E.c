void fish::history::HistoryImpl::load_old_if_needed(struct_0 *a0)
{
    void* v0;  // [bp-0x150]
    unsigned long long v1;  // [bp-0x148]
    void* v2;  // [bp-0x140]
    unsigned long long v3;  // [bp-0x138]
    int v4;  // [bp-0x130], Other Possible Types: char
    void* v5;  // [bp-0x120]
    int v6;  // [bp-0x118], Other Possible Types: char
    char v7;  // [bp-0x108]
    int v8;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v9;  // [bp-0xe8]
    int v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xd0]
    void* v12;  // [bp-0xc8]
    int v13;  // [bp-0xb8], Other Possible Types: char
    char v14;  // [bp-0xa8]
    char v15;  // [bp-0x88]
    int v16;  // [bp-0x80], Other Possible Types: char
    int v17;  // [bp-0x70]
    int v18;  // [bp-0x60]
    unsigned long v19;  // [bp-0x50]
    char v20;  // [bp-0x48]
    char v21;  // [bp-0x38]
    unsigned long long v23;  // r14

    if (a0->padding_f0[5])
        return;
    a0->padding_f0[5] = 1;
    v14.new("load_old", 8);
    v4.history_file_path(*((long long *)&a0->padding_18[16]), a0->field_30);
    v23 = *((long long *)&v4);
    if (v23 >= 9223372036854775810)
    {
        v12 = v5;
        v10 = v4;
        fish::fs::lock_and_load(&v15, v11, v5);
        if (*((int *)&v15) == 1)
        {
            v3 = *((long long *)&v16);
            if ((char)core::sync::atomic::atomic_load(&g_15a9890, 0))
            {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                v8.to_flog_str(&g_15a9880);
                v6.into_iter(&v8);
                v0.spec_extend(&v6);
                v0.push(58, &g_14d9d90);
                v0.push(32, &g_14d9d90);
                v21.to_vec(&g_54c5e8, 32);
                v6.into_iter(&v21);
                v0.spec_extend(&v6);
                v0.push(32, &g_14d9d90);
                v6.spec_to_string(&v3);
                v9 = *((long long *)&v7);
                v8 = v6;
                v6.into_iter(&v8);
                v0.spec_extend(&v6);
                v0.push(10, &g_14d9d90);
                fish::flog::flog_impl(v1, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            }
            core::ptr::drop_in_place<std::io::error::Error>(&v3);
        }
        else
        {
            memcpy(&v13, &v20, 16);
            core::ptr::drop_in_place<core::option::Option<fish::history::file::HistoryFileContents>>(a0);
            a0->field_0 = 1;
            *((void*)&(&a0->field_0)[1]) = v13;
            *((void*)&a0->padding_3c[116]) = v16;
            *((void*)((char *)&a0->field_b8 + 8)) = v17;
            *((void*)((char *)&a0->field_c8 + 8)) = v18;
            *((unsigned long *)((char *)&a0->field_d8 + 8)) = v19;
            v6.new("populate_from_file_contentsError writing to temporary history file:Saving %lu items via rewriteSaving %lu items via appendingassertion failed: self.deleted_items.is_empty()Appending to history failed:Rewriting history failed:Saving history failed:save vacu", 27);
            a0.populate_from_file_contents();
            core::ptr::drop_in_place<fish::history::TimeProfiler>(&v6);
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
    }
    core::ptr::drop_in_place<fish::history::TimeProfiler>(&v14);
    if (v23 != 9223372036854775809)
        return;
    core::ptr::drop_in_place<core::result::Result<core::option::Option<widestring::utfstring::Utf32String>,std::io::error::Error>>(&v4);
    return;
}
