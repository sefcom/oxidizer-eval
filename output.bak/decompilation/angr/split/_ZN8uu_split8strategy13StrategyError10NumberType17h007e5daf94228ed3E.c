double uu_split::strategy::StrategyError::NumberType::h007e5daf94228ed3(long long a0, long long a1)
{
    int v1;  // xmm0
    int v2;  // ymm0

    v1 = a1[0];
    *((uint128_t *)((char *)&a0->field_8 + 8)) = a1[1];
    *((void*)&(&a0->field_0)[1]) = v1;
    a0->field_0 = 2;
    return (unsigned long long)(v2 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v1);
}
