long long uu_sort::GlobalSettings::init_precomputed::h462317f6e54e4ff3(struct_0 *a0)
{
    unsigned long v0;  // [sp-0x28], Other Possible Types: unsigned long long
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
    a0->field_60 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hd50bcff706af0ba6(&v0);
    a0->field_58 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h0c992cf2221e908e(v7, v1);
    a0->field_48 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h106ae8f9f495b7df(v7, v1);
    v8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hf980412ba8cd46b7(v7, v1);
    a0->field_50 = v8;
    return v8;
}
