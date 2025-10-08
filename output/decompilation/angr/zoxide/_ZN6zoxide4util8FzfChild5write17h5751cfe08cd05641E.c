long long zoxide::util::FzfChild::write(void* a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    char *v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    void* v5;  // [bp-0x58]
    char *v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    unsigned long long v9;  // [bp-0x30]
    unsigned long long v10;  // [bp-0x28]
    unsigned int v11;  // [bp-0x20]
    unsigned long long v13;  // rax
    unsigned long long v14;  // r15

    if (a1->field_10 == -1)
        core::option::unwrap_failed(&g_534b58); /* do not return */
    v8 = 1;
    v9 = a3;
    v10 = a2;
    v11 = 9;
    v6 = &v8;
    v7 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
    v1 = &g_5348e0;
    v2 = 2;
    v5 = 0;
    v3 = &v6;
    v4 = 1;
    v13 = a1->field_10.write_fmt(&v1);
    if (!v13)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v14 = v13;
    if ((char)v13.kind() != 11)
    {
        v2 = v14;
        v1 = 9223372036854775809;
        return a0.context(&v1);
    }
    v0 = v14;
    v1.wait(a1);
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
    {
        *((unsigned long long *)&a0[8]) = 2;
        *((unsigned long long *)a0) = 9223372036854775809;
    }
    else
    {
        *((char **)&a0[16]) = v3;
        *((int128_t *)a0) = *((int128_t *)&v1);
    }
    return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(&v0);
}
