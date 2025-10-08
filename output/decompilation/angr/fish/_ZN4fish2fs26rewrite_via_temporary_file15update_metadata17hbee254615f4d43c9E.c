int fish::fs::rewrite_via_temporary_file::update_metadata(unsigned long long a0, unsigned int *a1)
{
    void* v0;  // [bp-0x168]
    unsigned long long v1;  // [bp-0x160]
    void* v2;  // [bp-0x158]
    unsigned int v3;  // [bp-0x150], Other Possible Types: unsigned long long
    int v4;  // [bp-0x148], Other Possible Types: char
    unsigned long long v5;  // [bp-0x138]
    int v6;  // [bp-0x130], Other Possible Types: char
    int v7;  // [bp-0x120], Other Possible Types: char
    char v8;  // [bp-0x110]
    char v9;  // [bp-0xf8]
    char v10;  // [bp-0xe0]
    int v11;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v12;  // [bp-0xc0]
    uint128_t v13;  // [bp-0xb8]
    unsigned int v14;  // [bp-0x90]
    unsigned int v15;  // [bp-0x8c]
    char v16;  // [bp-0x88]
    unsigned long long v18;  // rax
    unsigned int v19;  // eax

    (char)v11.metadata(a0);
    if (*((int *)&v11) != 2)
    {
        if (fchown(*(a1), v15, *((int *)&v16)) == -1 && (char)core::sync::atomic::atomic_load(&g_15a98f0, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v4.to_flog_str(&g_15a98e0);
            v6.into_iter(&v4);
            v0.spec_extend(&v6);
            v0.push(58, &g_14d8d88);
            v0.push(32, &g_14d8d88);
            v8.to_vec("Error when changing ownership of file:Error when changing mode of file:Could not get metadata for file", 38);
            v6.into_iter(&v8);
            v0.spec_extend(&v6);
            v0.push(32, &g_14d8d88);
            v3 = errno::errno();
            v6.spec_to_string(&v3);
            v5 = *((long long *)&v7);
            v4 = v6;
            v6.into_iter(&v4);
            v0.spec_extend(&v6);
            v0.push(10, &g_14d8d88);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        v18 = a1.set_permissions(v14);
        if (v18)
        {
            v3 = v18;
            if ((char)core::sync::atomic::atomic_load(&g_15a98f0, 0))
            {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                v4.to_flog_str(&g_15a98e0);
                v6.into_iter(&v4);
                v0.spec_extend(&v6);
                v0.push(58, &g_14d8da0);
                v0.push(32, &g_14d8da0);
                v9.to_vec("Error when changing mode of file:Could not get metadata for file", 33);
                v6.into_iter(&v9);
                v0.spec_extend(&v6);
                v0.push(32, &g_14d8da0);
                v6.spec_to_string(&v3);
                v5 = (long long)v7;
                v4 = v6;
                v6.into_iter(&v4);
                v0.spec_extend(&v6);
                v0.push(10, &g_14d8da0);
                fish::flog::flog_impl(v1, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            }
            core::ptr::drop_in_place<std::io::error::Error>(&v3);
        }
    }
    else if ((char)core::sync::atomic::atomic_load(&g_15a98f0, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v4.to_flog_str(&g_15a98e0);
        v6.into_iter(&v4);
        v0.spec_extend(&v6);
        v0.push(58, &g_14d8db8);
        v0.push(32, &g_14d8db8);
        v10.to_vec("Could not get metadata for file", 31);
        v6.into_iter(&v10);
        v0.spec_extend(&v6);
        v0.push(10, &g_14d8db8);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v11);
    *((uint128_t *)&v11) = 0;
    v13 = 0;
    v12 = 1073741822;
    v19 = clock_gettime(0, &v13);
    if (v19)
        return v19;
    return (unsigned int)futimens(*(a1), &(char)v11);
}
