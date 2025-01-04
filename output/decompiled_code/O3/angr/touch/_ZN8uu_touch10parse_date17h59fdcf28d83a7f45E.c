long long uu_touch::parse_date::h59fdcf28d83a7f45(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long long a5)
{
    unsigned long v0;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned int v1[2];  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xb0]
    unsigned long long v3;  // [sp-0xa8]
    unsigned long long v4;  // [sp-0xa0]
    unsigned long long v5;  // [sp-0x98]
    unsigned long long v6;  // [sp-0x90]
    unsigned long long v7;  // [sp-0x88]
    void* v8;  // [sp-0x80]
    unsigned long long v9;  // [sp-0x78]
    unsigned int v10[2];  // [bp-0x64]
    unsigned int v11[2];  // [bp-0x58]
    unsigned int v12;  // [sp-0x4c]
    void* v13;  // [sp-0x48]
    unsigned int v14[2];  // [bp-0x40]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx
    unsigned long long v19;  // r9
    unsigned long long v20;  // rax
    unsigned long long v21;  // r8
    unsigned long long v22;  // rax
    char *v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx

    chrono::naive::datetime::NaiveDateTime::parse_from_str::hd1f2c37615fc2a8c(v10, a2, a3, "%a %b %e %H:%M:%S %Y%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs20invalid date format invalid date ts format ", 20, a5);
    if (v10[0])
    {
        v16 = uu_touch::datetime_to_filetime::h06ea8034382622db(v10);
    }
    else
    {
        v0 = "%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs20invalid date format invalid date ts format ";
        v1 = 17;
        v2 = "%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs20invalid date format invalid date ts format ";
        v3 = 20;
        v4 = "%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs20invalid date format invalid date ts format ";
        v5 = 14;
        v6 = "%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs20invalid date format invalid date ts format ";
        v7 = 17;
        v8 = 0;
        v9 = 4;
        while (true)
        {
            v17 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h72940ebfc6d6072e(&v0);
            if (!v17)
                break;
            chrono::naive::datetime::NaiveDateTime::parse_from_str::hd1f2c37615fc2a8c(v11, a2, a3, v17, v18, v19);
            if (v11[0])
            {
                a0->field_8 = uu_touch::datetime_to_filetime::h06ea8034382622db(v11);
                a0->field_10 = v18;
                a0->field_0 = 9223372036854775812;
                v20 = ::0x5bfb20::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$4_usize$GT$$GT$::he66c702aa3ce8ef4();
                return v20;
            }
        }
        ::0x5bfb20::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$4_usize$GT$$GT$::he66c702aa3ce8ef4();
        v22 = chrono::naive::date::NaiveDate::parse_from_str::hb11b16b6a593980d(a2, a3, "%Y-%m-%d", 8, v21, v19);
        if (!((char)v22 & 1))
        {
            v12 = v22 >> 32;
            v13 = 0;
            _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::h0fa0613822fc0925(v14, 1, &v12);
            chrono::offset::LocalResult$LT$T$GT$::and_then::h38ad213f398289fd(&v0, v14, &v12);
            chrono::offset::LocalResult$LT$T$GT$::unwrap::h8b21848d5a0bbe28(v14, &v0, &g_710ee8);
            v16 = uu_touch::datetime_to_filetime::hee2fe932dd2f3a25(v14);
        }
        else
        {
            v0 = a2;
            v1 = a2 + a3;
            v23 = ::0x5c1760::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3fb6acca9c1eba45(&v0);
            if (v23 && *(v23) == 64)
            {
                v24 = ::0x5c0010::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, a2, a3);
                if (!v24)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i64$GT$::from_str::hb0cdd6b069f41ab1(&v0, v24, v18);
                if (!(char)v0)
                {
                    a0->field_8 = v1;
                    a0->field_10 = 0;
                    a0->field_0 = 9223372036854775812;
                    return 9223372036854775812;
                }
            }
            parse_datetime::parse_datetime_at_date::h00767a45bcedb78e(&v0, a1, a2, a3, v21, v19);
            if (v0 == 9223372036854775810)
            {
                a0->field_8 = uu_touch::datetime_to_filetime::h45fb62f820aa2d2d(v1);
                a0->field_10 = v18;
                a0->field_0 = 9223372036854775812;
                v20 = core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::h4dc4571e2e7b5171(&v0);
                return v20;
            }
            core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::h4dc4571e2e7b5171(&v0);
            v20 = ::0x5c0d00::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(&a0->field_8, a2, a3);
            a0->field_0 = 0x8000000000000000;
            return v20;
        }
    }
    a0->field_8 = v16;
    a0->field_10 = v25;
    a0->field_0 = 9223372036854775812;
    return 9223372036854775812;
}
