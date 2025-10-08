void uu_pr::get_line_for_printing(unsigned long long a0, struct_0 *a1, unsigned long long a2[5], unsigned long long a3, unsigned long long a4, char a5, unsigned long long a6, unsigned long a7)
{
    char *v0;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x130]
    char *v2;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x120]
    void* v4;  // [bp-0x118], Other Possible Types: char *
    unsigned long long v5;  // [bp-0x110]
    int v6;  // [bp-0x108], Other Possible Types: char, unsigned long long
    int v7;  // [bp-0x100]
    unsigned long long v8;  // [bp-0xf8]
    unsigned long long v9;  // [bp-0xe8]
    unsigned long long v10;  // [bp-0xe0]
    unsigned long long v11;  // [bp-0xd8]
    int v12;  // [bp-0xc8], Other Possible Types: unsigned long long
    char *v13;  // [bp-0xc8]
    unsigned long long v14;  // [bp-0xc0]
    char *v15;  // [bp-0xb8]
    unsigned long long v16;  // [bp-0xb0]
    void* v17;  // [bp-0xa8]
    unsigned long long v18;  // [bp-0x98]
    void* v19;  // [bp-0x90]
    unsigned long long v20;  // [bp-0x88]
    void* v21;  // [bp-0x80]
    unsigned long v22;  // [bp-0x78]
    unsigned long long v23;  // [bp-0x70]
    unsigned long v24;  // [bp-0x68]
    char *v25;  // [bp-0x60]
    char *v26;  // [bp-0x58]
    char *v27;  // [bp-0x50]
    char v28;  // [bp-0x48]
    unsigned long long v30;  // r12
    unsigned long long v31;  // rbx
    unsigned long long v32;  // rax
    unsigned long v33;  // rax
    unsigned long long v34;  // rdi

    v18 = a3;
    v19 = 0;
    v20 = 1;
    v21 = 0;
    uu_pr::get_formatted_line_number(&v28, a1, a2[4], a4);
    v30 = &a2[((0 ^ a2[0]) & (0 ^ -(a2[0]))) >> 63 & 255];
    ((0 ^ a2[0]) & (0 ^ -(a2[0]))) >> 63.unwrap(v30);
    v9 = v30;
    v13 = &v28;
    v14 = <alloc::string::String as core::fmt::Display>::fmt;
    v15 = &v9;
    v16 = <&T as core::fmt::Display>::fmt;
    v0 = &g_456960;
    v1 = 2;
    v4 = 0;
    v2 = &v13;
    v3 = 2;
    v6.map_or_else(&v0);
    memcpy(&v9, &v6, 16);
    v31 = v8;
    v11 = v31;
    v22 = &a1->padding_0[168];
    v32 = v10.fold(v10 + v31);
    v33 = &a1->padding_0[192];
    if ((a1->field_143 & 1))
        v33 = &v19;
    if (a4 + 1 == a7)
        v33 = &v19;
    v23 = v32 * 7 + v31;
    v24 = v33;
    v25 = &v18;
    v26 = &v23;
    v27 = &v9;
    if ((a5 & 1))
    {
        uu_pr::get_line_for_printing::{{closure}}(&v0, &v25, a6);
        *((int128_t *)&v12) = *((int128_t *)&v1);
        v2 = v11;
        memcpy(&v0, &v9, 16);
        v34 = a0;
        if (v0 == 0x8000000000000000)
            goto LABEL_537b8c;
        *((int128_t *)&v7) = (int128_t)v12;
        v6 = v0;
        core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    else
    {
        v2 = v11;
        memcpy(&v0, &v9, 16);
        v34 = a0;
LABEL_537b8c:
        v8 = v2;
        *((int128_t *)&v6) = *((int128_t *)&v0);
    }
    v0 = &v22;
    v1 = <&T as core::fmt::Display>::fmt;
    v2 = &v6;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &v24;
    v5 = <&T as core::fmt::Display>::fmt;
    v12 = &g_458358;
    v14 = 3;
    v17 = 0;
    v15 = &v0;
    v16 = 3;
    v34.map_or_else(&v12);
    core::ptr::drop_in_place<alloc::string::String>(&v6);
    core::ptr::drop_in_place<alloc::string::String>(&v28);
    core::ptr::drop_in_place<alloc::string::String>(&v19);
    return;
}
