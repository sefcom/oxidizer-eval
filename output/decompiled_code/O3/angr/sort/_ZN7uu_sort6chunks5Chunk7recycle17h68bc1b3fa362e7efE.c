double uu_sort::chunks::Chunk::recycle::h68bc1b3fa362e7ef(long long a0, long long a1)
{
    unsigned long long v0;  // [sp-0x70]
    unsigned long long v1;  // [sp-0x68]
    unsigned long long v2;  // [sp-0x60]
    char v3;  // [bp-0x48]
    char v4;  // [bp-0x38]
    unsigned long long v6;  // r13
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned long long v9;  // r15
    unsigned long long v10;  // rbp
    int v11;  // xmm0
    int v12;  // ymm0

    v2 = a1->field_18;
    v1 = a1->field_20;
    a1->field_18 = 0;
    a1->field_20 = 8;
    v6 = a1->field_28;
    *((int128_t *)&(&a1->field_20)[1]) = 0;
    v7 = *((long long *)((char *)&a1->field_28 + 8));
    *((long long *)((char *)&a1->field_28 + 8)) = 8;
    v8 = (&a1->field_38)[1];
    *((int128_t *)&a1->field_38) = 0;
    v9 = a1->field_40;
    *((long long *)&a1->field_40) = 8;
    v0 = a1->field_50;
    *((int128_t *)((char *)&a1->field_40 + 8)) = 0;
    v10 = (&a1->field_50)[1];
    (&a1->field_50)[1] = 8;
    *((long long *)&a1->field_58) = 0;
    self_cell::unsafe_self_cell::UnsafeSelfCell$LT$ContainedIn$C$Owner$C$DependentStatic$GT$::into_owner::hed4d505464b04d84(&v3, a1);
    a0->field_0 = v2;
    a0->field_8 = v1;
    a0->field_10 = 0;
    a0->field_18 = v6;
    a0->field_20 = v7;
    a0->field_28 = 0;
    a0->field_30 = v8;
    a0->field_38 = v9;
    a0->field_40 = 0;
    a0->field_48 = v0;
    a0->field_50 = v10;
    a0->field_58 = 0;
    v11 = *((int128_t *)&v3);
    *((void*)&a0->field_60) = v11;
    a0->field_70 = *((long long *)&v4);
    return (unsigned long long)(v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v11);
}
