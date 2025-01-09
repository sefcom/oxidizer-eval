double uu_wc::Input::as_borrowed::ha5766020b65362ce(long long a0, long long a1)
{
    int v1;  // ymm0
    int v2;  // xmm0
    int v3;  // ymm0

    if (a1->field_0 == 9223372036854775809)
    {
        a0->field_8 = a1->field_8;
        a0->field_0 = 9223372036854775809;
        return (unsigned long long)v1;
    }
    v2 = *((int128_t *)&a1->field_8);
    *((void*)&a0->field_8) = v2;
    a0->field_0 = 0x8000000000000000;
    return (unsigned long long)(v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v2);
}
