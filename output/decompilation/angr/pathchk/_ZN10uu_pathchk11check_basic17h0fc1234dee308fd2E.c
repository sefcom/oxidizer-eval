long long uu_pathchk::check_basic(unsigned long long a0[3], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    char *v2;  // [bp-0xc0], Other Possible Types: unsigned long long
    int v3;  // [bp-0xb8], Other Possible Types: unsigned long long
    char *v4;  // [bp-0xb0]
    unsigned long long v5;  // [bp-0xa8]
    char v6;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x90]
    unsigned long long v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x80]
    char *v11;  // [bp-0x78]
    unsigned long long v12;  // [bp-0x70]
    void* v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x58]
    unsigned long v15;  // [bp-0x50]
    unsigned long long v16;  // [bp-0x48]
    void* v17;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long v18;  // [bp-0x38]
    unsigned long v19;  // [bp-0x30]
    char v20;  // [bp-0x28]
    unsigned long long v23;  // r15
    unsigned long long v24[3];  // r14
    unsigned long long v26[3];  // r14
    unsigned int v28;  // ebx

    alloc::str::join_generic_copy(&v6, a0, a1);
    v14 = v8;
    if (v14 > 0x100)
    {
        v17 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
        v0 = &g_417718;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v2 = &v14;
        v3 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v4 = &v6;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v9 = &g_4dea28;
        v10 = 4;
        v13 = 0;
        v11 = &v0;
        v12 = 3;
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v17.write_fmt(&v9));
    }
    else if (v14)
    {
        v23 = &a0[a1];
        do
        {
            v24 = a0;
            if (v24 == v23)
            {
                v26 = v24;
                if (v26 == v23)
                {
                    v28 = uu_pathchk::check_searchable(v7, v14);
                    core::ptr::drop_in_place<alloc::string::String>(v6, v7);
                    return v28;
                }
            }
            else
            {
                v26 = v24 + 1;
                if (v24 == v23)
                {
                    v28 = uu_pathchk::check_searchable(v7, v14);
                    core::ptr::drop_in_place<alloc::string::String>(v6, v7);
                    return v28;
                }
            }
            v15 = v24[2];
            if (v15 > 14)
            {
                v16 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
                v17 = 0;
                v18 = v24[1];
                v19 = v15;
                v20 = 1;
                v0 = &g_4177d0;
                v1 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v2 = &v15;
                v3 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v4 = &v17;
                v5 = <os_display::Quoted as core::fmt::Display>::fmt;
                v9 = &g_4dea78;
                v10 = 4;
                v13 = 0;
                v11 = &v0;
                v12 = 3;
                core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v16.write_fmt(&v9));
                break;
            }
            a0 = v26;
        } while (uu_pathchk::check_portable_chars(v24[1], v15));
    }
    else
    {
        v9 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
        v0 = &g_4dea68;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v9.write_fmt(&v0));
    }
    core::ptr::drop_in_place<alloc::string::String>(v6, v7);
    return 0;
}
