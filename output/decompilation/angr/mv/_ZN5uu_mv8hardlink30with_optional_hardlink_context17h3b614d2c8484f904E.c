long long uu_mv::hardlink::with_optional_hardlink_context(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x108]
    int v1;  // [bp-0xf8]
    char v2;  // [bp-0xe8]
    int v3;  // [bp-0xd8]
    char v4;  // [bp-0xc8]
    int v5;  // [bp-0xb8]
    char v6;  // [bp-0xa8]
    char v7;  // [bp-0x98]
    int v8;  // [bp-0x88], Other Possible Types: char
    int v9;  // [bp-0x78]
    char v10;  // [bp-0x68]
    int v11;  // [bp-0x58]
    char v12;  // [bp-0x48]
    int v13;  // [bp-0x38]
    char v14;  // [bp-0x28]
    char v15;  // [bp-0x18]
    unsigned long long v17;  // rax

    if ((a1 & a0))
        return uu_mv::rename_with_fallback::{{closure}}::{{closure}}(a2, a0, a1);
    uu_mv::hardlink::create_hardlink_context(&v8);
    memcpy(&v2, &v10, 16);
    v1 = v9;
    v0 = v8;
    memcpy(&v7, &v15, 16);
    memcpy(&v6, &v14, 16);
    v5 = v13;
    memcpy(&v4, &v12, 16);
    v3 = v11;
    v17 = uu_mv::rename_with_fallback::{{closure}}::{{closure}}(a2, &v0, &v3);
    ::0x4d3920::core::ptr::drop_in_place<uu_mv::hardlink::HardlinkGroupScanner>(&v3);
    ::0x4d38b0::core::ptr::drop_in_place<uu_mv::hardlink::HardlinkTracker>(&v0);
    return v17;
}
