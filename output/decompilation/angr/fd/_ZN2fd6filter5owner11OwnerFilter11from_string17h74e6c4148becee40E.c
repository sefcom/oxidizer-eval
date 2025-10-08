long long fd::filter::owner::OwnerFilter::from_string(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xf8], Other Possible Types: unsigned long
    char v1;  // [bp-0xf4]
    unsigned long long v2;  // [bp-0xf0]
    char *v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    void* v5;  // [bp-0xd8]
    unsigned long long v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    char *v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    int v10;  // [bp-0xa8]
    void* v11;  // [bp-0x90]
    unsigned long long v12;  // [bp-0x88]
    char v13;  // [bp-0x80]
    unsigned short v14;  // [bp-0x50]
    char v15;  // [bp-0x48]
    unsigned long long v16;  // [bp-0x18]
    unsigned long long v18;  // r14
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax

    v16 = v18;
    v6 = a1;
    v7 = a2;
    v13.into_searcher(58, a1, a2);
    v11 = 0;
    v12 = a2;
    v14 = 1;
    v19 = v11.next();
    v20 = v11.next();
    if (!v11.next())
    {
        v0.parse(v19, v21);
        if (!(v0 & 1))
        {
            *((uint128_t *)&v10) = *((long long *)&v1);
            v22 = v0.parse(v20, v21);
            if (*((int *)&v0) != 1)
            {
                *(a0) = v10 & 18446744073709551615 | *((long long *)&v1) * 0x10000000000000000;
                return v22;
            }
        }
        v23 = v2;
    }
    else
    {
        v8 = &v6;
        v9 = <&T as core::fmt::Display>::fmt;
        v0 = &g_802308;
        v2 = 2;
        v5 = 0;
        v3 = &v8;
        v4 = 1;
        v15.map_or_else(0, a2, &(char)v0);
        v23 = v15.msg();
    }
    *((unsigned long long *)&a0[8]) = v23;
    *((unsigned int *)a0) = 3;
    return v23;
}
