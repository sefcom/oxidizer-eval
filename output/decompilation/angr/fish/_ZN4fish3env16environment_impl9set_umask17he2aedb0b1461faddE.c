long long fish::env::environment_impl::set_umask(unsigned long long a0[3], unsigned long a1)
{
    char v0;  // [bp-0x18]
    char v1;  // [bp-0x10]
    unsigned int v3;  // ebx
    unsigned int v4;  // ebx

    v4 = v3 & 0xffffff00 | 3;
    if (a1 != 1)
    {
        return v4;
    }
    else if (a0[2])
    {
        fish::wutil::wcstoi::fish_wcstol_radix(&v0, a0[1], a0[2], 8);
        if (v0 == 1)
        {
            return v4;
        }
        else if (*((long long *)&v1) <= 511)
        {
            fish::nix::umask(*((long long *)&v1));
            return 0;
        }
        else
        {
            return v4;
        }
    }
    else
    {
        return v4;
    }
}
