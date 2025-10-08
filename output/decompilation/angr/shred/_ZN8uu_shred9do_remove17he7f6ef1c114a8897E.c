long long uu_shred::do_remove(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4, unsigned int a5)
{
    char *v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    char *v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    void* v6;  // [bp-0x78]
    void* v7;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    char v10;  // [bp-0x50]
    char v11;  // [bp-0x48]
    unsigned long v13;  // r13
    unsigned long v14;  // rbp
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rax

    v13 = a5;
    v14 = a4;
    if (a4)
    {
        v7 = uucore::util_name();
        v8 = v15;
        v0 = &v7;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &g_4f9f98;
        v3 = 2;
        v6 = 0;
        v4 = &v0;
        v5 = 1;
        std::io::stdio::_eprint(&v2);
        v7 = 0;
        v8 = a2;
        v9 = a3;
        v10 = 0;
        v0 = &v7;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v2 = &g_4fa2f0;
        v3 = 2;
        v6 = 0;
        v4 = &v0;
        v5 = 1;
        std::io::stdio::_eprint(&v2);
    }
    if ((char)v13 == 1)
    {
        v11.with_file_name(a0, a1, a2, a3);
        if ((char)(((0 ^ *((long long *)&v11)) & (0 ^ -(*((long long *)&v11)))) >> 63))
            goto LABEL_4657b0;
LABEL_465775:
        v16 = std::fs::remove_file(&v11);
        if (!((char)v14 & !v16))
            return v16;
    }
    else
    {
        uu_shred::wipe_name(&v11, a0, a1, v14, v13);
        if (!((char)(((0 ^ *((long long *)&v11)) & (0 ^ -(*((long long *)&v11)))) >> 63)))
            goto LABEL_465775;
LABEL_4657b0:
        if (!(char)v14)
            return 0;
    }
    v7 = uucore::util_name();
    v8 = v15;
    v0 = &v7;
    v1 = <&T as core::fmt::Display>::fmt;
    v2 = &g_4f9f98;
    v3 = 2;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    std::io::stdio::_eprint(&v2);
    v7 = 0;
    v8 = a2;
    v9 = a3;
    v10 = 0;
    v0 = &v7;
    v1 = <os_display::Quoted as core::fmt::Display>::fmt;
    v2 = &g_4fa310;
    v3 = 2;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    std::io::stdio::_eprint(&v2);
    return 0;
}
