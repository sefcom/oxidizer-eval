long long uu_touch::parse_timestamp::h96cd6cd8bd424ce5(struct_1 *a0, unsigned long long a1, unsigned long long a2)
{
    struct struct_0 **v0;  // [sp-0x148]
    unsigned long long v1;  // [sp-0x140]
    unsigned long v2;  // [sp-0x140], Other Possible Types: unsigned long long
    char v3;  // [bp-0x13c]
    struct struct_0 **v4;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0x130], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x128]
    struct struct_0 **v7;  // [bp-0x118]
    struct struct_0 **v8;  // [sp-0x118]
    struct struct_0 **v9;  // [bp-0x110], Other Possible Types: unsigned long long
    struct struct_0 **v10;  // [sp-0x108]
    char v11;  // [bp-0x100], Other Possible Types: unsigned int, unsigned long
    struct struct_0 **v12;  // [sp-0xe8]
    unsigned long long v13;  // [sp-0xe0]
    unsigned long long v14;  // [sp-0xd8]
    struct struct_0 **v15;  // [sp-0xc8]
    struct struct_0 **v16;  // [bp-0xb8]
    struct struct_0 **v17;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0xa8]
    char v19;  // [sp-0xa0]
    struct struct_0 **v20;  // [sp-0x98]
    unsigned long long v21;  // [sp-0x90]
    char v22;  // [bp-0x88]
    unsigned long v23;  // [sp-0x80]
    unsigned long long v24;  // [sp-0x78]
    unsigned int v25;  // [sp-0x6c]
    struct struct_0 **v26;  // [sp-0x68]
    struct struct_0 **v27;  // [sp-0x60]
    unsigned int v28;  // [sp-0x58]
    char v29;  // [bp-0x50]
    char v30;  // [bp-0x40]
    char v31;  // [bp-0x38]
    char v32;  // [bp-0x28]
    unsigned long long v35;  // r8
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rdx
    unsigned long long v39;  // rax
    struct struct_0 **v40;  // xmm0
    unsigned long long v41;  // rdx
    unsigned long long v42;  // rdi
    unsigned int v45;  // edx

    v23 = a1;
    v24 = a2;
    switch (::0x5c1690::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(a1, a1 + a2))
    {
    case 8:
        chrono::offset::local::Local::now::ha82adb6e05d16f38(&v0);
        chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(&v7, &v0, *((int *)&v3));
        *((int *)&v16) = (int)v8 >> 13;
        v8 = &v16;
        v9 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
        v10 = &v23;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
        v0 = &g_46c700;
        v2 = 2;
        v6 = 0;
        v4 = &v7;
        v5 = 2;
LABEL_5c38da:
        ::0x5c0c60::core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&v20, &v0);
LABEL_5c38ff:
        v35 = 10;
        v36 = "%Y%m%d%H%M/dev/stdout";
        break;
    case 10:
        v8 = &v23;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
        v0 = &g_710f18;
        v2 = 1;
        v6 = 0;
        v4 = &v7;
        v5 = 1;
        goto LABEL_5c38da;
    case 11:
        chrono::offset::local::Local::now::ha82adb6e05d16f38(&v0);
        chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(&v7, &v0, *((int *)&v3));
        *((int *)&v16) = (int)v8 >> 13;
        v8 = &v16;
        v9 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
        v10 = &v23;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
        v0 = &g_46c700;
        v2 = 2;
        v6 = 0;
        v4 = &v7;
        v5 = 2;
LABEL_5c3957:
        ::0x5c0c60::core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&v20, &v0);
LABEL_5c3967:
        v35 = 13;
        v36 = "%Y%m%d%H%M.%S%Y%m%d%H%M/dev/stdout";
        break;
    case 12:
        ::0x5c0d00::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(&v20, a1, a2);
        goto LABEL_5c38ff;
    case 13:
        v8 = &v23;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
        v0 = &g_710f18;
        v2 = 1;
        v6 = 0;
        v4 = &v7;
        v5 = 1;
        goto LABEL_5c3957;
    case 15:
        ::0x5c0d00::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(&v20, a1, a2);
        goto LABEL_5c3967;
    default:
        v16 = 0;
        v17 = a1;
        v18 = a2;
        v19 = 1;
        v12 = &v16;
        v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v0 = &g_710f28;
        v1 = 1;
        v6 = 0;
        v4 = &v12;
        v5 = 1;
        ::0x5c0c60::core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&v7, &v0);
        v11 = 1;
        *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&v7);
        *((char **)&a0->field_10) = &g_710e78;
        a0->field_0 = 1;
        return a0;
    }
    v37 = *((long long *)&v22);
    v14 = *((long long *)&v22);
    *((int128_t *)&v12) = *((int128_t *)&v20);
    chrono::naive::datetime::NaiveDateTime::parse_from_str::hd1f2c37615fc2a8c(&v0, v13, v37, v36, v35);
    if (!v25)
    {
        v39 = uu_touch::parse_timestamp::_$u7b$$u7b$closure$u7d$$u7d$::h911368d5f366668b(v13, v14);
        goto LABEL_5c3c84;
    }
    v25 = (int)v0;
    v26 = *((long long *)((char *)&v0 + 4));
    _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::h0fa0613822fc0925(&v0, 1, &v25);
    chrono::offset::LocalResult$LT$T$GT$::and_then::h38ad213f398289fd(&v7, &v0, &v25);
    if ((int)v8)
    {
        v40 = *((int128_t *)&(&v12)[1]);
        v16 = 0;
        v17 = v40;
        v19 = 1;
        v20 = &v16;
        v21 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v0 = &g_710f38;
        v1 = 1;
        v6 = 0;
        v4 = &v20;
        v5 = 1;
        ::0x5c0c60::core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&v29, &v0);
        v5 = 1;
        *((int128_t *)&v0) = *((int128_t *)&v29);
        v4 = *((long long *)&v30);
        v39 = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&v0);
        goto LABEL_5c3c84;
    }
    else
    {
        *((int128_t *)&v15) = *((int128_t *)((char *)&v8 + 4));
        chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(&v0, &v15, *((int *)((char *)&(&v15)[1] + 4)));
        if ((*((int *)((char *)&v0 + 4)) * 4008636143 - 286331157 >> 2 | (*((int *)((char *)&v0 + 4)) * 4008636143 - 286331157) * 0x40000000) <= 71582787 && (char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h93c3b4fdd31a96ba(v13, v14, ".60`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%M/dev/stdout", 3))
            ::0x5be9a0::_$LT$chrono..datetime..DateTime$LT$Tz$GT$$u20$as$u20$core..ops..arith..AddAssign$LT$chrono..time_delta..TimeDelta$GT$$GT$::add_assign::hbb08d14e863a0c01(&v15);
        chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::hdc8fa11fc4c46678(&v0, &v15);
        if (!(int)v0)
        {
            v41 = &g_710f48;
            v42 = "`DateTime + TimeDelta` overflowed/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs";
        }
        else
        {
            *((int128_t *)&v7) = *((int128_t *)&v0);
            chrono::datetime::DateTime$LT$Tz$GT$::checked_sub_signed::h40e2b72c9b42b946(&v0, &v7);
            if (!(int)v0)
            {
                v41 = &g_710f60;
                v42 = "`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%M/dev/stdout";
            }
            else
            {
                v28 = v2;
                v27 = v0;
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(&v0, &v15, *((int *)((char *)&(&v15)[1] + 4)));
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(&v0, &v27, *((int *)((char *)&v2 + 4)));
                if ((unsigned int)(*((int *)((char *)&v0 + 4)) / 3600) == (unsigned int)(*((int *)((char *)&v0 + 4)) / 3600))
                {
                    a0->field_8 = uu_touch::datetime_to_filetime::hee2fe932dd2f3a25(&v15);
                    a0->field_10 = v45;
                    a0->field_0 = 0;
                }
                else
                {
                    v7 = 0;
                    *((int128_t *)&v9) = *((int128_t *)&v23);
                    v11 = 1;
                    v16 = &v7;
                    v17 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v0 = &g_710f28;
                    v1 = 1;
                    v6 = 0;
                    v4 = &v16;
                    v5 = 1;
                    ::0x5c0c60::core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&v31, &v0);
                    v5 = 1;
                    *((int128_t *)&v0) = *((int128_t *)&v31);
                    v4 = *((long long *)&v32);
                    v39 = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&v0);
LABEL_5c3c84:
                    a0->field_8 = v39;
                    *((char **)&a0->field_10) = &g_710e78;
                    a0->field_0 = 1;
                }
                ::0x5bf2b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb41aa8b20f891843(&v12);
                return a0;
            }
        }
        core::option::expect_failed::h9e03a1f6ff88dbcf(v42, 33, v41); /* do not return */
    }
}
