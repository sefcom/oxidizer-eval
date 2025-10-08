long long fish::fds::heightenize_fd(unsigned int a0)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned long long v1;  // [bp-0x28]
    unsigned int v3;  // ebp
    unsigned int v4;  // edx

    v0 = a0;
    if (a0 > 9)
        return 0;
    v1 = 42949672961;
    if (((char)nix::fcntl::fcntl(&v0, &v1) & 1))
    {
        fish::wutil::perror("fcntlInvalid fd", 5);
        v3 = 1;
    }
    else
    {
        v3 = 0;
        v0 = a0;
        if (v4 == -1)
            core::option::expect_failed("fd != -1\\", 8, &g_14d8c00); /* do not return */
    }
    core::ptr::drop_in_place<std::os::fd::owned::OwnedFd>(v0);
    return v3;
}
