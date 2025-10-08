long long fish::fds::make_autoclose_pipes()
{
    void* v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    void* v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    char v5;  // [bp-0x50]
    char v6;  // [bp-0x38]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rbx
    unsigned long long v10;  // r14
    unsigned int v11;  // edx
    unsigned long long v12;  // rbx
    unsigned int v13;  // edx
    unsigned long v14;  // rbx
    unsigned long long v15;  // rdx

    v8 = nix::unistd::pipe2(0x80000);
    v9 = v8 >> 32;
    if ((unsigned int)v8 == -1)
    {
        if ((char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v5.to_flog_str(&g_15a93d0);
            v6.into_iter(&v5);
            v0.spec_extend(&v6);
            v0.push(58, &g_14d8be8);
            v0.push(32, &g_14d8be8);
            v3 = g_14d79f0[0].localize();
            v4 = v15;
            v5.to_flog_str(&v3);
            v6.into_iter(&v5);
            v0.spec_extend(&v6);
            v0.push(10, &g_14d8be8);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        v10 = 4294967295;
        fish::wutil::perror("pipe2fcntlInvalid fd", 5);
        v12 = v9;
    }
    else if (((char)fish::fds::heightenize_fd(v8 & 4294967295) & 1))
    {
        v10 = 4294967295;
        core::ptr::drop_in_place<std::os::fd::owned::OwnedFd>(v9);
        v12 = v11;
    }
    else
    {
        v14 = v13;
        if (((char)fish::fds::heightenize_fd(v9 & 4294967295) & 1))
        {
            v10 = 4294967295;
            core::ptr::drop_in_place<std::os::fd::owned::OwnedFd>(v11);
            v12 = v14;
        }
        else
        {
            v10 = v11;
            v12 = v14;
        }
    }
    return v12 * 0x100000000 | v10;
}
