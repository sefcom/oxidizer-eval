long long fish::termsize::read_termsize_from_tty(unsigned long long a0[3])
{
    void* v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    void* v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned short v5;  // [bp-0x60]
    char v6;  // [bp-0x5e]
    int v7;  // [bp-0x58], Other Possible Types: char
    char v8;  // [bp-0x40]
    unsigned long long v10;  // r14
    unsigned long long v11;  // rax
    unsigned short v12;  // r15w
    unsigned short v13;  // _bp
    unsigned long v14;  // rcx

    v10 = 0;
    v11 = ioctl(0, 21523);
    if ((unsigned int)v11 >= 0)
    {
        if (!*((short *)&v6))
        {
            v12 = 80;
            if ((char)core::sync::atomic::atomic_load(&g_15a9980, 0))
            {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                v7.to_flog_str(&g_15a9970);
                v8.into_iter(&v7);
                v0.spec_extend(&v8);
                v0.push(58, &g_14e2be0);
                v0.push(32, &g_14e2be0);
                v3 = "T";
                v4 = 53;
                v7.to_flog_str(&v3);
                v8.into_iter(&v7);
                v0.spec_extend(&v8);
                v0.push(10, &g_14e2be0);
                fish::flog::flog_impl(v1, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            }
        }
        if (!v5)
        {
            v13 = 24;
            if ((char)core::sync::atomic::atomic_load(&g_15a9980, 0))
            {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                v7.to_flog_str(&g_15a9970);
                v8.into_iter(&v7);
                v0.spec_extend(&v8);
                v0.push(58, &g_14e2bf8);
                v0.push(32, &g_14e2bf8);
                v3 = "T";
                v4 = 51;
                v7.to_flog_str(&v3);
                v8.into_iter(&v7);
                v0.spec_extend(&v8);
                v0.push(10, &g_14e2bf8);
                fish::flog::flog_impl(v1, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            }
        }
        v11 = v12;
        v14 = v13;
        v10 = 1;
    }
    a0[0] = v10;
    a0[1] = v11;
    a0[2] = v14;
    return a0;
}
