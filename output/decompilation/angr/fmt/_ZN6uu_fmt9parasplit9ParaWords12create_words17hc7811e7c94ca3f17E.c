long long uu_fmt::parasplit::ParaWords::create_words::hc7811e7c94ca3f17(struct_2 *a0)
{
    unsigned long v0;  // [sp-0x178]
    unsigned long long v1[3];  // [sp-0x170]
    unsigned long long v2;  // [sp-0x168]
    unsigned long long v3;  // [sp-0x160]
    unsigned long long v4;  // [sp-0x158]
    char *v5;  // [sp-0x150]
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
    struct_2 *v17;  // r13
    unsigned long long v18[3];  // rcx
    unsigned long long v19;  // r14
    unsigned long long v20;  // r12
    unsigned long long v21;  // r15
    unsigned long long v22;  // rax
    unsigned long long v24[3];  // rcx
    unsigned long long v26;  // rdx
    struct_2 *v27;  // rbx
    unsigned long long v28;  // rcx

    v14 = a0->field_20;
    if (v14->field_68)
    {
        v8[0] = v14->field_8;
        v9 = &v8[v14->field_10];
        v10 = 2;
        v11 = 2;
        v15 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h6e3e89d9b96b900d(a0, v8);
        return v15;
    }
    v16 = a0->field_18;
    if (v16[72] || v16[73])
    {
        if (!v14->field_10)
            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_526710); /* do not return */
        v17 = a0;
        v18 = v14->field_8;
        v19 = v14->field_50;
        v20 = v18[1];
        v21 = v18[2];
        v22 = ::0x4b8e70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v19, v20, v21);
        if (!v22)
            core::str::slice_error_fail::h5dbb61534404fe7e(v20, v21, v19, v21, &g_526728); /* do not return */
    }
    else
    {
        if (!v14->field_10)
            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_5266e0); /* do not return */
        v17 = a0;
        v24 = v14->field_8;
        v19 = v14->field_60;
        v20 = v24[1];
        v21 = v24[2];
        v22 = ::0x4b8e70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v19, v20, v21);
        if (!v22)
            core::str::slice_error_fail::h5dbb61534404fe7e(v20, v21, v19, v21, &g_5266f8); /* do not return */
    }
    uu_fmt::parasplit::WordSplit::new::h78514cc4bb6fc660(&v12, v16, v22, v26);
    v27 = v17;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h41916ca398d3ca71(v17, &v12);
    v15 = v17->field_20;
    v28 = v15->field_10;
    if (v28 > 1)
    {
        v0 = v15->field_60;
        v1[0] = v15->field_8;
        v2 = &v1[v28];
        v3 = 1;
        v4 = v27->field_18;
        v5 = &v0;
        v6 = 2;
        v7 = 2;
        v15 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h6367ef051ef2e384(v27, v1);
        return v15;
    }
    return v15;
}
