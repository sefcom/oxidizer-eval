long long bat::assets::asset_from_cache(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    char v2;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    unsigned long long v6;  // [bp-0xc8]
    char *v7;  // [bp-0xc0]
    int v8;  // [bp-0xb8], Other Possible Types: char
    int v9;  // [bp-0xa8], Other Possible Types: char
    int v10;  // [bp-0x98]
    int v11;  // [bp-0x88]
    int v12;  // [bp-0x78]
    int v13;  // [bp-0x68], Other Possible Types: char
    int v14;  // [bp-0x58]
    int v15;  // [bp-0x48]
    int v16;  // [bp-0x38]
    char v17;  // [bp-0x28]
    unsigned long long v19;  // rax
    int v20;  // xmm0
    int v21;  // xmm1
    int v22;  // xmm2
    int v23;  // xmm3

    v0 = "theme setsyntax setacknowledgements.binCould not serialize Could not save ";
    v1 = 9;
    std::fs::read(&v2, a1, a2);
    v5 = a1;
    v6 = a2;
    v7 = &v0;
    if ((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63))
    {
        bat::assets::asset_from_cache::{{closure}}(&v8, &v5, v3);
        v19 = *((long long *)&v9);
        *((char *)a0) = 11;
        a0[8] = v8;
        *((unsigned long long *)&a0[24]) = v19;
        return v19;
    }
    bat::assets::asset_from_contents(&v13, v3, v4, "theme setsyntax setacknowledgements.binCould not serialize Could not save ", 9);
    if (v13 == 13)
    {
        *((int128_t *)&a0[64]) = *((int128_t *)&v17);
        v20 = v13;
        v21 = v14;
        v22 = v15;
        v23 = v16;
    }
    else
    {
        bat::assets::asset_from_cache::{{closure}}(&v8, &v0, &v13);
        a0[64] = v12;
        v20 = v8;
        v21 = v9;
        v22 = v10;
        v23 = v11;
    }
    a0[48] = v23;
    a0[32] = v22;
    a0[16] = v21;
    *(a0) = v20;
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v2, v3);
}
