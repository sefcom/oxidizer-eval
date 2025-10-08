double bat::printer::InteractivePrinter::print_header_component_with_indent(long long a0, long long a1, long long a2, long long a3, long long a4)
{
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    char *v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    char v4;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x58]
    char *v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    void* v8;  // [bp-0x40]
    int v9;  // [bp-0x30]
    char v10;  // [bp-0x20]
    unsigned long v12;  // xmm0lq
    int v13;  // xmm0
    int v14;  // xmm1
    int v15;  // xmm2

    v0 = a3;
    v1 = a4;
    v4.print_header_component_indent(a1, a2);
    if (v4 != 13)
    {
        a0[4] = *((int128_t *)&v10);
        v13 = *((int128_t *)&v4);
        v14 = *((int128_t *)&v6);
        v15 = *((int128_t *)&v8);
        *((void*)&a0[3]) = v9;
        *((void*)&a0[2]) = v15;
        *((void*)&a0[1]) = v14;
        *((void*)&a0[0]) = v13;
        return (unsigned long long)v13;
    }
    v2 = &v0;
    v3 = <&T as core::fmt::Display>::fmt;
    v4 = &g_acea80;
    v5 = 2;
    v8 = 0;
    v6 = &v2;
    v7 = 1;
    a0.write_fmt(a2, &v4);
    return v12;
}
