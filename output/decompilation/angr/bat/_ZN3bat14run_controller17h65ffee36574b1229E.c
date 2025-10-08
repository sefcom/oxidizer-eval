long long bat::run_controller(uint128_t a0[5], struct_0 *a1, char a2[299], unsigned long long a3, unsigned long long a4)
{
    char v0[299];  // [bp-0x188], Other Possible Types: char
    char *v1;  // [bp-0x180]
    int v2;  // [bp-0x178]
    int v3;  // [bp-0x168], Other Possible Types: char
    int v4;  // [bp-0x158]
    int v5;  // [bp-0x148], Other Possible Types: char
    int v6;  // [bp-0x138], Other Possible Types: char
    char v7;  // [bp-0x130]
    unsigned long v8;  // [bp-0x128]
    int v9;  // [bp-0x120]
    char v10;  // [bp-0x110]
    int v11;  // [bp-0x100]
    char v12;  // [bp-0xf0]
    int v13;  // [bp-0xe0]
    int v14;  // [bp-0xd0]
    int v15;  // [bp-0xc0]
    unsigned long long v16;  // [bp-0xb0]
    unsigned long long v17;  // [bp-0xa8]
    char v18;  // [bp-0xa0]
    int v19;  // [bp-0x90]
    int v20;  // [bp-0x80]
    int v21;  // [bp-0x70]
    int v22;  // [bp-0x60]
    int v23;  // [bp-0x50]
    int v24;  // [bp-0x40]
    int v25;  // [bp-0x30]
    unsigned long long v26;  // [bp-0x20]
    int v28;  // xmm0

    bat::assets::assets_from_cache_or_binary(&v6, a2[295], a3, a4);
    memcpy(&v0, &v7, 16);
    v2 = v9;
    memcpy(&v3, &v10, 16);
    v4 = v11;
    memcpy(&v5, &v12, 16);
    if (*((long long *)&v6) == 9223372036854775809)
    {
        *((void*)&a0[4]) = v5;
        v28 = *((int128_t *)&v0);
        *((void*)&a0[3]) = v4;
        *((void*)&a0[2]) = v3;
        *((void*)&a0[1]) = v2;
        *((void*)&a0[0]) = v28;
        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<bat::input::Input>>(a1);
    }
    v26 = v16;
    v25 = v15;
    v24 = v14;
    v23 = v13;
    memcpy(&v18, &v0, 16);
    v19 = v2;
    v20 = v3;
    v21 = v4;
    v22 = v5;
    v17 = *((long long *)&v6);
    *((char *[299])&v0[0]) = a2;
    v1 = &v17;
    if (a2[298] != 2 && a2[296])
    {
        bat::get_new_terminal_title(&v6, a1->field_0[1], a1->field_8);
        bat::set_terminal_title_to(&v6);
    }
    v8 = a1->field_8;
    *((unsigned long long [2])&v6) = a1->field_0;
    a0.run(&v0, &v6, 0);
    return core::ptr::drop_in_place<bat::assets::HighlightingAssets>(&v17);
}
