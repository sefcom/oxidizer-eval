double bat::syntax_mapping::make_glob_matcher(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0x108]
    int v1;  // [bp-0x101]
    char v2;  // [bp-0x100]
    char v3;  // [bp-0xf8]
    int v4;  // [bp-0xf1]
    char v5;  // [bp-0xf0]
    int v6;  // [bp-0xe8]
    char v7;  // [bp-0xe1]
    char v8;  // [bp-0xe0]
    unsigned long v9;  // [bp-0xd9]
    char v10;  // [bp-0xd0]
    char v11;  // [bp-0xc8]
    unsigned long long v12;  // [bp-0xc0]
    int v13;  // [bp-0xb8]
    int v14;  // [bp-0xa8], Other Possible Types: char
    int v15;  // [bp-0x98], Other Possible Types: char
    char v16;  // [bp-0x88]
    unsigned long long v17;  // [bp-0x70]
    unsigned long long v18;  // [bp-0x68]
    unsigned int v19;  // [bp-0x60]
    unsigned long long v20;  // [bp-0x58]
    char v21;  // [bp-0x50]
    int v22;  // [bp-0x40]
    char v23;  // [bp-0x30]
    char v24;  // [bp-0x20]
    unsigned long long v25;  // [bp-0x10]
    int v27;  // xmm0
    int v28;  // xmm1
    int v29;  // xmm2
    int v30;  // xmm0
    int v31;  // xmm1
    int v32;  // xmm2

    v17 = a1;
    v18 = a2;
    v19 = 65793;
    v0.build(&v17);
    memcpy(&v14, &v2, 16);
    memcpy(&v15, &v5, 16);
    memcpy(&v16, &v8, 16);
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
    {
        v25 = v12;
        memcpy(&v24, &v10, 16);
        memcpy(&v21, &v14, 16);
        v22 = v15;
        memcpy(&v23, &v16, 16);
        v20 = *((long long *)&v0);
        v0.compile_matcher(&v20);
        core::ptr::drop_in_place<globset::glob::Glob>(&v20);
        a0[80] = v13;
        *((int128_t *)&a0[64]) = *((int128_t *)&v11);
        v30 = *((int128_t *)&v0);
        v31 = *((int128_t *)&v3);
        v32 = (int128_t)v6;
        *((int128_t *)&a0[48]) = *((int128_t *)&v9);
        a0[32] = v32;
        a0[16] = v31;
        *(a0) = v30;
        return (unsigned long long)v30;
    }
    memcpy(&v7, &v16, 16);
    v4 = v15;
    v1 = v14;
    *((char *)&a0[8]) = 5;
    v27 = *((int128_t *)&v0);
    v28 = (int128_t)(&v1)[9];
    v29 = (int128_t)v6;
    a0[9] = v27;
    a0[25] = v28;
    a0[41] = v29;
    *((unsigned long *)&a0[56]) = v9;
    *((unsigned long long *)a0) = 0x8000000000000000;
    return (unsigned long long)v27;
}
