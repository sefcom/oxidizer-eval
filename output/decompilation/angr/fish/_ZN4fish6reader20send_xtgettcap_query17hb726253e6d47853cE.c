long long fish::reader::send_xtgettcap_query(unsigned long long a0)
{
    void* v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    void* v2;  // [bp-0xc0]
    char v3;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    char *v6;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xa0]
    void* v8;  // [bp-0x98]
    char v9;  // [bp-0x88]
    int v10;  // [bp-0x88]
    unsigned long long v11;  // [bp-0x80]
    char *v12;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x70]
    void* v14;  // [bp-0x60]
    unsigned long long v15;  // [bp-0x58]
    void* v16;  // [bp-0x50]
    unsigned long long v17;  // [bp-0x48]
    unsigned long long v18;  // [bp-0x40]
    int v19;  // [bp-0x38], Other Possible Types: char
    char *v20;  // [bp-0x28], Other Possible Types: unsigned long long

    v17 = "indn";
    v18 = 4;
    if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
    {
        v14 = 0;
        v15 = 1;
        v16 = 0;
        v5 = "indn";
        v6 = 4;
        v3 = 23;
        v14.write_command(&v3);
        if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v9.to_flog_str(&g_15a99a0);
            v3.into_iter(&v9);
            v0.spec_extend(&v3);
            v0.push(58, &g_14e0260);
            v0.push(32, &g_14e0260);
            *((unsigned long long **)&v10) = &v17;
            v11 = <&T as core::fmt::Display>::fmt;
            v12 = &v14;
            v13 = <alloc::vec::Vec<T,A> as core::fmt::Debug>::fmt;
            v3 = &g_14e0240;
            v5 = 2;
            v8 = 0;
            v6 = &(unsigned long long)v10;
            v7 = 2;
            v19.map_or_else(&v3);
            v10 = v19;
            v12 = v20;
            v3.clone(&(unsigned long long)v10);
            v20 = v6;
            memcpy(&v19, &v3, 16);
            v3.into_iter(&v19);
            v0.spec_extend(&v3);
            core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v10);
            v0.push(10, &g_14e0260);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v14, 1);
    }
    v5 = "indn";
    v6 = 4;
    v4 = 23;
    return a0.write_command(&v4);
}
