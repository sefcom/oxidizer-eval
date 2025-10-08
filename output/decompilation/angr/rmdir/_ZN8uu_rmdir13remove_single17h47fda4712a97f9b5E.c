long long uu_rmdir::remove_single(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    char *v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    char *v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    char *v12;  // [bp-0x38]
    unsigned long long v13;  // [bp-0x30]
    void* v14;  // [bp-0x28]
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax

    if ((a3 & 0x10000))
    {
        v0 = uucore::util_name();
        v1 = v16;
        v6 = 1;
        v7 = a1;
        v8 = a2;
        v9 = 1;
        v2 = &v0;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v6;
        v5 = <os_display::Quoted as core::fmt::Display>::fmt;
        v10 = &g_4de728;
        v11 = 3;
        v14 = 0;
        v12 = &v2;
        v13 = 2;
        std::io::stdio::_print(&v10);
    }
    v17 = std::fs::remove_dir(a1, a2);
    if (v17)
    {
        a0[1] = a1;
        a0[2] = a2;
    }
    a0[0] = v17;
    return v17;
}
