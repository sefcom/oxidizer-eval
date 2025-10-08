long long fish::builtins::fish_indent::PrettyPrinter::new(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    int v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x128]
    char v2;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x118]
    unsigned long long v4;  // [bp-0x110]
    int v5;  // [bp-0x108], Other Possible Types: char
    unsigned long long v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xf0]
    unsigned long long v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    void* v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xd0]
    int v12;  // [bp-0xc8]
    int v13;  // [bp-0xc0]
    unsigned long long v14;  // [bp-0xb8]
    int v15;  // [bp-0xb0]
    unsigned long long v16;  // [bp-0xb0]
    int v17;  // [bp-0xa8]
    unsigned long long v18;  // [bp-0xa0]
    uint128_t v19;  // [bp-0x98]
    unsigned long long v20;  // [bp-0x98]
    unsigned long long v21;  // [bp-0x88]
    void* v22;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x78]
    unsigned long long v24;  // [bp-0x70]
    uint128_t v25;  // [bp-0x68]
    char v26;  // [bp-0x58]
    unsigned long long v27;  // [bp-0x50]
    int v28;  // [bp-0x40], Other Possible Types: char
    char v29;  // [bp-0x30]
    int v31;  // xmm0

    v28.new(a3 + 72, &g_14c2660);
    if (a4)
        fish::parse_util::parse_util_compute_indents(&v5, a1, a2);
    else
        v5.from_elem(a2, &g_14c9178);
    v1 = *((long long *)&v29);
    v31 = v28;
    v0 = v28;
    memcpy(&v2, &v5, 16);
    v4 = v6;
    v27 = a3;
    v5 = v0;
    v6 = v1;
    v7 = v2;
    v8 = v3;
    v9 = v4;
    v10 = 0;
    v11 = 4;
    *((uint128_t *)&v12) = 0;
    v14 = 4;
    *((uint128_t *)&v15) = 0;
    v18 = 8;
    v19 = 0;
    v21 = 8;
    v22 = 0;
    v23 = a1;
    v24 = a2;
    v25 = 0;
    v26 = 1;
    v0.compute_gaps(a2, a3);
    core::ptr::drop_in_place<alloc::vec::Vec<libc::unix::pollfd>>(0, 4);
    v16 = v1;
    v13 = v0;
    v0.compute_multi_line_brace_statement_locations(&v5);
    core::ptr::drop_in_place<alloc::vec::Vec<f64>>(0, 8);
    v20 = v1;
    v17 = v0;
    v0.compute_preferred_semi_locations(&v5);
    core::ptr::drop_in_place<alloc::vec::Vec<f64>>(0, 8);
    v22 = v1;
    memcpy(&(char)v19, &v0, 16);
    return memcpy(a0, &v5, 192);
}
