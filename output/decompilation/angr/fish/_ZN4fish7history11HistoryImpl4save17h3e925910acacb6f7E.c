long long fish::history::HistoryImpl::save(struct_0 *a0, char a1)
{
    void* v0;  // [bp-0x100]
    unsigned long long v1;  // [bp-0xf8]
    void* v2;  // [bp-0xf0]
    int v3;  // [bp-0xe8], Other Possible Types: char
    int v4;  // [bp-0xe8]
    unsigned long long v5;  // [bp-0xd8]
    int v6;  // [bp-0xc8], Other Possible Types: char
    int v7;  // [bp-0xc8]
    int v8;  // [bp-0xb8], Other Possible Types: char
    char v9;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v10;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v11;  // [bp-0x90]
    unsigned long long v12;  // [bp-0x88]
    int v13;  // [bp-0x80]
    void* v14;  // [bp-0x78]
    char v15;  // [bp-0x70]
    char v16;  // [bp-0x58]
    char v17;  // [bp-0x40]
    void* v19;  // r15
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax

    if (a0->field_b0 >= a0->field_50 && !a0->field_98)
        return a0->field_b0;
    a0.compact_new_items();
    if (!*((long long *)&a0->field_38))
    {
        a0->field_b0 = a0->field_50;
        a0->padding_58[40].clear();
        return a0.clear_file_state();
    }
    v9.history_file_path(a0->field_30, *((long long *)&a0->field_38));
    if (v9 == 9223372036854775809)
    {
        v11 = *((long long *)&v10);
        if (!(char)core::sync::atomic::atomic_load(&g_15a9860, 0))
            return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(&v11);
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3.to_flog_str(&g_15a9850);
        v6.into_iter(&v3);
        v0.spec_extend(&v6);
        v0.push(58, &g_14d9ec8);
        v0.push(32, &g_14d9ec8);
        v15.to_vec("Saving history failed:save vacuumsave no vacuumassertion failed: self.first_unwritten_new_item_index <= self.new_items.len()assertion failed: self.disable_automatic_save_counter > 0", 22);
        v6.into_iter(&v15);
        v0.spec_extend(&v6);
        v0.push(32, &g_14d9ec8);
        v6.spec_to_string(&v11);
        v5 = *((long long *)&v8);
        v3 = v6;
        v6.into_iter(&v3);
        v0.spec_extend(&v6);
        v0.push(10, &g_14d9ec8);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(&v11);
    }
    else if (!((char)(((0 ^ v9) & (0 ^ -(v9))) >> 63)))
    {
        v12 = v9;
        v13 = v10;
        v19 = v14;
        if (!a1 && !a0->field_98)
        {
            v20 = a0.save_internal_via_appending((long long)v13, v19);
            if (!v20)
                return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
            v9 = v20;
            if ((char)core::sync::atomic::atomic_load(&g_15a9860, 0))
            {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                (char)v3.to_flog_str(&g_15a9850);
                (char)v6.into_iter(&(char)v3);
                v0.spec_extend(&(char)v6);
                v0.push(58, &g_14d9e98);
                v0.push(32, &g_14d9e98);
                v16.to_vec("Appending to history failed:Rewriting history failed:Saving history failed:save vacuumsave no vacuumassertion failed: self.first_unwritten_new_item_index <= self.new_items.len()assertion failed: self.disable_automatic_save_counter > 0", 28);
                (char)v6.into_iter(&v16);
                v0.spec_extend(&(char)v6);
                v0.push(32, &g_14d9e98);
                (char)v6.spec_to_string(&v9);
                v5 = *((long long *)&v8);
                v4 = v7;
                (char)v6.into_iter(&v4);
                v0.spec_extend(&(char)v6);
                v0.push(10, &g_14d9e98);
                fish::flog::flog_impl(v1, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            }
            core::ptr::drop_in_place<std::io::error::Error>(&v9);
        }
        v21 = a0.save_internal_via_rewrite((long long)v13, v19);
        if (!v21)
            return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
        v9 = v21;
        if ((char)core::sync::atomic::atomic_load(&g_15a9860, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v4.to_flog_str(&g_15a9850);
            v7.into_iter(&v4);
            v0.spec_extend(&v7);
            v0.push(58, &g_14d9eb0);
            v0.push(32, &g_14d9eb0);
            v17.to_vec("Rewriting history failed:Saving history failed:save vacuumsave no vacuumassertion failed: self.first_unwritten_new_item_index <= self.new_items.len()assertion failed: self.disable_automatic_save_counter > 0", 25);
            v7.into_iter(&v17);
            v0.spec_extend(&v7);
            v0.push(32, &g_14d9eb0);
            v7.spec_to_string(&v9);
            v5 = (long long)v8;
            v3 = v7;
            v7.into_iter(&v3);
            v0.spec_extend(&v7);
            v0.push(10, &g_14d9eb0);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        core::ptr::drop_in_place<std::io::error::Error>(&v9);
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
    }
    else
    {
        core::option::unwrap_failed(&g_14d9e80); /* do not return */
    }
}
