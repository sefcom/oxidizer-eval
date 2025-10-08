long long fish::io::IoBufferfill::create_opts(unsigned long long a0, unsigned int a1)
{
    void* v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    void* v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    char v4;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    int v7;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned int v8;  // [bp-0x50]
    unsigned int v9;  // [bp-0x4c]
    char v10;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v12;  // r14
    unsigned int v13;  // ebx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // r15
    unsigned long v17;  // cc_ndep

    if (a1 < 0)
    {
        v4 = &g_14db728;
        v5 = 1;
        v6 = 8;
        *((uint128_t *)&v7) = 0;
        core::panicking::panic_fmt(&v4, &g_14db738); /* do not return */
    }
    v12 = fish::fds::make_autoclose_pipes();
    if ((unsigned int)v12 == -1)
        return 1;
    v13 = v12 >> 32;
    v14 = fish::fds::make_fd_nonblocking(v12);
    if (v14)
    {
        v3 = v14;
        if ((char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v10.to_flog_str(&g_15a93d0);
            v4.into_iter(&v10);
            v0.spec_extend(&v4);
            v0.push(58, &g_14db750);
            v0.push(32, &g_14db750);
            v10.to_flog_str(&g_14d79f0);
            v4.into_iter(&v10);
            v0.spec_extend(&v4);
            v0.push(10, &g_14db750);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        fish::wutil::perror_io("fcntlInvalid fd", 5, &v3);
        core::ptr::drop_in_place<fish::fds::AutoClosePipes>(v12, v13);
        return 1;
    }
    v15 = a0.new();
    v16 = v15;
    v10 = v16;
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v15) + 1, 0, _ccall(20, v14, 0, v17))))
    {
        v4 = 1;
        v5 = 1;
        v6 = v16;
        v7 = fish::io::begin_filling(v16, v12 & 4294967295);
        v8 = v13;
        v9 = a1;
        v4.new();
        return 0;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20784117()
}
