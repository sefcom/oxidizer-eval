long long uu_factor::print_factors_str::hebdfcb8641730e1f(unsigned long long a0, unsigned long long a1, unsigned long long a2[3], char a3)
{
    int v0;  // [sp-0x1f8], Other Possible Types: void*, unsigned long, unsigned long long
    unsigned long v1;  // [sp-0x1f0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x1e8]
    char v3;  // [bp-0x1e0], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x1d8], Other Possible Types: unsigned long
    char v5;  // [bp-0x1d0]
    int v6;  // [bp-0x1c8], Other Possible Types: unsigned long, unsigned long long
    void* v7;  // [sp-0x1c0], Other Possible Types: unsigned long long *, unsigned long, unsigned long long
    void* v8;  // [sp-0x1b8], Other Possible Types: unsigned long long
    int v9;  // [bp-0x1b0], Other Possible Types: unsigned int, unsigned long, unsigned long long
    void* v10;  // [sp-0x1a8], Other Possible Types: unsigned long long
    void* v11;  // [sp-0x1a0]
    unsigned long long v12;  // [sp-0x198]
    unsigned long long v13;  // [sp-0x190]
    unsigned long long v14;  // [sp-0x188]
    unsigned long v15;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x170]
    unsigned long long v17;  // [sp-0x168]
    int v18;  // [sp-0x158], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v19;  // [sp-0x150]
    unsigned long long v20;  // [sp-0x148]
    unsigned long long v21;  // [sp-0x140]
    int v22;  // [sp-0x138]
    unsigned long long v23;  // [sp-0x128]
    unsigned long long v24;  // [sp-0x120]
    int v25;  // [sp-0x118]
    unsigned long long v26;  // [sp-0x108]
    int v27;  // [sp-0xf8]
    unsigned long long v28;  // [sp-0xe8]
    unsigned long long v29;  // [sp-0xe0]
    char v30;  // [sp-0xd8]
    char v31;  // [bp-0xc8]
    char v32;  // [bp-0xc0]
    unsigned long v33;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v34;  // [sp-0xb0]
    unsigned long long v35;  // [sp-0xa8]
    unsigned long v36;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v37;  // [sp-0x90]
    unsigned long long v38;  // [sp-0x88]
    char v39;  // [bp-0x78]
    char v40;  // [bp-0x70]
    char v41;  // [bp-0x68]
    char v42;  // [bp-0x60]
    char v43;  // [bp-0x58]
    char v44;  // [bp-0x50]
    unsigned long v45;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long v46;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v47;  // [sp-0x38]
    unsigned long long v49;  // rdx
    int v50;  // xmm0
    unsigned long long v51;  // rsi
    int v52;  // xmm0
    int v53;  // ymm0
    int v54;  // ymm0
    unsigned long long v55;  // rcx
    char v56;  // al
    uint128_t v57[2];  // rbx
    int v58;  // xmm0
    unsigned long long v59;  // rax
    unsigned long long v60;  // rax
    unsigned long long v61;  // rax
    unsigned long long v62;  // rcx
    unsigned long long v63;  // rax
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm0
    int v67;  // xmm0
    unsigned long long v68;  // rsi
    unsigned long long v69;  // r15
    unsigned long long v70;  // rbp
    unsigned long long v71;  // rsi

    num_bigint::biguint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..biguint..BigUint$GT$::from_str_radix::hd4bc135bcf1e5048(&v42, core::str::_$LT$impl$u20$str$GT$::trim_matches::hb31fd0ea74ca15e3(a0, a1), v49, 10);
    if (*((long long *)&v42) == 0x8000000000000000)
    {
        v0 = uucore::util_name::h359eff083fe53467();
        v1 = v49;
        v18 = &v0;
        v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf2980fd94d47ea8;
        v6 = &g_536cd8;
        v7 = &g_0;
        v10 = &g_0;
        v8 = &v18;
        v9 = &g_0;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v6, v51, v49);
        v0 = &g_0;
        v1 = a0;
        v2 = a1;
        *((uint128_t **)&v3) = &g_0;
        v30 = v43 != &g_0;
        v18 = &v0;
        v19 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v20 = &v30;
        v21 = _$LT$num_bigint..ParseBigIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h11f94450585cd79e;
        v6 = &g_536cf8;
        v7 = &g_0;
        v10 = &g_0;
        v8 = &v18;
        v9 = &g_0;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v6, v51, v49);
        uucore::mods::error::set_exit_code::h0565497d88d725e1();
        return &g_0;
    }
    v23 = *((long long *)&v44);
    v50 = *((int128_t *)&v42);
    v22 = v50;
    *((int128_t *)&v6) = 0x80000000000000000;
    v8 = &g_0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h7a8266f812a60c7f(&v6);
    *(v7) = &g_0;
    v52 = (int128_t)v6;
    v54 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x80000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
    v0 = v52;
    v2 = &g_0;
    v55 = v23;
    v56 = -(v55 < &g_0);
    if (!v56 && v55 == 1)
        core::iter::traits::iterator::Iterator::cmp_by::h9f2b0899c7650cea((long long)(&v22)[8], (long long)(&v22)[8] + v55 * &g_0, v1, v1 + (char *)&g_0);
    if ((v56 | v55 != &g_0) != 1)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hac40d77dd10fd932();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f9971d91429e7aa(&v0);
        v0 = &g_0;
        v2 = &g_0;
        v3 = 0x8000000000000000;
    }
    else
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hac40d77dd10fd932();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f9971d91429e7aa(&v0);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h5b2a6dd5d1835a97(&v6, &v22);
        v20 = v8;
        v58 = (int128_t)v6;
        v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
        v18 = v58;
        v6 = &g_0;
        num_prime::nt_funcs::factors::h867a8caa7d4b1350(&v0, &v18, &v6);
    }
    v35 = v2;
    v33 = v0;
    v34 = v1;
    v17 = *((long long *)&v5);
    v15 = v3;
    v16 = v4;
    v29 = v15;
    if (v29 == 0x8000000000000000)
    {
        v38 = v35;
        v36 = v33;
        v37 = v34;
        v45 = &v22;
        v0 = &v45;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb6fb5a41b5c6030c;
        v6 = &g_536bd0;
        v7 = &g_0;
        v10 = &g_0;
        v8 = &v0;
        v9 = &g_0;
        v59 = std::io::Write::write_fmt::hacd919222d28746f(a2, &v6);
        if (v59)
        {
            _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb4861b605165ab49(&v36);
        }
        else
        {
            v61 = v36;
            v62 = v37;
            if (v61)
                v63 = v38;
            v6 = -0x100 | v61 != &g_0;
            v7 = &g_0;
            v8 = v61;
            v9 = v62;
            v10 = v6;
            v11 = &g_0;
            v12 = v61;
            v13 = v62;
            v14 = v63;
            if (!a3)
            {
                while (true)
                {
                    _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf24d10bd55452be1(&v30, &v6);
                    if (*((long long *)&v30) == 0x8000000000000000)
                        break;
                    v26 = *((long long *)&v31);
                    v66 = *((int128_t *)&v30);
                    v25 = v66;
                    v24 = *((long long *)&v32);
                    v46 = &v25;
                    v47 = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::h436c22d7f41608c7;
                    v0 = &g_536c00;
                    v1 = &g_0;
                    v4 = &g_0;
                    v2 = &v46;
                    v3 = &g_0;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v18, &v0);
                    v67 = (int128_t)v18;
                    v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
                    v27 = v67;
                    v28 = v20;
                    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v39, (long long)(&v27)[8], v20, v24);
                    v68 = *((long long *)&v40);
                    v69 = *((long long *)&v41);
                    v70 = *((long long *)(a2 + &g_10));
                    if (v69 < a2[0] - v70)
                    {
                        memcpy(*((long long *)(a2 + &g_0)) + v70, v68, v69);
                        *((unsigned long long *)(a2 + &g_10)) = v70 + v69;
                    }
                    else
                    {
                        v59 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h2e044693799982a7(a2, v68, v69);
                        if (v59)
                        {
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hac40d77dd10fd932();
                            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6a5c646bae2ea237(&v39);
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hac40d77dd10fd932();
                            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6a5c646bae2ea237(&v27);
                        }
                    }
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hac40d77dd10fd932();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6a5c646bae2ea237(&v39);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hac40d77dd10fd932();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6a5c646bae2ea237(&v27);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hac40d77dd10fd932();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f9971d91429e7aa(&v25);
                }
            }
            else
            {
                while (true)
                {
                    _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf24d10bd55452be1(&v30, &v6);
                    if (*((long long *)&v30) == 0x8000000000000000)
                        break;
                    v26 = *((long long *)&v31);
                    v65 = *((int128_t *)&v30);
                    v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                    v25 = v65;
                    v24 = *((long long *)&v32);
                    if (v24 > 1)
                    {
                        v18 = &v25;
                        v19 = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::h436c22d7f41608c7;
                        v20 = &v24;
                        v21 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v0 = &g_536c10;
                        v1 = &g_0;
                        v4 = &g_0;
                        v2 = &v18;
                        v3 = &g_0;
                        v59 = std::io::Write::write_fmt::hacd919222d28746f(a2, &v0);
                    }
                    else
                    {
                        v18 = &v25;
                        v19 = _$LT$num_bigint..biguint..BigUint$u20$as$u20$core..fmt..Display$GT$::fmt::h436c22d7f41608c7;
                        v0 = &g_536c00;
                        v1 = &g_0;
                        v4 = &g_0;
                        v2 = &v18;
                        v3 = &g_0;
                        v59 = std::io::Write::write_fmt::hacd919222d28746f(a2, &v0);
                    }
                    if (!(v59 == &g_0))
                        goto LABEL_0x461449;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hac40d77dd10fd932();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f9971d91429e7aa(&v25);
                }
            }
            _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h52bf8dd0dc42870d(&v6);
            v6 = &g_536bf0;
            v7 = &g_0;
            v8 = &g_0;
            *((uint128_t **)&v9) = &g_0;
            v59 = std::io::Write::write_fmt::hacd919222d28746f(a2, &v6);
            if (!v59)
                v59 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hf163f3221ebec629(a2, v71, v49);
        }
        v57 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hac3f802e2f5b16f8(v59);
        if (!v57)
        {
            if (v15 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6013a51e459d057e(&v15);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha6d39ca572d7939e(&v15);
            }
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hac40d77dd10fd932();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f9971d91429e7aa(&v22);
            return &g_0;
        }
        else if (v15 != 0x8000000000000000)
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6013a51e459d057e(&v15);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha6d39ca572d7939e(&v15);
        }
    }
    else
    {
        v2 = v17;
        v0 = v15;
        v1 = v16;
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hdbe16632a126e804(&v6, 44, 0);
        if (v6)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v60 = v8;
        *((int128_t *)(v60 + (char *)&g_1c)) = 61743963848231822752248523843128877421;
        *((int128_t *)(v60 + (char *)&g_10)) = 146762246767445441068010909689432600419;
        *((int128_t *)v60) = 146760928493172419236840914235949277510;
        *((uint128_t **)&v9) = &g_0;
        v6 = v7;
        v7 = v60;
        v8 = 44;
        v57 = __rust_alloc(32, 8);
        if (!v57)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v64 = *((int128_t *)&v6);
        *((int128_t *)(v57 + &g_10)) = *((int128_t *)&v8);
        *((void*)&v57[0]) = v64;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6013a51e459d057e(&v0);
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha6d39ca572d7939e(&v0);
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb4861b605165ab49(&v33);
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hac40d77dd10fd932();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f9971d91429e7aa(&v22);
    return v57;
}
