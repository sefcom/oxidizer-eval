double uu_sort::tmp_dir::TmpDirWrapper::new::h82cb44d92092fe9e(long long a0, long long a1)
{
    int v0;  // [sp-0x38]
    unsigned long long v1;  // [sp-0x28]
    char v2;  // [bp-0x20]
    char v3;  // [sp-0x10]
    int v5;  // xmm0
    int v6;  // xmm0
    int v7;  // ymm0

    v1 = a1->field_10;
    v5 = a1->field_0;
    v0 = v5;
    v3 = 2;
    *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v3);
    v6 = *((int128_t *)&v2);
    *((void*)&(&a0->field_10)[1]) = v6;
    *((void*)&a0->field_0) = v0;
    a0->field_10 = v1;
    a0->field_30 = 0;
    a0->field_28 = _$LT$alloc..sync..Arc$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::h86a82de66e4be7bb();
    return (unsigned long long)(v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v0);
}
