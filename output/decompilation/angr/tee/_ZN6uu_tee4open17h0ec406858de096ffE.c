long long uu_tee::open(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, char *a4)
{
    unsigned long long v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    unsigned int v2;  // [bp-0xd0]
    char v3;  // [bp-0xcf]
    char v4;  // [bp-0xce]
    char v5;  // [bp-0xcd]
    char v6;  // [bp-0xcc], Other Possible Types: unsigned short
    unsigned long long v7;  // [bp-0xc8]
    unsigned long long v8;  // [bp-0xc0]
    char *v9;  // [bp-0xb8], Other Possible Types: unsigned long
    unsigned long long v10;  // [bp-0xb0]
    void* v11;  // [bp-0xa8]
    char v12;  // [bp-0x98]
    unsigned int v13;  // [bp-0x94]
    unsigned long long v14;  // [bp-0x90]
    char *v15;  // [bp-0x88]
    unsigned long long v16;  // [bp-0x80]
    char *v17;  // [bp-0x78]
    unsigned long long v18;  // [bp-0x70]
    void* v19;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x60]
    unsigned long long v21;  // [bp-0x58]
    char v22;  // [bp-0x50]
    char v23;  // [bp-0x48]
    unsigned long long v24;  // [bp-0x40]
    char v25;  // [bp-0x38]
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rax

    v23.to_owned(a1, a2);
    v1 = 0x1b600000000;
    v2 = 0;
    v6 = 0;
    if (a3)
        v4 = 1;
    else
        v5 = 1;
    v3 = 1;
    v6 = 1;
    v12.open(&v1, v24, *((long long *)&v25));
    if ((v12 & 1))
    {
        v0 = v14;
        v19 = uucore::util_name();
        v20 = v27;
        v15 = &v19;
        v16 = <&T as core::fmt::Display>::fmt;
        v7 = &g_57b030;
        v8 = 2;
        v11 = 0;
        v9 = &v15;
        v10 = 1;
        std::io::stdio::_eprint(&v7);
        v19 = 0;
        v20 = a1;
        v21 = a2;
        v22 = 0;
        v15 = &v19;
        v16 = <os_display::Quoted as core::fmt::Display>::fmt;
        v17 = &v0;
        v18 = <std::io::error::Error as core::fmt::Display>::fmt;
        v7 = &g_57b050;
        v8 = 3;
        v11 = 0;
        v9 = &v15;
        v10 = 2;
        std::io::stdio::_eprint(&v7);
        if (!a4 || *(a4) <= 1)
        {
            *((unsigned long long *)&a0->field_0) = 9223372036854775809;
            ::0x49da00::core::ptr::drop_in_place<std::io::error::Error>(v0);
        }
        else
        {
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            *((unsigned long long *)&a0->padding_1[7]) = v0;
        }
    }
    else
    {
        v28 = v13.new();
        (char)v7.to_vec(a1, a2);
        a0->field_10 = v9;
        *((int128_t *)&a0->field_0) = *((int128_t *)&v7);
        a0->field_18 = v28;
        a0->field_20 = &g_57b080;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v23);
    return a0;
}
