double uu_split::SettingsError::Suffix(long long a0, long long a1)
{
    int v1;  // xmm0

    v1 = a1[0];
    *((uint128_t *)((char *)&a0->field_8 + 8)) = a1[1];
    *((void*)&(&a0->field_0)[1]) = v1;
    a0->field_0 = 4;
    return (unsigned long long)v1;
}
