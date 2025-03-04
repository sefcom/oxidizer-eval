double uu_fmt::parasplit::Line::get_noformatline::h86ff5ba6ba43aa31(long long a0, long long a1)
{
    unsigned long v0;  // [sp-0x40]
    unsigned long long v1;  // [sp-0x38]
    unsigned long long v2;  // [sp-0x30]
    int v3;  // [sp-0x28]
    int v5;  // xmm0
    int v6;  // ymm0

    if (a1->field_0 != 0x8000000000000000)
    {
        v0 = &g_5265f8;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v0, &g_526608); /* do not return */
    }
    a0->field_10 = *((long long *)((char *)&a1->field_8 + 8));
    v5 = *((int128_t *)&(&a1->field_0)[1]);
    *((void*)&a0->field_0) = v5;
    a0->field_18 = a1->field_18;
    return (unsigned long long)(v6 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5);
}
