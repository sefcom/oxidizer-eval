long long fish::common::read_blocked(unsigned int a0[2], unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax

    v0 = v2;
    if (a1 == -1)
        core::option::expect_failed("fd != -1\\", 8, &g_14c0ed8); /* do not return */
    while (true)
    {
        nix::unistd::read(a0, a1, a2, a3);
        if (a0[0] != 1)
        {
            return a0;
        }
        else if (a0[1] != 4)
        {
            return a0;
        }
    }
}
