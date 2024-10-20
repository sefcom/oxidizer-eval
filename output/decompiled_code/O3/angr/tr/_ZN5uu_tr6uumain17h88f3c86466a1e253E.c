long long uu_tr::uumain::h88f3c86466a1e253(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xa18]
    char v1;  // [bp-0xa10]
    char v2;  // [sp-0x9fb]
    char v3;  // [sp-0x9fa]
    char v4;  // [sp-0x9f9]
    struct_8 *v5;  // [sp-0x9f8]
    char v6;  // [sp-0x9f0]
    char v7;  // [bp-0x9e8]
    char v8;  // [bp-0x9e0]
    char v9;  // [bp-0x9d8]
    uint128_t v10[2];  // [sp-0x9d0], Other Possible Types: unsigned long, unsigned long long
    struct_7 *v11;  // [bp-0x9c8], Other Possible Types: unsigned long long
    int v12;  // [sp-0x9b8]
    unsigned long long v13;  // [sp-0x9a8]
    char v14;  // [bp-0x9a0], Other Possible Types: unsigned long, unsigned long long
    int v15;  // [bp-0x998], Other Possible Types: char, unsigned long
    char v16;  // [bp-0x990]
    char v17;  // [sp-0x988]
    char v18;  // [bp-0x980]
    char v19;  // [bp-0x970]
    int v23;  // [sp-0x948]
    unsigned long long v24;  // [sp-0x930]
    unsigned long v27;  // [sp-0x910], Other Possible Types: unsigned long long
    unsigned long v28;  // [sp-0x908], Other Possible Types: unsigned long long
    unsigned long v29;  // [sp-0x900], Other Possible Types: unsigned long long
    unsigned long long v30;  // [sp-0x8f8]
    int v31;  // [sp-0x8f0]
    int v32;  // [sp-0x8e0]
    unsigned long long v33;  // [sp-0x8d0]
    int v34;  // [bp-0x8c8]
    struct struct_4 **v36;  // [sp-0x8b8]
    int v37;  // [sp-0x8b0]
    int v38;  // [sp-0x8a0]
    int v39;  // [sp-0x890]
    unsigned long long v40;  // [sp-0x880]
    int v41;  // [bp-0x878], Other Possible Types: char, unsigned long, unsigned long long
    uint128_t v42[4];  // [sp-0x870], Other Possible Types: unsigned long, unsigned long long
    uint128_t v43[4];  // [bp-0x868], Other Possible Types: char, unsigned long long, unsigned long
    char v44;  // [bp-0x867]
    unsigned int v45;  // [bp-0x860], Other Possible Types: unsigned long long
    void* v46;  // [sp-0x858]
    char v47;  // [bp-0x850]
    char v58;  // [bp-0x528]
    char v59;  // [bp-0x518]
    char v60;  // [bp-0x510]
    char v61;  // [bp-0x500]
    char v62;  // [bp-0x4f8]
    char v63;  // [bp-0x4e8]
    unsigned long v64;  // [sp-0x4e0], Other Possible Types: unsigned long long
    int v65;  // [sp-0x4d8]
    char v70;  // [bp-0x498]
    char v71;  // [bp-0x488]
    char v72;  // [bp-0x478]
    char v73;  // [bp-0x468]
    int v78;  // [bp-0x428], Other Possible Types: char, unsigned long, unsigned long long
    int v79;  // [bp-0x420], Other Possible Types: unsigned long long
    int v80;  // [bp-0x418], Other Possible Types: struct struct_4 **, char, unsigned long long
    char v81;  // [bp-0x410], Other Possible Types: unsigned long
    char v82;  // [bp-0x408], Other Possible Types: unsigned long
    char v83;  // [bp-0x3f8]
    unsigned long long v84;  // [sp-0x160]
    int v85;  // [bp-0x158]
    int v86;  // [sp-0x148]
    int v87;  // [sp-0x138]
    int v88;  // [sp-0x128]
    void* v89;  // [sp-0x118]
    void* v90;  // [sp-0xd8]
    char v91;  // [bp-0x98]
    char v92;  // [bp-0x80]
    struct_5 *v96;  // rax
    char v97;  // r14b
    int v98;  // xmm1
    int v99;  // xmm2
    int v100;  // xmm3
    unsigned long long v101;  // rbp
    unsigned long long v102;  // rax
    struct_5 *v103;  // rax
    int v104;  // xmm0
    unsigned long long v106[3];  // rax
    struct_2 *v107;  // r14
    unsigned long long v108;  // dl
    uint128_t v109[4];  // rax
    uint128_t v110[2];  // rax
    struct_1 *v111;  // r15
    int v112;  // xmm0
    unsigned long long v113;  // rsi
    uint128_t v114[2];  // r15
    struct_7 *v115;  // r13
    struct struct_0 **v116;  // rax
    unsigned long long v117[3];  // rdi
    unsigned long long v118;  // rdx
    unsigned long long v119;  // r8
    unsigned long long v120;  // rsi
    unsigned long long v121;  // rsi
    void* v123;  // r9
    unsigned long long v124;  // r9
    unsigned long long v127;  // r9
    unsigned long long v128;  // rax
    int v129;  // xmm0
    struct_5 *v130;  // rax
    unsigned long long v131;  // rdx
    int v132;  // xmm0
    int v133;  // xmm1

    uu_tr::uu_app::h2e090fe5787ff45a(&v41);
    clap_builder::builder::command::Command::after_help::h08c9ab21c20689d1(&v78, &v41, "Translate, squeeze, and/or delete characters from standard input, writing to standard output.deletecomplementsqueeze-repeats", 93);
    clap_builder::builder::command::Command::try_get_matches_from::h5045962e55c1bbee(&v14, &v78, a0, a1);
    if (v29 == 0x8000000000000000)
        v96 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v30);
    v33 = *((long long *)&v19);
    *((int128_t *)&v32) = *((int128_t *)&v18);
    *((int128_t *)&v31) = *((int128_t *)&v16);
    v29 = v14;
    v30 = *((long long *)&v15);
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v29, "deletecomplementsqueeze-repeats", 6);
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v29, "complementsqueeze-repeats", 10);
    v97 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v29, "squeeze-repeats", 15);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v29, &g_411483, 13);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4bf756076fcb535a(&v41, &v29, "sets", 4);
    clap_builder::parser::error::MatchesError::unwrap::h633368ac5d38ea72(&v78, "sets", 4, &v41);
    v98 = *((int128_t *)&v80);
    v99 = *((int128_t *)&v82);
    v100 = *((int128_t *)&v83);
    *((int128_t *)&v85) = *((int128_t *)&v78);
    v86 = v98;
    v87 = v99;
    v88 = v100;
    v84 = 1;
    v89 = 0;
    v90 = 0;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h8c411dc9656d5a99(&v7, &v84);
    v101 = *((long long *)&v9);
    if (!v101)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h802d2cafdf254146(&v41, 15, 0);
        if (v41)
        {
            v24 = &v43;
            goto LABEL_43d8a6;
        }
        else
        {
            v102 = v43;
            *((long long *)(v102 + 7)) = 7236828795186999072;
            *((long long *)v102) = 2334956331002456429;
            v45 = 1;
            v41 = v42;
            v42 = v102;
            v43 = 15;
            v103 = __rust_alloc(32, 8);
            if (!v103)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v104 = *((int128_t *)&v41);
        }
LABEL_43ca95:
        *((int128_t *)&v103->field_10) = *((int128_t *)&v43);
        *((void*)&v103->field_0) = v104;
        v111 = &g_4eba78.field_0;
    }
    if (v101 == 1 && !v2 && !v97)
    {
        v78 = 1;
        *((int128_t *)&v79) = *((int128_t *)(*((long long *)&v8) + 8));
        v81 = 1;
        v14 = &v78;
        v15 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v41 = &g_4ebae8;
        v42 = 2;
        v46 = 0;
        v43 = &v14;
        v45 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v58, &v41);
        v45 = 1;
        *((int128_t *)&v41) = *((int128_t *)&v58);
        v43 = *((long long *)&v59);
        v103 = __rust_alloc(32, 8);
        if (!v103)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        goto LABEL_43ca82;
    }
    if ((v2 & v97) == 1 && v101 == 1)
    {
        v78 = 1;
        *((int128_t *)&v79) = *((int128_t *)(*((long long *)&v8) + 8));
        v81 = 1;
        v14 = &v78;
        v15 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v41 = &g_4ebcd8;
        v42 = 2;
        v46 = 0;
        v43 = &v14;
        v45 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v60, &v41);
        v45 = 1;
        *((int128_t *)&v41) = *((int128_t *)&v60);
        v43 = *((long long *)&v61);
        v103 = __rust_alloc(32, 8);
        if (!v103)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        goto LABEL_43ca82;
    }
    if (v101 != 1)
    {
        v10 = "extra operand \nOnly one string may be given when deleting without squeezing repeats.";
        v11 = 13;
        if ((v2 ^ 1 | v97) != 1)
        {
            v14 = 1;
            *((int128_t *)&v15) = *((int128_t *)(*((long long *)&v8) + 32));
            v17 = 1;
            if (v101 != 2)
            {
                v78 = &v10;
                v79 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbcc3b62a8a82a011;
                v80 = &v14;
                v81 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v41 = &g_4ebb38;
                v42 = 2;
                v46 = 0;
                v43 = &v78;
                v45 = 2;
                v107 = &v92;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v92, &v41);
            }
            else
            {
                v78 = &v10;
                v79 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbcc3b62a8a82a011;
                v80 = &v14;
                v81 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v41 = &g_4ebb08;
                v42 = 3;
                v46 = 0;
                v43 = &v78;
                v45 = 2;
                v107 = &v91;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v91, &v41);
            }
            *((struct struct_3 **)&v43[0]) = v107->field_10;
            *((uint128_t *)&v41) = v107->field_0;
            v45 = 1;
            v103 = ::0x43c5a0::alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260(32);
        }
        else
        {
            if (v101 <= 2)
                goto LABEL_43cd86;
            v14 = 1;
            *((int128_t *)&v15) = *((int128_t *)(*((long long *)&v8) + 56));
            v17 = 1;
            v78 = &v10;
            v79 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbcc3b62a8a82a011;
            v80 = &v14;
            v81 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v41 = &g_4ebb38;
            v42 = 2;
            v46 = 0;
            v43 = &v78;
            v45 = 2;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v62, &v41);
            v45 = 1;
            *((int128_t *)&v41) = *((int128_t *)&v62);
            v43 = *((long long *)&v63);
            v103 = ::0x43c5a0::alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260(32);
        }
LABEL_43ca82:
        goto LABEL_43ca95;
    }
LABEL_43cd86:
    v106 = *((long long *)&v8);
    v41 = v106[1];
    v42 = v106[2] + v41;
    v43 = 0;
    v24 = &v43;
    _$LT$core..iter..adapters..rev..Rev$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::ha0dd5076867baacd(&v41, 0, &v44, &v43);
    if ((v108 & 1))
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h802d2cafdf254146(&v41, 64, 0);
        if (v41)
        {
LABEL_43d8a6:
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        v109 = v43;
        v109[3] = 134814791032309791228273747205633042720;
        v109[2] = 137483774941343516613594050167442535521;
        v109[1] = 43077634934205028488447984966489366883;
        v109[0] = 153387881842765719645587278602381189495;
        v41 = v42;
        *((uint128_t *[4])&v42[0]) = v109;
        v43 = 64;
        v45 = 0;
        v110 = __rust_alloc(32, 8);
        if (!v110)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v112 = *((int128_t *)&v41);
        v110[1] = *((int128_t *)&v43);
        *((void*)&v110[0]) = v112;
        *((uint128_t *[2])&v10[0]) = v110;
        v11 = &g_4ebb90.field_0;
        uucore::mods::error::set_exit_code::h0565497d88d725e1();
        v14 = uucore::util_name::h359eff083fe53467();
        v15 = v108;
        v78 = &v14;
        v79 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbcc3b62a8a82a011;
        v80 = &v10;
        v81 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha6c4c56cabeafdc6;
        v41 = &g_4ebc00;
        v42 = 3;
        v46 = 0;
        v43 = &v78;
        v45 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v41, v113, v108);
        v114 = v10;
        v115 = v11;
        if (v115->field_0)
            v116(v114);
        if (v115->field_8)
            __rust_dealloc(v114);
    }
    v27 = std::io::stdio::stdin::h7215cc131abb55d8();
    v5 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v27);
    v6 = (char)v108 & 1;
    v28 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hfe68bf3024f208a6(&v14, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v28, v113, v108));
    v117 = *((long long *)&v8);
    v118 = *((long long *)&v9);
    v119 = &v117[v118];
    if (!v118)
    {
        v120 = 0;
    }
    else
    {
        v120 = v117[1];
        v118 = v117[2];
        v117 += 1;
    }
    if (!v120)
        v120 = 1;
    if (v117 != v119)
    {
        v123 = v117[1];
        v119 = v117[2];
    }
    else
    {
        v123 = 0;
    }
    uu_tr::operation::Sequence::solve_set_characters::h3869f4b5f4375ab0(&v41, v120, v121, v124, v127, v4, v0, v1);
    v128 = v41;
    if (v128 == 0x8000000000000000)
    {
        v80 = v45;
        v129 = *((int128_t *)&v42);
        v78 = v129;
        v43 = v80;
        v41 = v129;
        v130 = __rust_alloc(24, 8);
        if (!v130)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v103 = v130;
        v103->field_10 = v43;
        v103->field_0 = (int128_t)v41;
    }
    v131 = *((long long *)&v47);
    v82 = v131;
    v132 = *((int128_t *)&v42);
    v133 = *((int128_t *)&v45);
    v80 = v133;
    v78 = v132;
    v23 = v132;
    v13 = v131;
    v12 = v133;
    if (v2)
    {
        if (v97)
        {
            v79 = v23;
            v78 = v128;
            v43 = v13;
            v41 = v12;
            uu_tr::operation::SqueezeOperation::new::hed292855f237e436(&v70, &v41, v13);
            *((int128_t *)&v34) = *((int128_t *)&v78);
            v36 = v80;
            *((int128_t *)&v37) = *((int128_t *)&v70);
            *((int128_t *)&v38) = *((int128_t *)&v71);
            *((int128_t *)&v39) = *((int128_t *)&v72);
            v40 = *((long long *)&v73);
            uu_tr::operation::translate_input::h15037ec87b155f50(&v5, &v14, &v34);
        }
        else
        {
            v65 = v23;
            v64 = v128;
            uu_tr::operation::translate_input::h1d2a1fd147ac961a(&v5, &v14, &v64);
        }
    }
    if (!v97)
        goto LABEL_0x43d55b;
    else
        goto LABEL_0x43d3ed;
}
