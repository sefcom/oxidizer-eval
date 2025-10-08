long long uu_ls::display_grid(uint128_t a0[2], unsigned int a1, char a2, unsigned long long a3, char a4, unsigned long long a5)
{
    char *v0;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    unsigned long long v3;  // [bp-0x120]
    int v4;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x110]
    int v6;  // [bp-0x108], Other Possible Types: char *, unsigned long long
    unsigned long long v7;  // [bp-0x100]
    void* v8;  // [bp-0xf8], Other Possible Types: char
    char v9;  // [bp-0xe0]
    char v10;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xc0]
    unsigned long long v12;  // [bp-0xb8]
    uint128_t v13;  // [bp-0xb0]
    char v14;  // [bp-0x48]
    unsigned long v16;  // r15
    unsigned long long v17;  // r13
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    int v21;  // xmm0
    unsigned long long v22;  // r15
    unsigned long long v23;  // rax
    unsigned long long v24;  // rbp
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax

    v16 = a1;
    v17 = 0x8000000000000000;
    if ((unsigned short)v16)
    {
        if (a4)
        {
            v10.map(a0);
            v9.collect(&v10);
        }
        else
        {
            v9.collect(a0);
        }
        v10.into_iter(&v9);
        v14.collect(&v10);
        v18 = 9223372036854775810;
        if (!a5)
            v18 = 0x8000000000000000;
        v8 = a2;
        v4 = v18;
        v5 = 2;
        v6 = a5;
        v7 = v16 & 4294967295;
        v10.new(&v14, &v4);
        v0 = &v10;
        v2 = <term_grid::Grid<T> as core::fmt::Display>::fmt;
        v4 = &g_4cf290;
        v5 = 1;
        v8 = 0;
        v6 = &v0;
        v7 = 1;
        v19 = a3.write_fmt(&v4);
        if (v19)
        {
            v20 = v19.from();
            core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(&v10);
            return v20;
        }
        core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(&v10);
    }
    else
    {
        v21 = a0[0];
        *((uint128_t *)&v6) = a0[1];
        v4 = v21;
        (char)v0.next(&(char)v4);
        if (v0 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&(char)v4);
        }
        else
        {
            v22 = v2;
            v23 = uu_ls::write_os_str(a3, v22, v3);
            v1 = v0;
            if (v23)
            {
                v26 = v23.from();
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(v1, v22);
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&(char)v4);
                return v26;
            }
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v22);
            (char)v0.next(&(char)v4);
            if (v0 != 0x8000000000000000)
            {
                v1 = v0;
                while (true)
                {
                    v24 = v17;
                    v22 = v2;
                    v10 = &g_686698;
                    v11 = 1;
                    v12 = 8;
                    v13 = 0;
                    v25 = a3.write_fmt(&v10);
                    if (v25)
                    {
                        v26 = v25.from();
                        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v1, v22);
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&(char)v4);
                        return v26;
                    }
                    if (uu_ls::write_os_str(a3, v22, v3))
                        break;
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v1, v22);
                    (char)v0.next(&(char)v4);
                    v17 = v24;
                    v1 = v0;
                    if (v1 == v24)
                        goto LABEL_59d22f;
                }
            }
            else
            {
LABEL_59d22f:
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&(char)v4);
                v10 = &g_6866e0;
                v11 = 1;
                v12 = 8;
                v13 = 0;
                v27 = a3.write_fmt(&v10);
                if (v27)
                    return v27.from();
            }
        }
    }
    return 0;
}
