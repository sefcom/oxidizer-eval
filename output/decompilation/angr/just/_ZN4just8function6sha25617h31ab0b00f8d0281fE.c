long long just::function::sha256(void* *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    char *v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    int v2;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x120]
    int v4;  // [bp-0x118], Other Possible Types: char *
    unsigned long long v5;  // [bp-0x110]
    int v6;  // [bp-0x108], Other Possible Types: void*
    char v7;  // [bp-0xf8]
    int v8;  // [bp-0xe8]
    char v9;  // [bp-0xd8]
    int v10;  // [bp-0xc8]
    int v11;  // [bp-0xb0], Other Possible Types: char
    int v12;  // [bp-0xa0]
    int v13;  // [bp-0x90]
    char v14;  // [bp-0x80]
    int v15;  // [bp-0x70]
    char v16;  // [bp-0x60]
    int v17;  // [bp-0x50]
    char v18;  // [bp-0x40]

    v11.default();
    v11.update(a2, a3);
    v10 = v17;
    memcpy(&v9, &v16, 16);
    v8 = v15;
    memcpy(&v7, &v14, 16);
    v6 = v13;
    v4 = v12;
    v2 = v11;
    v18.finalize_fixed(&(char)v2);
    v0 = &v18;
    v1 = generic_array::hex::<impl core::fmt::LowerHex for generic_array::GenericArray<u8,T>>::fmt;
    v2 = &g_465db0;
    v3 = 1;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    a0 + 1.map_or_else(0, a2, &v2);
    *(a0) = 0;
    return a0;
}
