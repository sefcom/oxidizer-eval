long long uu_fmt::FmtOptions::from_matches::h577ce65cbc9557ca(struct_0 *a0, unsigned long long a1)
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
    unsigned long v11;  // [sp-0x128], Other Possible Types: unsigned long long
    int v12;  // [bp-0x120], Other Possible Types: unsigned long long, unsigned int
    void* v13;  // [sp-0x118]
    unsigned long long v14;  // [sp-0x110]
    void* v15;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0xf8]
    unsigned long v17;  // [sp-0xf0], Other Possible Types: unsigned long long
    char v18;  // [sp-0xe8]
    char v19;  // [bp-0xe0]
    char v20;  // [bp-0xdf]
    char v21;  // [bp-0xd8]
    unsigned long v22;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0xc8]
    unsigned long long v24;  // [sp-0xb8]
    char v25;  // [bp-0xb0], Other Possible Types: unsigned long long
    char v26;  // [bp-0xa0]
    unsigned long v27;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v28;  // [sp-0x90]
    unsigned long long v29;  // [sp-0x88]
    unsigned long long v30;  // [sp-0x80]
    char v31;  // [bp-0x78]
    char v32;  // [bp-0x68]
    char v33;  // [bp-0x60]
    char v34;  // [bp-0x50]
    char v35;  // [bp-0x48]
    char v36;  // [bp-0x38]
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax
    unsigned long long v40;  // r14
    unsigned long long v41;  // r13
    unsigned long long v42[3];  // rax
    unsigned long long v43;  // r12
    unsigned long long v44;  // rbp
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    unsigned long long v47[3];  // rax
    unsigned long long v48;  // r15
    unsigned long long v49;  // r12
    unsigned long long v50;  // rax
    int v51;  // xmm0
    int v52;  // xmm1
    int v53;  // ymm1

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "tagged-paragraph[short aliases: DASHED_UNDERLINE", 16);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "crown-margin", 12);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "preserve-headersDOUBLE_UNDERLINE", 16);
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "uniform-spacing", 15);
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "quick", 5);
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "split-only", 10);
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(a1, "exact-prefix", 12);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(a1, "skip-prefix", 11);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4d9b8b2c6dcbcd83(&v9, a1, "prefixinvalid goal: ", 6);
    v38 = clap_builder::parser::error::MatchesError::unwrap::h50c07164a75db492("prefixinvalid goal: ", 6, &v9);
    if (!v38)
        v25 = 0x8000000000000000;
    else
        core::ops::function::FnOnce::call_once::h27eae79b0daa27cf(&v25, v38);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4d9b8b2c6dcbcd83(&v9, a1, "skip-prefix", 11);
    v39 = clap_builder::parser::error::MatchesError::unwrap::h50c07164a75db492("skip-prefix", 11, &v9);
    if (!v39)
    {
        v23 = 0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::h27eae79b0daa27cf(&v9, v39);
        v24 = v11;
        *((int128_t *)&v23) = *((int128_t *)&v9);
    }
    uu_fmt::extract_width::h68d3dc6daa46a4b9(&v9, a1);
    v40 = v10;
    v41 = v11;
    if (v9)
    {
        *((unsigned long long *)&a0->padding_8[0]) = v40;
        a0->field_10 = v41;
        a0->field_0 = 9223372036854775809;
        ::0x4b4970::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hf7ba08e236dd21ac(&v23);
        ::0x4b4970::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hf7ba08e236dd21ac(&v25);
        return a0;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4d9b8b2c6dcbcd83(&v9, a1, "goal", 4);
    v42 = clap_builder::parser::error::MatchesError::unwrap::h50c07164a75db492("goal", 4, &v9);
    if (v42)
    {
        v43 = v42[1];
        v44 = v42[2];
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v19, v43, v44);
        if (v19)
        {
            v15 = 0;
            v16 = v43;
            v17 = v44;
            v18 = 1;
            v27 = &v15;
            v28 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v9 = &g_527668;
            v10 = 1;
            v13 = 0;
            v11 = &v27;
            v12 = 1;
            ::0x4b4d80::core::option::Option$LT$T$GT$::map_or_else::h2fac0a16898cf1fa(&v31, &v9);
            v12 = 1;
            *((int128_t *)&v9) = *((int128_t *)&v31);
            v11 = *((long long *)&v32);
            v46 = alloc::boxed::Box$LT$T$GT$::new::h5df15123fa3b23e5(&v9);
            *((unsigned long long *)&a0->padding_8[0]) = v46;
            a0->field_10 = &g_5276b0;
            a0->field_0 = 9223372036854775809;
            ::0x4b4970::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hf7ba08e236dd21ac(&v23);
            ::0x4b4970::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hf7ba08e236dd21ac(&v25);
            return a0;
        }
        v45 = *((long long *)&v21);
        if (v40)
        {
            if (v45 <= v41)
                goto LABEL_4b54f3;
            ::0x4b4db0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h48383af824827ec4(&v15, "GOAL cannot be greater than WIDTH.", 34);
            v11 = v17;
            *((int128_t *)&v9) = *((int128_t *)&v15);
            v12 = 1;
            v46 = alloc::boxed::Box$LT$T$GT$::new::h5df15123fa3b23e5(&v9);
        }
        else
        {
            if (v45 <= 75)
            {
                v41 = ::0x4b3f00::core::cmp::max_by::hc6c013d5dc0d01b4(((unsigned int)v45 * 100 - ((unsigned int)v45 * 2466500 >> 16) >> 1) + ((unsigned int)v45 * 2466500 >> 16) >> 6, v45 + 3);
                goto LABEL_4b54f3;
            }
            else
            {
                ::0x4b4db0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h48383af824827ec4(&v15, "GOAL cannot be greater than WIDTH.", 34);
                v11 = v17;
                *((int128_t *)&v9) = *((int128_t *)&v15);
                v12 = 1;
                v46 = alloc::boxed::Box$LT$T$GT$::new::h5df15123fa3b23e5(&v9);
            }
        }
    }
    else if (!v40)
    {
        v22 = 75;
        v45 = 70;
        v41 = 75;
LABEL_4b558f:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4d9b8b2c6dcbcd83(&v9, a1, "tab-width: ", 9);
        v47 = clap_builder::parser::error::MatchesError::unwrap::h50c07164a75db492("tab-width: ", 9, &v9);
        if (!v47)
        {
            vvar_609{stack -296} = *((long long *)&v26);
            vvar_610{reg 224} = *((int128_t *)&v25);
            v9 = v51;
            vvar_611{reg 256} = *((int128_t *)&v23);
            v12 = v52;
            vvar_612{stack -272} = v24;
            *((void*)&a0->field_0) = v51;
            a0->field_20 = (int128_t)(&v12)[8];
            *((int128_t *)&a0->field_10) = *((int128_t *)&v11);
            a0->field_30 = v41;
            a0->field_38 = v45;
            a0->field_40 = 8 + (8 < 1);
            a0->field_48 = (unsigned long long)(v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | vvar_611{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2 * 0x1000000 | v5 * 0x10000 | (v7 & ((v3 | v2) ^ 1)) * 0x100 | (v2 ^ 1) & v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT ((v0 * 0x100 | v1) & 65535) * 0x100000000) | (v2 * 0x1000000 | v5 * 0x10000 | (v7 & ((v3 | v2) ^ 1)) * 0x100 | (v2 ^ 1) & v3) & 340282366920938463463374325961086468095 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT ((v4 * 0x100 | v6) & 65535) * 0x1000000000000) | ((0 CONCAT ((v0 * 0x100 | v1) & 65535) * 0x100000000) | (v2 * 0x1000000 | v5 * 0x10000 | (v7 & ((v3 | v2) ^ 1)) * 0x100 | (v2 ^ 1) & v3) & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495);
            return a0;
        }
        v48 = v47[1];
        v49 = v47[2];
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v19, v48, v49);
        if (!v19)
        {
            v50 = *((long long *)&v21);
            v11 = *((long long *)&v26);
            v51 = *((int128_t *)&v25);
            v9 = v51;
            v52 = *((int128_t *)&v23);
            v12 = v52;
            v14 = v24;
            *((void*)&a0->field_0) = v51;
            a0->field_20 = (int128_t)(&v12)[8];
            *((int128_t *)&a0->field_10) = *((int128_t *)&v11);
            a0->field_30 = v41;
            a0->field_38 = v45;
            a0->field_40 = v50 + (v50 < 1);
            a0->field_48 = (unsigned long long)(v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2 * 0x1000000 | v5 * 0x10000 | (v7 & ((v3 | v2) ^ 1)) * 0x100 | (v2 ^ 1) & v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT ((v0 * 0x100 | v1) & 65535) * 0x100000000) | (v2 * 0x1000000 | v5 * 0x10000 | (v7 & ((v3 | v2) ^ 1)) * 0x100 | (v2 ^ 1) & v3) & 340282366920938463463374325961086468095 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT ((v4 * 0x100 | v6) & 65535) * 0x1000000000000) | ((0 CONCAT ((v0 * 0x100 | v1) & 65535) * 0x100000000) | (v2 * 0x1000000 | v5 * 0x10000 | (v7 & ((v3 | v2) ^ 1)) * 0x100 | (v2 ^ 1) & v3) & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495);
            return a0;
        }
        v8 = v20;
        v15 = 0;
        v16 = v48;
        v17 = v49;
        v18 = 1;
        v27 = &v15;
        v28 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v29 = &v8;
        v30 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
        v9 = &g_527720;
        v10 = 2;
        v13 = 0;
        v11 = &v27;
        v12 = 2;
        ::0x4b4d80::core::option::Option$LT$T$GT$::map_or_else::h2fac0a16898cf1fa(&v35, &v9);
        v12 = 1;
        *((int128_t *)&v9) = *((int128_t *)&v35);
        v11 = *((long long *)&v36);
        v46 = alloc::boxed::Box$LT$T$GT$::new::h5df15123fa3b23e5(&v9);
    }
    else
    {
        v45 = ::0x4b3f00::core::cmp::max_by::hc6c013d5dc0d01b4((v41 * 93 >> 2) / 25, -0x100 | v41);
LABEL_4b54f3:
        v22 = v41;
        if (v22 <= 2500)
            goto LABEL_4b558f;
        v15 = &v22;
        v16 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v9 = &g_527740;
        v10 = 2;
        v13 = 0;
        v11 = &v15;
        v12 = 1;
        ::0x4b4d80::core::option::Option$LT$T$GT$::map_or_else::h2fac0a16898cf1fa(&v33, &v9);
        v12 = 1;
        *((int128_t *)&v9) = *((int128_t *)&v33);
        v11 = *((long long *)&v34);
        v46 = alloc::boxed::Box$LT$T$GT$::new::h5df15123fa3b23e5(&v9);
    }
    *((unsigned long long *)&a0->padding_8[0]) = v46;
    a0->field_10 = &g_5276b0;
    a0->field_0 = 9223372036854775809;
    ::0x4b4970::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hf7ba08e236dd21ac(&v23);
    ::0x4b4970::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hf7ba08e236dd21ac(&v25);
    return a0;
}
