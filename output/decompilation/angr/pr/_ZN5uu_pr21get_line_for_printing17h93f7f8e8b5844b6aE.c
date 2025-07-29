void uu_pr::get_line_for_printing(struct_1 *a0, struct_0 *a1, unsigned long long a2[5], unsigned long long a3, unsigned long long a4, char a5, unsigned long long a6, unsigned long a7)
{
    char *v0;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x160]
    char *v2;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x150]
    void* v4;  // [bp-0x148], Other Possible Types: char *
    unsigned long long v5;  // [bp-0x140]
    int v6;  // [bp-0x138], Other Possible Types: char, unsigned long long
    int v7;  // [bp-0x130]
    unsigned long long v8;  // [bp-0x128]
    char v9;  // [bp-0x118]
    unsigned long long v10;  // [bp-0x110]
    unsigned long long v11;  // [bp-0x108]
    int v12;  // [bp-0xf8], Other Possible Types: unsigned long long
    char *v13;  // [bp-0xf8]
    unsigned long long v14;  // [bp-0xf0]
    char *v15;  // [bp-0xe8]
    unsigned long long v16;  // [bp-0xe0]
    void* v17;  // [bp-0xd8]
    unsigned long long v18;  // [bp-0xc8]
    void* v19;  // [bp-0xc0]
    unsigned long long v20;  // [bp-0xb8]
    void* v21;  // [bp-0xb0]
    unsigned long v22;  // [bp-0xa8]
    unsigned long long v23;  // [bp-0xa0]
    char *v24;  // [bp-0x98]
    char v25;  // [bp-0x90]
    unsigned long long v26;  // [bp-0x80]
    int v27;  // [bp-0x78], Other Possible Types: char
    unsigned long v28;  // [bp-0x68]
    char *v29;  // [bp-0x60]
    char *v30;  // [bp-0x58]
    char *v31;  // [bp-0x50]
    char v32;  // [bp-0x48]
    unsigned long long v33;  // rbp
    unsigned long long v34;  // rax
    char *v35;  // rax

    v18 = a3;
    v19 = 0;
    v20 = 1;
    v21 = 0;
    uu_pr::get_formatted_line_number(&v32, a1, a2[4], a4);
    ((0 ^ a2[0]) & (0 ^ -(a2[0]))) >> 63.unwrap(&a2[((0 ^ a2[0]) & (0 ^ -(a2[0]))) >> 63 & 255]);
    v13 = &v32;
    v14 = <alloc::string::String as core::fmt::Display>::fmt;
    v15 = &v6;
    v16 = <&T as core::fmt::Display>::fmt;
    v0 = &g_489b10;
    v1 = 2;
    v4 = 0;
    v2 = &v13;
    v3 = 2;
    v25.map_or_else(&v0);
    memcpy(&v9, &v25, 16);
    v33 = v26;
    v11 = v33;
    v22 = &a1->padding_0[168];
    v34 = v10.fold(v10 + v33);
    v35 = &a1->padding_0[192];
    if ((a1->field_143 & 1))
        v35 = &v19;
    v23 = v34 * 7 + v33;
    if (a4 + 1 == a7)
        v35 = &v19;
    v24 = v35;
    v29 = &v18;
    v30 = &v23;
    v31 = &v9;
    if ((a5 & 1))
    {
        uu_pr::get_line_for_printing::{{closure}}(&v0, &v29, a6);
        *((int128_t *)&v12) = *((int128_t *)&v1);
        v2 = v11;
        memcpy(&v0, &v9, 16);
        if (v0 == 0x8000000000000000)
            goto LABEL_5af64d;
        *((int128_t *)&v7) = (int128_t)v12;
        v6 = v0;
        ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    else
    {
        v2 = v26;
        memcpy(&v0, &v25, 16);
LABEL_5af64d:
        v8 = v2;
        *((int128_t *)&v6) = *((int128_t *)&v0);
    }
    v0 = &v22;
    v1 = <&T as core::fmt::Display>::fmt;
    v2 = &v6;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &v24;
    v5 = <&T as core::fmt::Display>::fmt;
    v12 = &g_48a030;
    v14 = 3;
    v17 = 0;
    v15 = &v0;
    v16 = 3;
    v27.map_or_else(&v12);
    ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v6);
    a0->field_10 = v28;
    *((void*)&a0->field_0) = v27;
    ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v32);
    ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v19);
    return;
}
