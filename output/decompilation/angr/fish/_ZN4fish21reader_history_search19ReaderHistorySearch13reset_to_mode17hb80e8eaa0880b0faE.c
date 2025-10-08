long long fish::reader_history_search::ReaderHistorySearch::reset_to_mode(struct_1 *a0, unsigned long long a1[3], unsigned long long a2, char a3, unsigned long a4)
{
    unsigned long long v0;  // [bp-0x120]
    int v1;  // [bp-0x118], Other Possible Types: char
    unsigned long long v2;  // [bp-0x108]
    char v3;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xf0]
    unsigned long long v5;  // [bp-0xe8]
    int v6;  // [bp-0xe0]
    char v7;  // [bp-0xd8]
    unsigned long long v9;  // r13
    unsigned long long v10;  // r12
    int v11;  // xmm0
    int v12;  // xmm1
    struct_2 *v13;  // rax
    struct_2 *v14;  // rbx
    int v15;  // xmm0

    v0 = a2;
    if (!a3)
    {
        v3 = &g_14e1430;
        v4 = 1;
        v5 = 8;
        *((uint128_t *)&v6) = 0;
        core::panicking::panic_fmt(&v3, &g_14e1440); /* do not return */
    }
    v9 = a1[1];
    v10 = a1[2];
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v3, v9, v10);
    v2 = v5;
    memcpy(&v1, &v3, 16);
    v3.from_iter(&v1);
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<widestring::utfstring::Utf32String>>(&a0->field_e0);
    v11 = *((int128_t *)&v3);
    v12 = *((int128_t *)&v5);
    a0->field_100 = *((int128_t *)&v7);
    *((void*)&a0->field_f0) = v12;
    *((void*)&a0->field_e0) = v11;
    v13 = 8.alloc_impl(32, 0);
    if (!v13)
        alloc::alloc::handle_alloc_error(8, 32); /* do not return */
    v14 = v13;
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v3, v9, v10);
    v2 = v5;
    v15 = *((int128_t *)&v3);
    memcpy(&v1, &v3, 16);
    v14->field_10 = v5;
    *((void*)&v14->field_0) = v1;
    v14->field_18 = 0;
    core::ptr::drop_in_place<alloc::vec::Vec<fish::reader_history_search::SearchMatch>>(a0);
    a0->field_0 = 1;
    a0->field_8 = v14;
    a0->field_10 = 1;
    a0->field_110 = 0;
    a0->field_120 = a3;
    a0->field_118 = a4;
    v3.new_with(a2, a1, (a3 == 2) + 1, (int)fish::reader_history_search::smartcase_flags(v9, v10) | 2, 0);
    core::ptr::drop_in_place<core::option::Option<fish::history::HistorySearch>>(&a0->padding_18);
    return memcpy(&a0->padding_18, &v3, 200);
}
