long long fd::regex_helper::pattern_matches_strings_with_leading_dot(unsigned long long a0, unsigned long a1)
{
    char v0;  // [bp-0x208]
    unsigned int v1;  // [bp-0x207]
    unsigned short v2;  // [bp-0x203]
    char v3;  // [bp-0x201]
    unsigned int v4;  // [bp-0x200]
    unsigned short v5;  // [bp-0x1fc]
    char v6;  // [bp-0x1fa]
    char v7;  // [bp-0x1f8]
    char v8;  // [bp-0x1f0]
    char v9;  // [bp-0x1e8]
    char v10;  // [bp-0x1e0]
    int v11;  // [bp-0x1d8]
    int v12;  // [bp-0x1c8]
    int v13;  // [bp-0x1b8]
    char v14;  // [bp-0x1a8]
    int v15;  // [bp-0x198]
    int v16;  // [bp-0x188]
    char v17;  // [bp-0x180]
    char v18;  // [bp-0x178]
    char v19;  // [bp-0x168]
    int v20;  // [bp-0x158]
    int v21;  // [bp-0x148]
    int v22;  // [bp-0x138]
    char v23;  // [bp-0x128]
    int v24;  // [bp-0x118]
    char v25;  // [bp-0x108]
    unsigned long v27;  // rbx

    v4 = 250;
    v5 = 0;
    v6 = 0;
    v1 = 33686018;
    v2 = 514;
    v3 = 10;
    v0 = 0;
    v25.build(&v0);
    v0.parse(&v25, a0);
    if (*((long long *)&v0) == 9223372036854775809)
    {
        memcpy(&v19, &v10, 16);
        memcpy(&v18, &v8, 16);
        *((int128_t *)&v16) = *((int128_t *)&v4);
        v27 = (unsigned int)fd::regex_helper::pattern_matches_strings_with_leading_dot::{{closure}}(&(char)v16);
    }
    else
    {
        memcpy(&(char)v16, &v0, 16);
        v24 = v15;
        memcpy(&v23, &v14, 16);
        v22 = v13;
        v21 = v12;
        v20 = v11;
        memcpy(&v19, &v9, 16);
        memcpy(&v18, &v7, 16);
        if ((long long)v16 == 9223372036854775809)
        {
            v27 = v17;
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<bool,regex_syntax::error::Error>>(&(char)v16);
            v27 = 0;
        }
    }
    core::ptr::drop_in_place<regex_syntax::parser::Parser>(&v25);
    return (unsigned int)v27 & 0xffffff00 | (char)v27 & 1;
}
