long long just::recipe::Recipe<D>::doc(unsigned long long a0[30])
{
    unsigned long long v0;  // [bp-0x60]
    void* v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    void* v5;  // [bp-0x38]
    unsigned long v6;  // [bp-0x30]
    unsigned long v7;  // [bp-0x28]
    unsigned long v8;  // [bp-0x20]
    unsigned long v10;  // rax
    unsigned long v11;  // rax
    unsigned long long v13[3];  // rax

    v10 = a0[27];
    v11 = v10;
    if (v11)
        v11 = a0[29];
    v0 = v10;
    v1 = 0;
    v2 = v10;
    v3 = a0[28];
    v4 = v0;
    v5 = 0;
    v6 = v10;
    v7 = a0[28];
    v8 = v11;
    while (true)
    {
        v13 = v0.next();
        if (!v13)
        {
            return (a0[12] == 0x8000000000000000 ? 0 : a0[13]);
        }
        else if (v13[0] + 0x8000000000000000 == 3)
        {
            return (v13[1] == 0x8000000000000000 ? 0 : v13[2]);
        }
    }
}
