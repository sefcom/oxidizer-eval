long long uu_realpath::resolve_path(unsigned long long a0, unsigned long long a1, char a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    char v0;  // [bp-0x61]
    char v1;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    char v7;  // [bp-0x30]
    unsigned long long v8;  // rax

    uucore::features::fs::canonicalize(&v1, a0, a1, a4, a3);
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
        return v2;
    v4 = v1;
    v5 = v2;
    v6 = v3;
    uu_realpath::process_relative(&v7, &v4, a7, a8, a5, a6);
    v8 = uucore::mods::display::print_verbatim(&v7);
    if (v8)
        return v8;
    v1 = std::io::stdio::stdout();
    v0 = a2;
    return v1.write_all(&v0, 1);
}
