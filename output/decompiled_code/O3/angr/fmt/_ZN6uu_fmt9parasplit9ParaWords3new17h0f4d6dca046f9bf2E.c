double uu_fmt::parasplit::ParaWords::new::h0f4d6dca046f9bf2(long long a0, long long a1, long long a2)
{
    void* v0;  // [sp-0x30]
    unsigned long long v1;  // [sp-0x28]
    void* v2;  // [sp-0x20]
    unsigned long long v3;  // [sp-0x18]
    int v5;  // xmm0
    int v6;  // ymm0

    v3 = a1;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    uu_fmt::parasplit::ParaWords::create_words::hc7811e7c94ca3f17(&v0, a1, a2);
    a0->field_20 = a2;
    v5 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v5;
    return (unsigned long long)(v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5);
}
