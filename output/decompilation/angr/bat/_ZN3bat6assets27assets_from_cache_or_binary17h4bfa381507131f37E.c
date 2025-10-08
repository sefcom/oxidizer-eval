long long bat::assets::assets_from_cache_or_binary(void* a0, char a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x1b8], Other Possible Types: char
    int v1;  // [bp-0x1a8], Other Possible Types: char
    char *v2;  // [bp-0x190]
    unsigned long long v3;  // [bp-0x188]
    char v4;  // [bp-0x180], Other Possible Types: unsigned long, unsigned long long
    int v5;  // [bp-0x179]
    char v6;  // [bp-0x178], Other Possible Types: unsigned long long
    char *v7;  // [bp-0x170], Other Possible Types: char
    unsigned long long v8;  // [bp-0x169]
    unsigned long long v9;  // [bp-0x168]
    void* v10;  // [bp-0x160], Other Possible Types: char
    int v11;  // [bp-0x150]
    char v12;  // [bp-0x140]
    int v13;  // [bp-0xf0], Other Possible Types: char
    unsigned long long v14;  // [bp-0xe0]
    char v15;  // [bp-0xd8]
    unsigned long long v16;  // [bp-0xc0]
    int v17;  // [bp-0xb8]
    int v18;  // [bp-0xa8]
    unsigned long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rcx
    unsigned int v23;  // ecx
    unsigned long long v24;  // rcx

    (char)v4.load_from_folder(a2, a3);
    v20 = v4;
    if ((char)v20 != 13)
    {
        v23 = v4;
        *((int *)&a0[12]) = v4;
        *((unsigned int *)&a0[9]) = v23;
        v24 = v6;
        memcpy(&v0, &(char)v7, 16);
        memcpy(&(char)v1, &(char)v10, 16);
        *((int128_t *)&a0[72]) = *((int128_t *)&v12);
        a0[56] = v11;
        a0[40] = v1;
        a0[24] = v0;
        *((char *)&a0[8]) = v20;
        *((unsigned long long *)&a0[16]) = v24;
        *((unsigned long long *)a0) = 9223372036854775809;
        return v20;
    }
    memcpy(&v0, &v7, 16);
    memcpy(&v1, &v10, 16);
    if (*((long long *)&v6) != 9223372036854775809)
    {
        v16 = *((long long *)&v6);
        v17 = v0;
        v18 = v1;
        if (!(char)v16.is_compatible_with("0.25.0Clearing  ... okay\nskipped (not present)\n", 6))
        {
            v15.from_utf8_lossy(a2, a3);
            v2 = &v15;
            v3 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
            v4 = &g_ac8520;
            v6 = 2;
            v10 = 0;
            v7 = &v2;
            v9 = 1;
            v13.map_or_else(0, &(char)v4);
            core::ptr::drop_in_place<regex::error::Error>(&v15);
            v5 = v13;
            v8 = v14;
            *((char *)&a0[8]) = 11;
            v21 = (long long)(&v5)[8];
            v22 = v8;
            *((int128_t *)&a0[9]) = *((int128_t *)&v4);
            *((unsigned long long *)&a0[24]) = v21;
            *((unsigned long long *)&a0[32]) = v22;
            *((unsigned long long *)a0) = 9223372036854775809;
            return (unsigned long long)core::ptr::drop_in_place<bat::assets::assets_metadata::AssetsMetadata>(&v16);
        }
        core::ptr::drop_in_place<bat::assets::assets_metadata::AssetsMetadata>(&v16);
    }
    if (a1)
    {
        v16.from_cache(a2, a3);
        if (v16 == 9223372036854775809)
        {
            core::ptr::drop_in_place<core::result::Result<bat::assets::HighlightingAssets,bat::error::Error>>(&v16);
            goto LABEL_7a8c18;
        }
        else
        {
            ::libc.so.0::memcpy(&v6, &v17, 136);
            v4 = v16;
        }
    }
    else
    {
LABEL_7a8c18:
        (char)v4.from_binary();
    }
    return ::libc.so.0::memcpy(a0, &(char)v4, 144);
}
