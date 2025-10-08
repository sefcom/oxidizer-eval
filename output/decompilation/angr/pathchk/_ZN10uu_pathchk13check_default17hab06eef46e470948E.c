long long uu_pathchk::check_default(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x138]
    unsigned long long v2;  // [bp-0x130]
    unsigned long long v3;  // [bp-0x128]
    unsigned long long v4;  // [bp-0x120]
    void* v5;  // [bp-0x118]
    unsigned long v6;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x108]
    char v8;  // [bp-0x100]
    unsigned long long v9;  // [bp-0xf8]
    unsigned long long v10;  // [bp-0xf0]
    char *v11;  // [bp-0xe8]
    unsigned long long v12;  // [bp-0xe0]
    void* v13;  // [bp-0xd8]
    unsigned long long v14;  // [bp-0xc8]
    unsigned long long v15;  // [bp-0xc0]
    unsigned long long v16;  // [bp-0xb8]
    char *v17;  // [bp-0xb0], Other Possible Types: unsigned long long
    int v18;  // [bp-0xa8], Other Possible Types: unsigned long long
    char *v19;  // [bp-0xa0]
    unsigned long long v20;  // [bp-0x98]
    unsigned long long v22;  // rax
    void* v25;  // rcx
    unsigned int v27;  // ebx

    alloc::str::join_generic_copy(&v0, a0, a1);
    v22 = v2;
    v14 = v22;
    if (v22 > 0x1000)
    {
        v3 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
        v5 = 0;
        v6 = v1;
        v7 = v22;
        v8 = 1;
        v15 = &g_41703c;
        v16 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v17 = &v14;
        v18 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v19 = &v5;
        v20 = <os_display::Quoted as core::fmt::Display>::fmt;
        v9 = &g_4dea28;
        v10 = 4;
        v13 = 0;
        v11 = &v15;
        v12 = 3;
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v3.write_fmt(&v9));
        core::ptr::drop_in_place<alloc::string::String>(v0, v1);
        return 0;
    }
    if (!v22)
    {
        std::fs::symlink_metadata(&(char)v15, &v0);
        if (v15 == 2)
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, v16);
            v9 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
            v15 = &g_4dead8;
            v16 = 1;
            v17 = 8;
            *((uint128_t *)&v18) = 0;
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v9.write_fmt(&v15));
            core::ptr::drop_in_place<alloc::string::String>(v0, v1);
            return 0;
        }
        v22 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v15, v16);
    }
    if (a1)
    {
        v25 = 0;
        do
        {
            v22 = *((long long *)(16 + a0 + (char *)v25));
            if (v22 > 0x1000)
            {
                v4 = v22;
                v3 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
                v5 = 0;
                v6 = *((long long *)(8 + a0 + (char *)v25));
                v7 = v22;
                v8 = 1;
                v15 = &g_41703c;
                v16 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                v17 = &v4;
                v18 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v19 = &v5;
                v20 = <os_display::Quoted as core::fmt::Display>::fmt;
                v9 = &g_4dea78;
                v10 = 4;
                v13 = 0;
                v11 = &v15;
                v12 = 3;
                core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v3.write_fmt(&v9));
                core::ptr::drop_in_place<alloc::string::String>(v0, v1);
                return 0;
            }
            v25 += 24;
        } while (a1 * 24 != v25);
    }
    v4 = v22;
    v27 = uu_pathchk::check_searchable(v1, v2);
    core::ptr::drop_in_place<alloc::string::String>(v0, v1);
    return v27;
}
