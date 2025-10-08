long long fish::ast::parse_argument_list(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x1e0]
    void* v1;  // [bp-0x1d8]
    char v2;  // [bp-0x1d0]
    char v3;  // [bp-0xf0]

    v2.new(a1, a2, a3, 1, a4);
    v0 = 4;
    v1 = 0;
    v2.populate_list(&v0, 1);
    memcpy(&v3, &v2, 224);
    fish::ast::finalize_parse(a0, &v3, v0);
    return a0;
}
