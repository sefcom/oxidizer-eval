long long uu_readlink::show(unsigned long long a0, unsigned long long a1, char a2)
{
    char v0;  // [bp-0x69]
    char v1;  // [bp-0x68], Other Possible Types: unsigned long long
    char v2;  // [bp-0x60], Other Possible Types: unsigned long long
    char *v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    void* v5;  // [bp-0x48]
    char *v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    char v8;  // [bp-0x28]

    v1.try_from(a0, a1);
    if ((v1 & 1))
        core::option::unwrap_failed(&g_571040); /* do not return */
    memcpy(&v8, &v2, 16);
    v6 = &v8;
    v7 = <&T as core::fmt::Display>::fmt;
    v1 = &g_4140e0;
    v2 = 1;
    v5 = 0;
    v3 = &v6;
    v4 = 1;
    std::io::stdio::_print(&v1);
    if (a2 != 11)
    {
        v0 = a2;
        v6 = &v0;
        v7 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
        v1 = &g_4140e0;
        v2 = 1;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_print(&v1);
    }
    v1 = std::io::stdio::stdout();
    return v1.flush();
}
