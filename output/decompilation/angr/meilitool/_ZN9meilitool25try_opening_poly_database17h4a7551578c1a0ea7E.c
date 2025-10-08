long long meilitool::try_opening_poly_database(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    char v2;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    unsigned int v11;  // [bp-0x38]
    char v12;  // [bp-0x30]

    v0 = a3;
    v1 = a4;
    v8 = a1;
    v11 = 0;
    v9 = a3;
    v10 = a4;
    v12.open(&v8, a2);
    v2.with_context(&v12, &v0);
    if (v2 != 2)
    {
        v5 = v2;
        v6 = v3;
        v7 = v4;
        return a0.with_context(&v5, &v0);
    }
    a0[1] = v3;
    a0[0] = 1;
    return v3;
}
