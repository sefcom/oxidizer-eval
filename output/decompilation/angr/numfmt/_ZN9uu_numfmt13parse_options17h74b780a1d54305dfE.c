long long uu_numfmt::parse_options::h74b780a1d54305df(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [sp-0x202]
    char v1;  // [sp-0x201]
    char v2;  // [bp-0x200]
    int v3;  // [bp-0x1f8], Other Possible Types: unsigned long long
    int v4;  // [bp-0x1f8], Other Possible Types: unsigned long
    unsigned long long v5;  // [sp-0x1e8]
    char v6;  // [bp-0x1e0]
    int v7;  // [bp-0x1d8], Other Possible Types: void*, char, unsigned long
    char v8;  // [bp-0x1d0], Other Possible Types: unsigned long long, unsigned long
    int v9;  // [sp-0x1c8], Other Possible Types: unsigned long long, unsigned long
    int v10;  // [bp-0x1c0], Other Possible Types: char
    int v11;  // [sp-0x1b8]
    int v12;  // [bp-0x1a8], Other Possible Types: void*
    unsigned long long v13;  // [sp-0x1a0]
    int v14;  // [bp-0x198], Other Possible Types: unsigned short
    unsigned long v15;  // [sp-0x188], Other Possible Types: unsigned long long
    int v16;  // [sp-0x180]
    unsigned long long v17;  // [sp-0x170]
    int v18;  // [sp-0x168]
    unsigned long long v19;  // [sp-0x158]
    int v20;  // [sp-0x150]
    unsigned long long v21;  // [sp-0x140]
    void* v22;  // [bp-0x138], Other Possible Types: char
    unsigned long v23;  // [sp-0x138]
    void* v24;  // [sp-0x138], Other Possible Types: unsigned long long
    char v25;  // [bp-0x12f]
    unsigned long long v26;  // [sp-0x128], Other Possible Types: unsigned long
    unsigned long long v27;  // [sp-0x120]
    unsigned long long v28;  // [sp-0x118]
    int v29;  // [sp-0x108]
    unsigned long long v30;  // [sp-0xf8]
    unsigned short v32;  // [bp-0xe8]
    int v33;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v34;  // [sp-0xc8]
    int v35;  // [sp-0xb8]
    unsigned long long v36;  // [sp-0xa8]
    unsigned long long v37;  // [sp-0x98]
    unsigned long long v38;  // [sp-0x90]
    int v39;  // [sp-0x88]
    unsigned long long v40;  // [sp-0x78]
    int v41;  // [sp-0x68]
    int v42;  // [sp-0x58]
    char v43;  // [bp-0x40]
    unsigned long long v45[3];  // rax
    unsigned long long v46;  // rax
    char v47;  // r13b
    unsigned long long v48;  // rcx
    unsigned long long v49[3];  // rax
    unsigned long long v50;  // rax
    unsigned long long v52;  // rcx
    unsigned long long v53[3];  // rax
    unsigned long long v54;  // rax
    unsigned long long v56[3];  // rax
    unsigned long long v58[3];  // rax
    void* v59;  // rax
    void* v60;  // rax
    unsigned long long v61[3];  // rax
    unsigned long long v62[3];  // rax
    unsigned long long v63;  // r15
    unsigned long long v65[2];  // rax
    char v66;  // r15b
    unsigned long long v67;  // 4098
    unsigned long long v68[3];  // rax
    unsigned long long v69;  // rcx
    int v70;  // xmm1
    unsigned long long v72;  // 4098
    unsigned long long v73[3];  // rax
    unsigned long long v74;  // r15
    unsigned long long v75;  // r12
    unsigned long long v76;  // r13
    unsigned long long v77;  // rax
    unsigned long long v78[3];  // rax
    int v80;  // xmm1
    int v81;  // xmm2

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&v7, a1, "fromAuto", 4);
    v45 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("fromAuto", 4, &v7);
    if (!v45)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_535900); /* do not return */
    uu_numfmt::parse_unit::hdfe14114e84c44e9(&v22, v45[1], v45[2]);
    v46 = v23;
    v47 = v22;
    if (v46 != 0x8000000000000000)
    {
        v48 = *((long long *)&v25);
        *((unsigned long *)&a0->padding_11[7]) = v26;
        *((unsigned long long *)&a0->padding_11[0]) = v48;
        a0->field_8 = v46;
        a0->field_10 = v47;
        a0->field_0 = 2;
        return a0;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&v7, a1, "to", 2);
    v49 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("to", 2, &v7);
    if (!v49)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_535918); /* do not return */
    uu_numfmt::parse_unit::hdfe14114e84c44e9(&v22, v49[1], v49[2]);
    v50 = v23;
    if (v50 != 0x8000000000000000)
    {
        v52 = *((long long *)&v25);
        *((unsigned long *)&a0->padding_11[7]) = v26;
        *((unsigned long long *)&a0->padding_11[0]) = v52;
        a0->field_8 = v50;
        a0->field_10 = v0;
        a0->field_0 = 2;
        return a0;
    }
    v0 = v22;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&v7, a1, "from-unit", 9);
    v53 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("from-unit", 9, &v7);
    if (!v53)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_535930); /* do not return */
    uu_numfmt::parse_unit_size::hba45e7319bcb81ae(&v7, v53[1], v53[2]);
    v54 = v7;
    if (v54 == 0x8000000000000000)
    {
        *((int128_t *)&v42) = *((int128_t *)&v8);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&v7, a1, "to-unit", 7);
        v56 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("to-unit", 7, &v7);
        if (!v56)
            core::option::unwrap_failed::h0e11329e76906eaa(&g_535948); /* do not return */
        uu_numfmt::parse_unit_size::hba45e7319bcb81ae(&v7, v56[1], v56[2]);
        v54 = v7;
        if (v54 == 0x8000000000000000)
        {
            *((int128_t *)&v41) = *((int128_t *)&v8);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&v7, a1, "padding", 7);
            v58 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("padding", 7, &v7);
            if (!v58)
            {
                v59 = 0;
            }
            else
            {
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$isize$GT$::from_str::h4967ea1478f9fe2a(&v7, v58[1], v58[2]);
                if (v7 || (v59 = v8, !v59))
                {
                    uu_numfmt::parse_options::_$u7b$$u7b$closure$u7d$$u7d$::h552d86bdbb68f662(&v7, v58[1], v58[2]);
                    if (v7 != 0x8000000000000000)
                    {
                        a0->field_8 = v54;
                        *((void*)&a0->field_10) = v42;
                        a0->field_0 = 2;
                        return a0;
                    }
                    v59 = v8;
                }
            }
            v38 = v59;
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(a1, "header", 6) != 2)
            {
                v60 = 0;
            }
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&v7, a1, "header", 6);
                v61 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("header", 6, &v7);
                if (!v61)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_535960); /* do not return */
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v7, v61[1], v61[2]);
                if (v7 || (v60 = v8, !v60))
                {
                    uu_numfmt::parse_options::_$u7b$$u7b$closure$u7d$$u7d$::h7cf9a379c7bec393(&v7, v61[1], v61[2]);
                    v54 = v7;
                    if (v54 != 0x8000000000000000)
                    {
                        a0->field_8 = v54;
                        *((void*)&a0->field_10) = v42;
                        a0->field_0 = 2;
                        return a0;
                    }
                    v60 = v8;
                }
            }
            v37 = v60;
            v1 = v47;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&v7, a1, "field", 5);
            v62 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("field", 5, &v7);
            if (!v62)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_535978); /* do not return */
            v63 = v62[1];
            _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h3869e540bcd9fb10(&v7, v63, v13);
            v12 = 0;
            v13 = v62[2];
            v14 = 1;
            if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4dbd70c27d8de298(core::iter::traits::iterator::Iterator::try_fold::h3a7d74c346e468e3(&v7)))
            {
                uucore::features::ranges::Range::from_list::hf67be8a5ce4e6c04(&v7, v63, v13);
                v67 = v7;
                *((int128_t *)&v22) = *((int128_t *)&v8);
                v26 = *((long long *)&v10);
                v66 = v0;
                if (v67)
                {
                    *((unsigned long long *)&a0->padding_11[7]) = v26;
                    *((int128_t *)&a0->field_8) = *((int128_t *)&v22);
                    a0->field_0 = 2;
                    return a0;
                }
                v34 = v26;
                *((int128_t *)&v33) = *((int128_t *)&v22);
            }
            else
            {
                v65 = ::0x4bfa00::alloc::alloc::Global::alloc_impl::hf61749d460433fff(16);
                v66 = v0;
                if (!v65)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 16); /* do not return */
                v65[0] = 1;
                v65[1] = 18446744073709551615;
                alloc::slice::hack::into_vec::hb3f415a8a3a51118(&v33, v65, 1);
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&v7, a1, "format", 6);
            v68 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("format", 6, &v7);
            if (!v68)
            {
                v32 = 0;
                v24 = 0;
                v22 = 0;
                v28 = 0;
                v28 = 1;
                *((uint128_t *)&v29) = 0;
                v30 = 1;
                v30 = 0;
                goto LABEL_4c0a05;
            }
            else
            {
                _$LT$uu_numfmt..options..FormatOptions$u20$as$u20$core..str..traits..FromStr$GT$::from_str::hdd662aa66ead1457(&v7, v68[1], v68[2]);
                *((int128_t *)&v4) = *((int128_t *)&v8);
                v5 = *((long long *)&v10);
                if (v24 == 2)
                {
                    *((unsigned long long *)&a0->padding_11[7]) = v5;
                    *((int128_t *)&a0->field_8) = (int128_t)v4;
                    a0->field_0 = 2;
                }
                else
                {
                    v69 = v15;
                    *((unsigned long long *)&v32) = v69;
                    v70 = *((int128_t *)&v12);
                    *((int128_t *)&v30) = *((int128_t *)&v14);
                    v29 = v70;
                    *((void*)&v28) = v11;
                    *((int128_t *)&v22) = (int128_t)v4;
                    v27 = v5;
                    v24 = v7;
                    if (!(v66 != 5) || !((char)v69))
                    {
LABEL_4c0a05:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&v7, a1, "delimiter", 9);
                        v8 = 0x8000000000000000;
                        *((int128_t *)&v9) = *((int128_t *)&v43);
                        v7 = 0;
                        core::option::Option$LT$T$GT$::map_or::h196257d03fbff2c6(&v4, clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("delimiter", 9, &v7), &v7);
                        v72 = v4;
                        *((int128_t *)&v35) = (int128_t)(&v4)[8];
                        v36 = *((long long *)&v6);
                        if (v72)
                        {
                            *((unsigned long long *)&a0->padding_11[7]) = v36;
                        }
                        else
                        {
                            v40 = v36;
                            v39 = v35;
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&v7, a1, "round", 5);
                            v73 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("round", 5, &v7);
                            if (!v73)
                                core::option::unwrap_failed::h0e11329e76906eaa(&g_535990); /* do not return */
                            v74 = v73[1];
                            v75 = v73[2];
                            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(v74, v75, "up", 2))
                            {
                                v76 = 0;
                            }
                            else
                            {
                                v76 = &v7 & 0xffffffffffffff00 | 1;
                                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(v74, v75, "down", 4))
                                {
                                    v76 = v76 & 0xffffffffffffff00 | 2;
                                    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(v74, v75, "from-zero", 9))
                                    {
                                        v76 = v76 & 0xffffffffffffff00 | 3;
                                        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(v74, v75, "towards-zero", 12))
                                        {
                                            v76 = v76 & 0xffffffffffffff00 | 4;
                                            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(v74, v75, "nearestinternal error: entered unreachable code: Should be restricted by clap", 7))
                                            {
                                                v7 = &g_5358f0;
                                                v8 = 1;
                                                v9 = &v2;
                                                *((uint128_t *)&v10) = 0;
                                                core::panicking::panic_fmt::he12d0d7468628bb4(&v7, &g_5359a8); /* do not return */
                                            }
                                        }
                                    }
                                }
                            }
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&v7, a1, "suffix", 6);
                            v77 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("suffix", 6, &v7);
                            if (!v77)
                            {
                                v3 = 0x8000000000000000;
                                *((int128_t *)&v3) = *((int128_t *)&v43);
                            }
                            else
                            {
                                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v7, v77);
                                v5 = v9;
                                *((int128_t *)&v3) = *((int128_t *)&v7);
                            }
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&v7, a1, "invalidinvalid padding value invalid header value ", 7);
                            v78 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("invalidinvalid padding value invalid header value ", 7, &v7);
                            if (v78)
                            {
                                _$LT$uu_numfmt..options..InvalidModes$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h8733635cdad8a454(&v7, v78[1], v78[2]);
                                v17 = v34;
                                v16 = v33;
                                v18 = v39;
                                v19 = v40;
                                *((int128_t *)&v20) = *((int128_t *)&v3);
                                v21 = v5;
                                v80 = *((int128_t *)&(&v22)[2]);
                                v81 = *((int128_t *)&v28);
                                *((int128_t *)&v7) = *((int128_t *)&v22);
                                v9 = v80;
                                v11 = v81;
                                v12 = v29;
                                *((int128_t *)&v14) = *((int128_t *)&v30);
                                v15 = *((long long *)&v32);
                                memcpy(a0, &v7, 160);
                                *((unsigned long long *)&a0->field_a0) = (unsigned long long)v41 CONCAT (unsigned long long)v42;
                                a0->field_b0 = v1;
                                a0->field_b1 = v0;
                                a0->field_b8 = v38;
                                a0->field_c0 = v37;
                                a0->field_c8 = core::result::Result$LT$T$C$E$GT$::unwrap::h5e69027b68aabff9(&v7);
                                a0->field_c9 = v76;
                                return a0;
                            }
                            core::option::unwrap_failed::h0e11329e76906eaa(&g_5359c0); /* do not return */
                        }
                    }
                    else
                    {
                        ::0x4bf900::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h523a2f825c855b37(&v7, "grouping cannot be combined with --to", 37);
                        *((unsigned long *)&a0->padding_11[7]) = v9;
                    }
                    *((int128_t *)&a0->field_8) = *((int128_t *)&v7);
                    a0->field_0 = 2;
                    ::0x4bee60::core::ptr::drop_in_place$LT$uu_numfmt..options..FormatOptions$GT$::h145f8e2eba079399(&v22);
                }
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..ranges..Range$GT$$GT$::hc100239ae3031ff0(&v33);
                return a0;
            }
        }
    }
    a0->field_8 = v54;
    *((void*)&a0->field_10) = v42;
    a0->field_0 = 2;
    return a0;
}
