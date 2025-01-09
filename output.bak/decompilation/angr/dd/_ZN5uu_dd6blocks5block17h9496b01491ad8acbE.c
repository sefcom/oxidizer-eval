double uu_dd::blocks::block::h9496b01491ad8acb(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5)
{
    int v0;  // [sp-0x78], Other Possible Types: void*, unsigned long long
    unsigned long long v1;  // [sp-0x70]
    void* v2;  // [sp-0x68], Other Possible Types: unsigned long long
    char v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    unsigned long v5;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long v6;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long v7;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x38]
    char v9;  // [sp-0x30]
    unsigned long long v11;  // r15
    unsigned long long v12;  // r14
    unsigned long long v13;  // r15
    unsigned long long v14;  // r12
    struct_0 *v15;  // rax
    int v16;  // xmm0
    int v17;  // ymm0
    int v19;  // xmm0

    v6 = a3;
    v7 = a1;
    v8 = a2;
    v9 = 0;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    core::iter::traits::iterator::Iterator::fold::h6a212979afd94415(&v3, &v7, &v0, &v6, &a5[1].field_8);
    v11 = v5;
    if (!(v11 && (!a4 || !a5->field_8)))
    {
        a0->field_10 = v5;
        v19 = *((int128_t *)&v3);
        *((void*)&a0->field_0) = v19;
        return (unsigned long long)(v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19);
    }
    v12 = *((long long *)&v4);
    v13 = v11 - 1;
    v14 = v13 * 3;
    v0 = *((long long *)(v12 + v14 * 8 + 8));
    v1 = *((long long *)(v12 + v14 * 8 + 16)) + v0;
    if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::hf24369e89937bc37(&v0))
    {
        v15 = v12 + v14 * 8;
        v5 = v13;
        v16 = v15->field_0;
        v2 = v15->field_10;
        v0 = v16;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$::ha6c7b13acc23cf42(&v0);
    }
}
