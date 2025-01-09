long long uu_fmt::parasplit::ParaWords::create_words::hc7811e7c94ca3f17(struct_2 *a0)
{
    unsigned long v0;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v1[3];  // [sp-0x170]
    unsigned long long v2;  // [sp-0x168]
    unsigned long long v3;  // [sp-0x160]
    char v4[74];  // [sp-0x158]
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
    unsigned long long v17[3];  // rcx
    unsigned long long v18;  // r14
    unsigned long long v19;  // r12
    unsigned long long v20;  // r15
    unsigned long long v21;  // rax
    unsigned long long v23[3];  // rcx
    unsigned long long v25;  // rdx
    struct_2 *v26;  // rbx
    unsigned long long v27;  // rcx

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
        v17 = v14->field_8;
        v18 = v14->field_50;
        v19 = v17[1];
        v20 = v17[2];
        v21 = ::0x4b8e70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v18, v19, v20);
        if (!v21)
            core::str::slice_error_fail::h5dbb61534404fe7e(v19, v20, v18, v20, &g_526728); /* do not return */
    }
    else
    {
        if (!v14->field_10)
            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_5266e0); /* do not return */
        v23 = v14->field_8;
        v18 = v14->field_60;
        v19 = v23[1];
        v20 = v23[2];
        v21 = ::0x4b8e70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v18, v19, v20);
        if (!v21)
            core::str::slice_error_fail::h5dbb61534404fe7e(v19, v20, v18, v20, &g_5266f8); /* do not return */
    }
    uu_fmt::parasplit::WordSplit::new::h78514cc4bb6fc660(&v12, v16, v21, v25);
    v26 = a0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h41916ca398d3ca71(v26, &v12);
    v15 = v26->field_20;
    v27 = v15->field_10;
    if (v27 > 1)
    {
        v0 = v15->field_60;
        v1[0] = v15->field_8;
        v2 = &v1[v27];
        v3 = 1;
        *((struct struct_3 **)&v4[0]) = v26->field_18;
        v5 = &v0;
        v6 = 2;
        v7 = 2;
        v15 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h6367ef051ef2e384(v26, v1);
        return v15;
    }
    return v15;
}
