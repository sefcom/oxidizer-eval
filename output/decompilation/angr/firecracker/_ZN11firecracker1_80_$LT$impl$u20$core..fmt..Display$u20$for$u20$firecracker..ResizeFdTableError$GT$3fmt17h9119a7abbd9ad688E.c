long long firecracker::_::<impl core::fmt::Display for firecracker::ResizeFdTableError>::fmt(unsigned long long *a0, unsigned long long a1[2])
{
    unsigned long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    *((int *)&v0) = (!*(a0) ? &g_7a45d8 : ((unsigned int)*(a0) == 1 ? &g_7a45c8 : &g_7a45b8));
    v1 = 1;
    v2 = 8;
    v3 = 0;
    return a1[0].write_fmt(a1[1], &v0);
}
