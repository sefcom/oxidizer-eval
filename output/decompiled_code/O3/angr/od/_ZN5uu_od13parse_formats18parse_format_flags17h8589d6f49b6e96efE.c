long long uu_od::parse_formats::parse_format_flags::h8589d6f49b6e96ef(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    int v1;  // [sp-0x198]
    void* v3;  // [sp-0x170]
    unsigned long long v4;  // [sp-0x168]
    void* v5;  // [sp-0x160]
    int v6;  // [bp-0x158], Other Possible Types: char
    char v7;  // [bp-0x150]
    int v8;  // [sp-0x148], Other Possible Types: unsigned long long
    char v10;  // [sp-0x138]
    char v11;  // [bp-0x130]
    unsigned long v17;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0xf8]
    unsigned long long v19;  // [sp-0xf0]
    struct_1 *v30;  // r15
    unsigned long long v33;  // r13
    unsigned long long v34;  // rbp
    unsigned long long v37[3];  // rax
    struct_0 *v62;  // rcx

    v3 = 0;
    v4 = 8;
    v5 = 0;
    v17 = a1;
    v18 = a1 + a2 * 24;
    v19 = 1;
    v30 = &v7;
    v33 = &v11;
    v34 = &v6;
    v19 = 0;
    v37 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::h375bc1e1e62e3364(&v17, 1);
    if (((char)0 & 1))
    {
        ::0x4ca010::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7e478e2c923a4c0(&v6);
        v62 = a0;
        *((unsigned long long *)((char *)&v62->field_8 + 8)) = v8;
        *((void*)&(&v62->field_0)[1]) = v1;
        v62->field_0 = 1;
        ::0x4c9d10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::h5cf18ed9c85e52c0(&v3);
        return a0;
    }
    if (!v5)
    {
        *((uint128_t *)&v8) = g_541808;
        *((uint128_t *)&v6) = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h8807753078f1410eE;
        v10 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h4ced2d03912038bd(&v3, &v6);
    }
    a0 = a0;
    *((void* *)((char *)&a0->field_8 + 8)) = v5;
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v3);
    a0->field_0 = 0;
    return a0;
}
