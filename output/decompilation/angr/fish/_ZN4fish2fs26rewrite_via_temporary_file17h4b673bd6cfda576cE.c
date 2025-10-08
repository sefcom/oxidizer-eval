void fish::fs::rewrite_via_temporary_file(unsigned long long a0[8], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xf8]
    int v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    char v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    char v6;  // [bp-0xc8], Other Possible Types: unsigned long
    unsigned long long v7;  // [bp-0xc0]
    char v8;  // [bp-0xb8]
    char v9;  // [bp-0x90]
    char v10;  // [bp-0x38]

    v6.to_vec(a1, a2);
    v3.add(&v6, ".", 7);
    fish::fs::create_temporary_file(&v6, v4, v5);
    if (v7 == 0x8000000000000000)
    {
        a0[0] = v6;
        a0[7] = 9223372036854775809;
    }
    else
    {
        *((int128_t *)&v1) = *((int128_t *)&v8);
        v0 = v7;
        fish::fs::rewrite_via_temporary_file::try_rewriting(&v6, a1, a2, a3, (long long)v1, v2, v6);
        if (*((long long *)&v9) == 9223372036854775809 || (char)0.is_ok_and(*((int *)&v10)))
            fish::wutil::wunlink((long long)v1, v2);
        memcpy(a0, &v6, 152);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
    return;
}
