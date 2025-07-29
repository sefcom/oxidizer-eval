long long uu_uname::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x42a]
    char v1;  // [bp-0x429]
    unsigned long long v2;  // [bp-0x428]
    char v3;  // [bp-0x420]
    unsigned long long v4;  // [bp-0x418]
    unsigned long long v5;  // [bp-0x410]
    char v6;  // [bp-0x408]
    char v7;  // [bp-0x3f8]
    unsigned long long v8;  // [bp-0x3e8]
    char *v9;  // [bp-0x3e0]
    unsigned long long v10;  // [bp-0x3d8]
    char v11;  // [bp-0x3d0]
    char v12;  // [bp-0x3b8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x3b0]
    char v14;  // [bp-0x3a8], Other Possible Types: unsigned long long
    char v15;  // [bp-0x3a0]
    char v16;  // [bp-0x398]
    char v17;  // [bp-0x388]
    char v18;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x2f0]
    char *v20;  // [bp-0x2e8], Other Possible Types: unsigned long long
    char v21;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v22;  // [bp-0x2d8]
    unsigned int v24;  // eax
    unsigned short v25;  // ax
    unsigned int v26;  // eax
    unsigned short v27;  // ax
    unsigned short v28;  // ax

    uu_uname::uu_app(&v18);
    v12.try_get_matches_from(&v18, a0, a1);
    if ((char)(((0 ^ v12) & (0 ^ -(v12))) >> 63))
        return v5.from();
    v8 = *((long long *)&v17);
    memcpy(&v7, &v16, 16);
    memcpy(&v6, &v14, 16);
    v4 = v12;
    v5 = v13;
    v1 = v4.get_flag(_ZN8uu_uname7options3ALL17heaf5658c0e21cb52E, g_562600);
    v0 = v4.get_flag(_ZN8uu_uname7options11KERNEL_NAME17haac390bfac08ed45E, g_562610);
    v24 = v4.get_flag(_ZN8uu_uname7options8NODENAME17h8a669fd05c5c9b9bE, g_562620);
    v25 = v4.get_flag(_ZN8uu_uname7options14KERNEL_RELEASE17h0e7ee0ccb19f7ba2E, g_562640);
    v26 = v4.get_flag(_ZN8uu_uname7options14KERNEL_VERSION17ha5452be4ea29402dE, g_562630);
    v27 = v4.get_flag(_ZN8uu_uname7options7MACHINE17h4111c3392cf6ece3E, g_562650);
    v28 = v4.get_flag(_ZN8uu_uname7options9PROCESSOR17hb0f945e70ac119fbE, g_562660);
    v2 = (0 CONCAT ((short)v4.get_flag(_ZN8uu_uname7options17HARDWARE_PLATFORM17h871618e7203d841dE, g_562670) * 0x100 | v28) * 0x1000000000000) | ((0 CONCAT (v27 * 0x100 | v25) * 0x100000000) | v26 * 0x1000000 | v24 * 0x10000 | v0 * 0x100 | v1) & 281474976710655;
    v3 = v4.get_flag(_ZN8uu_uname7options2OS17he1085588577ce02eE, g_562680);
    v18.new(&v2);
    if (v18 != 9223372036854775809)
    {
        memcpy(&v15, &v21, 168);
        v12 = v18;
        v13 = v19;
        v14 = v20;
        v11.display(&v12);
        v9 = &v11;
        v10 = <alloc::string::String as core::fmt::Display>::fmt;
        v18 = &g_562408;
        v19 = 2;
        v22 = 0;
        v20 = &v9;
        v21 = 1;
        std::io::stdio::_print(&v18);
        ::0x48fcb0::core::ptr::drop_in_place<alloc::string::String>(&v11);
        core::ptr::drop_in_place<uu_uname::UNameOutput>(&v12);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v4);
        return 0;
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v4);
    return v19;
}
