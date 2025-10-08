long long uu_split::strategy::StrategyError::Bytes(struct_0 *a0, uint128_t a1[2])
{
    int v1;  // xmm0

    v1 = a1[0];
    *((uint128_t *)((char *)&a0->field_8 + 8)) = a1[1];
    *((void*)&(&a0->field_0)[1]) = v1;
    a0->field_0 = 1;
    return a0;
}
