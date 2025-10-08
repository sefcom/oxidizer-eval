long long uu_env::parse_signal_opt(unsigned long long a0[15], void* a1, unsigned long long a2)
{
    void* v0;  // [bp-0xf8]
    int v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    char *v3;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v4;  // [bp-0xe8]
    unsigned int v5;  // [bp-0xe0], Other Possible Types: unsigned long long
    void* v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xc8]
    unsigned long long v8;  // [bp-0xc0]
    void* v9;  // [bp-0xb8]
    unsigned long long v10;  // [bp-0xb0]
    unsigned long long v11;  // [bp-0xa8]
    unsigned long long v12;  // [bp-0xa0]
    char v13;  // [bp-0x98]
    char v14;  // [bp-0x90]
    unsigned long long v15;  // [bp-0x80]
    char *v16;  // [bp-0x78]
    unsigned long long v17;  // [bp-0x70]
    char v18;  // [bp-0x68]
    int v19;  // [bp-0x48], Other Possible Types: char
    char v20;  // [bp-0x38]
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rax
    unsigned long long v26;  // r14
    unsigned long long v27;  // r14
    void* v28;  // rbp

    if (!a2)
        return 0;
    v0 = a1;
    v2 = a2;
    v4 = 0;
    v14.collect(&v0);
    v7 = v15.with_capacity_in(8, 16, &g_510910);
    v8 = v22;
    v9 = 0;
    v0.into_iter(&v14);
    if (v0.next())
    {
        do
        {
            if (v24)
                v7.push(v23, v24, &g_510940);
            v23 = v0.next();
        } while (v23);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v0);
    v18.into_iter(&v7);
    if (!v18.next())
    {
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v18);
        return 0;
    }
    while (true)
    {
        v27 = v26;
        core::str::converts::from_utf8(&v0, v25, v27);
        if ((int)v0 == 1)
        {
            v10 = 1;
            v11 = v25;
            v12 = v27;
            v13 = 1;
            v16 = &v10;
            v17 = <os_display::Quoted as core::fmt::Display>::fmt;
            *((unsigned long long **)&v1) = &g_510868;
            v2 = 2;
            v6 = 0;
            v3 = &v16;
            v5 = 1;
            v19.map_or_else(&(unsigned long long)v1);
            v5 = 1;
            v1 = v19;
            v3 = *((long long *)&v20);
            v28 = (unsigned long long)v1.new();
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v18);
            return v28;
        }
        uu_env::parse_signal_value(&v0, v2, v3);
        if (v0)
        {
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v18);
            return v0;
        }
        v10 = v2;
        if (!v10.slice_contains(a0[13], a0[14]))
            a0[12].push(v2);
        v25 = v18.next();
        v26 = v22;
        if (!v25)
        {
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v18);
            return 0;
        }
    }
}
