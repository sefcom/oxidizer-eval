long long fish::fds::open_cloexec(unsigned long long a0, unsigned long a1, unsigned int a2, unsigned int a3)
{
    unsigned int v1;  // edx

    while (((char)nix::fcntl::open(a0, a2 | 0x80000, a3) & 1))
    {
        if (v1 != 4)
        {
            return 1;
        }
        else if ((int)fish::signal::signal_check_cancel())
        {
            return 1;
        }
    }
    return 0;
}
