double fd::walk::ReceiverBuffer<W>::new(long long a0, long long a1, long long a2, long long a3, long long a4)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    int v5;  // [bp-0x58]
    int v6;  // [bp-0x48]
    unsigned long v7;  // [bp-0x38]
    unsigned int v9;  // r15d
    void* v10;  // rbp
    unsigned long long v11;  // rax
    unsigned int v12;  // edx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    int v15;  // xmm0
    int v16;  // xmm0
    int v17;  // xmm1
    unsigned long v18;  // rdx

    v1 = a2;
    v2 = a3;
    v9 = a1->field_198;
    v10 = a1->field_190;
    v11 = std::time::Instant::now();
    if (v9 == 0x3b9aca00)
        v10 = 0;
    v13 = v11.add(v12, v10, (v9 != 0x3b9aca00 ? v9 : 0x5f5e100));
    v3 = a2;
    v4 = v0;
    v7 = a4->field_20;
    *((uint128_t *)&v6) = a4->field_10;
    *((uint128_t *)&v5) = a4->field_0;
    v14 = 1000.with_capacity_in(8, 312, &g_8025e8);
    a0->field_60 = a1;
    *((void*)&(&a0->field_60)[1]) = AddV(v15, 295147905179352825872);
    a0->field_0 = a2;
    a0->field_8 = v0;
    v16 = a4->field_0;
    v17 = a4->field_10;
    *((void*)&a0->field_10) = v16;
    *((void*)&a0->field_20) = v17;
    a0->field_30 = a4->field_20;
    *((char *)&a0->field_78) = 0;
    a0->field_50 = v13;
    a0->field_58 = v12;
    a0->field_38 = v14;
    a0->field_40 = v18;
    a0->field_48 = 0;
    *((unsigned long long *)((char *)&a0->field_68 + 8)) = 0;
    return (unsigned long long)v16;
}
