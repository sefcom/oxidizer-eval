long long fish::builtins::fish_indent::PrettyPrinter::compute_gaps(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xe4], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0xe0]
    unsigned int v2;  // [bp-0xdc]
    void* v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd0]
    void* v5;  // [bp-0xc8]
    void* v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb8]
    void* v8;  // [bp-0xb0]
    struct_3 *v9;  // [bp-0xa8]
    char v10;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x90]
    unsigned long long v12;  // [bp-0x88]
    uint128_t v13;  // [bp-0x80]
    char v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x58]
    char v16;  // [bp-0x50]
    unsigned long long v18;  // rax
    struct_2 *v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v21;  // eax
    void* v23;  // rbx
    unsigned int v24;  // r12d
    unsigned long long v25;  // rax
    unsigned long long v27;  // rax

    v3 = 0;
    v4 = 4;
    v5 = 0;
    v14.new(a2 + 72, &g_14c2660);
    v12 = v15;
    memcpy(&v10, &v14, 16);
    while (true)
    {
        v18 = v10.next();
        if (!v18)
            break;
        v20 = v19->field_60(v18);
        if (v20)
        {
            v21 = v19->field_78(v20);
            if (a0.length((unsigned int)v19))
                v3.push(v21, (unsigned int)v19, &g_14c9218);
        }
    }
    core::ptr::drop_in_place<fish::ast::Traversal>(&v10);
    v3.push((unsigned int)a1.new(0), a2, &g_14c91a0);
    if (!4.is_sorted_by(0))
        core::panicking::panic("assertion failed: tok_ranges.is_sorted_by(|x, y| Some(range_compare(*x, *y)))Ranges out of order", 77, &g_14c91b8); /* do not return */
    v6 = 0;
    v7 = 4;
    v8 = 0;
    v16.into_iter(&v3);
    v0.next(&v16);
    if (v0 == 1)
    {
        v23 = 0;
        do
        {
            v24 = v1;
            if (v24.start() < v23)
            {
                v10 = &g_14c9190;
                v11 = 1;
                v12 = 8;
                v13 = 0;
                core::panicking::panic_fmt(&v10, &g_14c91d0); /* do not return */
            }
            if (v24.start() >= v23)
            {
                v25 = v24.start();
                if (v25 < v23)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c91e8); /* do not return */
                v6.push((unsigned int)v23.new(v25 - v23), a2, &g_14c9200);
            }
            v27 = v24.start();
            v23 = a0.length(v2) + v27;
            v0.next(&v16);
        } while ((v0 & 1));
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::key::Key>>(&v16);
    v9->field_10 = 0;
    v9->field_0 = *((int128_t *)&v6);
    return 0;
}
