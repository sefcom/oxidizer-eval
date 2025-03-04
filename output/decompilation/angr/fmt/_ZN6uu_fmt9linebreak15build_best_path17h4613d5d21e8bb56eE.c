long long uu_fmt::linebreak::build_best_path::h4613d5d21e8bb56e(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4)
{
    char v0;  // [bp-0x38]
    unsigned long v1;  // [sp-0x30]
    unsigned long long v2;  // [sp-0x28]
    unsigned long long v3;  // [sp-0x20]
    unsigned long long *v5;  // rax
    void* v6;  // rax

    v1 = a3 + a4 * 8;
    v2 = a1;
    v3 = a2;
    v5 = core::iter::traits::iterator::Iterator::reduce::h85ec73be1843f734(&v0);
    if (!v5)
    {
        a0[1] = 8;
        a0[1] = 0;
        v6 = 0;
    }
    else
    {
        uu_fmt::linebreak::build_best_path::_$u7b$$u7b$closure$u7d$$u7d$::h3d0ca2fa363527c2(&v0, a1, a2, *(v5));
        v6 = a3;
        *((int128_t *)&a0[1]) = *((int128_t *)&v1);
    }
    a0[0] = v6;
    return v6;
}
