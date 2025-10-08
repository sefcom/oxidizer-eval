long long starship::formatter::string_formatter::StringFormatter::parse::parse_style(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x88]
    char v1;  // [bp-0x81]
    char v2;  // [bp-0x79]
    unsigned short v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x71]
    unsigned long long v5;  // [bp-0x68]
    char v6;  // [bp-0x53]
    char v7;  // [bp-0x52]
    unsigned short v8;  // [bp-0x42]
    char v9;  // [bp-0x40]
    char v10;  // [bp-0x38]
    char v11;  // [bp-0x28]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rcx
    unsigned long v15;  // rax

    v0.into_iter(a1);
    v5 = a2;
    v9.collect(&v0);
    if (*((int *)&v9) == 1)
    {
        v4 = *((long long *)&v11);
        memcpy(&v1, &v10, 16);
        *((char *)a0) = 1;
        v13 = *((long long *)&v2);
        *((int128_t *)&a0[1]) = *((int128_t *)&v0);
        *((unsigned long long *)&a0[16]) = v13;
        *((unsigned long long *)&a0[24]) = v4;
        return v13;
    }
    starship::formatter::string_formatter::StringFormatter::parse::parse_style::{{closure}}(&v6, v14, &v10);
    v15 = v6;
    memcpy(&v0, &v7, 16);
    v3 = v8;
    if ((char)v15 != 2)
    {
        *((unsigned short *)&a0[18]) = v3;
        *((int128_t *)&a0[2]) = *((int128_t *)&v0);
        *((char *)a0) = 0;
        *((char *)&a0[1]) = v15;
        return v15;
    }
    *((char *)a0) = 2;
    return v15;
}
