long long uu_shuf::uumain::hda089d9ba9c138bd(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x598], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x590], Other Possible Types: unsigned long
    struct_1 *v2;  // [sp-0x588]
    struct_1 *v3;  // [sp-0x580]
    struct_1 *v4;  // [sp-0x578]
    struct_1 *v5;  // [sp-0x570]
    struct_1 *v6;  // [sp-0x560]
    struct_1 *v7;  // [sp-0x558]
    char v8;  // [sp-0x550]
    char v9;  // [sp-0x54f]
    struct struct_1 **v10;  // [bp-0x548], Other Possible Types: struct_1 *, unsigned long long
    struct_1 *v11;  // [sp-0x540], Other Possible Types: unsigned long long
    struct_1 *v12;  // [bp-0x538]
    void* v13;  // [sp-0x530]
    struct_1 *v14;  // [bp-0x528]
    struct_1 *v15;  // [sp-0x520]
    struct_1 *v16;  // [bp-0x518]
    void* v17;  // [sp-0x510]
    struct struct_1 **v18;  // [bp-0x508], Other Possible Types: struct_1 *, char, unsigned long long, unsigned long
    unsigned long v19;  // [sp-0x500], Other Possible Types: unsigned long long
    struct_1 *v20;  // [bp-0x4f8], Other Possible Types: char, unsigned long long
    char v21;  // [bp-0x4e8]
    char v22;  // [bp-0x4d8]
    char v23;  // [bp-0x4d0]
    char v24;  // [bp-0x4c8]
    char v25;  // [bp-0x4b8]
    unsigned int v26;  // [sp-0x4a8]
    unsigned int v27;  // [sp-0x4a4]
    unsigned long v28;  // [sp-0x4a0], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x498]
    struct_1 *v30;  // [sp-0x490]
    struct_1 *v31;  // [sp-0x480]
    char v32;  // [bp-0x478]
    char v33;  // [bp-0x470]
    struct_1 *v34;  // [bp-0x468], Other Possible Types: unsigned long
    char v35;  // [bp-0x460]
    struct_1 *v36;  // [sp-0x458], Other Possible Types: char *, unsigned long
    unsigned long v37;  // [bp-0x430], Other Possible Types: char
    unsigned long v38;  // [sp-0x420], Other Possible Types: unsigned long long
    unsigned long long v39;  // [sp-0x418]
    struct_1 *v40;  // [sp-0x410]
    struct_1 *v41;  // [sp-0x400]
    unsigned long long v42;  // [sp-0x3f0]
    struct_1 *v43;  // [sp-0x3e8]
    struct_1 *v44;  // [sp-0x3d8]
    unsigned long long v45;  // [sp-0x3d0]
    struct_1 *v46;  // [bp-0x3c8], Other Possible Types: char, unsigned long, unsigned long long
    struct_1 *v47;  // [sp-0x3c0], Other Possible Types: unsigned long long
    struct struct_1 **v48;  // [sp-0x3b8], Other Possible Types: struct struct_2 **, struct_1 *, unsigned long, unsigned long long
    unsigned int v49;  // [bp-0x3b0], Other Possible Types: unsigned long long
    struct_1 *v50;  // [bp-0x3a8], Other Possible Types: void*
    struct_1 *v51;  // [sp-0x398]
    struct_1 *v52;  // [sp-0x388]
    unsigned long long v53;  // [sp-0x378]
    struct_1 *v54;  // [sp-0xf8], Other Possible Types: unsigned long long
    struct_1 *v55;  // [sp-0xf0], Other Possible Types: unsigned long long
    struct_1 *v56;  // [sp-0xe8]
    struct_1 *v57;  // [sp-0xd8]
    unsigned long long v58;  // [sp-0xc8]
    unsigned long long v59;  // [sp-0xc0]
    char v60;  // [bp-0xb8]
    char v61;  // [bp-0xa8]
    char v62;  // [bp-0xa0]
    char v63;  // [bp-0x90]
    struct_1 *v64;  // [sp-0x88]
    struct_1 *v65;  // [sp-0x80]
    struct_1 *v66;  // [sp-0x78]
    struct_1 *v67;  // [sp-0x68]
    unsigned long long v68;  // [sp-0x58]
    unsigned long long v69;  // [sp-0x50]
    char v70;  // [bp-0x48]
    struct struct_1 **v72;  // rbp
    struct_1 *v73;  // r15
    unsigned long long v74;  // r14
    unsigned long long v75;  // r15
    unsigned long long v76;  // r14
    unsigned long long v77;  // r15
    unsigned long long v78[3];  // rax
    struct_1 *v79;  // rax
    unsigned long long v83;  // rdx
    unsigned long long v85;  // r15
    unsigned long long v86;  // r12
    struct_1 *v87;  // xmm0
    struct_1 *v88;  // xmm1
    struct_1 *v89;  // xmm2
    struct_1 *v90;  // xmm0
    struct_1 *v91;  // r12
    unsigned long long v92;  // rax
    struct_1 *v93;  // rax
    unsigned long long v94;  // rax
    unsigned long long v95;  // r14
    unsigned long long v96;  // r15
    struct_1 *v97;  // xmm0
    struct_1 *v98;  // rax
    unsigned long long v102;  // rdx
    unsigned long long v103;  // r14
    unsigned long long v104;  // r15
    struct_1 *v105;  // rax
    unsigned long long v106;  // rax
    struct_1 *v107;  // xmm0
    char v108;  // al
    unsigned long long v109;  // rcx
    unsigned long long v110;  // r14
    unsigned long long v111;  // r15
    unsigned long long v112;  // rax
    char v113;  // al
    unsigned long long v114;  // rax
    char v115;  // cl
    struct_1 *v116;  // xmm0
    struct_1 *v117;  // xmm1
    struct_1 *v118;  // xmm2
    uint128_t *v119;  // rax
    struct_1 *v120;  // xmm0
    struct_1 *v121;  // xmm1
    unsigned int *v123;  // rax
    unsigned long long v124;  // rcx
    struct_1 *v127;  // xmm0
    struct_1 *v128;  // xmm1
    unsigned long long v129;  // rdx
    unsigned long long v130;  // rdx
    struct_1 *v131;  // xmm0
    struct_1 *v132;  // xmm1
    char v133;  // bl
    unsigned long long v134;  // rbx
    struct_1 *v135;  // rax
    char *v136;  // rax
    void* v137;  // rax
    char v138;  // r13b
    struct_1 *v139;  // rdx
    char *v141;  // rax
    void* v142;  // rax
    unsigned long long v143;  // rbx
    struct_1 *v144;  // rax
    struct_1 *v145;  // xmm0
    unsigned long long v146;  // rsi
    unsigned long long v147;  // rsi
    unsigned long long v148;  // rdx
    unsigned int v149;  // eax
    unsigned long long v150;  // rsi
    struct_1 *v151;  // r14
    struct_1 *v152;  // r12
    struct struct_0 **v153;  // rax

    uu_shuf::uu_app::h2455be30c9bfbaa6(&v46);
    v72 = &v18;
    clap_builder::builder::command::Command::try_get_matches_from::hbce83ea8af4b6654(&v18, &v46, a0, a1);
    if (v38 == 0x8000000000000000)
    {
        v73 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v39);
        if (!v73)
        {
            vvar_2603{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v149;
        }
        goto LABEL_43e65e;
    }
    v42 = *((long long *)&v22);
    *((int128_t *)&v41) = *((int128_t *)&v21);
    *((int128_t *)&v40) = *((int128_t *)&v20);
    v38 = v18;
    v39 = v19;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v38, _ZN7uu_shuf7options4ECHO17h8918f694ea4206dbE, g_4f2578))
    {
        v74 = _ZN7uu_shuf7options12FILE_OR_ARGS17h0f91cf8703350fa3E;
        v75 = g_4f25e8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h34c7775fa425107a(&v46, &v38, v74, v75);
        clap_builder::parser::error::MatchesError::unwrap::hc083f6eb45bf3599(&v18, v74, v75, &v46);
        v79 = v18;
        if (!v79)
        {
            v79 = core::ops::function::FnOnce::call_once::h625c73265180bb6d;
            v83 = 0;
        }
        else
        {
            v83 = *((long long *)&v23);
        }
        v64 = v79;
        v65 = &"&";
        *((int128_t *)&v66) = *((int128_t *)&v20);
        *((int128_t *)&v67) = *((int128_t *)&v21);
        v68 = *((long long *)&v22);
        v69 = v83;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h3d5ade88c83dbeae(&v46, &v64);
        v31 = v48;
        *((int128_t *)&v30) = *((int128_t *)&v46);
        v29 = 1;
        goto LABEL_43da19;
    }
    v76 = _ZN7uu_shuf7options11INPUT_RANGE17hd4bd702b7a69d2c9E;
    v77 = g_4f2588;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h78265e4dfede5a78(&v46, &v38, v76, v77);
    v78 = clap_builder::parser::error::MatchesError::unwrap::h13cb457be8793a6f(v76, v77, &v46);
    if (v78)
    {
        uu_shuf::parse_range::hfcd473d7cd6f9341(&v18, v78[1], v78[2]);
        if (!v18)
        {
            v31 = *((long long *)&(&v20)[8]);
            *((int128_t *)&v30) = *((int128_t *)&v19);
            v29 = 2;
            goto LABEL_43da19;
        }
        else
        {
            v48 = *((long long *)&(&v20)[8]);
            *((int128_t *)&v46) = *((int128_t *)&v19);
            v49 = 1;
            v73 = __rust_alloc(32, 8);
            if (!v73)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v90 = *((int128_t *)&v46);
            *((int128_t *)&v73->field_10) = *((int128_t *)&v48);
            v73->field_0 = &v90->field_0;
            v91 = &g_4ef6e0.field_0;
            goto LABEL_43e648;
        }
    }
    v85 = _ZN7uu_shuf7options12FILE_OR_ARGS17h0f91cf8703350fa3E;
    v86 = g_4f25e8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h34c7775fa425107a(&v46, &v38, v85, v86);
    clap_builder::parser::error::MatchesError::unwrap::hc083f6eb45bf3599(&v18, v85, v86, &v46);
    if (!v18)
    {
        v10 = &core::ops::function::FnOnce::call_once::h625c73265180bb6d;
        v11 = &"&";
        v12 = &"&";
        v13 = 0;
        v15 = 0;
        v17 = 0;
    }
    else
    {
        v87 = *((int128_t *)&v18);
        v88 = *((int128_t *)&v20);
        v89 = *((int128_t *)&v21);
        *((int128_t *)&v16) = *((int128_t *)&v22);
        v14 = v89;
        v12 = v88;
        v10 = v87;
    }
    v92 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8f891e7908ec188c(&v10);
    if (!v92)
    {
        v18 = 0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v46, v92);
        v20 = v48;
        *((int128_t *)&v18) = *((int128_t *)&v46);
    }
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hb6e3cec0f193d250(&v46, 1, 0);
    if (v46)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v93 = v48;
    *((char *)&v93->field_0) = 45;
    v46 = v47;
    v47 = v93;
    v48 = 1;
    if (v18 == 0x8000000000000000)
    {
        v4 = v48;
        v2 = v46;
        v3 = v47;
    }
    else
    {
        v4 = v20;
        *((int128_t *)&v2) = *((int128_t *)&v18);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v46);
    }
    v94 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8f891e7908ec188c(&v10);
    if (v94)
    {
        v34 = v94;
        v18 = &v34;
        v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1abd1d062323af54;
        v46 = &g_4ef750;
        v47 = 2;
        v50 = 0;
        v48 = &v18;
        v49 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v62, &v46);
        v49 = 1;
        *((int128_t *)&v46) = *((int128_t *)&v62);
        v48 = *((long long *)&v63);
        v73 = __rust_alloc(32, 8);
        if (!v73)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v97 = *((int128_t *)&v46);
        *((int128_t *)&v73->field_10) = *((int128_t *)&v48);
        v73->field_0 = &v97->field_0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v2);
        v91 = &g_4ef7a8.field_0;
        goto LABEL_43e648;
        goto LABEL_43e648;
    }
    v31 = v4;
    *((int128_t *)&v30) = *((int128_t *)&v2);
    v29 = 0;
LABEL_43da19:
    v95 = _ZN7uu_shuf7options10HEAD_COUNT17h5d20d320abb692cbE;
    v96 = g_4f2598;
    v1 = -111;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h34c7775fa425107a(&v46, &v38, v95, v96);
    clap_builder::parser::error::MatchesError::unwrap::hc083f6eb45bf3599(&v18, v95, v96, &v46);
    v98 = v18;
    if (!v98)
    {
        v98 = core::ops::function::FnOnce::call_once::h625c73265180bb6d;
        v102 = 0;
    }
    else
    {
        v102 = *((long long *)&v23);
    }
    v54 = v98;
    v55 = &"&";
    *((int128_t *)&v56) = *((int128_t *)&v20);
    *((int128_t *)&v57) = *((int128_t *)&v21);
    v58 = *((long long *)&v22);
    v59 = v102;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hde652897e61701e2(&v70, &v54);
    uu_shuf::parse_head_count::h647c8f1798695043(&v34, &v70);
    if (v34 != 0x8000000000000000)
    {
        v48 = v36;
        *((int128_t *)&v46) = *((int128_t *)&v34);
        v49 = 1;
        v105 = __rust_alloc(32, 8);
        if (!v105)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v73 = v105;
        v107 = *((int128_t *)&v46);
        *((int128_t *)&v105->field_10) = *((int128_t *)&v48);
        v105->field_0 = &v107->field_0;
        v91 = &g_4ef6e0.field_0;
        v108 = 0;
        v109 = v29;
        if (!(!v109))
            goto LABEL_43e627;
        goto LABEL_43dc3f;
    }
    v91 = *((long long *)&v35);
    v103 = _ZN7uu_shuf7options6OUTPUT17hc8b98d929b550d08E;
    v104 = g_4f25a8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h78265e4dfede5a78(&v46, &v38, v103, v104);
    v106 = clap_builder::parser::error::MatchesError::unwrap::h13cb457be8793a6f(v103, v104, &v46);
    if (!v106)
    {
        v10 = 0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v46, v106);
        v12 = v48;
        *((int128_t *)&v10) = *((int128_t *)&v46);
    }
    v110 = _ZN7uu_shuf7options13RANDOM_SOURCE17h9431f5d4680b0dd1E;
    v111 = g_4f25b8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h78265e4dfede5a78(&v46, &v38, v110, v111);
    v112 = clap_builder::parser::error::MatchesError::unwrap::h13cb457be8793a6f(v110, v111, &v46);
    if (!v112)
    {
        v18 = 0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v46, v112);
        v20 = v48;
        *((int128_t *)&v18) = *((int128_t *)&v46);
    }
    v113 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v38, _ZN7uu_shuf7options15ZERO_TERMINATED17ha76604760951ab81E, g_4f25d8) ? 10 : 0);
    v7 = v91;
    *((int128_t *)&v2) = *((int128_t *)&v10);
    v4 = v12;
    *((int128_t *)&v5) = *((int128_t *)&v18);
    v6 = v20;
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v38, _ZN7uu_shuf7options6REPEAT17h35b017793b7a4e10E, g_4f25c8);
    v9 = v113;
    if (!v91)
    {
        v72 = &v18;
        if (v2 == 0x8000000000000000)
        {
            v115 = 0;
            v73 = 0;
            goto LABEL_43e5ed;
        }
        else
        {
            v48 = v4;
            *((int128_t *)&v46) = *((int128_t *)&v2);
            std::fs::File::create::hc3b24393283c980d(&v18, v47, v4);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc80dcc614ca2c193(&v10, &v18, &v46);
            v73 = v10;
            if (v73)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v46);
                v115 = 0;
                v91 = v11;
            }
            else
            {
                close((int)v11);
                ::0x43d220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h81072780fb10ad03(&v46);
                v115 = 0;
                v73 = 0;
            }
            v72 = &v18;
            goto LABEL_43e5ed;
        }
    }
    v114 = v29;
    if (v114)
    {
        if ((unsigned int)v114 == 1)
        {
            v12 = v31;
            v10 = v30;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h4ff0cff2afb4366b(&v18, v11, (char *)v11 + 0x18 * v12);
            uu_shuf::find_seps::h7a6d686ac6a0c9b6(&v18, v9);
            v120 = *((int128_t *)&v2);
            v121 = *((int128_t *)&v4);
            *((int128_t *)&v51) = *((int128_t *)&v7);
            *((int128_t *)&v50) = *((int128_t *)&(&v5)[1]);
            v48 = v121;
            v46 = v120;
            v73 = uu_shuf::shuf_exec::h59ea0a0278b8184b(&v18, &v46);
            if (!v73)
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h41ba2f96e8892247(&v18);
                ::0x43d360::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::he523cf10f3f00197(&v10);
                goto LABEL_43eef3;
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha4619c88df2f7dd5(&v18);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb450d65707a366b9(&v10);
                v108 = _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc640957741c429c9(&v10) | -0x100 | 1;
                goto LABEL_43ee8a;
            }
        }
        v44 = v31;
        v43 = v30;
        v116 = *((int128_t *)&v2);
        v117 = *((int128_t *)&v4);
        v118 = *((int128_t *)&(&v5)[1]);
        *((int128_t *)&v16) = *((int128_t *)&v7);
        v14 = v118;
        v12 = v117;
        v10 = v116;
        if (v10 == 0x8000000000000000)
        {
            v0 = -255;
            v123 = __rust_alloc(8, 8);
            if (!v123)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            *((long long *)&v123) = std::io::stdio::stdout::h077da66234850927();
            v124 = &g_4ef818;
            goto LABEL_43e953;
            goto LABEL_43e953;
        }
        v48 = v4;
        *((int128_t *)&v46) = *((int128_t *)&v2);
        std::fs::File::create::hc3b24393283c980d(&v37, v47, v4);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7994456508ea8837(&v32, &v37, &v46);
        v73 = *((long long *)&v32);
        if (v73)
        {
            v91 = *((long long *)&v33);
            v0 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041() | -0x100 | 1;
            v0 = _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v46) | -0x100 | 1;
            goto LABEL_43ee52;
        }
        v123 = __rust_alloc(4, 4);
        if (!v123)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v123) = *((int *)&v33);
        v0 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041() | -0x100 | 1;
        v124 = &g_4ef868;
LABEL_43e953:
        v0 = _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v46) | -0x100 | 1;
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h8cc154a7d08efde7(&v34, 0x2000, v123, v124);
        v13 = v13;
        if (v13 == 0x8000000000000000)
        {
            v0 = -255;
            v28 = rand::rngs::thread::thread_rng::h046695b0de310cd0();
            v26 = 1;
            v0 = v28 | -0x100 | 1;
            goto LABEL_43eaae;
        }
        v48 = v15;
        *((int128_t *)&v46) = *((int128_t *)&(&v12)[1]);
        std::fs::File::open::h95abac2347d6db7b(&v37, v47, v15);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8c984cf933d1412c(&v32, &v37, &v46);
        v73 = *((long long *)&v32);
        if (v73)
        {
            v91 = *((long long *)&v33);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
            v0 = 0;
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v46);
            v0 = 0;
            goto LABEL_43ee45;
        }
        v27 = *((int *)&v33);
        v26 = 0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
        v0 = 0;
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v46);
        v0 = 0;
LABEL_43eaae:
        if (!(char)(&v16)[1])
        {
            _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$uu_shuf..Shufable$GT$::partial_shuffle::hfd08bad3aa3e0423(&v18, &v43, &v26, v16);
            v1 = v13;
            v53 = *((long long *)&v25);
            *((int128_t *)&v52) = *((int128_t *)&v24);
            v131 = *((int128_t *)&v18);
            v132 = *((int128_t *)&v20);
            *((int128_t *)&v51) = *((int128_t *)&v22);
            *((int128_t *)&v50) = *((int128_t *)&v21);
            v48 = v132;
            v46 = v131;
            v133 = *((char *)&(&v16)[1] + 1);
        }
        else
        {
            if ((char)v44 || v43 > (&v43)[1])
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hb6e3cec0f193d250(&v46, 18, 0);
                if (v46)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v144 = v48;
                *((int128_t *)&v144->field_0) = 134835622387851158775910495974787673966;
                v144->field_10 = 29793;
                v49 = 1;
                v46 = v47;
                v47 = v144;
                v48 = 18;
                v135 = __rust_alloc(32, 8);
                if (!v135)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v145 = *((int128_t *)&v46);
                *((int128_t *)&v135->field_10) = *((int128_t *)&v48);
                v135->field_0 = &v145->field_0;
                v139 = &g_4ef6e0.field_0;
                goto LABEL_43ee1f;
                goto LABEL_43ee1f;
            }
            v1 = v13;
            v134 = v16;
            if (!v134)
                goto LABEL_43eec0;
            v138 = *((char *)&(&v16)[1] + 1);
            do
            {
                v46 = _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$uu_shuf..Shufable$GT$::choose::h671f6ac28809e892(&v43, &v26, v130);
                v135 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7aa676a54f973cd3(_$LT$usize$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::hc938e430cdac7e8c(&v46, &v34));
                if (v135)
                {
LABEL_43eddc:
                    v13 = v1;
                    goto LABEL_43ee1f;
                }
                else
                {
                    v37 = v138;
                    v141 = v36;
                    if (v34 - v141 <= 1)
                    {
                        v142 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h51e95a21d24467a5(&v34, &v37, 1);
                    }
                    else
                    {
                        v141[*((long long *)&v35)] = v138;
                        v36 = v141 + 1;
                        v142 = 0;
                    }
                    v135 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h67fc43e248eaef45(v142);
                    if (!(!v135))
                        goto LABEL_43eddc;
                }
            } while ((v143 = v134 - 1, v134 != 1));
        }
        while (true)
        {
            if (!_$LT$uu_shuf..NonrepeatingIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbaf1f7371196dab5(&v46))
            {
                if (!v46)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd4e3b75a4778600b(&v46);
                }
                else
                {
                    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hde14f410ee6dee8d(&v46);
                }
LABEL_43eec0:
                if (!v26)
                    close(v27);
                else
                    _$LT$alloc..rc..Rc$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb7c603bafca57ce1(&v28);
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h533ce77182e49d91(&v34, v146, v129);
                goto LABEL_43eef3;
            }
            v37 = v129;
            v135 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9ebd4fb3c282fa5a(_$LT$usize$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::hc938e430cdac7e8c(&v37, &v34));
            if (v135)
                break;
            v32 = v133;
            v136 = v36;
            if (v34 - v136 <= 1)
            {
                v137 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h51e95a21d24467a5(&v34, &v32, 1);
            }
            else
            {
                v136[*((long long *)&v35)] = v133;
                v36 = v136 + 1;
                v137 = 0;
            }
            v135 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6b2372fc9201b013(v137);
            break;
        }
        v13 = v1;
        if (v46)
        {
            _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hde14f410ee6dee8d(&v46);
        }
        else
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd4e3b75a4778600b(&v46);
        }
LABEL_43ee1f:
        if (!v26)
            close(v27);
        else
            _$LT$alloc..rc..Rc$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb7c603bafca57ce1(&v28);
LABEL_43ee45:
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h533ce77182e49d91(&v34, v147, v148);
LABEL_43ee52:
        if (v13 != 0x8000000000000000 && (char)v0)
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v12);
        }
        v108 = 0;
LABEL_43ee8a:
        v72 = &v18;
        v109 = v29;
        if (!(!v109))
            goto LABEL_43e627;
    }
    else
    {
        v36 = v31;
        v34 = v30;
        uu_shuf::read_input_file::hf54e1e8c3217fb30(&v46, (&v34)[1], v31);
        v91 = v12;
        if (v10 == 0x8000000000000000)
        {
LABEL_43e0b9:
            v45 = v10;
            v0 = v110 | -0x100 | v10 != 0x8000000000000000;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v34);
            if (v45 != 0x8000000000000000)
            {
                v72 = &v18;
                v115 = v0;
                goto LABEL_43e5ed;
            }
            v115 = v0;
            if (v2 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
                v72 = &v18;
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v2);
                v108 = 0;
            }
            else
            {
                v72 = &v18;
LABEL_43e5ed:
                v108 = 0;
                if (!(!v115))
                    goto LABEL_43e616;
            }
            if (v5 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v5);
                v108 = 0;
            }
LABEL_43e616:
            v109 = v29;
            if (v109)
            {
LABEL_43e627:
                if ((unsigned int)v109 == 1 && !v108)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb450d65707a366b9(&v30);
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc640957741c429c9(&v30);
                }
                goto LABEL_43e648;
            }
        }
        else
        {
            v10 = v45;
            v73 = v47;
            v12 = v48;
            v119 = __rust_alloc(16, 8);
            if (!v119)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            *(v119) = *((int128_t *)&v11);
            alloc::slice::hack::into_vec::hd98fa09811368a24(&v18, v119, 1);
            uu_shuf::find_seps::h7a6d686ac6a0c9b6(&v18, v9);
            v127 = *((int128_t *)&v2);
            v128 = *((int128_t *)&v4);
            *((int128_t *)&v51) = *((int128_t *)&v7);
            *((int128_t *)&v50) = *((int128_t *)&(&v5)[1]);
            v48 = v128;
            v46 = v127;
            v73 = uu_shuf::shuf_exec::h59ea0a0278b8184b(&v18, &v46);
            if (!v73)
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h41ba2f96e8892247(&v18);
                ::0x43d220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h81072780fb10ad03(&v10);
                ::0x43d220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h81072780fb10ad03(&v34);
LABEL_43eef3:
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h506a62d162e90b17(&v38);
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h41ba2f96e8892247(&v18);
                ::0x43d220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h81072780fb10ad03(&v10);
                goto LABEL_43e0b9;
            }
            goto LABEL_43ef00;
        }
    }
LABEL_43dc3f:
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v30);
LABEL_43e648:
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h506a62d162e90b17(&v38);
    if (v73)
    {
LABEL_43e65e:
        v2 = v73;
        v3 = v91;
        v18 = &v2;
        v19 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7b30c3580c4a55e8;
        v46 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v47 = 1;
        v50 = 0;
        v48 = v72;
        v49 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v60, &v46);
        *((int128_t *)&v18) = *((int128_t *)&v60);
        v20 = *((long long *)&v61);
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbb9365c58313f2aa(v19, *((long long *)&v61), 1, 0))
        {
            v10 = uucore::util_name::h359eff083fe53467();
            v11 = v129;
            v54 = &v10;
            v55 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1d0b3d7277bd93c4;
            v46 = &g_4ef660;
            v47 = 2;
            v50 = 0;
            v48 = &v54;
            v49 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v46, v150, v129);
            v10 = v48;
            v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v46 = &g_4ef680;
            v47 = 2;
            v50 = 0;
            v48 = &v10;
            v49 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v46, v150, v129);
        }
        if ((char)v3->field_68(v2))
        {
            v10 = uucore::execution_phrase::hded5ccd87df1fcab();
            v11 = v129;
            v54 = &v10;
            v55 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1d0b3d7277bd93c4;
            v46 = &g_4ef6a0;
            v47 = 2;
            v50 = 0;
            v48 = &v54;
            v49 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v46, v150, v129);
        }
        v149 = v3->field_60(v2);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v18);
        v151 = v2;
        v152 = v3;
        if (v152->field_0)
            v153(v151);
        if (v152->padding_8)
        {
            __rust_dealloc(v151);
            return v149;
        }
        return v149;
    }
LABEL_43ef00:
    v149 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v149;
}
