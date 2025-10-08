long long bat::assets::build_assets::asset_to_cache(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned int v1;  // [bp-0xdc]
    unsigned long long v2;  // [bp-0xd8]
    unsigned long long v3;  // [bp-0xd8]
    char *v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xd0]
    int v6;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v7;  // [bp-0xc0]
    int v8;  // [bp-0xb0]
    int v9;  // [bp-0xa0]
    unsigned long long v10;  // [bp-0x90]
    unsigned long long v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    char *v14;  // [bp-0x70]
    char *v15;  // [bp-0x68]
    unsigned long long v16;  // [bp-0x60]
    char *v17;  // [bp-0x58]
    unsigned long long v18;  // [bp-0x50]
    char v19;  // [bp-0x48]
    unsigned long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned int v24;  // ecx
    int v25;  // xmm0

    v10 = "syntax setacknowledgements.binCould not serialize Could not save ";
    v11 = 10;
    v19.from_utf8_lossy(a2, a3);
    v15 = &v10;
    v16 = <&T as core::fmt::Display>::fmt;
    v17 = &v19;
    v18 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v0 = &g_ace118;
    v2 = 3;
    v7 = 0;
    v4 = &v15;
    v6 = 2;
    std::io::stdio::_print(&(char)v0);
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v19);
    bat::assets::build_assets::asset_to_contents(&(char)v0, a1, v10, 10);
    v21 = (char)v0;
    if ((char)v21 != 13)
    {
        v24 = *((int *)((char *)&v0 + 1));
        *((unsigned int *)&a0[4]) = v1;
        *((unsigned int *)&a0[1]) = v24;
        v25 = *((int128_t *)&v2);
        *((int128_t *)&a0[32]) = *((int128_t *)&v7);
        a0[48] = v8;
        a0[64] = v9;
        *((char *)a0) = v21;
        a0[8] = v25;
        *((unsigned long long *)&a0[24]) = v6;
        return v21;
    }
    v22 = std::fs::write(a2, a3, v4, v6);
    v12 = a2;
    v13 = a3;
    v14 = &v10;
    if (v22)
    {
        bat::assets::build_assets::asset_to_cache::{{closure}}(&(char)v0, &v12, v22);
        v23 = v0;
        *((int128_t *)&a0[16]) = *((int128_t *)&v2);
        *((char *)a0) = 11;
        *((unsigned long long *)&a0[8]) = v23;
    }
    else
    {
        v0 = &g_ace0f8;
        v3 = 1;
        v5 = 8;
        *((uint128_t *)&v6) = 0;
        std::io::stdio::_print(&(char)v0);
        *((char *)a0) = 13;
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v2, v4);
}
