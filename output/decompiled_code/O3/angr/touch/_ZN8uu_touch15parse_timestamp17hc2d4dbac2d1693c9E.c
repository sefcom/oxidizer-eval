long long uu_touch::parse_timestamp::hc2d4dbac2d1693c9(struct_0 *a0, unsigned long a1, unsigned long long a2)
{
    int v0;  // [bp-0x148], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v1;  // [sp-0x140], Other Possible Types: unsigned long long
    char v2;  // [bp-0x13c]
    unsigned long long v3;  // [sp-0x138]
    unsigned int v4;  // [bp-0x130], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x128]
    int v6;  // [bp-0x118], Other Possible Types: void*, char, unsigned long, unsigned long long
    int v7;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x108]
    char v9;  // [bp-0x100], Other Possible Types: unsigned int, unsigned long
    int v10;  // [sp-0xe8]
    int v11;  // [sp-0xd8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v12;  // [sp-0xd0]
    unsigned long long v13;  // [sp-0xc8]
    void* v14;  // [bp-0xb8], Other Possible Types: unsigned int, unsigned long
    int v15;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0xa8]
    char v17;  // [sp-0xa0]
    unsigned long long v18;  // [bp-0x98], Other Possible Types: char
    unsigned long long v19;  // [sp-0x90]
    char v20;  // [bp-0x88]
    unsigned long v21;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x78]
    unsigned int v23;  // [sp-0x6c]
    unsigned long long v24;  // [sp-0x68]
    unsigned long v25;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned int v26;  // [sp-0x58]
    char v27;  // [bp-0x50]
    char v28;  // [bp-0x40]
    char v29;  // [bp-0x38]
    char v30;  // [bp-0x28]
    unsigned long long v32;  // r14
    unsigned long long v33;  // r15
    unsigned long long v35;  // rsi
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rsi
    unsigned long long v38;  // rdx
    unsigned long long v39;  // r8
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rdx
    unsigned long long v43;  // rax
    int v44;  // xmm0
    unsigned int v47;  // edx

    v32 = a2;
    v33 = a1;
    v21 = a1;
    v22 = a2;
    switch (::0x5c0e20::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(v33, a1 + a2, a2))
    {
    case 8:
        chrono::offset::local::Local::now::h9676919418f603da(&v0, v35, v36);
        chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h11e4e1dedad62a8c(&v6, &v0, *((int *)&v2));
        v14 = (int)v6 >> 13;
        v6 = &v14;
        v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
        v8 = &v21;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h67ad0f203204cc95;
        v0 = &g_46c850;
        v1 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 2;
LABEL_5c309a:
        ::0x5c03f0::core::option::Option$LT$T$GT$::map_or_else::h6c890dc428d2f1b8(&v18, &v0);
LABEL_5c30bf:
        v39 = 10;
        v40 = "%Y%m%d%H%M20";
        break;
    case 10:
        v6 = &v21;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h67ad0f203204cc95;
        v0 = &g_7111c0;
        v1 = 1;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        goto LABEL_5c309a;
    case 11:
        chrono::offset::local::Local::now::h9676919418f603da(&v0, v37, v38);
        chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h11e4e1dedad62a8c(&v6, &v0, *((int *)&v2));
        v14 = (int)v6 >> 13;
        v6 = &v14;
        v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
        v8 = &v21;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h67ad0f203204cc95;
        v0 = &g_46c850;
        v1 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 2;
LABEL_5c3117:
        ::0x5c03f0::core::option::Option$LT$T$GT$::map_or_else::h6c890dc428d2f1b8(&v18, &v0);
LABEL_5c3127:
        v39 = 13;
        v40 = "%Y%m%d%H%M.%S%Y%m%d%H%M20";
        break;
    case 12:
        ::0x5c0490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hdab2b52bf4bb0014(&v18, v33, v32);
        goto LABEL_5c30bf;
    case 13:
        v6 = &v21;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h67ad0f203204cc95;
        v0 = &g_7111c0;
        v1 = 1;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        goto LABEL_5c3117;
    case 15:
        ::0x5c0490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hdab2b52bf4bb0014(&v18, v33, v32);
        goto LABEL_5c3127;
    default:
        v14 = 0;
        v15 = v33;
        v16 = v32;
        v17 = 1;
        v11 = &v14;
        v12 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v0 = &g_711200;
        v1 = 1;
        v5 = 0;
        v3 = &v11;
        v4 = 1;
        ::0x5c03f0::core::option::Option$LT$T$GT$::map_or_else::h6c890dc428d2f1b8(&v6, &v0);
        v9 = 1;
        *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h69239a382e39ef01(&v6);
        *((char **)&a0->field_10) = &g_711120;
        a0->field_0 = 1;
        return a0;
    }
    v41 = *((long long *)&v20);
    v13 = *((long long *)&v20);
    *((int128_t *)&v11) = *((int128_t *)&v18);
    chrono::naive::datetime::NaiveDateTime::parse_from_str::h636f254382363103(&v0, v12, v41, v40, v39);
    if (!v23)
    {
        v43 = uu_touch::parse_timestamp::_$u7b$$u7b$closure$u7d$$u7d$::h18d5d6e9e360757c(v12, v13);
        goto LABEL_5c3455;
    }
    v23 = v0;
    v24 = *((long long *)((char *)&v0 + 4));
    _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::h254ac7c92b26d577(&v0, 1, &v23);
    chrono::offset::LocalResult$LT$T$GT$::and_then::h8403a1e3e7e75ba0(&v6, &v0, &v23);
    if ((int)v6)
    {
        v44 = (int128_t)(&v11)[8];
        v14 = 0;
        v15 = v44;
        v17 = 1;
        v18 = &v14;
        v19 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v0 = &g_711210;
        v1 = 1;
        v5 = 0;
        v3 = &v18;
        v4 = 1;
        ::0x5c03f0::core::option::Option$LT$T$GT$::map_or_else::h6c890dc428d2f1b8(&v27, &v0);
        v4 = 1;
        *((int128_t *)&v0) = *((int128_t *)&v27);
        v3 = *((long long *)&v28);
        v43 = alloc::boxed::Box$LT$T$GT$::new::h69239a382e39ef01(&v0);
        goto LABEL_5c3455;
    }
    else
    {
        *((int128_t *)&v10) = *((int128_t *)((char *)&v6 + 4));
        chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h11e4e1dedad62a8c(&v0, &v10, (int)(&v10)[12]);
        if ((*((int *)((char *)&v0 + 4)) * 4008636143 - 286331157 >> 2 | *((int *)((char *)&v0 + 4)) * 4008636143 - 286331157 << 30) <= 71582787 && (char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hdbf5911191b38312(v12, v13, ".60`DateTime - TimeDelta` overflowedinvalid date format invalid date ts format ", 3))
            ::0x5be130::_$LT$chrono..datetime..DateTime$LT$Tz$GT$$u20$as$u20$core..ops..arith..AddAssign$LT$chrono..time_delta..TimeDelta$GT$$GT$::add_assign::hba79b31c15bdc5c3(&v10);
        chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::h61f9037a1c80e8a4(&v0, &v10);
        if (!(int)v0)
            core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
        *((int128_t *)&v6) = *((int128_t *)&v0);
        chrono::datetime::DateTime$LT$Tz$GT$::checked_sub_signed::h29e5f76bbc3b6065(&v0, &v6);
        if ((int)v0)
        {
            v26 = v1;
            v25 = v0;
            chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h11e4e1dedad62a8c(&v0, &v10, (int)(&v10)[12]);
            chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h11e4e1dedad62a8c(&v0, &v25, *((int *)((char *)&v1 + 4)));
            if ((unsigned int)(*((int *)((char *)&v0 + 4)) / 3600) == (unsigned int)(*((int *)((char *)&v0 + 4)) / 3600))
            {
                v47 = (int)(&v10)[8];
                a0->field_8 = -62135683200 + (int)(&v10)[4] + (unsigned int)::0x5c08b0::chrono::naive::date::NaiveDate::num_days_from_ce::h5c90bef67c86960c((int)v10) * 86400;
                a0->field_10 = v47;
                a0->field_0 = 0;
            }
            else
            {
                v6 = 0;
                *((int128_t *)&v7) = *((int128_t *)&v21);
                v9 = 1;
                v14 = &v6;
                v15 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v0 = &g_711200;
                v1 = 1;
                v5 = 0;
                v3 = &v14;
                v4 = 1;
                ::0x5c03f0::core::option::Option$LT$T$GT$::map_or_else::h6c890dc428d2f1b8(&v29, &v0);
                v4 = 1;
                *((int128_t *)&v0) = *((int128_t *)&v29);
                v3 = *((long long *)&v30);
                v43 = alloc::boxed::Box$LT$T$GT$::new::h69239a382e39ef01(&v0);
LABEL_5c3455:
                a0->field_8 = v43;
                *((char **)&a0->field_10) = &g_711120;
                a0->field_0 = 1;
            }
            ::0x5bea40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h450bc0dd6b0d5735(&v11);
            return a0;
        }
    }
}
