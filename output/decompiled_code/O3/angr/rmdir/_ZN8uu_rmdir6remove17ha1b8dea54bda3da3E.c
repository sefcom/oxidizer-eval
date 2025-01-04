long long uu_rmdir::remove::ha1b8dea54bda3da3(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x38]
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rax
    unsigned long long v7;  // r15
    unsigned long long v8;  // r15

    uu_rmdir::remove_single::h7d254dd4570d65d7(&v0, a1, a2, a3);
    if (!*((long long *)&v0))
    {
        if (!(((unsigned short)a3 & 0x100)) || !(v5) || !(v3))
        {
            a0[0] = 0;
            return a0;
        }
        while (true)
        {
            v7 = v8;
            uu_rmdir::remove_single::h7d254dd4570d65d7(&v0, v5, v7, a3);
            if (*((long long *)&v0))
                break;
            v5 = std::path::Path::parent::h65c9a340a6266f2d(v5, v7, v3, v4);
            if (!v5)
            {
                a0[0] = 0;
                return a0;
            }
            else if (!v3)
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
