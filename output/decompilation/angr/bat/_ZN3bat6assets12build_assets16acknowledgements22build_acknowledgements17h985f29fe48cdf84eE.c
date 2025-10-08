long long bat::assets::build_assets::acknowledgements::build_acknowledgements(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0x2f8]
    void* v1;  // [bp-0x2f0]
    int v2;  // [bp-0x2e8]
    int v3;  // [bp-0x2d8], Other Possible Types: char
    unsigned long v4;  // [bp-0x2c8]
    char v5;  // [bp-0x2c0], Other Possible Types: unsigned long long
    int v6;  // [bp-0x2bf]
    unsigned int v7;  // [bp-0x2bc]
    int v9;  // [bp-0x2b8]
    int v10;  // [bp-0x2b0]
    int v11;  // [bp-0x2a0]
    int v12;  // [bp-0x290]
    int v13;  // [bp-0x280]
    int v14;  // [bp-0x270], Other Possible Types: char
    unsigned long long v15;  // [bp-0x260]
    char v16;  // [bp-0x258]
    int v17;  // [bp-0x248]
    char v18;  // [bp-0x238]
    int v19;  // [bp-0x228]
    unsigned long long v20;  // [bp-0x1f0]
    unsigned long long v21;  // [bp-0x1e8]
    void* v22;  // [bp-0x1e0], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x1d8]
    void* v24;  // [bp-0x1d0], Other Possible Types: char *
    int v25;  // [bp-0x1c8], Other Possible Types: unsigned long long
    uint128_t v26;  // [bp-0x1c0]
    unsigned long long v27;  // [bp-0x1b0]
    uint128_t v28;  // [bp-0x1a8]
    unsigned long long v29;  // [bp-0x198]
    void* v30;  // [bp-0x190]
    int v31;  // [bp-0x188]
    unsigned long long v32;  // [bp-0x178]
    char v33;  // [bp-0x170]
    int v34;  // [bp-0x160]
    char v35;  // [bp-0x150]
    uint128_t v36;  // [bp-0x140]
    unsigned long long v37;  // [bp-0x130]
    unsigned long long v38;  // [bp-0x100]
    unsigned long long v39;  // [bp-0xd0]
    unsigned long long v40;  // [bp-0xc8]
    unsigned long long v41;  // [bp-0xc0]
    unsigned long long v42;  // [bp-0x78]
    char v44;  // al
    unsigned int v45;  // ecx
    unsigned long long v46;  // rcx

    if (!a3)
    {
        a0->field_8 = 0x8000000000000000;
        a0->field_0 = 13;
        return 0x8000000000000000;
    }
    v22 = &g_acdf98;
    v23 = 1;
    v24 = &v0;
    *((uint128_t *)&v25) = 0;
    v3.map_or_else("Copyright (c) 2018-2021 bat-developers (https://github.com/sharkdp/bat).\n\nbat is made available under the terms of either the MIT License or the Apache\nLicense 2.0, at your option.\n\nSee the LICENSE-APACHE and LICENSE-MIT files for license details.\n\n\nLICENS", 250, &v22);
    v22.new(a1, a2);
    v14.sort_by(&v22);
    memcpy(&v35, &v18, 16);
    v34 = v17;
    memcpy(&v33, &v16, 16);
    v31 = v14;
    v32 = v15;
    v22 = 0;
    v24 = 0;
    v25 = 8;
    v26 = 0;
    v27 = 8;
    v28 = 0;
    v29 = 8;
    v30 = 0;
    v36 = 0;
    v37 = 9223372036854775809;
    v38 = 9223372036854775809;
    v39 = a1;
    v40 = a2;
    v41 = 9223372036854775809;
    v42 = 9223372036854775809;
    while (true)
    {
        v19.next(&v22);
        if ((long long)v19 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::iter::adapters::flatten::FlatMap<core::iter::adapters::flatten::Flatten<walkdir::IntoIter>,core::option::Option<bat::assets::build_assets::acknowledgements::PathAndStem>,bat::assets::build_assets::acknowledgements::build_acknowledgements::{{closure}}>>(&v22);
            *((unsigned long *)&v1[24]) = v4;
            v1[8] = v3;
            *((char *)v1) = 13;
            return v4;
        }
        bat::assets::build_assets::acknowledgements::handle_file(&v5, &v19);
        v44 = v5;
        if (v44 != 13)
        {
            v45 = (int)v6;
            *((unsigned int *)&v1[4]) = v7;
            *((unsigned int *)&v1[1]) = v45;
            v46 = (long long)v9;
            memcpy(&v2, &v10, 16);
            v1[64] = v13;
            v1[48] = v12;
            v1[32] = v11;
            v1[16] = v2;
            *((char *)v1) = v44;
            *((unsigned long long *)&v1[8]) = v46;
            core::ptr::drop_in_place<bat::assets::build_assets::acknowledgements::PathAndStem>(&v19);
            core::ptr::drop_in_place<core::iter::adapters::flatten::FlatMap<core::iter::adapters::flatten::Flatten<walkdir::IntoIter>,core::option::Option<bat::assets::build_assets::acknowledgements::PathAndStem>,bat::assets::build_assets::acknowledgements::build_acknowledgements::{{closure}}>>(&v22);
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v3);
        }
        v2 = v10;
        if ((long long)v9 != 0x8000000000000000)
        {
            v5 = (long long)v9;
            v9 = v2;
            bat::assets::build_assets::acknowledgements::append_to_acknowledgements(&v3, v20, v21, (long long)v9, (long long)(&v9)[8]);
            core::ptr::drop_in_place<alloc::string::String>(&v5);
        }
        core::ptr::drop_in_place<bat::assets::build_assets::acknowledgements::PathAndStem>(&v19);
    }
}
