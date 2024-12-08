long long uu_fmt::parasplit::ParaWords::create_words::hfab5de3fa70a2ea8(struct_2 *a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x168]
    unsigned long long v3;  // [sp-0x160]
    char v4[74];  // [sp-0x158]
    unsigned long long v5;  // [sp-0x150]
    char v6;  // [sp-0x120]
    char v7;  // [sp-0xf0]
    unsigned long long v8[3];  // [sp-0xe8]
    unsigned long long v9;  // [sp-0xe0]
    char v10;  // [sp-0x9f]
    char v11;  // [sp-0x5f]
    char v12;  // [bp-0x58]
    struct_0 *v14;  // rax
    struct_0 *v15;  // rax
    char v16[74];  // rbx
    unsigned long long v17[3];  // rcx
    unsigned long long v18;  // rax
    unsigned long long v19[3];  // rcx
    unsigned long long v20;  // rdx
    struct_2 *v21;  // rbx
    unsigned long long v22;  // rcx

    v14 = a0->field_20;
    if (v14->field_68)
    {
        v8[0] = v14->field_8;
        v9 = &v8[v14->field_10];
        v10 = 2;
        v11 = 2;
        v15 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h4ae58b78b27d8078(a0, v8, a2);
        return v15;
    }
    v16 = a0->field_18;
    if (!v16[72] && !v16[73])
    {
        if (!v14->field_10)
        {
LABEL_4baa31:
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        }
        v19 = v14->field_8;
        v18 = ::0x4b9350::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v14->field_60, v19[1], v19[2]);
        if (!v18)
        {
LABEL_4ba9fe:
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
    }
    else
    {
        if (!v14->field_10)
            goto LABEL_4baa31;
        v17 = v14->field_8;
        v18 = ::0x4b9350::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v14->field_50, v17[1], v17[2]);
        if (!v18)
            goto LABEL_4ba9fe;
    }
    uu_fmt::parasplit::WordSplit::new::hdcb95fa560ffca55(&v12, v16, v18, v20);
    v21 = a0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::hf9030ed50854ca00(v21, &v12);
    v15 = v21->field_20;
    v22 = v15->field_10;
    if (v22 > 1)
    {
        v0 = v15->field_60;
        v1 = v15->field_8;
        v2 = v1 + v22 * 24;
        v3 = 1;
        *((struct struct_3 **)&v4[0]) = v21->field_18;
        v5 = &v0;
        v6 = 2;
        v7 = 2;
        v15 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h3b34c111fb2b9dab(v21, &v1);
        return v15;
    }
    return v15;
}
