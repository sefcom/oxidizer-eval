double fish::builtins::string::match::StringMatcher::new(long long a0, long long a1, long long a2, long long a3)
{
    int v0;  // [bp-0xb8], Other Possible Types: char
    int v1;  // [bp-0xa8], Other Possible Types: char
    char v2;  // [bp-0x98]
    char v3;  // [bp-0x80]
    char v4;  // [bp-0x78]
    char v5;  // [bp-0x68]
    char v6;  // [bp-0x58]
    int v7;  // [bp-0x48]
    int v8;  // [bp-0x38]
    int v9;  // [bp-0x28]
    char v10;  // [bp-0x18]
    unsigned long long v12;  // rax

    if (!a3->field_1e)
    {
        a0 + 16.new(a1, a2, a3);
        *((uint128_t *)a0) = 0;
        return 0;
    }
    v3.new(a1, a2, a3);
    v12 = *((long long *)&v3);
    memcpy(&v0, &v4, 16);
    memcpy(&v1, &v5, 16);
    memcpy(&v2, &v6, 16);
    if (!v12)
    {
        *((int128_t *)&a0[40]) = *((int128_t *)&v2);
        a0[24] = v1;
        a0[8] = v0;
        *((unsigned long long *)a0) = 1;
        return (unsigned long long)v0;
    }
    *((int128_t *)&a0[112]) = *((int128_t *)&v10);
    a0[96] = v9;
    a0[80] = v8;
    a0[64] = v7;
    *((int128_t *)&a0[48]) = *((int128_t *)&v2);
    a0[32] = v1;
    a0[16] = v0;
    *((unsigned long long *)&a0[8]) = v12;
    *((unsigned long long *)a0) = 0;
    return (unsigned long long)v0;
}
