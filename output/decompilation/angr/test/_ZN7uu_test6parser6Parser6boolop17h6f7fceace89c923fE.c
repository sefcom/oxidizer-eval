long long uu_test::parser::Parser::boolop(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x68]
    int v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x50]
    int v3;  // [bp-0x40], Other Possible Types: char
    char v4;  // [bp-0x30]
    char v6;  // al
    unsigned long long v7;  // rax
    int v8;  // xmm0

    v3.to_vec("-a-o===!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs", 2);
    v2 = *((long long *)&v4);
    v1 = v3;
    v0 = 2;
    v6 = a2.eq(&v0);
    core::ptr::drop_in_place<uu_test::parser::Symbol>(&v0);
    if (v6)
        v0.term(a1);
    else
        v0.expr(a1);
    if ((int)v0 != 7)
    {
        v8 = *((int128_t *)&v0);
        *((int128_t *)&a0[16]) = (int128_t)(&v1)[8];
        *(a0) = v8;
        return core::ptr::drop_in_place<uu_test::parser::Symbol>(a2);
    }
    v7 = a1.push(a2, &g_4e0260);
    *((unsigned long long *)a0) = 7;
    return v7;
}
