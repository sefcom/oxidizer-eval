long long bat::assets::build_assets::build(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    char v0;  // [bp-0x168]
    char v1;  // [bp-0x167]
    char v2;  // [bp-0x160]
    char v3;  // [bp-0x158]
    char v4;  // [bp-0x157]
    unsigned long long v5;  // [bp-0x150]
    char v6;  // [bp-0x148]
    char v7;  // [bp-0x147]
    char v8;  // [bp-0x140]
    char v9;  // [bp-0x138], Other Possible Types: unsigned long long
    char v10;  // [bp-0x130]
    char v11;  // [bp-0x128]
    unsigned long v12;  // [bp-0x120]
    char v13;  // [bp-0x118]
    unsigned long long v14;  // [bp-0x108]
    int v15;  // [bp-0xf8], Other Possible Types: char
    char v16;  // [bp-0xe9]
    int v17;  // [bp-0xe8], Other Possible Types: char
    char v18;  // [bp-0xd8]
    unsigned long long v19;  // [bp-0xc9]
    char v20;  // [bp-0xa8]
    unsigned long long v21;  // [bp-0x98]
    int v22;  // [bp-0x88]
    int v23;  // [bp-0x79], Other Possible Types: char
    char v24;  // [bp-0x68]
    char v25;  // [bp-0x58]
    char v26;  // [bp-0x48]
    int v27;  // xmm2
    int v28;  // xmm3
    int v29;  // xmm0
    int v30;  // xmm2
    int v31;  // xmm3

    bat::assets::build_assets::build_theme_set(&v0, a1, a2, a3);
    if (v0 != 13)
    {
        v30 = *((int128_t *)&v6);
        v31 = *((int128_t *)&v9);
        memcpy(&v16, &v3, 16);
        *((int128_t *)&v15) = *((int128_t *)&v1);
        *((int128_t *)&a0->field_11[15]) = *((int128_t *)&v11);
        *((void*)&a0->field_10[16]) = v31;
        *((void*)&a0->field_10[0]) = v30;
        *((int128_t *)&a0->field_1[15]) = *((int128_t *)&v16);
        *((int128_t *)&a0->field_1[0]) = (int128_t)v15;
        a0->field_0 = v0;
        return a0;
    }
    memcpy(&v13, &v2, 16);
    v14 = v5;
    bat::assets::build_assets::build_syntax_set_builder(&v0, a1, a2, a3, a4, a5);
    if (v0 == 13)
    {
        memcpy(&v24, &v2, 16);
        memcpy(&v25, &v5, 16);
        memcpy(&v26, &v8, 16);
        syntect::parsing::syntax_set::SyntaxSetBuilder::build();
        bat::assets::build_assets::acknowledgements::build_acknowledgements(&v0, a1, a2, a4);
        if (v0 == 13)
        {
            memcpy(&v20, &v2, 16);
            v21 = v5;
            bat::assets::build_assets::print_unlinked_contexts(&v15);
            bat::assets::build_assets::write_assets(a0, &v13, &v15, &v20, a5, a6, a7, a8);
            core::ptr::drop_in_place<regex::error::Error>(&v20);
            core::ptr::drop_in_place<syntect::parsing::syntax_set::SyntaxSet>(&v15);
        }
        else
        {
            v27 = *((int128_t *)&v6);
            v28 = *((int128_t *)&v9);
            memcpy(&v23, &v3, 16);
            *((int128_t *)&v22) = *((int128_t *)&v1);
            *((int128_t *)&a0->field_11[15]) = *((int128_t *)&v11);
            *((void*)&a0->field_10[16]) = v28;
            *((void*)&a0->field_10[0]) = v27;
            *((void*)&a0->field_1[15]) = v23;
            *((int128_t *)&a0->field_1[0]) = (int128_t)v22;
            a0->field_0 = v0;
            core::ptr::drop_in_place<syntect::parsing::syntax_set::SyntaxSet>(&v15);
        }
    }
    else
    {
        v19 = v9;
        memcpy(&v18, &v7, 16);
        memcpy(&v17, &v4, 16);
        *((int128_t *)&v15) = *((int128_t *)&v1);
        *((unsigned long *)&a0->field_11[23]) = v12;
        *((int128_t *)&a0->field_11[7]) = *((int128_t *)&v10);
        *((unsigned long long *)&a0->field_10[16]) = v19;
        v29 = (int128_t)v15;
        *((int128_t *)&a0->field_10[1]) = *((int128_t *)&v18);
        *((void*)&a0->field_1[16]) = v17;
        *((void*)&a0->field_1[0]) = v29;
        a0->field_0 = v0;
    }
    core::ptr::drop_in_place<bat::assets::lazy_theme_set::LazyThemeSet>(&v13);
    return a0;
}
