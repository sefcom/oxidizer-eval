void uu_tee::open(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3, char *a4)
{
    unsigned long long v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    unsigned int v2;  // [bp-0xc8]
    char v3;  // [bp-0xc7]
    char v4;  // [bp-0xc6]
    char v5;  // [bp-0xc5]
    char v6;  // [bp-0xc4], Other Possible Types: unsigned short
    char v7;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb8]
    char *v10;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xa8]
    void* v12;  // [bp-0xa0]
    unsigned long long v13;  // [bp-0x90]
    char v14;  // [bp-0x80], Other Possible Types: unsigned int
    unsigned int v15;  // [bp-0x7c]
    unsigned long long v16;  // [bp-0x78]
    char *v17;  // [bp-0x70]
    unsigned long long v18;  // [bp-0x68]
    char *v19;  // [bp-0x60]
    unsigned long long v20;  // [bp-0x58]
    void* v21;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x48]
    unsigned long long v23;  // [bp-0x40]
    char v24;  // [bp-0x38]
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax

    v7.to_vec(a1, a2);
    v13 = v7;
    v1 = 0x1b600000000;
    v2 = 0;
    v6 = 0;
    if (a3)
        v4 = 1;
    else
        v5 = 1;
    v3 = 1;
    v6 = 1;
    v14.open(&v1, v8, v10);
    if (v14 == 1)
    {
        v0 = v16;
        v21 = uucore::util_name();
        v22 = v26;
        v17 = &v21;
        v18 = <&T as core::fmt::Display>::fmt;
        v7 = &g_4ea4f0;
        v9 = 2;
        v12 = 0;
        v10 = &v17;
        v11 = 1;
        std::io::stdio::_eprint(&v7);
        v21 = 0;
        v22 = a1;
        v23 = a2;
        v24 = 0;
        v17 = &v21;
        v18 = <os_display::Quoted as core::fmt::Display>::fmt;
        v19 = &v0;
        v20 = <std::io::error::Error as core::fmt::Display>::fmt;
        v7 = &g_4ea510;
        v9 = 3;
        v12 = 0;
        v10 = &v17;
        v11 = 2;
        std::io::stdio::_eprint(&v7);
        if (!a4 || *(a4) <= 1)
        {
            *((unsigned long long *)a0) = 9223372036854775809;
            core::ptr::drop_in_place<std::io::error::Error>(v0);
        }
        else
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
            *((unsigned long long *)&a0[8]) = v0;
        }
    }
    else
    {
        v27 = v15.new();
        v7.to_vec(a1, a2);
        *((unsigned long long *)&a0[16]) = v10;
        *((int128_t *)a0) = *((int128_t *)&v7);
        *((unsigned long long *)&a0[24]) = v27;
        *((char **)&a0[32]) = &g_4ea540;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v13, v8);
    return;
}
