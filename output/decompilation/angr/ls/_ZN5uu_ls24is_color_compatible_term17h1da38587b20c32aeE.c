long long uu_ls::is_color_compatible_term()
{
    char v0;  // [bp-0x88], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x80]
    char v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    char v5;  // [bp-0x50]
    unsigned long v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x30]

    std::env::var(&v0, "TERM => LANG or truehide.ftlhurd", 4);
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
    std::env::var(&v0, "COLORTERMalwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 9);
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
    std::env::var(&v0, "TERM => LANG or truehide.ftlhurd", 4);
    v2.unwrap_or_default(&v0);
    std::env::var(&v0, "COLORTERMalwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 9);
    v5.unwrap_or_default(&v0);
    if (!v0 && !v0 && !v4 && !v6)
    {
        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v5);
        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v2);
        return 0;
    }
    if (v4)
    {
        v7 = v3;
        v8 = v4;
        v0 = _ZN6uucore8features6colors5TERMS17hac6d9db0eb1c9f17E;
        v1 = g_6ab9f0 * 16 + _ZN6uucore8features6colors5TERMS17hac6d9db0eb1c9f17E;
        if (!v0.any(&v7))
        {
            ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v5);
            ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v2);
            return 0;
        }
    }
    ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v5);
    return ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v2) & 0xffffffffffffff00 | 1;
}
