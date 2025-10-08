long long uu_realpath::canonicalize_relative_option(unsigned long long a0[3], unsigned long long a1[3], char a2, char a3)
{
    char v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // r13
    unsigned long long v8;  // r13
    unsigned long long v9;  // rsi

    v5 = a1[0];
    v6 = -(v5);
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
    {
        v7 = 0x8000000000000000;
    }
    else
    {
        v8 = a1[1];
        uu_realpath::canonicalize_relative(&v3, v8, a1[2], a2, a3);
        v0.map_err_context(&v3, v8, a1[2]);
        v9 = v8;
        if (v7 == 0x8000000000000000)
        {
            a0[1] = v1;
            a0[2] = v2;
            a0[0] = 9223372036854775809;
            return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(v5, v8);
        }
        v6 = (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(v5, v8);
    }
    a0[0] = v7;
    a0[1] = v1;
    a0[2] = v2;
    return v6;
}
