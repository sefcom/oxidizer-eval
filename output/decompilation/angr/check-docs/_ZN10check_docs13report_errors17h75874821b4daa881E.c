long long check_docs::report_errors(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    char *v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    char *v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    void* v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rax
    unsigned long v14;  // rbx
    unsigned long v15;  // rax

    v8 = a0;
    v9 = a1;
    if (!a3)
        return v15;
    v0 = &v8;
    v1 = <&T as core::fmt::Display>::fmt;
    v3 = &g_5d33f8;
    v4 = 2;
    v7 = 0;
    v5 = &v0;
    v6 = 1;
    std::io::stdio::_eprint(&v3);
    v11 = a3 * 8;
    do
    {
        v12 = v11;
        v2 = a2;
        a2 += 8;
        v0 = &v2;
        v1 = <&T as core::fmt::Display>::fmt;
        v3 = &g_5d3418;
        v4 = 2;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        v13 = std::io::stdio::_eprint(&v3);
        v14 = v12 - 8;
        v11 = v14;
    } while (v12 != 8);
    return v13;
}
