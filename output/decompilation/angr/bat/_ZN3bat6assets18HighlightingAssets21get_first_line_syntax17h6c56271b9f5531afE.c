long long bat::assets::HighlightingAssets::get_first_line_syntax(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xa7]
    unsigned int v2;  // [bp-0xa4]
    void* v3;  // [bp-0xa0], Other Possible Types: unsigned long long
    int v4;  // [bp-0x98], Other Possible Types: char
    int v5;  // [bp-0x88]
    int v6;  // [bp-0x78]
    int v7;  // [bp-0x68]
    char v8;  // [bp-0x58]
    char v9;  // [bp-0x40]
    unsigned long v11;  // rax
    void* v12;  // rax
    unsigned int v13;  // ecx

    v0.get_syntax_set(a1);
    v11 = v0;
    if ((char)v11 != 13)
    {
        v13 = *((int *)&v1);
        *((unsigned int *)&a0[4]) = v2;
        *((unsigned int *)&a0[1]) = v13;
        a0[32] = v5;
        a0[48] = v6;
        a0[64] = v7;
        a0[16] = v4;
        *((char *)a0) = v11;
        *((void* *)&a0[8]) = v3;
        return v11;
    }
    v9.spec_to_string(a2, a3);
    v0.from_utf8(&v9);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
    {
        memcpy(&v8, &v4, 16);
        if (v3 != 0x8000000000000000)
        {
            memcpy(&v3, &v8, 16);
            v0 = v3;
            v12 = bat::assets::HighlightingAssets::get_first_line_syntax::{{closure}}(v3, &v0);
            if (v12)
            {
                *((void* *)&a0[8]) = v12;
                *((unsigned long long *)&a0[16]) = v3;
                *((char *)a0) = 13;
                return v12;
            }
        }
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,alloc::string::FromUtf8Error>>(&v0);
    }
    *((unsigned long long *)&a0[8]) = 0;
    *((unsigned long long *)&a0[16]) = v3;
    *((char *)a0) = 13;
    return 0;
}
