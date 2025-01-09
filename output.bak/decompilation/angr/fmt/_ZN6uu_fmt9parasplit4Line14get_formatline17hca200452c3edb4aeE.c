double uu_fmt::parasplit::Line::get_formatline::hca200452c3edb4ae(long long a0, long long a1)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    unsigned long long v2;  // [sp-0x30]
    int v3;  // [sp-0x28]
    int v5;  // xmm0
    int v6;  // xmm1
    int v7;  // ymm0

    if (a1->field_0 != 0x8000000000000000)
    {
        a0->field_30 = a1->field_30;
        v5 = *((int128_t *)&a1->field_0);
        v6 = a1->field_10;
        a0->field_20 = a1->field_20;
        *((void*)&a0->field_10) = v6;
        *((void*)&a0->field_0) = v5;
        return (unsigned long long)(v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5);
    }
    v0 = &g_5265d0;
    v1 = 1;
    v2 = 8;
    *((int128_t *)&v3) = 0;
    core::panicking::panic_fmt::he12d0d7468628bb4(&v0, &g_5265e0); /* do not return */
}
