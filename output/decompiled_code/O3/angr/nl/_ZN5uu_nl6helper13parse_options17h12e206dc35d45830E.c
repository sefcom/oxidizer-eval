double uu_nl::helper::parse_options::h12e206dc35d45830(long long a0, long long a1, long long a2)
{
    unsigned long v0;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x130]
    unsigned long v2;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x120]
    unsigned long long v4;  // [sp-0x118]
    unsigned long long v5;  // [sp-0x110]
    char v6;  // [bp-0x108]
    char v7;  // [bp-0x100]
    char v8;  // [bp-0xf8]
    char v9;  // [bp-0xe8]
    void* v10;  // [sp-0xe0]
    unsigned long long *v11;  // [sp-0xd8]
    unsigned long long *v12;  // [sp-0xd0]
    int v13;  // [sp-0xc8], Other Possible Types: struct struct_0 **
    unsigned long long v14;  // [sp-0xc0]
    int v15;  // [sp-0xb8]
    unsigned long long v16;  // [sp-0xa8]
    int v17;  // [sp-0x98], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v18;  // [sp-0x90]
    struct struct_2 **v19;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x80]
    void* v21;  // [sp-0x78]
    unsigned long long v23;  // [sp-0x58]
    struct_0 *v24;  // [sp-0x50]
    char v25;  // [bp-0x48]
    char v26;  // [bp-0x38]
    int v29;  // xmm0
    int v30;  // ymm0
    struct_1 *v32;  // r14
    int v33;  // xmm0
    int v34;  // ymm0
    unsigned long long v36;  // rax
    unsigned long long v38[3];  // rax
    unsigned long long v39;  // r13
    unsigned long long v40;  // r12
    unsigned long long v41;  // r14
    unsigned long long *v42;  // rbp
    unsigned long long *v43;  // rax
    unsigned long long v44;  // rcx
    unsigned long long v45[3];  // rax
    unsigned long long v46;  // r13
    unsigned long long v47;  // r12
    unsigned long long *v48;  // rbp
    unsigned long long *v49;  // rax
    unsigned long long *v50;  // rcx
    unsigned long long v51[3];  // rax
    unsigned long long v52;  // r13
    unsigned long long v53;  // r12
    unsigned long long v54;  // r14
    unsigned long long *v55;  // rbp
    unsigned long long *v56;  // rax
    unsigned long long *v57;  // rcx
    unsigned long long *v58;  // rax
    unsigned long long v59;  // rax
    uint128_t v60[4];  // rax
    uint128_t v61[4];  // r12
    unsigned long long *v62;  // r14
    unsigned long long *v63;  // rax
    unsigned long long *v64;  // rcx
    unsigned long long *v65;  // rax
    unsigned long long v66;  // rax
    uint128_t v67[4];  // rax
    unsigned long long *v68;  // r14
    unsigned long long *v69;  // rax
    unsigned long long *v70;  // rcx
    unsigned long long *v71;  // rax
    unsigned long long *v72;  // rax
    int v73;  // xmm0

    v10 = 0;
    v11 = &g_8;
    v12 = 0;
    a1->field_80 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a2, "no-renumbersection-delimiter:number-formatbody-numberingnumber-width", 11);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h483b47eeea531705(&v6, a2, "section-delimiter:number-formatbody-numberingnumber-width", 17);
    v0 = "section-delimiter:number-formatbody-numberingnumber-width";
    v1 = &g_10;
    if (*((int *)&v6) != 2)
    {
LABEL_53fc0b:
        v16 = *((long long *)&v9);
        *((int128_t *)&v15) = *((int128_t *)&v8);
        *((int128_t *)&v13) = *((int128_t *)&v6);
        v2 = &v0;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e2b25556a92a0d2;
        v4 = &v13;
        v5 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v17 = &anon.682c05e6f91a003af03c053bf38bd243.5.llvm.12071188684995818347;
        v18 = 2;
        v21 = 0;
        v19 = &v2;
        v20 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v17); /* do not return */
    }
    if (v24)
    {
        v24 = *((long long *)&v7);
        if (*((long long *)(v24 + &g_10)) != 1)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v17, v24);
        }
        else
        {
            v13 = &v24;
            v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2ab26510bb0ea6ae;
            v17 = &g_66ebe8;
            v18 = 2;
            v21 = 0;
            v19 = &v13;
            v20 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v25, &v17);
            v29 = *((int128_t *)&v25);
            v17 = v29;
            v19 = *((long long *)&v26);
        }
        v32 = &a1->field_30;
        if (a1->field_30)
            __rust_dealloc(a1->field_38);
        *((unsigned long long *)(v32 + &g_10)) = v19;
        v33 = *((int128_t *)&v17);
        v34 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
        *((void*)&v32->field_0) = v33;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h483b47eeea531705(&v6, a2, "number-separator", 16);
    v0 = "number-separator";
    v1 = &g_10;
    if (*((int *)&v6) == 2)
    {
        if (*((long long *)&v7))
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone_from::h4a05e4567e966646(&a1->padding_40[8], *((long long *)&v7));
        v36 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h483b47eeea531705(&v6, a2, "number-formatbody-numberingnumber-width", 13);
        v0 = "number-formatbody-numberingnumber-width";
        v1 = &g_8;
        if (*((int *)&v6) == 2)
        {
            if (!*((long long *)&v7) || (v36 = _$LT$uu_nl..NumberFormat$u20$as$u20$core..convert..From$LT$T$GT$$GT$::from::heb30c5ce9e577954(*((long long *)&v7)), (char)v36 == 3))
                v36 = v36 | -0x100 | 1;
            a1->field_81 = v36;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h483b47eeea531705(&v6, a2, "header-numbering", 16);
            v0 = "header-numbering";
            v1 = &g_10;
            if (*((int *)&v6) == 2)
            {
                v38 = *((long long *)&v7);
                if (v38)
                {
                    _$LT$uu_nl..NumberingStyle$u20$as$u20$core..convert..TryFrom$LT$$RF$str$GT$$GT$::try_from::hca7ce25927ac3f0d(&v17, *((long long *)(v38 + &g_8)), *((long long *)(v38 + &g_10)));
                    v39 = v17;
                    if (v39 != 9223372036854775809)
                    {
                        v40 = v18;
                        v41 = v19;
                        if (v39 == 0x8000000000000000)
                        {
                            core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::h6086be29578bfa4c(a1->field_0, *((long long *)(a1 + &g_8)));
                            a1->field_0 = v40;
                            *((unsigned long long *)(a1 + &g_8)) = v41;
                        }
                        else
                        {
                            a0 = a0;
                            v42 = v12;
                            if (v42 == v10)
                                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h614b4b9d88428aa6(&v10);
                            v43 = v11;
                            v44 = 3 * v42;
                            *((unsigned long long *)((char *)v43 + v44 * &g_8)) = v39;
                            *((unsigned long long *)((char *)v43 + v44 * &g_8 + &g_8)) = v40;
                            *((unsigned long long *)((char *)v43 + v44 * &g_8 + &g_10)) = v41;
                            v12 = (char *)v42 + 1;
                        }
                    }
                }
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h483b47eeea531705(&v6, a2, "body-numberingnumber-width", 14);
                v0 = "body-numberingnumber-width";
                v1 = &g_8;
                if (*((int *)&v6) == 2)
                {
                    v45 = *((long long *)&v7);
                    if (v45)
                    {
                        _$LT$uu_nl..NumberingStyle$u20$as$u20$core..convert..TryFrom$LT$$RF$str$GT$$GT$::try_from::hca7ce25927ac3f0d(&v17, *((long long *)(v45 + &g_8)), *((long long *)(v45 + &g_10)));
                        v46 = v17;
                        if (v46 != 9223372036854775809)
                        {
                            v23 = v18;
                            v47 = v19;
                            if (v46 == 0x8000000000000000)
                            {
                                core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::h6086be29578bfa4c(*((long long *)(a1 + &g_10)), *((long long *)(a1 + &g_18)));
                                *((unsigned long long *)(a1 + &g_10)) = v23;
                                *((unsigned long long *)(a1 + &g_18)) = v47;
                            }
                            else
                            {
                                a0 = a0;
                                v48 = v12;
                                if (v48 == v10)
                                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h614b4b9d88428aa6(&v10);
                                v49 = v11;
                                v50 = 3 * v48;
                                *((unsigned long long *)((char *)v49 + v50 * &g_8)) = v46;
                                *((unsigned long long *)((char *)v49 + v50 * &g_8 + &g_8)) = v23;
                                *((unsigned long long *)((char *)v49 + v50 * &g_8 + &g_10)) = v47;
                                v12 = (char *)v48 + 1;
                            }
                        }
                    }
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h483b47eeea531705(&v6, a2, "footer-numbering", 16);
                    v0 = "footer-numbering";
                    v1 = &g_10;
                    if (*((int *)&v6) == 2)
                    {
                        v51 = *((long long *)&v7);
                        if (v51)
                        {
                            _$LT$uu_nl..NumberingStyle$u20$as$u20$core..convert..TryFrom$LT$$RF$str$GT$$GT$::try_from::hca7ce25927ac3f0d(&v17, *((long long *)(v51 + &g_8)), *((long long *)(v51 + &g_10)));
                            v52 = v17;
                            if (v52 != 9223372036854775809)
                            {
                                v53 = v18;
                                v54 = v19;
                                if (v52 == 0x8000000000000000)
                                {
                                    core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::h6086be29578bfa4c(a1->field_20, a1->field_28);
                                    a1->field_20 = v53;
                                    a1->field_28 = v54;
                                }
                                else
                                {
                                    a0 = a0;
                                    v55 = v12;
                                    if (v55 == v10)
                                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h614b4b9d88428aa6(&v10);
                                    v56 = v11;
                                    v57 = 3 * v55;
                                    *((unsigned long long *)((char *)v56 + v57 * &g_8)) = v52;
                                    *((unsigned long long *)((char *)v56 + v57 * &g_8 + &g_8)) = v53;
                                    *((unsigned long long *)((char *)v56 + v57 * &g_8 + &g_10)) = v54;
                                    v12 = (char *)v55 + 1;
                                }
                            }
                        }
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1477a96b82a8547c(&v6, a2, "number-width", 12);
                        v0 = "number-width";
                        v1 = &g_8;
                        if (*((int *)&v6) == 2)
                        {
                            v58 = *((long long *)&v7);
                            if (v58)
                            {
                                v59 = *(v58);
                                if (v59)
                                {
                                    a1->field_78 = v59;
                                    goto LABEL_53fa70;
                                }
                                v60 = __rust_alloc(71, 1);
                                if (v60)
                                {
                                    v61 = v60;
                                    v60[3] = 147712823095199885650752799166566261091;
                                    v60[2] = 140162918594833014437804845883031872032;
                                    *((int128_t *)(v60 + &g_10)) = 77637583343782958893978915653633074530;
                                    v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 147712823095199885650752799166566261091 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 140162918594833014437804845883031872032 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 77637583343782958893978915653633074530 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 145495583904753472794435103677021056585;
                                    v60[0] = 145495583904753472794435103677021056585;
                                    *((long long *)((char *)&v61[3] + 15)) = 7306930285237528175;
                                    v62 = v12;
                                    if (v62 == v10)
                                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h614b4b9d88428aa6(&v10);
                                    v63 = v11;
                                    v64 = v62 * 3;
                                    *((long long *)((char *)v63 + v64 * &g_8)) = 71;
                                    *((uint128_t *[4])((char *)v63 + v64 * &g_8 + &g_8)) = v61;
                                    *((long long *)((char *)v63 + v64 * &g_8 + &g_10)) = 71;
                                    v12 = (char *)v62 + 1;
                                    goto LABEL_53fa70;
                                }
                            }
                            else
                            {
LABEL_53fa70:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5e03c0843f169ada(&v6, a2, "join-blank-lines", 16);
                                v0 = "join-blank-lines";
                                v1 = &g_10;
                                if (*((int *)&v6) != 2)
                                {
                                    vvar_743{stack -168} = *((long long *)&v9);
                                    vvar_744{stack -184} = *((int128_t *)&v8);
                                    *((int128_t *)&v13) = *((int128_t *)&v6);
                                    vvar_745{stack -296} = &v0;
                                    vvar_746{stack -288} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e2b25556a92a0d2;
                                    vvar_747{stack -280} = &v13;
                                    vvar_748{stack -272} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                                    vvar_749{stack -152} = &anon.682c05e6f91a003af03c053bf38bd243.5.llvm.12071188684995818347;
                                    vvar_750{stack -144} = 2;
                                    vvar_751{stack -120} = 0;
                                    vvar_752{stack -136} = &v2;
                                    vvar_753{stack -128} = 2;
                                    core::panicking::panic_fmt::he12d0d7468628bb4(&v17); /* do not return */
                                }
                                v65 = *((long long *)&v7);
                                if (v65)
                                {
                                    v66 = *(v65);
                                    if (v66)
                                    {
                                        a1->field_70 = v66;
                                        goto LABEL_53fb62;
                                    }
                                    v67 = __rust_alloc(74, 1);
                                    if (v67)
                                    {
                                        *((int128_t *)((char *)&v67[3] + 10)) = 134789072936214216453580009062075231349;
                                        v67[3] = 156096678719273061829719590883178410597;
                                        v67[2] = 145494934854390395121219619161768620901;
                                        *((int128_t *)(v67 + &g_10)) = 146762463775273635717188561963381319010;
                                        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 134789072936214216453580009062075231349 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 156096678719273061829719590883178410597 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 145494934854390395121219619161768620901 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 146762463775273635717188561963381319010 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 145495583904753472794435103677021056585;
                                        v67[0] = 145495583904753472794435103677021056585;
                                        v68 = v12;
                                        if (v68 == v10)
                                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h614b4b9d88428aa6(&v10);
                                        v69 = v11;
                                        v70 = v68 * 3;
                                        *((long long *)((char *)v69 + v70 * &g_8)) = 74;
                                        *((uint128_t *[4])((char *)v69 + v70 * &g_8 + &g_8)) = v67;
                                        *((long long *)((char *)v69 + v70 * &g_8 + &g_10)) = 74;
                                        v12 = (char *)v68 + 1;
                                        goto LABEL_53fb62;
                                    }
                                }
                                else
                                {
LABEL_53fb62:
                                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h90351878f7985bfe(&v6, a2, "line-incrementstarting-line-numberFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs", 14);
                                    v0 = "line-incrementstarting-line-numberFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs";
                                    v1 = &g_8;
                                    if (*((int *)&v6) != 2)
                                    {
                                        vvar_755{stack -168} = *((long long *)&v9);
                                        vvar_756{stack -184} = *((int128_t *)&v8);
                                        *((int128_t *)&v13) = *((int128_t *)&v6);
                                        vvar_757{stack -296} = &v0;
                                        vvar_758{stack -288} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e2b25556a92a0d2;
                                        vvar_759{stack -280} = &v13;
                                        vvar_760{stack -272} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                                        vvar_761{stack -152} = &anon.682c05e6f91a003af03c053bf38bd243.5.llvm.12071188684995818347;
                                        vvar_762{stack -144} = 2;
                                        vvar_763{stack -120} = 0;
                                        vvar_764{stack -136} = &v2;
                                        vvar_765{stack -128} = 2;
                                        core::panicking::panic_fmt::he12d0d7468628bb4(&v17); /* do not return */
                                    }
                                    v71 = *((long long *)&v7);
                                    if (v71)
                                        a1->field_68 = *(v71);
                                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h90351878f7985bfe(&v6, a2, "starting-line-numberFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs", 20);
                                    v0 = "starting-line-numberFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs";
                                    v1 = &g_10;
                                    if (*((int *)&v6) == 2)
                                    {
                                        v72 = *((long long *)&v7);
                                        if (!v72)
                                        {
                                            *((unsigned long long **)(a0 + &g_10)) = v12;
                                            v73 = *((int128_t *)&v10);
                                            *((void*)&a0->field_0) = v73;
                                            return (unsigned long long)(v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73);
                                        }
                                        a1->field_60 = *(v72);
                                    }
                                    goto LABEL_53fc0b;
                                }
                            }
                            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                        }
                    }
                }
            }
        }
    }
}
