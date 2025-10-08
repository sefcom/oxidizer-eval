long long uu_hostname::uumain::uumain(unsigned long long a0, unsigned long long a1)
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
    unsigned long long v11;  // rax
    unsigned long v12;  // rax

    uu_hostname::uu_app(&v5);
    v0.try_get_matches_from(&v5, a0, a1);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        v9 = v4;
        memcpy(&v8, &v3, 16);
        v7 = v2;
        v5 = v0;
        v6 = v1;
        v0.try_get_one(&v5, _ZN11uu_hostname8OPT_HOST17h449c299a70740049E, g_4e4e08);
        v11 = _ZN11uu_hostname8OPT_HOST17h449c299a70740049E.unwrap(g_4e4e08, &v0);
        v12 = (!v11 ? uu_hostname::display_hostname(&v5) : hostname::set(v11).map_err_context());
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v5);
        return v12;
    }
    return v6.from();
}
