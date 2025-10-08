long long uu_uptime::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x310]
    int v2;  // [bp-0x308]
    char v3;  // [bp-0x2f8]
    unsigned long long v4;  // [bp-0x2e8]
    char v5;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x2d8]
    int v7;  // [bp-0x2d0]
    char v8;  // [bp-0x2c0]
    unsigned long long v9;  // [bp-0x2b0]
    unsigned long long v11;  // rdi
    unsigned long long v12;  // rbx
    unsigned long v13;  // rax

    uu_uptime::uu_app(&v5);
    v0.try_get_matches_from(&v5, a0, a1);
    v11 = v1;
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        v9 = v4;
        memcpy(&v8, &v3, 16);
        v7 = v2;
        v5 = v0;
        v6 = v1;
        v0.try_get_one(&v5, _ZN9uu_uptime7options4PATH17h8432a602c5a8eb25E, g_508250);
        v12 = _ZN9uu_uptime7options4PATH17h8432a602c5a8eb25E.unwrap(g_508250, &v0);
        v13 = (!(char)v5.get_flag(_ZN9uu_uptime7options5SINCE17h188f5410e8c83d61E, g_508240) ? (!v12 ? uu_uptime::default_uptime() : uu_uptime::uptime_with_file(v12)) : uu_uptime::uptime_since());
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v5);
        return v13;
    }
    return v6.from();
}
