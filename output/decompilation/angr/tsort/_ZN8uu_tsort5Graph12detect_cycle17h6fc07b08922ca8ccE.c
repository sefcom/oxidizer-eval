void uu_tsort::Graph::detect_cycle(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp-0xc9]
    void* v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    void* v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    unsigned long long v5;  // [bp-0xa8]
    void* v6;  // [bp-0xa0]
    int v7;  // [bp-0x98], Other Possible Types: char
    int v8;  // [bp-0x88]
    char v9;  // [bp-0x78]
    int v10;  // [bp-0x68]
    int v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16[2];  // rax

    v1 = 0;
    v2 = 8;
    v3 = 0;
    v7.iter(&a1->padding_0[24]);
    v12 = *((long long *)&v9);
    v11 = v8;
    v10 = v7;
    while (true)
    {
        v14 = v10.next();
        if (!v14)
            break;
        v1.push(v14);
    }
    if (v3 >= 2)
    {
        if (v3 < 21)
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(8, v3, 1);
        else
            core::slice::sort::unstable::ipnsort(8, v3, &v0);
    }
    v7.default();
    memcpy(&v12, &v9, 16);
    v11 = v8;
    v10 = v7;
    v4 = a1->field_30.with_capacity_in(8, 16, &g_576340);
    v5 = v15;
    v6 = 0;
    v7.into_iter(&v1);
    if (v7.next())
    {
        do
        {
            if (!v10.get_inner(v16) && (char)a1.dfs(v16[0], v16[1], &v10, &v4))
            {
                a0->field_10 = 0;
                a0->field_0 = *((int128_t *)&v4);
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&&str>>(&v7);
                core::ptr::drop_in_place<std::collections::hash::set::HashSet<&str>>(&v10);
                return;
            }
            v16 = v7.next();
        } while (v16);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&&str>>(&v7);
    core::panicking::panic("internal error: entered unreachable codetsort-error-is-dirtsort-error-oddcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_", 40, &g_576358); /* do not return */
}
