long long uu_ls::display_grid(uint128_t a0[2], unsigned int a1, char a2, unsigned long long a3, char a4, unsigned long long a5)
{
    char *v0;  // [bp-0x188]
    int v1;  // [bp-0x188]
    unsigned long long v2;  // [bp-0x180]
    unsigned long long v3;  // [bp-0x178]
    int v4;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x160]
    int v6;  // [bp-0x158], Other Possible Types: char *, unsigned long long
    unsigned long long v7;  // [bp-0x150]
    void* v8;  // [bp-0x148], Other Possible Types: char
    int v9;  // [bp-0x138], Other Possible Types: char
    unsigned long long v10;  // [bp-0x128]
    char v11;  // [bp-0x120]
    char v12;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x100]
    unsigned long long v14;  // [bp-0xf8]
    uint128_t v15;  // [bp-0xf0]
    char v16;  // [bp-0x88]
    char v17;  // [bp-0x70]
    char v18;  // [bp-0x50]
    unsigned long v20;  // r15
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rbx
    int v24;  // xmm0
    unsigned long long v25;  // rax
    unsigned long long v26;  // rbx
    unsigned long long v27;  // rax

    v20 = a1;
    if ((unsigned short)v20)
    {
        if (a4)
        {
            v17.map(a0);
            v11.from_iter(&v17);
        }
        else
        {
            v11.collect(a0);
        }
        v18.into_iter(&v11);
        v16.from_iter(&v18);
        v21 = 9223372036854775810;
        if (!a5)
            v21 = 0x8000000000000000;
        v8 = a2;
        v4 = v21;
        v5 = 2;
        v6 = a5;
        v7 = v20 & 4294967295;
        v12.new(&v16, &v4);
        v0 = &v12;
        v2 = <term_grid::Grid<T> as core::fmt::Display>::fmt;
        v4 = &g_4259a0;
        v5 = 1;
        v8 = 0;
        v6 = &v0;
        v7 = 1;
        v22 = a3.write_fmt(&v4);
        if (v22)
        {
            v23 = v22.from();
            ::0x51d3d0::core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(&v12);
            return v23;
        }
        ::0x51d3d0::core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(&v12);
    }
    else
    {
        v24 = a0[0];
        *((uint128_t *)&v6) = a0[1];
        v4 = v24;
        v9.next(&(char)v4);
        if (*((long long *)&v9) == 0x8000000000000000)
        {
            ::0x51d960::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&(char)v4);
        }
        else
        {
            v3 = v10;
            v1 = v9;
            while (true)
            {
                v25 = uu_ls::write_os_str(a3, v2, v3);
                if (v25)
                {
LABEL_52e7ad:
                    v26 = v25.from();
                    ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v1);
                    ::0x51d960::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&(char)v4);
                    return v26;
                }
                ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v1);
                v9.next(&(char)v4);
                if (*((long long *)&v9) == 0x8000000000000000)
                    break;
                v3 = v10;
                v1 = v9;
                v12 = &g_69f528;
                v13 = 1;
                v14 = 8;
                v15 = 0;
                v25 = a3.write_fmt(&v12);
                if (!(!v25))
                    goto LABEL_52e7ad;
            }
            ::0x51d960::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&(char)v4);
            v12 = &g_69f3a8;
            v13 = 1;
            v14 = 8;
            v15 = 0;
            v27 = a3.write_fmt(&v12);
            if (v27)
                return v27.from();
        }
    }
    return 0;
}
