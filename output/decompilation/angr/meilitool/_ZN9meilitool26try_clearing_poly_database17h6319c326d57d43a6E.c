long long meilitool::try_clearing_poly_database(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]

    v0 = a3;
    v1 = a4;
    v2.clear(a1, a2, a0);
    return v2.with_context(&v0, a2);
}
