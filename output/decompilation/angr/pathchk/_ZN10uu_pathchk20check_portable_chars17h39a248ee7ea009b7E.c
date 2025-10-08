char uu_pathchk::check_portable_chars(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    char *v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    void* v5;  // [bp-0x90]
    unsigned long long v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    void* v8;  // [bp-0x70]
    unsigned long v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    char *v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x50]
    void* v13;  // [bp-0x48]
    unsigned long long v14;  // [bp-0x40]
    unsigned long long v15;  // [bp-0x38]
    char v16;  // [bp-0x30]
    unsigned long long v18;  // rax
    char *v19;  // rdx
    unsigned long long v20;  // r12
    unsigned long long v21;  // rax

    v6 = a0;
    v7 = a0 + a1;
    v8 = 0;
    while (true)
    {
        v18 = v6.next();
        if (!v19)
            break;
        v20 = v18;
        if (::0x454e40::core::slice::memchr::memchr(*(v19)) != 1)
        {
            v21 = v20.get(a0, a1);
            if (!v21)
                core::str::slice_error_fail(a0, a1, v20, a1, &g_4deb38); /* do not return */
            v1 = v21;
            v2 = &v19[v21];
            if (!((char)core::str::validations::next_code_point(&v1) & 1))
                core::option::unwrap_failed(&g_4deb50); /* do not return */
            v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
            v13 = 0;
            v14 = a0;
            v15 = a1;
            v16 = 1;
            v9 = &vvar_75{reg 32};
            v10 = <char as core::fmt::Display>::fmt;
            v11 = &v13;
            v12 = <os_display::Quoted as core::fmt::Display>::fmt;
            v1 = &g_4deb08;
            v2 = 3;
            v5 = 0;
            v3 = &v9;
            v4 = 2;
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v0.write_fmt(&v1));
            break;
        }
    }
    return !v19;
}
