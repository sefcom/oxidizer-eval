long long fd::build_regex(void* a0, unsigned long long a1[3], unsigned int a2)
{
    char v0;  // [bp-0xf8], Other Possible Types: unsigned long
    char v1;  // [bp-0xf0]
    char v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    char v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xc8]
    char v6;  // [bp-0xc0]
    char v7;  // [bp-0x23]
    char v8;  // [bp-0x21]
    int v10;  // xmm0

    v6.new(a1[1], a1[2]);
    v7 = (char)a2 ^ 1;
    v8 = 1;
    v0.build(&v6, a2);
    if (v0)
    {
        v10 = *((int128_t *)&v0);
        *((int128_t *)&a0[16]) = *((int128_t *)&v2);
        *(a0) = v10;
    }
    else
    {
        v5 = v3;
        memcpy(&v4, &v1, 16);
        *((long long *)&a0[8]) = fd::build_regex::{{closure}}(&v4);
        *((unsigned long long *)a0) = 0;
    }
    core::ptr::drop_in_place<regex::builders::bytes::RegexBuilder>(&v6);
    return core::ptr::drop_in_place<alloc::string::String>(a1);
}
