long long fish::wutil::write_to_fd(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    if (a3 == -1)
        core::option::expect_failed("fd != -1\\", 8, &g_14c16f0); /* do not return */
    nix::unistd::write(a0, a3, a1, a2);
    return a0;
}
