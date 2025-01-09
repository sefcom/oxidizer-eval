long long uu_tail::follow::watch::WatcherRx::unwatch::hae2d0446936d6361(unsigned long long a0, struct_1 *a1)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x40]
    int v4;  // [sp-0x38]
    int v5;  // [sp-0x28]
    int v6;  // [sp-0x18]
    unsigned long long v7;  // [sp-0x8]

    a1->field_20(&v0, a0);
    if (*((int *)&v0) != 6)
    {
        v7 = *((long long *)&v3);
        *((int128_t *)&v6) = *((int128_t *)&v2);
        *((int128_t *)&v5) = *((int128_t *)&v1);
        *((int128_t *)&v4) = *((int128_t *)&v0);
        return uu_tail::follow::watch::WatcherRx::unwatch::_$u7b$$u7b$closure$u7d$$u7d$::hbde8fb7affd493d2(&v4);
    }
    return 0;
}
