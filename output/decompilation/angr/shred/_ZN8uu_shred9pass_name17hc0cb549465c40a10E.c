long long uu_shred::pass_name(unsigned long long a0, char *a1)
{
    struct struct_0 v0[8];  // [bp-0x120], Other Possible Types: unsigned long long
    char *v1;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x110]
    char *v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0x100]
    char *v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xf0]
    unsigned long long v7;  // [bp-0xe8]
    struct struct_0 v8[8];  // [bp-0xe0]
    struct struct_0 v9[16];  // [bp-0xd8]
    void* v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xc0]
    void* v12;  // [bp-0xb8]
    unsigned long long v13;  // [bp-0xb0]
    char v14;  // [bp-0xa8]
    unsigned long long v15;  // [bp-0xa0]
    void* v16;  // [bp-0x90]
    unsigned long long v17;  // [bp-0x88]
    void* v18;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x78]
    char v20;  // [bp-0x70]
    unsigned long long v21;  // [bp-0x68]
    void* v22;  // [bp-0x58]
    unsigned long long v23;  // [bp-0x50]
    void* v24;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x40]
    char v26;  // [bp-0x38]
    char *v27;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x28]
    char *v29;  // [bp-0x20]
    unsigned long long v30;  // [bp-0x18]
    char *v31;  // [bp-0x10]
    unsigned long long v32;  // [bp-0x8]

    if (*(a1) == 2)
    {
        return a0.to_vec("random", 6);
    }
    else if ((*(a1) & 1))
    {
        v7 = v0;
        *((char **)&v8[0]) = a1 + 2;
        *((char **)&v0[0]) = a1 + 3;
        v1 = &v7;
        v2 = <&T as core::fmt::LowerHex>::fmt;
        v3 = &v8[0].field_0;
        v4 = <&T as core::fmt::LowerHex>::fmt;
        v5 = &v0[0].field_0;
        v6 = <&T as core::fmt::LowerHex>::fmt;
        *((unsigned long long *)&v9[0]) = 2;
        v10 = 0;
        v11 = 2;
        v12 = 0;
        v13 = 34359738400;
        v14 = 3;
        v15 = 2;
        v16 = 0;
        v17 = 2;
        v18 = 1;
        v19 = 34359738400;
        v20 = 3;
        v21 = 2;
        v22 = 0;
        v23 = 2;
        v24 = 2;
        v25 = 34359738400;
        v26 = 3;
        v27 = &g_417488;
        v28 = 3;
        v31 = &v9[0].field_0;
        v32 = 3;
        v29 = &v1;
        v30 = 3;
        return a0.map_or_else(&v27);
    }
    else
    {
        v0 = v7;
        v27 = &v0;
        v28 = <&T as core::fmt::LowerHex>::fmt;
        *((unsigned long long *)&v9[0]) = 2;
        v10 = 0;
        v11 = 2;
        v12 = 0;
        v13 = 34359738400;
        v14 = 3;
        v15 = 2;
        v16 = 0;
        v17 = 2;
        v18 = 0;
        v19 = 34359738400;
        v20 = 3;
        v21 = 2;
        v22 = 0;
        v23 = 2;
        v24 = 0;
        v25 = 34359738400;
        v26 = 3;
        v1 = &g_417488;
        v2 = 3;
        v5 = &v9[0].field_0;
        v6 = 3;
        v3 = &v27;
        v4 = 1;
        return a0.map_or_else(&v1);
    }
}
