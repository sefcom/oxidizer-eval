long long uu_chmod::Chmoder::change_file(char a0[35], unsigned int a1, unsigned int a2, unsigned long long a3, unsigned long long a4)
{
    unsigned int v0;  // [bp-0x108]
    unsigned int v1;  // [bp-0x104]
    char *v2;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xf8]
    unsigned long long v4;  // [bp-0xf0]
    char v5;  // [bp-0xe8]
    char *v6;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xd8]
    char *v8;  // [bp-0xd0]
    unsigned long long v9;  // [bp-0xc8]
    unsigned long long v10;  // [bp-0xc0]
    unsigned long long v11;  // [bp-0xb8]
    char *v12;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xa8]
    char *v14;  // [bp-0xa0]
    unsigned long long v15;  // [bp-0x98]
    void* v16;  // [bp-0x90], Other Possible Types: char *
    unsigned long long v17;  // [bp-0x88]
    char *v18;  // [bp-0x80]
    unsigned long long v19;  // [bp-0x78]
    char *v20;  // [bp-0x70]
    unsigned long long v21;  // [bp-0x68]
    unsigned long long v22;  // [bp-0x60]
    char v23;  // [bp-0x58]
    char v24;  // [bp-0x40]
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx

    v0 = a1;
    v1 = a2;
    if (a1 != a2)
    {
        v26 = std::fs::set_permissions(a3, a4, a2);
        if (v26)
        {
            v22 = v26;
            if (!a0[33])
            {
                v6 = uucore::util_name();
                v7 = v27;
                v2 = &v6;
                v3 = <&T as core::fmt::Display>::fmt;
                v12 = &g_4ebab0;
                v13 = 2;
                v16 = 0;
                v14 = &v2;
                v15 = 1;
                std::io::stdio::_eprint(&v12);
                v6 = &v22;
                v7 = <std::io::error::Error as core::fmt::Display>::fmt;
                v12 = &g_4ebb30;
                v13 = 2;
                v16 = 0;
                v14 = &v6;
                v15 = 1;
                std::io::stdio::_eprint(&v12);
            }
            if (a0[34])
            {
                v2 = 1;
                v3 = a3;
                v4 = a4;
                v5 = 1;
                uucore::features::fs::display_permissions_unix(&v24, v0, 0);
                uucore::features::fs::display_permissions_unix(&v23, v1, 0);
                v12 = &v2;
                v13 = <os_display::Quoted as core::fmt::Display>::fmt;
                v14 = &v0;
                v15 = core::fmt::num::<impl core::fmt::Octal for i32>::fmt;
                v16 = &v24;
                v17 = <alloc::string::String as core::fmt::Display>::fmt;
                v18 = &v1;
                v19 = core::fmt::num::<impl core::fmt::Octal for i32>::fmt;
                v20 = &v23;
                v21 = <alloc::string::String as core::fmt::Display>::fmt;
                v6 = &g_4ebb50;
                v7 = 6;
                v10 = &g_41a1e0;
                v11 = 5;
                v8 = &v12;
                v9 = 5;
                std::io::stdio::_print(&v6);
                core::ptr::drop_in_place<alloc::string::String>(&v23);
                core::ptr::drop_in_place<alloc::string::String>(&v24);
            }
            core::ptr::drop_in_place<std::io::error::Error>(v22);
            return 1;
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
            if (!a0[34] && a0[32] != 1)
                return 0;
            v2 = 1;
            v3 = a3;
            v4 = a4;
            v5 = 1;
            uucore::features::fs::display_permissions_unix(&v24, a1, 0);
            uucore::features::fs::display_permissions_unix(&v23, v1, 0);
            v12 = &v2;
            v13 = <os_display::Quoted as core::fmt::Display>::fmt;
            v14 = &v0;
            v15 = core::fmt::num::<impl core::fmt::Octal for i32>::fmt;
            v16 = &v24;
            v17 = <alloc::string::String as core::fmt::Display>::fmt;
            v18 = &v1;
            v19 = core::fmt::num::<impl core::fmt::Octal for i32>::fmt;
            v20 = &v23;
            v21 = <alloc::string::String as core::fmt::Display>::fmt;
            v6 = &g_4ebbb0;
            v7 = 6;
            v10 = &g_41a1e0;
            v11 = 5;
            v8 = &v12;
            v9 = 5;
            std::io::stdio::_print(&v6);
            core::ptr::drop_in_place<alloc::string::String>(&v23);
            core::ptr::drop_in_place<alloc::string::String>(&v24);
            return 0;
        }
    }
    else if (!a0[34])
    {
        return 0;
    }
    else if (!a0[32])
    {
        v2 = 1;
        v3 = a3;
        v4 = a4;
        v5 = 1;
        uucore::features::fs::display_permissions_unix(&v23, a1, 0);
        v12 = &v2;
        v13 = <os_display::Quoted as core::fmt::Display>::fmt;
        v14 = &v0;
        v15 = core::fmt::num::<impl core::fmt::Octal for i32>::fmt;
        v16 = &v23;
        v17 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &g_4ebc10;
        v7 = 4;
        v10 = &g_41a2f0;
        v11 = 3;
        v8 = &v12;
        v9 = 3;
        std::io::stdio::_print(&v6);
        core::ptr::drop_in_place<alloc::string::String>(&v23);
        return 0;
    }
    else
    {
        return 0;
    }
}
