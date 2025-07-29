long long uu_realpath::canonicalize_relative_option(unsigned long long a0[3], struct_0 *a1, char a2, char a3)
{
    int v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    char v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    char v6;  // [bp-0x40]
    void* v8;  // rax
    unsigned long long v9;  // r13

    v8 = 0;
    if ((char)(((0 ^ *((long long *)&a1->field_0)) & (0 ^ -(*((long long *)&a1->field_0)))) >> 63))
    {
        v9 = 0x8000000000000000;
    }
    else
    {
        v2 = a1->field_10;
        *((int128_t *)&v0) = *((int128_t *)&a1->field_0);
        uu_realpath::canonicalize_relative(&v6, v1, v2, a2, a3);
        v3.map_err_context(&v6, &(char)v0);
        if (v9 == 0x8000000000000000)
        {
            a0[1] = v4;
            a0[2] = v5;
            a0[0] = 9223372036854775809;
            return (unsigned long long)::0x49f440::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
        }
        v8 = (unsigned long long)::0x49f440::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
    }
    a0[0] = v9;
    a0[1] = v4;
    a0[2] = v5;
    return v8;
}
