long long just::subcommand::Subcommand::changelog()
{
    char v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char *v5;  // [bp-0x20]
    uint128_t v6;  // [bp-0x18]

    v2 = std::io::stdio::stdout();
    v3 = &g_831130;
    v4 = 1;
    v5 = &v0;
    v6 = 0;
    v1 = v2.write_fmt(&v3);
    if (!v1)
        return v1;
    return (unsigned long long)core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v1);
}
