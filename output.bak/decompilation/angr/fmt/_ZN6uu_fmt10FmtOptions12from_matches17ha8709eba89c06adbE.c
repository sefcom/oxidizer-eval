long long uu_fmt::FmtOptions::from_matches::ha8709eba89c06adb(struct_2 *a0, unsigned long long a1)
{
    char v0;  // [sp-0x141]
    char v1;  // [sp-0x140]
    char v2;  // [sp-0x13f]
    char v3;  // [sp-0x13e]
    char v4;  // [sp-0x13d]
    char v5;  // [sp-0x13c]
    char v6;  // [sp-0x13b]
    char v7;  // [sp-0x13a]
    char v8;  // [sp-0x139]
    int v9;  // [bp-0x138], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v10;  // [sp-0x130], Other Possible Types: unsigned long long
    struct struct_0 **v11;  // [sp-0x128], Other Possible Types: struct struct_1 **, unsigned long, unsigned long long
    int v12;  // [bp-0x120], Other Possible Types: unsigned long long, unsigned int
    void* v13;  // [sp-0x118]
    unsigned long long v14;  // [sp-0x110]
    void* v15;  // [sp-0x100], Other Possible Types: char *
    unsigned long long v16;  // [sp-0xf8]
    unsigned long v17;  // [sp-0xf0], Other Possible Types: unsigned long long
    char v18;  // [sp-0xe8]
    char v19;  // [bp-0xe0]
    char v20;  // [bp-0xdf]
    char v21;  // [bp-0xd8]
    unsigned long v22;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0xc8]
    unsigned long long v24;  // [sp-0xb8]
    unsigned long long v25;  // [sp-0xb0]
    char v26;  // [bp-0xa0]
    struct struct_0 **v27;  // [sp-0x98]
    unsigned long long v28;  // [sp-0x90]
    char *v29;  // [sp-0x88]
    unsigned long long v30;  // [sp-0x80]
    char v31;  // [bp-0x78]
    char v32;  // [bp-0x68]
    char v33;  // [bp-0x60]
    char v34;  // [bp-0x50]
    char v35;  // [bp-0x48]
    char v36;  // [bp-0x38]
    unsigned long long v38;  // r14
    unsigned long long v39;  // r13
    unsigned long long v40[3];  // rax
    unsigned long long v41;  // r12
    unsigned long long v42;  // rbp
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45[3];  // rax
    unsigned long long v46;  // r15
    unsigned long long v47;  // r12
    unsigned long long v48;  // rax
    int v49;  // xmm0
    int v50;  // xmm1
    int v51;  // ymm1

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "tagged-paragraph[short aliases: DASHED_UNDERLINE", 16);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "crown-margin", 12);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "preserve-headersDOUBLE_UNDERLINE", 16);
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "uniform-spacing", 15);
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "quick", 5);
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "split-only", 10);
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "exact-prefix", 12);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "skip-prefixinvalid goal: ", 11);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(&v9, a1, "prefix", 6);
    if (!clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b("prefix", 6, &v9))
        v25 = 0x8000000000000000;
    else
        core::ops::function::FnOnce::call_once::hc073dae0b047a59b();
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(&v9, a1, "skip-prefixinvalid goal: ", 11);
    if (!clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b("skip-prefixinvalid goal: ", 11, &v9))
    {
        v23 = 0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::hc073dae0b047a59b();
        v24 = v11;
        *((int128_t *)&v23) = *((int128_t *)&v9);
    }
    uu_fmt::extract_width::h607b918514420837(&v9, a1);
    v38 = v10;
    v39 = v11;
    if (v9)
    {
        *((unsigned long long *)&a0->padding_8[0]) = v38;
        a0->field_10 = v39;
        a0->field_0 = 9223372036854775809;
        ::0x4b4490::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hd911d0772c4acc23(&v23);
        ::0x4b4490::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hd911d0772c4acc23(&v25);
        return a0;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(&v9, a1, "goal", 4);
    v40 = clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b("goal", 4, &v9);
    if (v40)
    {
        v41 = v40[1];
        v42 = v40[2];
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v19, v41, v42);
        if (v19)
        {
            v15 = 0;
            v16 = v41;
            v17 = v42;
            v18 = 1;
            v27 = &v15;
            v28 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v9 = &g_526378;
            v10 = 1;
            v13 = 0;
            v11 = &v27;
            v12 = 1;
            ::0x4b48a0::core::option::Option$LT$T$GT$::map_or_else::h57a000129381aa23();
            v12 = 1;
            *((int128_t *)&v9) = *((int128_t *)&v31);
            v11 = *((long long *)&v32);
            v44 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&v9);
            *((unsigned long long *)&a0->padding_8[0]) = v44;
            a0->field_10 = &g_526400;
            a0->field_0 = 9223372036854775809;
            ::0x4b4490::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hd911d0772c4acc23(&v23);
            ::0x4b4490::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hd911d0772c4acc23(&v25);
            return a0;
        }
        v43 = *((long long *)&v21);
        if (v38)
        {
            if (v43 <= v39)
                goto LABEL_4b5013;
            ::0x4b48d0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5bbd8c4ce611c1c9(&v15, "GOAL cannot be greater than WIDTH.", 34);
            v11 = v17;
            *((int128_t *)&v9) = *((int128_t *)&v15);
            v12 = 1;
            v44 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&v9);
        }
        else
        {
            if (v43 <= 75)
            {
                v39 = ::0x4b3a20::core::cmp::max_by::h34a806462d46b061(((unsigned int)v43 * 100 - ((unsigned int)v43 * 2466500 >> 16) >> 1) + ((unsigned int)v43 * 2466500 >> 16) >> 6, v43 + 3);
                goto LABEL_4b5013;
            }
            else
            {
                ::0x4b48d0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5bbd8c4ce611c1c9(&v15, "GOAL cannot be greater than WIDTH.", 34);
                v11 = v17;
                *((int128_t *)&v9) = *((int128_t *)&v15);
                v12 = 1;
                v44 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&v9);
            }
        }
    }
    else if (!v38)
    {
        v22 = 75;
        v43 = 70;
        v39 = 75;
LABEL_4b50af:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(&v9, a1, "tab-width: ", 9);
        v45 = clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b("tab-width: ", 9, &v9);
        if (!v45)
        {
            vvar_609{stack -296} = *((long long *)&v26);
            vvar_610{reg 224} = *((int128_t *)&v25);
            v9 = v49;
            vvar_611{reg 256} = *((int128_t *)&v23);
            v12 = v50;
            vvar_612{stack -272} = v24;
            *((void*)&a0->field_0) = v49;
            a0->field_20 = (int128_t)(&v12)[8];
            *((int128_t *)&a0->field_10) = *((int128_t *)&v11);
            a0->field_30 = v39;
            a0->field_38 = v43;
            a0->field_40 = 8 + (8 < 1);
            a0->field_48 = (unsigned long long)(v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | vvar_611{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (unsigned int)(v2 * 0x1000000) | (unsigned int)(v5 * 0x10000) | (unsigned int)((v7 & ((v3 | v2) ^ 1)) * 0x100) | (v2 ^ 1) & v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT (((unsigned int)(v0 * 0x100) | v1) & 65535) * 0x100000000) | ((unsigned int)(v2 * 0x1000000) | (unsigned int)(v5 * 0x10000) | (unsigned int)((v7 & ((v3 | v2) ^ 1)) * 0x100) | (v2 ^ 1) & v3) & 340282366920938463463374325961086468095 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT (((unsigned int)(v4 * 0x100) | v6) & 65535) * 0x1000000000000) | ((0 CONCAT (((unsigned int)(v0 * 0x100) | v1) & 65535) * 0x100000000) | ((unsigned int)(v2 * 0x1000000) | (unsigned int)(v5 * 0x10000) | (unsigned int)((v7 & ((v3 | v2) ^ 1)) * 0x100) | (v2 ^ 1) & v3) & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495);
            return a0;
        }
        v46 = v45[1];
        v47 = v45[2];
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v19, v46, v47);
        if (!v19)
        {
            v48 = *((long long *)&v21);
            v11 = *((long long *)&v26);
            v49 = *((int128_t *)&v25);
            v9 = v49;
            v50 = *((int128_t *)&v23);
            v12 = v50;
            v14 = v24;
            *((void*)&a0->field_0) = v49;
            a0->field_20 = (int128_t)(&v12)[8];
            *((int128_t *)&a0->field_10) = *((int128_t *)&v11);
            a0->field_30 = v39;
            a0->field_38 = v43;
            a0->field_40 = v48 + (v48 < 1);
            a0->field_48 = (unsigned long long)(v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (unsigned int)(v2 * 0x1000000) | (unsigned int)(v5 * 0x10000) | (unsigned int)((v7 & ((v3 | v2) ^ 1)) * 0x100) | (v2 ^ 1) & v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT (((unsigned int)(v0 * 0x100) | v1) & 65535) * 0x100000000) | ((unsigned int)(v2 * 0x1000000) | (unsigned int)(v5 * 0x10000) | (unsigned int)((v7 & ((v3 | v2) ^ 1)) * 0x100) | (v2 ^ 1) & v3) & 340282366920938463463374325961086468095 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT (((unsigned int)(v4 * 0x100) | v6) & 65535) * 0x1000000000000) | ((0 CONCAT (((unsigned int)(v0 * 0x100) | v1) & 65535) * 0x100000000) | ((unsigned int)(v2 * 0x1000000) | (unsigned int)(v5 * 0x10000) | (unsigned int)((v7 & ((v3 | v2) ^ 1)) * 0x100) | (v2 ^ 1) & v3) & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495);
            return a0;
        }
        v8 = v20;
        v15 = 0;
        v16 = v46;
        v17 = v47;
        v18 = 1;
        v27 = &v15;
        v28 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v29 = &v8;
        v30 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
        v9 = &g_5263a8;
        v10 = 2;
        v13 = 0;
        v11 = &v27;
        v12 = 2;
        ::0x4b48a0::core::option::Option$LT$T$GT$::map_or_else::h57a000129381aa23();
        v12 = 1;
        *((int128_t *)&v9) = *((int128_t *)&v35);
        v11 = *((long long *)&v36);
        v44 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&v9);
    }
    else
    {
        v43 = ::0x4b3a20::core::cmp::max_by::h34a806462d46b061((v39 * 93 >> 2) / 25, -0x100 | v39);
LABEL_4b5013:
        v22 = v39;
        if (v22 <= 2500)
            goto LABEL_4b50af;
        v15 = &v22;
        v16 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v9 = &g_526388;
        v10 = 2;
        v13 = 0;
        v11 = &v15;
        v12 = 1;
        ::0x4b48a0::core::option::Option$LT$T$GT$::map_or_else::h57a000129381aa23();
        v12 = 1;
        *((int128_t *)&v9) = *((int128_t *)&v33);
        v11 = *((long long *)&v34);
        v44 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&v9);
    }
    *((unsigned long long *)&a0->padding_8[0]) = v44;
    a0->field_10 = &g_526400;
    a0->field_0 = 9223372036854775809;
    ::0x4b4490::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hd911d0772c4acc23(&v23);
    ::0x4b4490::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hd911d0772c4acc23(&v25);
    return a0;
}
