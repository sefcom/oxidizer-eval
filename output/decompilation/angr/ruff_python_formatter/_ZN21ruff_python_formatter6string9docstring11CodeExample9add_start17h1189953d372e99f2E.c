long long ruff_python_formatter::string::docstring::CodeExample::add_start(void* a0, void* a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x138]
    int v1;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x128]
    int v3;  // [bp-0x120], Other Possible Types: uint128_t
    unsigned long v4;  // [bp-0x110]
    char v5;  // [bp-0xe8], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0xe0]
    int v7;  // [bp-0xd8]
    unsigned long v8;  // [bp-0xc8]
    char v9;  // [bp-0xc0], Other Possible Types: unsigned long
    unsigned long long v10;  // [bp-0xb8]
    int v11;  // [bp-0xb0]
    int v12;  // [bp-0xa0]
    int v13;  // [bp-0x90]
    char v14;  // [bp-0x80], Other Possible Types: unsigned long
    unsigned long long v15;  // [bp-0x78]
    int v16;  // [bp-0x70]
    int v17;  // [bp-0x60]
    int v18;  // [bp-0x50]
    char v19;  // [bp-0x40]
    unsigned long long v21;  // rdx
    int v22;  // xmm0

    if (*((long long *)a0) != 9223372036854775811)
    {
        v0 = &g_97f1b8;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_97f1c8); /* do not return */
    }
    v5.new(a1);
    if (v5 == 0x8000000000000000)
    {
        core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleRst>>(0x8000000000000000, v6);
        v14.new(*((long long *)a1), (long long)a1[8]);
        if (v14 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleRst>>(0x8000000000000000, v15);
            v9.new(*((long long *)a1), (long long)a1[8]);
            if (v9 == 0x8000000000000000)
            {
                core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleRst>>(0x8000000000000000, v10);
                v4 = (long long)a1[32];
                *((int128_t *)&v3) = (int128_t)a1[16];
                *((int128_t *)&v1) = *((int128_t *)a1);
                v0 = 9223372036854775811;
                v21 = &g_97f228;
            }
            else
            {
                core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(a0);
                *((unsigned long long *)a0) = 9223372036854775810;
                *((int128_t *)&a0[8]) = *((int128_t *)&v9);
                a0[24] = v11;
                a0[40] = v12;
                a0[56] = v13;
                v4 = (long long)a1[32];
                *((int128_t *)&v3) = (int128_t)a1[16];
                *((int128_t *)&v1) = *((int128_t *)a1);
                v0 = 9223372036854775811;
                v21 = &g_97f210;
            }
        }
        else
        {
            core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(a0);
            *((int128_t *)&a0[64]) = *((int128_t *)&v19);
            v22 = *((int128_t *)&v14);
            a0[48] = v18;
            a0[32] = v17;
            a0[16] = v16;
            *(a0) = v22;
            v4 = (long long)a1[32];
            *((int128_t *)&v3) = (int128_t)a1[16];
            *((int128_t *)&v1) = *((int128_t *)a1);
            v0 = 9223372036854775811;
            v21 = &g_97f1f8;
        }
    }
    else
    {
        core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(a0);
        *((unsigned long long *)a0) = 0x8000000000000000;
        *((int128_t *)&a0[8]) = *((int128_t *)&v5);
        a0[24] = v7;
        *((unsigned long *)&a0[40]) = v8;
        v0 = 9223372036854775812;
        v21 = &g_97f1e0;
    }
    return a2.push_back(&v0, v21);
}
