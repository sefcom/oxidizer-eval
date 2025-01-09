long long uu_touch::parse_timestamp::h96cd6cd8bd424ce5(struct_1 *a0, unsigned long a1, unsigned long a2)
{
    struct struct_0 **v0;  // [bp-0x148]
    unsigned long v1;  // [sp-0x140], Other Possible Types: unsigned long long
    char v2;  // [bp-0x13c]
    struct struct_0 **v3;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0x130], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x128]
    void* v6;  // [sp-0x118], Other Possible Types: struct struct_0 **
    struct struct_0 **v7;  // [sp-0x110], Other Possible Types: unsigned long long
    struct struct_0 **v8;  // [sp-0x108]
    char v9;  // [bp-0x100], Other Possible Types: unsigned int, unsigned long
    struct struct_0 **v10;  // [sp-0xe8]
    unsigned long long v11;  // [sp-0xe0]
    unsigned long long v12;  // [sp-0xd8]
    struct struct_0 **v13;  // [sp-0xc8]
    struct struct_0 **v14;  // [bp-0xb8]
    struct struct_0 **v15;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0xa8]
    char v17;  // [sp-0xa0]
    struct struct_0 **v18;  // [bp-0x98]
    unsigned long long v19;  // [sp-0x90]
    char v20;  // [bp-0x88]
    unsigned long v21;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x78]
    unsigned int v23;  // [sp-0x6c]
    struct struct_0 **v24;  // [sp-0x68]
    struct struct_0 **v25;  // [sp-0x60]
    unsigned int v26;  // [sp-0x58]
    char v27;  // [bp-0x50]
    char v28;  // [bp-0x40]
    char v29;  // [bp-0x38]
    char v30;  // [bp-0x28]
    unsigned long long v32;  // r14
    unsigned long long v33;  // r15
    unsigned long long v35;  // r8
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rdx
    unsigned long long v39;  // rax
    struct struct_0 **v40;  // xmm0
    unsigned long long v41;  // rdx
    unsigned long long v42;  // rdi
    unsigned int v45;  // edx

    v32 = a2;
    v33 = a1;
    v21 = a1;
    v22 = a2;
    switch (::0x5c1690::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(v33, a1 + a2))
    {
    case 8:
        chrono::offset::local::Local::now::ha82adb6e05d16f38(&v0);
        chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(&v6, &v0, *((int *)&v2));
        *((int *)&v14) = (int)v6 >> 13;
        v6 = &v14;
        v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
        v8 = &v21;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
        v0 = &g_46c700;
        v1 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 2;
LABEL_5c38da:
        ::0x5c0c60::core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb();
LABEL_5c38ff:
        v35 = 10;
        v36 = "%Y%m%d%H%M/dev/stdout";
        break;
    case 10:
        v6 = &v21;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
        v0 = &g_710f18;
        v1 = 1;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        goto LABEL_5c38da;
    case 11:
        chrono::offset::local::Local::now::ha82adb6e05d16f38(&v0);
        chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(&v6, &v0, *((int *)&v2));
        *((int *)&v14) = (int)v6 >> 13;
        v6 = &v14;
        v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
        v8 = &v21;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
        v0 = &g_46c700;
        v1 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 2;
LABEL_5c3957:
        ::0x5c0c60::core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb();
LABEL_5c3967:
        v35 = 13;
        v36 = "%Y%m%d%H%M.%S%Y%m%d%H%M/dev/stdout";
        break;
    case 12:
        ::0x5c0d00::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(&v18, v33, v32);
        goto LABEL_5c38ff;
    case 13:
        v6 = &v21;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
        v0 = &g_710f18;
        v1 = 1;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        goto LABEL_5c3957;
    case 15:
        ::0x5c0d00::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(&v18, v33, v32);
        goto LABEL_5c3967;
    default:
        v14 = 0;
        v15 = v33;
        v16 = v32;
        v17 = 1;
        v10 = &v14;
        v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v0 = &g_710f28;
        v1 = 1;
        v5 = 0;
        v3 = &v10;
        v4 = 1;
        ::0x5c0c60::core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb();
        v9 = 1;
        *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&v6);
        *((char **)&a0->field_10) = &g_710e78;
        a0->field_0 = 1;
        return a0;
    }
    v37 = *((long long *)&v20);
    v12 = *((long long *)&v20);
    *((int128_t *)&v10) = *((int128_t *)&v18);
    chrono::naive::datetime::NaiveDateTime::parse_from_str::hd1f2c37615fc2a8c(&v0, v11, v37, v36, v35);
    if (!v23)
    {
        v39 = uu_touch::parse_timestamp::_$u7b$$u7b$closure$u7d$$u7d$::h911368d5f366668b(v11, v12);
        goto LABEL_5c3c84;
    }
    v23 = (int)v0;
    v24 = *((long long *)((char *)&v0 + 4));
    _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::h0fa0613822fc0925(&v0, 1, &v23);
    chrono::offset::LocalResult$LT$T$GT$::and_then::h38ad213f398289fd(&v6, &v0, &v23);
    if ((int)v6)
    {
        v40 = *((int128_t *)&(&v10)[1]);
        v14 = 0;
        v15 = v40;
        v17 = 1;
        v18 = &v14;
        v19 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v0 = &g_710f38;
        v1 = 1;
        v5 = 0;
        v3 = &v18;
        v4 = 1;
        ::0x5c0c60::core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb();
        v4 = 1;
        *((int128_t *)&v0) = *((int128_t *)&v27);
        v3 = *((long long *)&v28);
        v39 = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&v0);
        goto LABEL_5c3c84;
    }
    else
    {
        *((int128_t *)&v13) = *((int128_t *)((char *)&v6 + 4));
        chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(&v0, &v13, *((int *)((char *)&(&v13)[1] + 4)));
        if ((*((int *)((char *)&v0 + 4)) * 4008636143 - 286331157 >> 2 | (*((int *)((char *)&v0 + 4)) * 4008636143 - 286331157) * 0x40000000) <= 71582787 && (char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h93c3b4fdd31a96ba(v11, v12, ".60`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%M/dev/stdout", 3))
            ::0x5be9a0::_$LT$chrono..datetime..DateTime$LT$Tz$GT$$u20$as$u20$core..ops..arith..AddAssign$LT$chrono..time_delta..TimeDelta$GT$$GT$::add_assign::hbb08d14e863a0c01(&v13);
        chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::hdc8fa11fc4c46678(&v0, &v13);
        if (!(int)v0)
        {
            v41 = &g_710f48;
            v42 = "`DateTime + TimeDelta` overflowed/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs";
        }
        else
        {
            *((int128_t *)&v6) = *((int128_t *)&v0);
            chrono::datetime::DateTime$LT$Tz$GT$::checked_sub_signed::h40e2b72c9b42b946(&v0, &v6);
            if (!(int)v0)
            {
                v41 = &g_710f60;
                v42 = "`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%M/dev/stdout";
            }
            else
            {
                v26 = v1;
                v25 = v0;
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(&v0, &v13, *((int *)((char *)&(&v13)[1] + 4)));
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(&v0, &v25, *((int *)((char *)&v1 + 4)));
                if ((unsigned int)(*((int *)((char *)&v0 + 4)) / 3600) == (unsigned int)(*((int *)((char *)&v0 + 4)) / 3600))
                {
                    a0->field_8 = uu_touch::datetime_to_filetime::hee2fe932dd2f3a25(&v13);
                    a0->field_10 = v45;
                    a0->field_0 = 0;
                }
                else
                {
                    v6 = 0;
                    *((int128_t *)&v7) = *((int128_t *)&v21);
                    v9 = 1;
                    v14 = &v6;
                    v15 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v0 = &g_710f28;
                    v1 = 1;
                    v5 = 0;
                    v3 = &v14;
                    v4 = 1;
                    ::0x5c0c60::core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb();
                    v4 = 1;
                    *((int128_t *)&v0) = *((int128_t *)&v29);
                    v3 = *((long long *)&v30);
                    v39 = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&v0);
LABEL_5c3c84:
                    a0->field_8 = v39;
                    *((char **)&a0->field_10) = &g_710e78;
                    a0->field_0 = 1;
                }
                ::0x5bf2b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb41aa8b20f891843(&v10);
                return a0;
            }
        }
        core::option::expect_failed::h9e03a1f6ff88dbcf(v42, 33, v41); /* do not return */
    }
}
