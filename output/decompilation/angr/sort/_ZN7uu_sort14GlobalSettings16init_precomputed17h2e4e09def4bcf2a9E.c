long long uu_sort::GlobalSettings::init_precomputed::h2e4e09def4bcf2a9(struct_0 *a0)
{
    unsigned long v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x20]
    unsigned long long v2;  // [sp-0x10]
    unsigned long long v3;  // [sp-0x8]
    unsigned long v5;  // r15
    unsigned long v6;  // r14
    unsigned long long v7;  // r15
    unsigned long long v8;  // rax

    v3 = v5;
    v2 = v6;
    v7 = a0->field_8;
    v0 = v7;
    v1 = a0->field_10 * 56 + v7;
    a0->field_60 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hfd9cbea3530c9fd0(&v0);
    a0->field_58 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha92c83caa8027c63(v7, v1);
    a0->field_48 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hefb188d1a39a24e8(v7, v1);
    v8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha576350b6c5181b6(v7, v1);
    a0->field_50 = v8;
    return v8;
}
