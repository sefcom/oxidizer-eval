void bat::assets::clear_asset(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    char *v3;  // [bp-0x68], Other Possible Types: unsigned long long
    int v4;  // [bp-0x60], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x58]
    char *v6;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x40]
    char *v8;  // [bp-0x38]
    unsigned long long v9;  // [bp-0x30]
    unsigned long long v10;  // [bp-0x28]
    unsigned long long v11;  // [bp-0x20]
    unsigned long long v13;  // r14

    v10 = a1;
    v11 = a2;
    v6 = &v10;
    v7 = <&T as core::fmt::Display>::fmt;
    v1 = &g_ac8540;
    v2 = 2;
    v5 = 0;
    v3 = &v6;
    v4 = 1;
    std::io::stdio::_print(&v1);
    v13 = std::fs::remove_file(a0);
    if (!v13)
    {
        v1 = &g_ac8560;
        v2 = 1;
        v3 = 8;
        *((uint128_t *)&v4) = 0;
        std::io::stdio::_print(&v1);
    }
    else if ((char)v13.kind())
    {
        v0 = v13;
        v6 = a0;
        v7 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        v8 = &v0;
        v9 = <std::io::error::Error as core::fmt::Display>::fmt;
        v1 = &g_ac8580;
        v2 = 3;
        v5 = 0;
        v3 = &v6;
        v4 = 2;
        std::io::stdio::_print(&v1);
        core::ptr::drop_in_place<std::io::error::Error>(&v0);
    }
    else
    {
        v6 = v13;
        v1 = &g_ac8570;
        v2 = 1;
        v3 = 8;
        *((uint128_t *)&v4) = 0;
        std::io::stdio::_print(&v1);
        core::ptr::drop_in_place<std::io::error::Error>(&v6);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(a0);
    return;
}
