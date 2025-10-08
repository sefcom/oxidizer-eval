long long uu_arch::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [bp-0x558]
    unsigned long long v1;  // [bp-0x550]
    unsigned long long v2;  // [bp-0x548]
    unsigned long long v3;  // [bp-0x540]
    unsigned long long v4;  // [bp-0x538]
    unsigned long long v5;  // [bp-0x530]
    char v6;  // [bp-0x528]
    char v7;  // [bp-0x518]
    unsigned long long v8;  // [bp-0x508]
    char v9;  // [bp-0x500], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x4f8]
    char v11;  // [bp-0x4f0], Other Possible Types: unsigned long long
    char v12;  // [bp-0x4e8]
    char v13;  // [bp-0x4e0]
    char v14;  // [bp-0x4d0]
    unsigned long long v15;  // [bp-0x498]
    char v16;  // [bp-0x490]
    char v17;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x2e0]
    char *v19;  // [bp-0x2d8], Other Possible Types: unsigned long long
    char v20;  // [bp-0x2d0], Other Possible Types: unsigned long long
    void* v21;  // [bp-0x2c8]
    unsigned long long v23;  // rdx

    uu_arch::uu_app(&v17);
    v9.try_get_matches_from(&v17, a0, a1);
    if ((char)(((0 ^ v9) & (0 ^ -(v9))) >> 63))
        return v5.from();
    v8 = *((long long *)&v14);
    memcpy(&v7, &v13, 16);
    memcpy(&v6, &v11, 16);
    v4 = v9;
    v5 = v10;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v4);
    v17.new();
    if (v17 != 0x8000000000000000)
    {
        memcpy(&v12, &v20, 0x200);
        v9 = v17;
        v10 = v18;
        v11 = v19;
        v4.from_utf8_lossy(v15, *((long long *)&v16));
        v2 = core::str::<impl str>::trim_matches(v5, *((long long *)&v6));
        v3 = v23;
        v0 = &v2;
        v1 = <&T as core::fmt::Display>::fmt;
        v17 = &g_4d5670;
        v18 = 2;
        v21 = 0;
        v19 = &v0;
        v20 = 1;
        std::io::stdio::_print(&v17);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v4, v5);
        core::ptr::drop_in_place<platform_info::lib_impl::target::PlatformInfo>(&v9);
        return 0;
    }
    return uu_arch::uumain::uumain::{{closure}}(v18, v19);
}
