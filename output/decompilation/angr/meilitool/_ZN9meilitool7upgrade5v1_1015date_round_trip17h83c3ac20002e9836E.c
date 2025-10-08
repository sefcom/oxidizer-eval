long long meilitool::upgrade::v1_10::date_round_trip(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4, unsigned long long a5)
{
    char v0;  // [bp-0x80], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x7d]
    char v2;  // [bp-0x79]
    unsigned long v3;  // [bp-0x78]
    unsigned int v4;  // [bp-0x70]
    unsigned int v5;  // [bp-0x6d]
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    char v10;  // [bp-0x48]

    v6 = a1;
    v7 = a2;
    v8 = a5;
    v9 = 10;
    v10.get(a3, a4, a0, a5, 10);
    (char)v0.with_context(&v10, &v8, &v6);
    if (v2 == 2)
        return v3;
    v5 = v1;
    v4 = *((int *)&v0);
    if (!(v2 & 1))
    {
        v1 = v5;
        v0 = v4;
        v10.put(a3, a4, a0, a5, 10, &(char)v0);
        return v10.with_context(&v8, &v6);
    }
    return 0;
}
