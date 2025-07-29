long long uu_pr::parse_usize(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    char v2;  // [bp-0x80], Other Possible Types: unsigned long long
    char v3;  // [bp-0x78]
    int v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x58]
    char v6;  // [bp-0x50], Other Possible Types: unsigned long long
    char v7;  // [bp-0x48]
    int v8;  // [bp-0x38]
    char v9;  // [bp-0x28]
    unsigned long long v11;  // rax

    v0 = a2;
    v1 = a3;
    v2.try_get_one(a1, a2, a3);
    v11 = a2.unwrap(a3, &v2);
    if (!v11)
    {
        *(a0) = 9223372036854775814;
        return 9223372036854775814;
    }
    uu_pr::parse_usize::{{closure}}(&v6, &v0, v11);
    v5 = *((long long *)&v9);
    v4 = v8;
    memcpy(&v3, &v7, 16);
    v2 = v6;
    return (unsigned long long)a0.call_once(&v2);
}
