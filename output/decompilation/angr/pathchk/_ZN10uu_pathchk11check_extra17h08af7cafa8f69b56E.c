long long uu_pathchk::check_extra(unsigned long long a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    char *v3;  // [bp-0x88], Other Possible Types: unsigned long, unsigned long long
    int v4;  // [bp-0x80], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x68]
    void* v7;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long v8;  // [bp-0x58]
    unsigned long v9;  // [bp-0x50]
    char v10;  // [bp-0x48]
    char *v11;  // [bp-0x40]
    unsigned long long v12;  // [bp-0x38]
    void* v14;  // rbx
    unsigned long long v15;  // rax
    char *v16;  // rdi
    unsigned long long v17;  // rax

    if (a1)
    {
        v14 = 0;
        do
        {
            v0 = 0;
            v15 = ::0x454cb0::core::char::methods::encode_utf8_raw(&v0);
            if ((char)core::slice::<impl [T]>::starts_with(*((long long *)(8 + a0 + (char *)v14)), *((long long *)(16 + a0 + (char *)v14)), v15))
            {
                v6 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
                v7 = 0;
                v8 = *((long long *)(8 + a0 + (char *)v14));
                v9 = *((long long *)(16 + a0 + (char *)v14));
                v10 = 1;
                v11 = &v7;
                v12 = <os_display::Quoted as core::fmt::Display>::fmt;
                v0 = &g_4deab8;
                v2 = 2;
                v5 = 0;
                v3 = &v11;
                v4 = 1;
                v0 = &g_4deab8;
                core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v6.write_fmt(&v0));
                return 0;
            }
            v14 += 24;
        } while (a1 * 24 != v14);
    }
    alloc::str::join_generic_copy(&v1, a0, a1);
    v17 = (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(v1, v2) & 0xffffffffffffff00 | 1;
    if (v3)
        return v17;
    v7 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
    v0 = &g_4dea68;
    v2 = 1;
    v3 = 8;
    *((uint128_t *)&v4) = 0;
    v16 = &v7;
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v16.write_fmt(&v0));
    return 0;
}
