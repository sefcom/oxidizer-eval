long long fish::reader::ReaderData::mouse_left_click(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    void* v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xa8]
    char v5;  // [bp-0x98]
    char v6;  // [bp-0x80]
    char v7;  // [bp-0x60]
    char v8;  // [bp-0x48]
    unsigned long long v10;  // 4096
    unsigned long long v11;  // 4096
    unsigned long long v14;  // rax
    unsigned int v15;  // rdx

    v3 = a1;
    v4 = a3;
    v10 = a3;
    v11 = a1;
    if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v5.to_flog_str(&g_15a99a0);
        v6.into_iter(&v5);
        v0.spec_extend(&v6);
        v0.push(58, &g_14dfdc0);
        v0.push(32, &g_14dfdc0);
        v7.to_vec("Cursor is at; received left mouse click atassertion failed: !autosuggestion.is_empty()assertion failed: autosuggestion.len() >= line_range.len()assertion failed: string_prefixes_string_case_insensitive(line, autosuggestion)assertion failed: query.is_none()", 12);
        v6.into_iter(&v7);
        v0.spec_extend(&v6);
        v0.push(32, &g_14dfdc0);
        v5.to_flog_str(&v3);
        v6.into_iter(&v5);
        v0.spec_extend(&v6);
        v0.push(32, &g_14dfdc0);
        v8.to_vec("; received left mouse click atassertion failed: !autosuggestion.is_empty()assertion failed: autosuggestion.len() >= line_range.len()assertion failed: string_prefixes_string_case_insensitive(line, autosuggestion)assertion failed: query.is_none()forcedhighli", 30);
        v6.into_iter(&v8);
        v0.spec_extend(&v6);
        v0.push(32, &g_14dfdc0);
        v5.to_flog_str(&v4);
        v6.into_iter(&v5);
        v0.spec_extend(&v6);
        v0.push(10, &g_14dfdc0);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        v10 = v4;
        v11 = v3;
    }
    v14 = a0 + 920.offset_in_cmdline_given_cursor(v10, a4, v11, a2);
    if (v14 - 1 < 2)
    {
        return a0.update_buff_pos((int)a0.active_edit_line() & 1, 1, v15);
    }
    else if (v14)
    {
        if ((int)a0[352] == 1 && (long long)a0[360] == v15)
            return v14;
        *((unsigned long long *)&a0[352]) = 1;
        *((unsigned int *)&a0[360]) = v15;
        return a0.pager_selection_changed();
    }
    else
    {
        return v14;
    }
}
