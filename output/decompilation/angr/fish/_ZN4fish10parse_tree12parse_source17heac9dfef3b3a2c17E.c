long long fish::parse_tree::parse_source(struct_0 *a0, unsigned int a1, unsigned long long a2)
{
    int v0;  // [bp-0x178]
    unsigned long v1;  // [bp-0x168]
    int v2;  // [bp-0x160]
    int v3;  // [bp-0x150]
    int v4;  // [bp-0x140]
    int v5;  // [bp-0x138]
    char v6;  // [bp-0x130]
    char v7;  // [bp-0x128]
    char v8;  // [bp-0x120]
    char v9;  // [bp-0x118]
    int v10;  // [bp-0x110]
    unsigned long long v11;  // [bp-0x108]
    int v12;  // [bp-0x100], Other Possible Types: char
    int v13;  // [bp-0xf0]
    int v14;  // [bp-0xe0]
    char v15;  // [bp-0xd0]
    char v16;  // [bp-0xc0]
    char v17;  // [bp-0xb0]
    char v18;  // [bp-0xa8]
    unsigned long long v19;  // [bp-0xa0]
    unsigned long long v20;  // [bp-0x98]
    char v21;  // [bp-0x90]
    unsigned long v22;  // [bp-0x80]
    unsigned long long v23;  // [bp-0x78]
    char v24;  // [bp-0x70]
    char v25;  // [bp-0x60]
    int v26;  // [bp-0x50]
    char v27;  // [bp-0x40]
    char v28;  // [bp-0x30]
    unsigned long long v29;  // [bp-0x20]
    unsigned long v31;  // rbp

    v31 = a1;
    fish::ast::parse(&v12, a0->field_0[1], a0->field_8, v31 & 4294967295, a2);
    if (!((char)v31 & 1) && v18)
    {
        core::ptr::drop_in_place<fish::ast::Ast>(&v12);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
        return 0;
    }
    *((int128_t *)&v10) = *((int128_t *)&v17);
    memcpy(&v8, &v16, 16);
    memcpy(&v6, &v15, 16);
    v4 = v14;
    v3 = v13;
    v2 = v12;
    *((unsigned long long [2])&v0) = a0->field_0;
    v1 = a0->field_8;
    v19 = 1;
    v20 = 1;
    memcpy(&v24, &v2, 16);
    memcpy(&v25, &(char)v3, 16);
    v26 = v5;
    memcpy(&v27, &v7, 16);
    memcpy(&v28, &v9, 16);
    memcpy(&v21, &v0, 16);
    v22 = v1;
    v23 = (long long)v2;
    v29 = v11;
    return v19.new();
}
