long long just::argument_parser::ArgumentParser::parse_arguments(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    struct_0 *v0;  // [bp-0x148]
    void* v1;  // [bp-0x140]
    unsigned long long v2;  // [bp-0x138]
    void* v3;  // [bp-0x130]
    unsigned long long v4;  // [bp-0x128]
    unsigned long long v5;  // [bp-0x120]
    unsigned long long v6;  // [bp-0x118]
    void* v7;  // [bp-0x110]
    int v8;  // [bp-0x108]
    int v9;  // [bp-0x101]
    int v10;  // [bp-0xf8]
    int v11;  // [bp-0xf1]
    int v12;  // [bp-0xe8]
    int v13;  // [bp-0xe1]
    unsigned long long v14;  // [bp-0xd9]
    char v15;  // [bp-0xd0]
    char v16;  // [bp-0xcf]
    int v17;  // [bp-0xc8]
    int v18;  // [bp-0xbf]
    int v19;  // [bp-0xb8]
    int v20;  // [bp-0xaf]
    unsigned long long v21;  // [bp-0xa8]
    unsigned long long v22;  // [bp-0xa0]
    int v23;  // [bp-0x98]
    int v24;  // [bp-0x88]
    int v25;  // [bp-0x78]
    char v26;  // [bp-0x68]
    char v27;  // [bp-0x58]
    char v28;  // [bp-0x48]
    unsigned long long v30;  // rcx
    int v31;  // xmm0
    int v32;  // xmm1
    int v33;  // xmm0
    int v34;  // xmm1
    int v35;  // xmm0
    int v36;  // xmm1

    v1 = 0;
    v2 = 8;
    v3 = 0;
    v4 = a2;
    v5 = v30;
    v7 = 0;
    v6 = a1;
    while (true)
    {
        v15.parse_group(&v4);
        if (v15 != 56)
        {
            v14 = v22;
            v33 = *((int128_t *)&v16);
            v34 = (int128_t)v18;
            *((int128_t *)&v12) = (int128_t)v20;
            v10 = v34;
            v8 = v33;
            *((void*)&v0->field_21[15]) = v25;
            *((void*)&v0->padding_20[0]) = v24;
            *((void*)&v0->field_11[7]) = v23;
            *((unsigned long long *)&v0->field_8[24]) = v14;
            v35 = (int128_t)v8;
            v36 = (int128_t)v10;
            *((int128_t *)&v0->field_8[9]) = (int128_t)v12;
            *((void*)&v0->field_1[16]) = v36;
            *((void*)&v0->field_1[0]) = v35;
            v0->field_0 = v15;
            return core::ptr::drop_in_place<alloc::vec::Vec<just::argument_parser::ArgumentGroup>>(&v1);
        }
        v31 = (int128_t)v17;
        v32 = (int128_t)v19;
        *((int128_t *)&v13) = *((int128_t *)&v21);
        v11 = v32;
        v9 = v31;
        memcpy(&v26, &v9, 16);
        memcpy(&v27, &v11, 16);
        memcpy(&v28, &v13, 16);
        v1.push(&v26);
        if (!v30)
        {
            *((unsigned long long *)&v0->field_8[0]) = 0;
            *((int128_t *)&v0->field_1[7]) = *((int128_t *)&v1);
            v0->field_0 = 56;
            return 0;
        }
    }
}
