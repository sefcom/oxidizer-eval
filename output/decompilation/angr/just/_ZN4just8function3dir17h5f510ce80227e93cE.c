long long just::function::dir(void* a0, unsigned long long a1, unsigned long long a2, struct_0 **a3)
{
    unsigned long v0;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x78]
    char *v2;  // [bp-0x70], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v3;  // [bp-0x68]
    void* v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    char v7;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x38]
    unsigned long long v9;  // [bp-0x30]
    char *v10;  // [bp-0x28]
    unsigned long long v11;  // [bp-0x20]
    unsigned long long v13;  // rax

    v5 = a1;
    v6 = a2;
    a3(&v7);
    if ((char)(((0 ^ v7) & (0 ^ -(v7))) >> 63))
    {
        v10 = &v5;
        v11 = <&T as core::fmt::Display>::fmt;
        v0 = &g_82fe08;
        v1 = 2;
        v4 = 0;
        v2 = &v10;
        v3 = 1;
        v13 = a0 + 8.map_or_else(0, a2, &v0);
        *((unsigned long long *)a0) = 1;
        return v13;
    }
    core::str::converts::from_utf8(&(char)v0, v8, v9);
    if ((int)v0 == 1)
    {
        just::function::dir::{{closure}}(&(char)v0, v8, v9, &v5);
        *((unsigned long *)&a0[24]) = v2;
        *((int128_t *)&a0[8]) = *((int128_t *)&v0);
        *((unsigned long long *)a0) = 1;
    }
    else
    {
        (char)v0.to_vec(v1, v2);
        *((int128_t *)&a0[16]) = *((int128_t *)&v1);
        *((unsigned long *)&a0[8]) = v0;
        *((unsigned long long *)a0) = 0;
    }
    return core::ptr::drop_in_place<std::path::PathBuf>(&v7);
}
