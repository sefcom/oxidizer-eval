double uu_more::Pager::new::h59b79ce2dd85430f(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5)
{
    unsigned long long v1;  // rax
    unsigned long v3;  // cc_ndep
    unsigned short v5;  // r9w
    int v6;  // xmm0
    int v7;  // ymm0

    v1 = a2->field_10;
    v5 = a5->field_26;
    a0->field_18 = a5->field_18;
    *((int *)&a0->field_40) = ((char)amd64g_calculate_condition(2, 6, a1 & 65535, 1, v3) ? 0 : (unsigned short)((a1 | -0x10000 | (unsigned short)a1 - 1) & 4294967295 & 4294967295));
    v6 = a2->field_0;
    *((void*)&a0->field_0) = v6;
    a0->field_10 = a2->field_10;
    a0->field_20 = a3;
    a0->field_28 = a4;
    a0->field_30 = v1;
    a0->field_42 = v5;
    a0->field_38 = 0;
    return (unsigned long long)(v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6);
}
