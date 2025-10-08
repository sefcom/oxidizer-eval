void uu_tsort::Graph::detect_cycle(struct_1 *a0, struct_0 *a1)
{
    char v0;  // [bp-0xc9]
    void* v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    void* v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    unsigned long long v5;  // [bp-0xa8]
    void* v6;  // [bp-0xa0]
    int v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x90]
    int v9;  // [bp-0x88]
    char v10;  // [bp-0x78]
    int v11;  // [bp-0x60], Other Possible Types: char
    int v12;  // [bp-0x50]
    char v13;  // [bp-0x40]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    unsigned long long v17[2];  // rax

    v1 = 0;
    v2 = 8;
    v3 = 0;
    v11.iter(&a1->padding_0[24]);
    while (true)
    {
        v15 = v11.next();
        if (!v15)
            break;
        v1.push(v15);
    }
    if (v3 >= 2)
    {
        if (v3 < 21)
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v2, v3, 1);
        else
            core::slice::sort::unstable::ipnsort(v2, v3, &v0);
    }
    v11.default();
    memcpy(&v10, &v13, 16);
    v9 = v12;
    v7 = v11;
    v4 = a1->field_30.with_capacity_in(8, 16, &g_4eb408);
    v5 = v16;
    v6 = 0;
    v11.into_iter(&v1);
    if (v11.next())
    {
        do
        {
            if (!(char)v7.get_inner(v17) && (char)a1.dfs(v17[0], v17[1], &(char)v7, &v4))
            {
                a0->field_10 = 0;
                a0->field_0 = *((int128_t *)&v4);
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&&str>>(&v11);
                core::ptr::drop_in_place<std::collections::hash::set::HashSet<&str>>((long long)v7, v8);
                return;
            }
            v17 = v11.next();
        } while (v17);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&&str>>(&v11);
    core::panicking::panic("internal error: entered unreachable code: read error: Is a directory: input contains an odd number of tokens: input contains a loop:", 40, &g_4eb420); /* do not return */
}
