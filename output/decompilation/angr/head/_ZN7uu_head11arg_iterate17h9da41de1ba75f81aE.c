long long uu_head::arg_iterate(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x170]
    unsigned long long v1;  // [bp-0x168]
    unsigned long long v2;  // [bp-0x160]
    unsigned long long v3;  // [bp-0x158]
    unsigned long long v4;  // [bp-0x150]
    char v5;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x140]
    unsigned long long v7[6];  // [bp-0x138], Other Possible Types: unsigned long long
    char *v8;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x128]
    void* v10;  // [bp-0x120]
    void* v11;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v12[3];  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xd8]
    char v14;  // [bp-0xd0]
    int v15;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v16;  // [bp-0x98]
    char *v17;  // [bp-0x90]
    unsigned long long v18;  // [bp-0x88]
    char v19;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x78]
    unsigned long long v21;  // [bp-0x70]
    int v22;  // [bp-0x68]
    unsigned long long v23;  // [bp-0x58]
    int v24;  // [bp-0x48], Other Possible Types: char
    char v25;  // [bp-0x38]
    unsigned long long v28[3];  // rax
    unsigned long long v29;  // rax
    unsigned long long v30[6];  // rax
    unsigned long long v31[3];  // rax
    unsigned long long v32;  // rdi
    unsigned long long v33;  // rsi

    v4 = a1;
    v5.next(&v4);
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        core::option::unwrap_failed(&g_4f6ca0); /* do not return */
    v2 = v7;
    v3 = v8;
    v19.next(&v4);
    if (v19 == 0x8000000000000000)
    {
        core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(0x8000000000000000, v20);
        v28 = 8.alloc_impl(24);
        if (!v28)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v28[0] = v5;
        v28[1] = v2;
        v28[2] = v3;
        v11 = 1;
        v12[0] = v28;
        v13 = 1;
        v5.into_iter(&v11);
        *((double *)&a0[8]) = v5.new();
        v29 = &g_4f6d28;
    }
    else
    {
        v0 = v19;
        v1 = v20;
        core::str::converts::from_utf8(&v5, v20, v21);
        if ((int)v5 == 1)
        {
            *((unsigned long long *)a0) = 9223372036854775809;
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
            v32 = v5;
            v33 = v2;
            return (unsigned long long)core::ptr::drop_in_place<std::ffi::os_str::OsString>(v5, v2);
        }
        uu_head::parse::parse_obsolete(&v15, v7, v8);
        if ((char)(((0 ^ *((long long *)&v15)) & (0 ^ -(*((long long *)&v15)))) >> 63))
        {
            v11 = 0;
            v12 = v7;
            v13 = v8;
            v14 = 1;
            v17 = &v11;
            v18 = <os_display::Quoted as core::fmt::Display>::fmt;
            v6 = &g_4f6c90;
            v7 = 1;
            v10 = 0;
            v8 = &v17;
            v9 = 1;
            v24.map_or_else(&v6);
            *((long long *)&a0[24]) = *((long long *)&v25);
            a0[8] = v24;
            *((long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
            v32 = v5;
            v33 = v2;
            return (unsigned long long)core::ptr::drop_in_place<std::ffi::os_str::OsString>(v5, v2);
        }
        else if (*((long long *)&v15) == 9223372036854775809)
        {
            v30 = 8.alloc_impl(48);
            if (!v30)
                alloc::alloc::handle_alloc_error(8, 48); /* do not return */
            v30[0] = v5;
            v30[1] = v2;
            v30[2] = v3;
            v30[3] = v0;
            v30[4] = v1;
            v30[5] = v21;
            v5 = 2;
            v7[0] = v30;
            v8 = 2;
            (char)v11.into_iter(&v5);
            v5.chain(&(char)v11, v4, a2);
            *((double *)&a0[8]) = v5.new();
            v29 = &g_4f6cb8;
        }
        else
        {
            v23 = v16;
            v22 = v15;
            v31 = 8.alloc_impl(24);
            if (!v31)
                alloc::alloc::handle_alloc_error(8, 24); /* do not return */
            v31[0] = v5;
            v31[1] = v2;
            v31[2] = v3;
            v11 = 1;
            v12[0] = v31;
            v13 = 1;
            v5.into_iter(&v11);
            v11.chain(&v5, &v22);
            v5.chain(&v11, v4, a2);
            *((double *)&a0[8]) = v5.new();
            *((unsigned long long **)&a0[16]) = &g_4f6cf0;
            *((unsigned long long *)a0) = 9223372036854775813;
            return (unsigned long long)core::ptr::drop_in_place<std::ffi::os_str::OsString>(v32, v33);
        }
    }
    *((unsigned long long *)&a0[16]) = v29;
    *((unsigned long long *)a0) = 9223372036854775813;
    return v29;
}
