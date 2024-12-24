double uu_wc::files0_iter::hfae481243982d2d1(long long a0, long long a1, long long a2, long long a3)
{
    int v0;  // [sp-0x98]
    unsigned long long v1;  // [sp-0x88]
    int v2;  // [sp-0x80]
    int v3;  // [sp-0x70]
    int v4;  // [sp-0x60]
    unsigned long long v5;  // [sp-0x50]
    char v6;  // [bp-0x48]
    char v7;  // [bp-0x38]
    char v8;  // [bp-0x28]
    char v9;  // [bp-0x18]
    int v11;  // xmm0
    int v12;  // xmm0
    int v13;  // ymm0

    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h49dbbed34510207d(&v6, 0x2000, a1, a2);
    v5 = *((long long *)&v9);
    v11 = *((int128_t *)&v6);
    *((int128_t *)&v4) = *((int128_t *)&v8);
    *((int128_t *)&v3) = *((int128_t *)&v7);
    v2 = v11;
    v1 = a3->field_10;
    v12 = a3->field_0;
    v0 = v12;
    a0->field_40 = (long long)(&v4)[8];
    a0->field_48 = v5;
    a0->field_30 = (int128_t)(&v3)[8];
    a0->field_20 = (int128_t)(&v2)[8];
    *((void*)&a0->field_0) = v0;
    a0->field_10 = v1;
    a0->field_18 = (long long)v2;
    a0->field_50 = 0;
    return (unsigned long long)(v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12);
}
