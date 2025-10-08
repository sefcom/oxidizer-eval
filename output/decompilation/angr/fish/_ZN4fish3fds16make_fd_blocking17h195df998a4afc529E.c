long long fish::fds::make_fd_blocking(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    if (!((short)fcntl(a0, 3) & 0x800))
    {
        return 0;
    }
    else if (fcntl(a0, 4) == -1)
    {
        return *(__errno_location()) * 0x100000000 | 2;
    }
    else
    {
        return 0;
    }
}
