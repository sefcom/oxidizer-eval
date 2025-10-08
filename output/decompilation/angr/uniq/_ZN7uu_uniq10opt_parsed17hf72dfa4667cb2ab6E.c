long long uu_uniq::opt_parsed(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xd0]
    char v1;  // [bp-0xcf]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb8]
    char *v5;  // [bp-0xb0]
    unsigned long long v6;  // [bp-0xa8]
    char *v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    void* v9;  // [bp-0x90]
    unsigned long v10;  // [bp-0x88]
    unsigned long v11;  // [bp-0x80]
    char v12;  // [bp-0x78]
    char v13;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x68]
    char *v15;  // [bp-0x60]
    unsigned long long v16;  // [bp-0x58]
    void* v17;  // [bp-0x50]
    char v18;  // [bp-0x40]
    unsigned int v19;  // [bp-0x28]
    unsigned long long v21[3];  // rax
    unsigned long long v22;  // rax

    v3 = a1;
    v4 = a2;
    v13.try_get_one(a3, a1, a2);
    v21 = a1.unwrap(a2, &v13);
    if (!v21)
    {
        *((uint128_t *)a0) = 0;
        return a0;
    }
    ::0x461d70::core::num::<impl usize>::from_ascii_radix(&v0, v21[1], v21[2]);
    if (!v0)
    {
        *((unsigned long long *)&a0[8]) = 1;
        *((unsigned long long *)&a0[16]) = v2;
        goto LABEL_466c1e;
    }
    else if (v1 == 2)
    {
        *((unsigned long long *)&a0[8]) = 1;
        *((unsigned long long *)&a0[16]) = 18446744073709551615;
LABEL_466c1e:
        v22 = 0;
    }
    else
    {
        v9 = 0;
        v10 = v21[1];
        v11 = v21[2];
        v12 = 0;
        v5 = &v3;
        v6 = <&T as core::fmt::Display>::fmt;
        v7 = &v9;
        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
        v13 = &g_4f5850;
        v14 = 2;
        v17 = 0;
        v15 = &v5;
        v16 = 2;
        v18.map_or_else(&v13);
        v19 = 1;
        *((double *)&a0[8]) = v18.new();
        *((unsigned long long **)&a0[16]) = &g_4f5890;
        v22 = 1;
    }
    *((unsigned long long *)a0) = v22;
    return a0;
}
