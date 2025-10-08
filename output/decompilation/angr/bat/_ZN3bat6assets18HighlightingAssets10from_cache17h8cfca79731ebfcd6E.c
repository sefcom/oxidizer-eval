long long bat::assets::HighlightingAssets::from_cache(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xb8], Other Possible Types: char
    unsigned long v1;  // [bp-0xa8]
    char v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    int v5;  // [bp-0x88]
    int v6;  // [bp-0x81]
    int v7;  // [bp-0x79]
    unsigned long long v8;  // [bp-0x71]
    char v9;  // [bp-0x68]
    char v10;  // [bp-0x67]
    char v11;  // [bp-0x60]
    int v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x50]
    int v14;  // [bp-0x48]
    int v15;  // [bp-0x38]
    char v16;  // [bp-0x28]
    int v18;  // xmm0
    int v19;  // xmm0

    v0.join(a1, a2, "syntaxes.binthemes.binbat follows semantic versioningsrc/assets/assets_metadata.rs", 12);
    v2.join(a1, a2, "themes.binbat follows semantic versioningsrc/assets/assets_metadata.rs", 10);
    bat::assets::asset_from_cache(&v9, v3, v4);
    if (v9 == 13)
    {
        v8 = v13;
        v18 = *((int128_t *)&v11);
        v6 = v18;
        *((unsigned long long *)&a0[120]) = v13;
        a0[104] = v18;
        *(a0) = v0;
        *((unsigned long *)&a0[16]) = v1;
        *((unsigned long long *)&a0[24]) = 0x8000000000000000;
        *((unsigned long long *)&a0[128]) = 0;
    }
    else
    {
        v19 = *((int128_t *)&v10);
        *((int128_t *)&v7) = (int128_t)v12;
        v5 = v19;
        *((int128_t *)&a0[72]) = *((int128_t *)&v16);
        a0[56] = v15;
        a0[40] = v14;
        *((int128_t *)&a0[24]) = (int128_t)(&v5)[15];
        *((int128_t *)&a0[9]) = (int128_t)v5;
        *((char *)&a0[8]) = v9;
        *((unsigned long long *)a0) = 9223372036854775809;
        core::ptr::drop_in_place<bat::assets::serialized_syntax_set::SerializedSyntaxSet>(&v0);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v2);
    return a0;
}
