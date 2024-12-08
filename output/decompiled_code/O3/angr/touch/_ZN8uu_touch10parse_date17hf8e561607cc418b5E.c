long long uu_touch::parse_date::hf8e561607cc418b5(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0xa8]
    char v1;  // [bp-0xa4]
    char v2;  // [bp-0xa0]
    char v3;  // [bp-0x98], Other Possible Types: unsigned long, unsigned long long
    char v4;  // [bp-0x94]
    char v5;  // [bp-0x90], Other Possible Types: unsigned long, unsigned long long
    unsigned long v6;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x80]
    unsigned long long v8;  // [sp-0x78]
    unsigned long long v9;  // [sp-0x70]
    unsigned long long v10;  // [sp-0x68]
    unsigned long long v11;  // [sp-0x60]
    void* v12;  // [sp-0x58]
    unsigned long long v13;  // [sp-0x50]
    unsigned int v14;  // [sp-0x3c]
    void* v15;  // [sp-0x38]
    unsigned int v19;  // ebp
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    unsigned int v24;  // ebp
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    char *v27;  // rax
    unsigned long long v28;  // rax
    unsigned int v29;  // edx
    unsigned long long v30;  // r8
    unsigned long long v31;  // r9
    unsigned int v33;  // ebp

    chrono::naive::datetime::NaiveDateTime::parse_from_str::h636f254382363103(&v3, a2, a3, "%a %b %e %H:%M:%S %Y%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs", 20);
    if (*((int *)&v3))
    {
        v19 = *((int *)&v5);
        a0->field_8 = -62135683200 + *((int *)&v4) + (unsigned int)::0x5c08b0::chrono::naive::date::NaiveDate::num_days_from_ce::h5c90bef67c86960c(*((int *)&v3)) * 86400;
        a0->field_10 = v19;
        a0->field_0 = 9223372036854775812;
        return 9223372036854775812;
    }
    v3 = "%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs";
    v5 = 17;
    v6 = "%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs";
    v7 = 20;
    v8 = "%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs";
    v9 = 14;
    v10 = "%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs";
    v11 = 17;
    v12 = 0;
    v13 = 4;
    while (true)
    {
        v20 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf87b4c36bb2d6dc3(&v3);
        if (!v20)
            break;
        chrono::naive::datetime::NaiveDateTime::parse_from_str::h636f254382363103(&v0, a2, a3, v20, v21);
        if (*((int *)&v0))
        {
            v24 = *((int *)&v2);
            a0->field_8 = -62135683200 + *((int *)&v1) + (unsigned int)::0x5c08b0::chrono::naive::date::NaiveDate::num_days_from_ce::h5c90bef67c86960c(*((int *)&v0)) * 86400;
            a0->field_10 = v24;
            a0->field_0 = 9223372036854775812;
            v25 = ::0x5bf2b0::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$4_usize$GT$$GT$::hddf3e874591548af();
            return v25;
        }
    }
    ::0x5bf2b0::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$4_usize$GT$$GT$::hddf3e874591548af();
    v26 = chrono::naive::date::NaiveDate::parse_from_str::hdaf17c30bc3d0d4e(a2, a3, "%Y-%m-%d", 8);
    if (!((char)v26 & 1))
    {
        v14 = v26 >> 32;
        v15 = 0;
        _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::h254ac7c92b26d577(&v0, 1, &v14);
        chrono::offset::LocalResult$LT$T$GT$::and_then::h8403a1e3e7e75ba0(&v3, &v0, &v14);
        chrono::offset::LocalResult$LT$T$GT$::unwrap::h799faf9e38bebbce(&v0, &v3, &g_711190);
        v29 = *((int *)&v2);
        a0->field_8 = -62135683200 + *((int *)&v1) + (unsigned int)::0x5c08b0::chrono::naive::date::NaiveDate::num_days_from_ce::h5c90bef67c86960c(*((int *)&v0)) * 86400;
        a0->field_10 = v29;
        a0->field_0 = 9223372036854775812;
        return 9223372036854775812;
    }
    v3 = a2;
    v5 = a2 + a3;
    v27 = ::0x5c0ef0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5e5cd38b7de0fa18(&v3);
    if (v27 && *(v27) == 64)
    {
        v28 = ::0x5bf7a0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, a2, a3);
        if (!v28)
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i64$GT$::from_str::hb0cdd6b069f41ab1(&v3, v28, v21);
        if (!(char)v3)
        {
            a0->field_8 = v5;
            a0->field_10 = 0;
            a0->field_0 = 9223372036854775812;
            return 9223372036854775812;
        }
    }
    parse_datetime::parse_datetime_at_date::h643be2ed6c5a0e9c(&v3, a1, a2, a3, v30, v31);
    if (v3 == 9223372036854775810)
    {
        v33 = v6;
        a0->field_8 = -62135683200 + *((int *)((char *)&v5 + 4)) + (unsigned int)::0x5c08b0::chrono::naive::date::NaiveDate::num_days_from_ce::h5c90bef67c86960c((unsigned int)v5) * 86400;
        a0->field_10 = v33;
        a0->field_0 = 9223372036854775812;
        v25 = core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::he63667835ce6ea73(&v3);
        return v25;
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::he63667835ce6ea73(&v3);
    v25 = ::0x5c0490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hdab2b52bf4bb0014(&a0->field_8, a2, a3);
    a0->field_0 = 0x8000000000000000;
    return v25;
}
