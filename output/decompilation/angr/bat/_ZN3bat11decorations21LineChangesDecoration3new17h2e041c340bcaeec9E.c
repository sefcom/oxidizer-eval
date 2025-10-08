double bat::decorations::LineChangesDecoration::new(long long a0, long long a1)
{
    void* v0;  // [bp-0xb8]
    unsigned short v1;  // [bp-0xb0]
    char v2;  // [bp-0xab]
    int v3;  // [bp-0xa8]
    int v4;  // [bp-0x98], Other Possible Types: char
    int v5;  // [bp-0x88]
    int v6;  // [bp-0x78], Other Possible Types: char
    int v7;  // [bp-0x68]
    int v8;  // [bp-0x58], Other Possible Types: char
    int v9;  // [bp-0x48]
    int v10;  // [bp-0x38], Other Possible Types: char
    char v11;  // [bp-0x28]
    unsigned long v13;  // r15
    int v14;  // xmm1
    int v15;  // xmm0

    v2 = 21;
    v1 = 0x1500;
    v0 = 0;
    v4.generate_cached(&v0, " \\s +Failed to load one or more themes from '' (reason: '')\nNo themes were found in '', using the default set\n", 1);
    v6.generate_cached(a1 + 51, "+", 1);
    v13 = a1 + 68;
    v8.generate_cached(v13, &g_5a2891, 3);
    v10.generate_cached(v13, "_~", 1);
    v0.generate_cached(a1 + 85, "~", 1);
    *((void*)&a0[1]) = v5;
    *((void*)&a0[0]) = v4;
    *((void*)&a0[3]) = v7;
    *((void*)&a0[2]) = v6;
    *((void*)&a0[5]) = v9;
    *((void*)&a0[4]) = v8;
    v14 = *((int128_t *)&v11);
    *((void*)&a0[6]) = v10;
    *((void*)&a0[7]) = v14;
    v15 = *((int128_t *)&v0);
    *((void*)&a0[8]) = v15;
    *((void*)&a0[9]) = v3;
    return (unsigned long long)v15;
}
