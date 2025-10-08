void fish::reader::history_pager_search(unsigned long long a0, unsigned long long *a1, unsigned int a2, char a3, unsigned long long a4, unsigned int *a5, unsigned long long a6)
{
    unsigned long v0;  // [bp-0x250]
    int v1;  // [bp-0x238]
    unsigned long long v2;  // [bp-0x228]
    struct_0 *v3;  // [bp-0x218]
    unsigned long long v4;  // [bp-0x210]
    void* v5;  // [bp-0x208]
    void* v6;  // [bp-0x208]
    unsigned long long v7;  // [bp-0x200]
    unsigned long long v8;  // [bp-0x1f8]
    void* v9;  // [bp-0x1f0]
    int v10;  // [bp-0x1e8], Other Possible Types: unsigned long
    unsigned long long v11;  // [bp-0x1d8]
    unsigned long long v12;  // [bp-0x1c8]
    int v13;  // [bp-0x1c0], Other Possible Types: char
    char v14;  // [bp-0x1b0]
    char v15;  // [bp-0xf8]
    char v16;  // [bp-0x40]
    unsigned long v17;  // r15
    unsigned long long v18;  // rdx
    void* v19;  // rdi
    unsigned long long v20;  // cc_dep1
    unsigned long long v21;  // cc_dep2
    unsigned long v22;  // cc_ndep
    unsigned int v24;  // ebx
    char v25;  // al
    char v28;  // al
    unsigned long long v29[3];  // rax
    unsigned long long v30;  // rbx
    unsigned long v31;  // rdi

    v17 = a2;
    fish::termsize::termsize_last();
    v19 = ((v18 >> 63) + v18 >> 1) - 2.max(12);
    v20 = v19 >> 63;
    v21 = v19 >> 62;
    v19 >> 63.unwrap(&g_14e0bf0);
    v5 = v19;
    v7 = v5.with_capacity_in(8, 56, &g_14e0c08);
    v8 = v18;
    v9 = 0;
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*(a1)) + 1, 0, _ccall(36, v20, v21, v22))))
    {
        v0 = *(a1);
        v10 = v0;
        v13.to_vec(a5, a6);
        v2 = *((long long *)&v14);
        v1 = v13;
        v15.new_with(v0, &v1, 4, fish::reader_history_search::smartcase_flags(a5, a6), a4);
        v24 = v17;
        if (!(char)v15.go_to_next_match(v24))
        {
            v25 = fish::parse_util::parse_util_contains_wildcards(a5, a6);
            if (!v25)
            {
                if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v0) + 1, 0, _ccall(17, (unsigned long long)v25, 0, _ccall(36, v20, v21, v22)))))
                {
                    v10 = v0;
                    v13.to_vec(a5, a6);
                    v2 = *((long long *)&v14);
                    v1 = v13;
                    v13.new_with(v0, &v1, 6, fish::reader_history_search::smartcase_flags(a5, a6), a4);
                    core::ptr::drop_in_place<fish::history::HistorySearch>(&v15);
                    memcpy(&v15, &v13, 200);
                    v15.go_to_next_match(v24);
                }
                else
                {
                    [D] Unsupported jumpkind Ijk_NoDecode at address 20993541()
                }
            }
        }
        if (!(char)v17)
            v6 = v5;
        else
            v6 = 0;
        v15.search_forward(v6);
        v4 = *((long long *)&v16);
        v28 = v15.go_to_next_match(1);
        for (v12 = *((long long *)&v16); (v28 & 1) && v9 < v5; v28 = v15.go_to_next_match(1))
        {
            v29 = v15.current_item();
            v13.to_vec(v29[1], v29[2]);
            v11 = *((long long *)&v14);
            v10 = v13;
            v13.to_vec(4, 0);
            v2 = *((long long *)&v14);
            v1 = v13;
            v13.new(&v10, &v1, 0, 0, 168);
            v7.push(&v13, &g_14e0c20);
        }
        v30 = *((long long *)&v16);
        if (!v9)
        {
            v31 = v0 + 16;
            if (v4 || v30 != v31.size() + 1)
            {
                fish::reader::history_pager_search(a0, a1, 0, 7, v31.size() + 1, a5, a6);
                core::ptr::drop_in_place<fish::history::HistorySearch>(&v15);
                core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&v7);
                return;
            }
        }
        v3->field_10 = v9;
        v3->field_0 = *((int128_t *)&v7);
        v3->field_18 = v4;
        v3->field_20 = v30;
        v3->field_28 = v12;
        v3->field_30 = a3;
        core::ptr::drop_in_place<fish::history::HistorySearch>(&v15);
        return;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20993541()
}
