long long uu_rmdir::remove::ha1b8dea54bda3da3(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x38]
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    unsigned long long v5;  // r15
    unsigned long long v6;  // r14
    unsigned long long v7;  // rax

    uu_rmdir::remove_single::h7d254dd4570d65d7(&v0, a1, a2, a3);
    if (!*((long long *)&v0))
    {
        if (!(((unsigned short)a3 & 0x100)) || !(v3) || !((v5 = v4, v4)))
        {
            a0[0] = 0;
            return a0;
        }
        v6 = v3;
        while (true)
        {
            uu_rmdir::remove_single::h7d254dd4570d65d7(&v0, v6, v5, a3);
            if (*((long long *)&v0))
                break;
            v7 = std::path::Path::parent::h65c9a340a6266f2d(v6, v5);
            if (!v7)
            {
                a0[0] = 0;
                return a0;
            }
            v6 = v7;
            v5 = v4;
            if (!v4)
            {
                a0[0] = 0;
                return a0;
            }
        }
    }
    a0[2] = *((long long *)&v1);
    *((int128_t *)&a0[0]) = *((int128_t *)&v0);
    return a0;
}
