long long uu_echo::filter_echo_flags(unsigned long a0, uint128_t a1[3])
{
    unsigned short v0;  // [bp-0x10a]
    int v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    unsigned long long v3;  // [bp-0xf8]
    void* v4;  // [bp-0xe8]
    unsigned long long v5;  // [bp-0xe0]
    void* v6;  // [bp-0xd8]
    struct_0 *v7;  // [bp-0xd0]
    int v8;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v9;  // [bp-0xc0]
    int v10;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v11;  // [bp-0xa8]
    int v12;  // [bp-0x90]
    unsigned long long v13;  // [bp-0x80]
    int v14;  // [bp-0x78]
    int v15;  // [bp-0x68]
    int v16;  // [bp-0x58]
    char v17;  // [bp-0x48]

    v4 = 0;
    v5 = 8;
    v6 = 0;
    v0 = 1;
    *((uint128_t *)&v16) = a1[2];
    *((uint128_t *)&v15) = a1[1];
    *((uint128_t *)&v14) = a1[0];
    while (true)
    {
        v12.next(&v14);
        if ((long long)v12 == 0x8000000000000000)
            break;
        v3 = v13;
        v1 = v12;
        if ((char)uu_echo::is_echo_flag(&(char)v1, &v0))
        {
            core::ptr::drop_in_place<std::ffi::os_str::OsString>((long long)v1, v2);
        }
        else
        {
            v10 = v3;
            memcpy(&v8, &(char)v1, 16);
            v4.push(&v8, &g_46fee8);
            break;
        }
    }
    memcpy(&v11, &v16, 16);
    v10 = v15;
    v8 = v14;
    while (true)
    {
        v17.next(&(char)v8);
        if (*((long long *)&v17) == 0x8000000000000000)
            break;
        v4.push(&v17, &g_46ff00);
    }
    core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<core::iter::adapters::skip::Skip<core::iter::adapters::cloned::Cloned<core::slice::iter::Iter<std::ffi::os_str::OsString>>>>>((long long)v8, v9);
    v7->field_10 = 0;
    v7->field_0 = *((int128_t *)&v4);
    v7->field_18 = v0;
    return v0;
}
