double uu_split::platform::unix::WithEnvVarSet::new::h0ec58cf89e23bdc9(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    int v5;  // xmm0
    int v6;  // xmm0
    int v7;  // ymm0

    std::env::var::h9ad1bceb8fc4ff71(&v0, "FILE", 4);
    std::env::set_var::h1f8f4c2c764b6cfd("FILE", 4, a1, a2);
    ::0x4d5690::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(&v2, "FILE", 4);
    a0->field_30 = *((long long *)&v3);
    v5 = *((int128_t *)&v2);
    *((void*)&a0->field_20) = v5;
    v6 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v1);
    *((void*)&a0->field_0) = v6;
    return (unsigned long long)((v7 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6);
}
