double uu_wc::files0_iter::h0e34cd9488cdd310(long long a0, long long a1, long long a2)
{
    int v0;  // [sp-0x88]
    unsigned long long v1;  // [sp-0x78]
    int v2;  // [sp-0x70]
    int v3;  // [sp-0x60]
    int v4;  // [sp-0x50]
    char v5;  // [bp-0x40]
    char v6;  // [bp-0x30]
    char v7;  // [bp-0x20]
    int v9;  // xmm0
    int v10;  // xmm0
    int v11;  // ymm0

    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hf703b41d8f9676a8(&v5, 0x2000, a1);
    v9 = *((int128_t *)&v5);
    *((int128_t *)&v4) = *((int128_t *)&v7);
    *((int128_t *)&v3) = *((int128_t *)&v6);
    v2 = v9;
    v1 = a2->field_10;
    v10 = a2->field_0;
    v0 = v10;
    a0->field_40 = (long long)(&v4)[8];
    a0->field_30 = (int128_t)(&v3)[8];
    a0->field_20 = (int128_t)(&v2)[8];
    *((void*)&a0->field_0) = v0;
    a0->field_10 = v1;
    a0->field_18 = (long long)v2;
    a0->field_48 = 0;
    return (unsigned long long)((v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v9) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v10);
}
