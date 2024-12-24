double uu_cp::Attributes::diff::h1fceb57cb1cc257e(long long a0, long long a1, long long a2)
{
    unsigned int v1;  // eax
    int v2;  // xmm1
    unsigned int v3;  // ecx
    int v4;  // ymm3
    int v5;  // ymm1
    int v6;  // xmm0
    int v7;  // xmm1
    int v8;  // ymm0

    v1 = a2[8];
    v2 = a2[6] * 0x1000000 | a2[4] * 0x10000 | a2[2] * 0x100 | a2[0];
    v3 = a2[10];
    a0->field_0 = (unsigned long long)(...);
    v6 = ...;
    v7 = a1->field_8 & v6;
    a0->field_8 = (unsigned int)(v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(~(v6) & 0x1000100) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(~(v6) & 0x1000100 | a1->field_8 & v6));
    return (unsigned long long)(v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(~(v6) & 0x1000100) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(~(v6) & 0x1000100 | v7));
}
