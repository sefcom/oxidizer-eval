long long ruff_python_formatter::string::docstring::CodeExample::finish(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0xa8]
    int v1;  // [bp-0x98]
    int v2;  // [bp-0x88]
    int v3;  // [bp-0x78]
    int v4;  // [bp-0x68]
    int v5;  // [bp-0x58]
    int v6;  // [bp-0x48]
    int v7;  // [bp-0x38]
    char v8;  // [bp-0x28]
    int v9;  // [bp-0x18]

    *((int128_t *)&v4) = (int128_t)a0[64];
    *((int128_t *)&v3) = (int128_t)a0[48];
    *((int128_t *)&v2) = (int128_t)a0[32];
    *((int128_t *)&v1) = (int128_t)a0[16];
    *((int128_t *)&v0) = *((int128_t *)a0);
    *((unsigned long long *)a0) = 9223372036854775811;
    if ((long long)v0 != 9223372036854775811)
    {
        v9 = v4;
        memcpy(&v8, &v3, 16);
        v7 = v2;
        v6 = v1;
        v5 = v0;
        return a1.push_back(&v5, &g_97f1a0);
    }
    return (unsigned long long)core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(&v0);
}
