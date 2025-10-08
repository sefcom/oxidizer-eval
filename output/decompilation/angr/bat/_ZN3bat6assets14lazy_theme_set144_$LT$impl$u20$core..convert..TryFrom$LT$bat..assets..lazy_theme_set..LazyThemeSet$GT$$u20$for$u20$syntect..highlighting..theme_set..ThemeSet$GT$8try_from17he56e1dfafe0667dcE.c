long long bat::assets::lazy_theme_set::<impl core::convert::TryFrom<bat::assets::lazy_theme_set::LazyThemeSet> for syntect::highlighting::theme_set::ThemeSet>::try_from(unsigned long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x4f8]
    void* v1;  // [bp-0x4f0]
    void* v2;  // [bp-0x4e0]
    int v3;  // [bp-0x4d8]
    int v4;  // [bp-0x4c8]
    int v5;  // [bp-0x4b8]
    int v6;  // [bp-0x4a8]
    int v7;  // [bp-0x498]
    char v8;  // [bp-0x488]
    int v9;  // [bp-0x440]
    unsigned long long v10;  // [bp-0x428]
    unsigned long long v11;  // [bp-0x420]
    int v12;  // [bp-0x418]
    unsigned long long v13;  // [bp-0x318]
    int v14;  // [bp-0x310]
    int v15;  // [bp-0x300]
    int v16;  // [bp-0x2f0]
    int v17;  // [bp-0x2e0]
    int v18;  // [bp-0x2d0]
    int v19;  // [bp-0x2c0]
    unsigned long long v20;  // [bp-0x220]
    int v21;  // [bp-0x218]
    int v22;  // [bp-0x208]
    int v23;  // [bp-0x1f8]
    int v24;  // [bp-0x1e8]
    int v25;  // [bp-0x1d8]
    int v26;  // [bp-0x1c8]
    char v27;  // [bp-0x128]

    v1 = 0;
    v2 = 0;
    v8.into_iter(a1);
    while (true)
    {
        v9.next(&v8);
        if ((long long)v9 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<alloc::string::String,bat::assets::lazy_theme_set::LazyTheme>>(&v8);
            *((unsigned long long *)&v0[24]) = 0;
            *((int128_t *)&v0[8]) = *((int128_t *)&v1);
            *((char *)v0) = 13;
            return a0;
        }
        v13.deserialize(v11, (long long)v12);
        v3 = v14;
        v4 = v15;
        v5 = v16;
        v6 = v17;
        memcpy(&v7, &v18, 16);
        if (v13 == 0x8000000000000000)
        {
            v0[64] = v7;
            v0[48] = v6;
            v0[32] = v5;
            v0[16] = v4;
            *(v0) = v3;
            core::ptr::drop_in_place<alloc::string::String>(&v9);
            core::ptr::drop_in_place<bat::assets::lazy_theme_set::LazyTheme>(&v10);
            core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<alloc::string::String,bat::assets::lazy_theme_set::LazyTheme>>(&v8);
            core::ptr::drop_in_place<syntect::highlighting::theme_set::ThemeSet>(&v1);
            return a0;
        }
        ::libc.so.0::memcpy(&v26, &v19, 160);
        v20 = v13;
        v25 = v7;
        v24 = v6;
        v23 = v5;
        v22 = v4;
        v21 = v3;
        v27.insert(&v1, &v9, &v20);
        core::ptr::drop_in_place<core::option::Option<syntect::highlighting::theme::Theme>>(&v27);
        core::ptr::drop_in_place<bat::assets::lazy_theme_set::LazyTheme>(&v10);
    }
}
