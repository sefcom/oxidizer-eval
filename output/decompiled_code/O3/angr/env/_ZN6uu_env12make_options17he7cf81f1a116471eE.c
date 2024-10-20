long long uu_env::make_options::he7cf81f1a116471e(unsigned long long a0[3], unsigned long long a1)
{
    struct_0 *v2;  // [bp-0x328], Other Possible Types: unsigned long, unsigned long long
    struct struct_1 **v3;  // [sp-0x320], Other Possible Types: unsigned long long
    struct_0 *v4;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x310]
    void* v6;  // [sp-0x308], Other Possible Types: struct_0 *, unsigned long long
    unsigned long v7;  // [sp-0x300]
    unsigned long long v8;  // [sp-0x2f8]
    struct_0 *v10;  // [sp-0x2d8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v11;  // [sp-0x2d0]
    struct_0 *v12;  // [sp-0x2c8], Other Possible Types: struct struct_0 **
    unsigned long long v13;  // [sp-0x2c0]
    unsigned long long v14;  // [sp-0x2b8]
    unsigned long v16;  // [sp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x2a0]
    struct struct_0 **v18;  // [sp-0x298]
    unsigned long long v19;  // [sp-0x290]
    struct_0 *v20;  // [bp-0x288], Other Possible Types: char, unsigned long long
    struct_3 *v21;  // [sp-0x280], Other Possible Types: struct_6 *, unsigned long long
    struct_0 *v22;  // [bp-0x278], Other Possible Types: char, unsigned long
    unsigned long long v23;  // [sp-0x270]
    void* v24;  // [sp-0x268], Other Possible Types: unsigned long, unsigned long long
    unsigned long v33;  // [sp-0x210], Other Possible Types: unsigned long long
    unsigned long long v34;  // [sp-0x208]
    struct_0 *v36;  // [sp-0x1f8], Other Possible Types: unsigned long long, unsigned long
    unsigned long v37;  // [sp-0x1f0], Other Possible Types: unsigned long long
    unsigned long v38;  // [sp-0x1e8], Other Possible Types: unsigned long long
    struct_0 *v39;  // [sp-0x1e0], Other Possible Types: unsigned long long
    void* v40;  // [sp-0x1d8], Other Possible Types: char
    unsigned long long v41;  // [sp-0x1d0], Other Possible Types: unsigned long
    void* v42;  // [bp-0x1c8], Other Possible Types: char
    uint128_t *v43;  // [sp-0x1c0]
    struct_0 *v44;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v45;  // [sp-0x1a8]
    void* v46;  // [sp-0x1a0]
    void* v47;  // [sp-0x198]
    unsigned long long v48[2];  // [sp-0x190]
    unsigned long long v49[2];  // [sp-0x188]
    unsigned long long v50;  // [sp-0x180]
    unsigned long long v51[3];  // [sp-0x178]
    unsigned long long v52;  // [sp-0x170]
    struct_3 *v53;  // [sp-0x168]
    char v54;  // [sp-0x160]
    char v55;  // [sp-0x15f]
    void* v58;  // [bp-0x148], Other Possible Types: char, unsigned long
    unsigned long long v59;  // [sp-0x140]
    void* v60;  // [sp-0x138]
    void* v61;  // [bp-0x130], Other Possible Types: char, unsigned long
    unsigned long long v62;  // [sp-0x128]
    void* v63;  // [sp-0x120]
    unsigned long long v67;  // [sp-0x100]
    struct struct_1 **v69;  // [sp-0xf0]
    unsigned long v77;  // [sp-0xb0], Other Possible Types: unsigned long long
    struct_0 *v78;  // [sp-0xa8]
    struct_0 *v79;  // [sp-0x98]
    struct_0 *v80;  // [sp-0x88]
    unsigned long long v81;  // [sp-0x78]
    unsigned long v82;  // [sp-0x70], Other Possible Types: unsigned long long
    struct_0 *v83;  // [sp-0x68]
    struct_0 *v84;  // [sp-0x58]
    struct_0 *v85;  // [sp-0x48]
    unsigned long long v86;  // [sp-0x38]
    struct_6 *v90;  // rax
    struct_0 *v91;  // xmm0
    void* v92;  // r13
    unsigned long long v94[3];  // r14
    struct_0 *v96;  // xmm0
    struct_0 *v97;  // xmm0
    struct_0 *v98;  // xmm0
    int v99;  // ymm0
    int v100;  // ymm0
    struct_0 *v101;  // xmm0
    struct_0 *v102;  // xmm0
    struct_0 *v103;  // xmm1
    int v104;  // ymm1
    int v105;  // ymm1
    struct_0 *v106;  // xmm2
    int v107;  // ymm2
    int v108;  // ymm2
    struct_0 *v109;  // xmm0
    struct_0 *v110;  // xmm0
    struct_0 *v111;  // xmm0
    int v112;  // ymm0
    struct_0 *v113;  // xmm0
    struct_0 *v114;  // xmm0
    struct_0 *v115;  // xmm1
    struct_0 *v116;  // xmm2
    struct_3 *v117;  // rcx
    struct_0 *v118;  // xmm0
    void* v119;  // rax
    struct_0 *v120;  // xmm0
    struct_0 *v121;  // xmm0
    int v122;  // ymm0
    struct struct_1 **v123;  // rbx
    struct_0 *v167;  // xmm0

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3f20399a814dde39(&v20, a1, "chdir", 5);
    v16 = "chdir";
    v17 = 5;
    if (*((int *)&v20) != 2)
    {
        v6 = v24;
        v91 = *((int128_t *)&v20);
        *((int128_t *)&v4) = *((int128_t *)&v22);
        v2 = v91;
        v10 = &v16;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he4bb067a457648df;
        v12 = &v2;
        v13 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v36 = &anon.a830a94d12fcec3b450b989354aeccce.2.llvm.15687275722422505163;
        v37 = 2;
        v40 = 0;
        v38 = &v10;
        v39 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v36); /* do not return */
    }
    v90 = v21;
    if (!v90)
        v92 = 0;
    else
        v92 = v90->field_8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he595453297a4091e(&v36, a1, "fileTSTPi128", 4);
    v16 = "fileTSTPi128";
    v17 = 4;
    if (v36)
    {
        v24 = v41;
        v101 = *((int128_t *)&v37);
        *((int128_t *)&v22) = *((int128_t *)&v39);
        v20 = v101;
        v10 = &v16;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he4bb067a457648df;
        v12 = &v20;
        v13 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v2 = &anon.a830a94d12fcec3b450b989354aeccce.2.llvm.15687275722422505163;
        v3 = 2;
        v6 = 0;
        v4 = &v10;
        v5 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v2); /* do not return */
    }
    v96 = *((int128_t *)&v38);
    v2 = v96;
    v97 = *((int128_t *)&v40);
    v4 = v97;
    v98 = *((int128_t *)&v42);
    v100 = v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98;
    v6 = v98;
    v8 = *((long long *)&v44);
    if (!v77)
    {
        v58 = 0;
        v59 = 8;
        v60 = 0;
    }
    else
    {
        v77 = v37;
        v102 = *((int128_t *)&v2);
        v100 = v100 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102;
        v103 = *((int128_t *)&v4);
        v105 = v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103;
        v106 = *((int128_t *)&v6);
        v108 = v107 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106;
        v78 = v102;
        v79 = v103;
        v80 = v106;
        v81 = v8;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h4ece3a9839817e98(&v58, &v77);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he595453297a4091e(&v36, a1, "unset", 5);
    v16 = "unset";
    v17 = 5;
    if (v36)
    {
        v24 = v41;
        v113 = *((int128_t *)&v37);
        *((int128_t *)&v22) = *((int128_t *)&(&v38)[1]);
        v20 = v113;
        v10 = &v16;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he4bb067a457648df;
        v12 = &v20;
        v13 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v2 = &anon.a830a94d12fcec3b450b989354aeccce.2.llvm.15687275722422505163;
        v3 = 2;
        v6 = 0;
        v4 = &v10;
        v5 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v2); /* do not return */
    }
    v109 = *((int128_t *)&v38);
    v2 = v109;
    v110 = *((int128_t *)&v40);
    v4 = v110;
    v111 = *((int128_t *)&v42);
    v112 = v100 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111;
    v6 = v111;
    v8 = *((long long *)&v44);
    if (!v82)
    {
        v61 = 0;
        v62 = 8;
        v63 = 0;
    }
    else
    {
        v82 = v37;
        v114 = *((int128_t *)&v2);
        v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v114;
        v115 = *((int128_t *)&v4);
        v105 = v105 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v115;
        v116 = *((int128_t *)&v6);
        v108 = v108 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116;
        v83 = v114;
        v84 = v115;
        v85 = v116;
        v86 = v8;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h3caf6c8c0f478f09(&v61, &v82);
    }
    v67 = &v20;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3f20399a814dde39(&v20, a1, "argv0", 5);
    v16 = "argv0";
    v17 = 5;
    if (*((int *)&v20) != 2)
    {
        v6 = v24;
        v118 = *((int128_t *)&v20);
        *((int128_t *)&v4) = *((int128_t *)&v22);
        v2 = v118;
        v10 = &v16;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he4bb067a457648df;
        v12 = &v2;
        v13 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v36 = &anon.a830a94d12fcec3b450b989354aeccce.2.llvm.15687275722422505163;
        v37 = 2;
        v40 = 0;
        v38 = &v10;
        v39 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v36); /* do not return */
    }
    v117 = v21;
    if (v117)
    {
        v119 = v117->field_8;
        v117 = v117->field_10;
    }
    else
    {
        v119 = 0;
    }
    v38 = v60;
    v120 = *((int128_t *)&v58);
    v36 = v120;
    v121 = *((int128_t *)&v61);
    v39 = v121;
    v41 = v63;
    v54 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "ignore-environment", 18);
    *((int *)&v55) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "nullXCPUBOLDBlue", 4) ? 10 : 0);
    v50 = v92;
    v51[0] = v94;
    v42 = 0;
    v43 = 8;
    v122 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v120 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v121 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((int128_t *)&v44) = 0;
    v45 = 8;
    v46 = 0;
    v52 = v119;
    v53 = v117;
    v47 = 0;
    v48[0] = 8;
    v49[0] = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he595453297a4091e(&v2, a1, "ignore-signal", 13);
    v33 = "ignore-signal";
    v34 = 13;
    if (v2)
    {
        v14 = v7;
        v167 = *((int128_t *)&(&v2)[1]);
        *((int128_t *)&v12) = *((int128_t *)&(&v4)[1]);
        v10 = v167;
        v16 = &v33;
        v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he4bb067a457648df;
        v18 = &v10;
        v19 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v20 = &anon.a830a94d12fcec3b450b989354aeccce.2.llvm.15687275722422505163;
        v21 = 2;
        v24 = 0;
        v22 = &v16;
        v23 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(v67); /* do not return */
    }
    v123 = v3;
    if (!v69)
        goto LABEL_0x49cf8e;
    else
        goto LABEL_0x49c9e1;
}
