long long uu_shred::get_size::h94b39895cde5bfc0(unsigned long long a0[3], unsigned long a1)
{
    int v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x18]
    void* v3;  // rdi
    unsigned long long v4;  // 4096
    unsigned long v5;  // rdx

    if (a0[0] == 0x8000000000000000)
    {
        v3 = 0;
        v4 = a1;
    }
    else
    {
        v3 = uu_shred::get_size::_$u7b$$u7b$closure$u7d$$u7d$::ha01372414ef3048b(a0[1], a0[2]);
        v4 = v5;
    }
    v1 = a0[2];
    *((int128_t *)&v0) = *((int128_t *)&a0[0]);
    return core::option::Option$LT$T$GT$::or_else::hc94a834c3c270ed5(v3, v4, &v0);
}
