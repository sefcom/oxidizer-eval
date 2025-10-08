long long fish::env::environment::get_hostname_identifier(void* a0)
{
    int v0;  // [bp-0x130], Other Possible Types: char
    unsigned long v1;  // [bp-0x120]
    uint128_t v2;  // [bp-0x118]
    uint128_t v3;  // [bp-0x108]
    uint128_t v4;  // [bp-0xf8]
    uint128_t v5;  // [bp-0xe8]
    uint128_t v6;  // [bp-0xd8]
    uint128_t v7;  // [bp-0xc8]
    uint128_t v8;  // [bp-0xb8]
    uint128_t v9;  // [bp-0xa8]
    uint128_t v10;  // [bp-0x98]
    uint128_t v11;  // [bp-0x88]
    uint128_t v12;  // [bp-0x78]
    uint128_t v13;  // [bp-0x68]
    uint128_t v14;  // [bp-0x58]
    uint128_t v15;  // [bp-0x48]
    uint128_t v16;  // [bp-0x38]
    uint128_t v17;  // [bp-0x28]

    v17 = 0;
    v16 = 0;
    v15 = 0;
    v14 = 0;
    v13 = 0;
    v12 = 0;
    v11 = 0;
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v4 = 0;
    v3 = 0;
    v2 = 0;
    if (gethostname(&v2, 0x100))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    fish::common::str2wcstring(&v0, &v2, strlen(&v2));
    if (!v1)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    }
    *((unsigned long *)&a0[16]) = v1;
    *(a0) = v0;
    return v1;
}
