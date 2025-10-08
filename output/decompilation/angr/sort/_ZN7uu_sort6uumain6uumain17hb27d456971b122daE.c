long long uu_sort::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [bp-0x658]
    char *v1;  // [bp-0x658], Other Possible Types: void*, int, char, unsigned long long
    char *v2;  // [bp-0x650]
    void* v3;  // [bp-0x650], Other Possible Types: struct_1 *, unsigned long, unsigned long long
    char v4;  // [bp-0x648], Other Possible Types: unsigned long long, unsigned long
    char v5;  // [bp-0x648], Other Possible Types: unsigned long long
    char v6;  // [bp-0x640]
    int v7;  // [bp-0x638]
    int v8;  // [bp-0x628], Other Possible Types: char
    char v9;  // [bp-0x618]
    char v10;  // [bp-0x608]
    int v11;  // [bp-0x5f8]
    unsigned long long v12;  // [bp-0x5e8]
    void* v13;  // [bp-0x5d8]
    int v14;  // [bp-0x5d0], Other Possible Types: unsigned long long
    void* v15;  // [bp-0x5c8]
    void* v16;  // [bp-0x5c0], Other Possible Types: char *
    unsigned long long v17;  // [bp-0x5b8]
    void* v18;  // [sp-0x5b0]
    char *v19;  // [bp-0x5a8], Other Possible Types: unsigned long long
    char *v20;  // [bp-0x5a0], Other Possible Types: unsigned long long
    char v21;  // [bp-0x598], Other Possible Types: unsigned long, unsigned long long
    unsigned long v22;  // [bp-0x590]
    int v23;  // [bp-0x588]
    unsigned long long v24;  // [bp-0x579]
    char v25;  // [bp-0x571]
    void* v26;  // [bp-0x570], Other Possible Types: unsigned long, unsigned long long
    int v27;  // [bp-0x56f]
    int v28;  // [bp-0x568]
    unsigned long long v29;  // [bp-0x568]
    void* v30;  // [bp-0x560], Other Possible Types: unsigned long
    void* v31;  // [bp-0x558]
    unsigned long long v32;  // [bp-0x550]
    int v33;  // [bp-0x548]
    void* v34;  // [bp-0x540]
    int v35;  // [bp-0x538], Other Possible Types: unsigned long long
    void* v36;  // [bp-0x530]
    unsigned long long v37;  // [bp-0x528]
    char v38;  // [bp-0x520]
    int v39;  // [bp-0x510]
    uint128_t v40;  // [bp-0x507]
    char *v41;  // [bp-0x4f0], Other Possible Types: unsigned long long
    unsigned long long v42;  // [bp-0x4e8]
    unsigned int v43;  // [bp-0x4e0]
    void* v44;  // [bp-0x4dc], Other Possible Types: char
    char v45;  // [bp-0x4db]
    char v46;  // [bp-0x4da]
    char v47;  // [bp-0x4d9]
    char v48;  // [bp-0x4d8]
    char v49;  // [bp-0x4d7]
    char v50;  // [bp-0x4d6]
    char v51;  // [bp-0x4d5]
    char v52;  // [bp-0x4d4], Other Possible Types: unsigned int
    char v53;  // [bp-0x4d3], Other Possible Types: unsigned short
    char v54;  // [bp-0x4d3]
    char v55;  // [bp-0x4d1]
    char v56;  // [bp-0x4d0]
    char v57;  // [bp-0x4c0], Other Possible Types: unsigned short
    char v58;  // [bp-0x4bf]
    int v59;  // [bp-0x4b8], Other Possible Types: char
    unsigned long v60;  // [bp-0x4a8]
    unsigned long long v61;  // [bp-0x4a0]
    unsigned long long v62;  // [bp-0x498]
    unsigned long long v63;  // [bp-0x490]
    unsigned long long v64[3];  // [bp-0x488]
    unsigned long long v65;  // [bp-0x480]
    struct_1 *v66;  // [bp-0x478], Other Possible Types: int, char, unsigned long long
    int v67;  // [bp-0x478]
    void* v68;  // [bp-0x478]
    void* v69;  // [bp-0x478], Other Possible Types: unsigned long long
    int v70;  // [bp-0x470], Other Possible Types: char, unsigned long long
    char *v71;  // [bp-0x470], Other Possible Types: unsigned long long
    char *v72;  // [bp-0x470]
    unsigned long long v73;  // [bp-0x468]
    int v74;  // [bp-0x468], Other Possible Types: char *, unsigned long, unsigned long long
    unsigned int v75;  // [bp-0x460], Other Possible Types: unsigned long long
    int v76;  // [bp-0x458], Other Possible Types: void*
    int v77;  // [bp-0x448]
    int v78;  // [bp-0x438]
    int v79;  // [bp-0x428]
    unsigned long long v80;  // [bp-0x418]
    char v81;  // [bp-0x410]
    int v82;  // [bp-0x1a8]
    int v83;  // [bp-0x1a8]
    int v84;  // [bp-0x1a8]
    unsigned long long v85;  // [bp-0x198]
    int v86;  // [bp-0x168], Other Possible Types: char
    unsigned long long v87;  // [bp-0x158]
    int v88;  // [bp-0x150], Other Possible Types: char
    unsigned long long v89;  // [bp-0x140]
    unsigned long v90;  // [bp-0x138]
    unsigned long long v91;  // [bp-0x130]
    int v92;  // [bp-0x128]
    int v93;  // [bp-0x118]
    unsigned long long v94;  // [bp-0x109]
    char v95;  // [bp-0x101]
    int v96;  // [bp-0x100]
    int v97;  // [bp-0xf0]
    int v98;  // [bp-0xe0]
    unsigned long long v99;  // [bp-0xd0]
    char v100;  // [bp-0xc8]
    char v101;  // [bp-0xb0]
    char v102;  // [bp-0x70]
    char *v105;  // r12
    unsigned long long v106;  // rsi
    unsigned long long v107;  // rax
    unsigned long long v109;  // rdx
    char *v110;  // rdi
    char v111;  // bl
    unsigned long long v112[3];  // rax
    unsigned long long v113[3];  // rax
    unsigned long long v114[3];  // rax
    unsigned long long v115[3];  // rax
    unsigned long long v116[3];  // rax
    unsigned long long v117[3];  // rax
    unsigned long long v118;  // rax
    void* v119;  // r14
    int v120;  // xmm0
    unsigned long long v122[3];  // rax
    unsigned long long v123;  // rax
    unsigned long long v124;  // r15
    unsigned long long v125[3];  // r14
    unsigned long v126;  // rax
    char *v127;  // rax
    unsigned long long v129[3];  // rax
    unsigned long long v130[3];  // r14
    unsigned long long v131;  // r15
    unsigned long long v132;  // r14
    char v133;  // al
    void* v134;  // rcx
    int v135;  // xmm0
    unsigned long long v136[3];  // rax
    int v137;  // xmm0
    unsigned long long v138;  // rsi
    unsigned long long v139;  // r14
    unsigned long long v140;  // r15
    struct_0 *v141;  // rax
    void* v142;  // rsi
    unsigned long long v143;  // rdx
    int v144;  // xmm0
    unsigned short v145;  // [bp-0x103]

    v57 = 2566;
    v44 = 0;
    v52 = 0;
    v31 = 0;
    v32 = 8;
    *((uint128_t *)&v33) = 0;
    v43 = 0x110000;
    v35 = 1;
    v36 = 0;
    v41 = 0x3b9aca00;
    v37 = 0x8000000000000000;
    v42 = 32;
    *((uint128_t *)&v39) = 0;
    v40 = 0;
    uu_sort::uu_app(&v66);
    (char)v0.try_get_matches_from(&v66, a0, a1);
    if (v0 == 0x8000000000000000)
    {
        v66 = v3;
        v66.print().unwrap();
        if ((v66->field_dd & 29) != 12)
            uucore::mods::error::set_exit_code(2);
        core::ptr::drop_in_place<clap_builder::error::Error>(v66);
        core::ptr::drop_in_place<uu_sort::GlobalSettings>(&v31);
        return 0;
    }
    else
    {
        v12 = *((long long *)&v8);
        v11 = v7;
        memcpy(&v10, &v4, 16);
        memcpy(&v9, &v1, 16);
        v44 = v9.get_flag("debugfiles0-fromfileshuman-numeric-sorthuman-numericmonth-sortmonthgeneral-numeric-sortgeneral-numericnumeric-sortnumericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergechec", 5);
        if (!(char)v9.contains_id("files0-fromfileshuman-numeric-sorthuman-numericmonth-sortmonthgeneral-numeric-sortgeneral-numericnumeric-sortnumericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckchec", 11))
        {
            v66.try_get_many(&v9, "fileshuman-numeric-sorthuman-numericmonth-sortmonthgeneral-numeric-sortgeneral-numericnumeric-sortnumericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentign", 5);
            v102.unwrap("fileshuman-numeric-sorthuman-numericmonth-sortmonthgeneral-numeric-sortgeneral-numericnumeric-sortnumericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentign", 5, &v66);
            if (*((long long *)&v102))
            {
                v66.collect(&v102);
                *((int128_t *)&v1) = *((int128_t *)&v72);
                if (v69 == 0x8000000000000000)
                    goto LABEL_4979ad;
                *((int128_t *)&v14) = (int128_t)v1;
                v13 = v69;
            }
            else
            {
LABEL_4979ad:
                v13 = 0;
                v14 = 8;
                v15 = 0;
            }
LABEL_497bef:
            v111 = 1;
            if (!(char)v9.get_flag("human-numeric-sorthuman-numericmonth-sortmonthgeneral-numeric-sortgeneral-numericnumeric-sortnumericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-c", 18))
            {
                v66.try_get_one(&v9, "sort", 4);
                v112 = "sort".unwrap(4, &v66);
                if (!v112 || !(char)v112[1].equal(v112[2], "human-numericmonth-sortmonthgeneral-numeric-sortgeneral-numericnumeric-sortnumericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-", 13))
                {
                    v111 = 3;
                    if (!(char)v9.get_flag("month-sortmonthgeneral-numeric-sortgeneral-numericnumeric-sortnumericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreverse", 10))
                    {
                        v66.try_get_one(&v9, "sort", 4);
                        v113 = "sort".unwrap(4, &v66);
                        if (!v113 || !(char)v113[1].equal(v113[2], "monthgeneral-numeric-sortgeneral-numericnumeric-sortnumericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniq", 5))
                        {
                            v111 = 2;
                            if (!(char)v9.get_flag("general-numeric-sortgeneral-numericnumeric-sortnumericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefie", 20))
                            {
                                v66.try_get_one(&v9, "sort", 4);
                                v114 = "sort".unwrap(4, &v66);
                                if (!v114 || !(char)v114[1].equal(v114[2], "general-numericnumeric-sortnumericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 15))
                                {
                                    if (!(char)v9.get_flag("numeric-sortnumericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 12))
                                    {
                                        v66.try_get_one(&v9, "sort", 4);
                                        v115 = "sort".unwrap(4, &v66);
                                        if (v115 && (char)v115[1].equal(v115[2], "numericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 7))
                                            goto LABEL_497de5;
                                        v111 = 4;
                                        if (!(char)v9.get_flag("version-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 12))
                                        {
                                            v66.try_get_one(&v9, "sort", 4);
                                            v116 = "sort".unwrap(4, &v66);
                                            if (!v116 || !(char)v116[1].equal(v116[2], "versionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 7))
                                            {
                                                if (!(char)v9.get_flag("random-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 11))
                                                {
                                                    v66.try_get_one(&v9, "sort", 4);
                                                    v117 = "sort".unwrap(4, &v66);
                                                    v111 = 6;
                                                    if (!v117 || !(char)v117[1].equal(v117[2], "randomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 6))
                                                        goto LABEL_497f1e;
                                                }
                                                uu_sort::get_rand_string(&v66);
                                                memcpy(&v56, &v69, 16);
                                                v55 = 1;
                                                v111 = 5;
                                            }
                                        }
                                    }
                                    else
                                    {
LABEL_497de5:
                                    }
                                }
                            }
                        }
                    }
                }
            }
LABEL_497f1e:
            v57 = v111;
            v47 = v9.get_flag("dictionary-order[short aliases: ", 16);
            v48 = v9.get_flag("ignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 18);
            if ((char)v9.contains_id("parallel' existsDeadlock", 8))
            {
                v66.try_get_one(&v9, "parallel' existsDeadlock", 8);
                v118 = "parallel' existsDeadlock".unwrap(8, &v66);
                if (v118)
                {
                    v66.clone(v118);
                    v119 = v69;
                    *((int128_t *)&v1) = *((int128_t *)&v72);
                    if (v69 == 0x8000000000000000)
                        goto LABEL_497ff0;
                    v120 = (int128_t)v1;
                }
                else
                {
LABEL_497ff0:
                    v66.to_vec("0invalid --batch-size argument ''\n", 1);
                    v119 = v69;
                    v120 = *((int128_t *)&v72);
                }
                v82 = v120;
                core::ptr::drop_in_place<alloc::string::String>(&(char)v33);
                v34 = v119;
                v35 = v82;
                std::env::set_var(&v34);
            }
            v66.try_get_one(&v9, "buffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 11);
            v71 = 0x3b9aca00;
            v68 = 0;
            (char)v0.map_or("buffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0".unwrap(11, &v66), &v68);
            v105 = v0;
            if (v0)
            {
LABEL_498da9:
                v110 = &v13;
LABEL_498db1:
                core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v110);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
                core::ptr::drop_in_place<uu_sort::GlobalSettings>(&v31);
                return v105;
            }
            v41 = v2;
            v68.try_get_one(&v9, "temporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 19);
            v122 = "temporary-directorybatch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0".unwrap(19, &v68);
            if (v122)
            {
                v68.to_vec(v122[1], v122[2]);
                *((int128_t *)&v1) = *((int128_t *)&v71);
                if (v68 == 0x8000000000000000)
                    goto LABEL_498146;
                *((int128_t *)&v70) = (int128_t)v1;
            }
            else
            {
LABEL_498146:
                std::env::temp_dir(&v68);
            }
            v82.new(&v68);
            v68.try_get_one(&v9, "compress-program", 16);
            v123 = "compress-program".unwrap(16, &v68);
            v124 = 0x8000000000000000;
            if (v123)
            {
                v68.clone(v123);
                v124 = v68;
                *((int128_t *)&v1) = *((int128_t *)&v71);
            }
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v37);
            v37 = v124;
            memcpy(&v38, &v1, 16);
            v68.try_get_one(&v9, "batch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 10);
            v125 = "batch-sizezero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0".unwrap(10, &v68);
            if (v125)
            {
                v64[0] = v125;
                ::0x494050::core::num::<impl usize>::from_ascii_radix(&(char)v26, v125[1], v125[2]);
                if ((char)v26 == 1)
                {
                    if ((char)v27 == 2)
                    {
                        v1 = uucore::util_name();
                        v3 = v109;
                        v19 = &v1;
                        v20 = <&T as core::fmt::Display>::fmt;
                        v66 = &g_58a438;
                        v70 = 2;
                        v76 = 0;
                        v74 = &v19;
                        v75 = 1;
                        std::io::stdio::_eprint(&v66);
                        v1 = 0;
                        v3 = v125[1];
                        v4 = v125[2];
                        v6 = 1;
                        v19 = &v1;
                        v20 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v66 = &g_58a4d0;
                        v70 = 2;
                        v76 = 0;
                        v74 = &v19;
                        v75 = 1;
                        std::io::stdio::_eprint(&v66);
                        uu_sort::get_rlimit(&v19);
                        v105 = v19;
                        if (!v19)
                        {
                            v65 = <os_display::Quoted as core::fmt::Display>::fmt;
                            v16 = &v65;
                            v17 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                            v66 = &g_58a4f0;
                            v70 = 1;
                            v76 = 0;
                            v74 = &v16;
                            v75 = 1;
                            v1.map_or_else(&v66);
                            memcpy(&v59, &v1, 16);
                            v126 = v4;
                            goto LABEL_49860d;
                        }
                    }
                    else
                    {
                        v1 = 0;
                        v3 = v125[1];
                        v4 = v125[2];
                        v6 = 1;
                        v16 = &v1;
                        v17 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v66 = &g_58a500;
                        v70 = 1;
                        v76 = 0;
                        v74 = &v16;
                        v75 = 1;
                        v19.map_or_else(&v66);
                        memcpy(&v59, &v19, 16);
                        v126 = v21;
LABEL_49860d:
                        v60 = v126;
                        v75 = 2;
                        v67 = v59;
                        v74 = v60;
                        v127 = (unsigned long long)v67.new();
                    }
                }
                else
                {
                    if (v29 < 2)
                    {
                        v1 = uucore::util_name();
                        v3 = v109;
                        v19 = &v1;
                        v20 = <&T as core::fmt::Display>::fmt;
                        v66 = &g_58a438;
                        v70 = 2;
                        v76 = 0;
                        v74 = &v19;
                        v75 = 1;
                        std::io::stdio::_eprint(&v66);
                        v1 = &v64;
                        v3 = <&T as core::fmt::Display>::fmt;
                        *((unsigned long long **)&v67) = &g_58a4b0;
                        v70 = 2;
                        v76 = 0;
                        v74 = &v1;
                        v75 = 1;
                        std::io::stdio::_eprint(&(unsigned long long)v67);
                        v1.to_vec("minimum --batch-size argument is '2'--batch-size argument  too large\nmaximum --batch-size argument with current rlimit is invalid --batch-size argument ", 36);
                        v74 = v5;
                        *((int128_t *)&v67) = *((int128_t *)&v1);
                        v75 = 2;
                        v127 = (unsigned long long)v67.new();
                    }
                    else
                    {
                        v42 = v29;
                        goto LABEL_49865a;
                    }
                }
            }
            else
            {
LABEL_49865a:
                *((int *)&v58) = ((char)v9.get_flag("zero-terminatedmergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 15) ? 0 : 10);
                v49 = v9.get_flag("mergecheckcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 5);
                v53 = v9.contains_id("checkcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 5);
                if (!(char)v9.get_flag("check-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 12))
                {
                    v68.try_get_one(&v9, "checkcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 5);
                    v129 = "checkcheck-silentignore-caseignore-leading-blanksreversestableuniquefield-separator\\0".unwrap(5, &v68);
                    if (!v129 || !(char)v129[1].equal(v129[2], "silentOpenFailederrorParseKeyErrorkeymsgReadFailedOpenTmpFileFailedCompressProgExecutionFailed", 6) && !(char)v129[1].equal(v129[2], "quietextra operand  not allowed with -cseparator must be exactly one character long: ", 5))
                        goto LABEL_49875f;
                }
                v53 = 257;
LABEL_49875f:
                v46 = v9.get_flag("ignore-caseignore-leading-blanksreversestableuniquefield-separator\\0", 11);
                v45 = v9.get_flag("ignore-leading-blanksreversestableuniquefield-separator\\0", 21);
                v50 = v9.get_flag("reversestableuniquefield-separator\\0", 7);
                v51 = v9.get_flag("stableuniquefield-separator\\0", 6);
                v52 = v9.get_flag("uniquefield-separator\\0", 6);
                if (v15)
                {
                    if (v15 == 1 || !v54)
                        goto LABEL_498926;
                    v1 = 1;
                    v3 = *((long long *)(v14 + 32));
                    v4 = *((long long *)(v14 + 40));
                    v6 = 1;
                    v19 = &v1;
                    v20 = <os_display::Quoted as core::fmt::Display>::fmt;
                    *((unsigned long long **)&v67) = &g_58a510;
                    v70 = 2;
                    v76 = 0;
                    v74 = &v19;
                    v75 = 1;
                    v86.map_or_else(&(unsigned long long)v67);
                    v75 = 2;
                    v67 = v86;
                    v74 = v87;
                    v127 = (unsigned long long)v67.new();
                }
                else
                {
                    v100.to_vec("-", 1);
                    v13.push(&v100, &g_58a5c8);
LABEL_498926:
                    v68.try_get_one(&v9);
                    v130 = v68.unwrap();
                    if (v130)
                    {
                        core::str::converts::from_utf8(&v68, v130[1], v130[2]);
                        if ((int)v68 == 1)
                        {
                            v127 = uu_sort::uumain::uumain::{{closure}}(v130[1], v130[2]);
                        }
                        else
                        {
                            v131 = v71;
                            v132 = v73;
                            v133 = v131.equal(v132, "\\0", 2);
                            v134 = (!v133 ? v131 : &g_427af3);
                            if ((v132 == 1 | v133) == 1)
                            {
                                v68 = v134;
                                v71 = v134 + 1;
                                if (!((char)core::str::validations::next_code_point(&v68) & 1) || (unsigned int)v109 == 0x110000)
                                    core::option::unwrap_failed(&g_58a5e0); /* do not return */
                                v43 = v109;
                                goto LABEL_498a04;
                            }
                            else
                            {
                                v1 = 0;
                                v3 = v134;
                                v4 = v132;
                                v6 = 1;
                                v19 = &v1;
                                v20 = <os_display::Quoted as core::fmt::Display>::fmt;
                                *((unsigned long long **)&v67) = &g_58a530;
                                v70 = 1;
                                v76 = 0;
                                v74 = &v19;
                                v75 = 1;
                                v88.map_or_else(&(unsigned long long)v67);
                                v75 = 2;
                                v67 = v88;
                                v74 = v89;
                                v127 = (unsigned long long)v67.new();
                            }
                        }
                    }
                    else
                    {
LABEL_498a04:
                        v68.try_get_many(&v9);
                        (char)v0.unwrap(&v68);
                        if (v0)
                        {
                            v135 = *((int128_t *)&v0);
                            v77 = v8;
                            v76 = v7;
                            *((int128_t *)&v74) = *((int128_t *)&v5);
                            v66 = v135;
                            while (true)
                            {
                                v136 = v68.next();
                                if (!v136)
                                    break;
                                v19.parse(v136[1], v136[2], &v31);
                                if (v25 != 2)
                                {
                                    v94 = v24;
                                    v137 = *((int128_t *)&v21);
                                    *((int128_t *)&v93) = (int128_t)v23;
                                    v92 = v137;
                                    v91 = v20;
                                    v95 = v25;
                                    if ((char)v145 == 5 && !v55)
                                    {
                                        uu_sort::get_rand_string(&v19);
                                        memcpy(&v56, &v19, 16);
                                        v55 = 1;
                                    }
                                    v31.push(&v90, &g_58a5f8);
                                }
                                else
                                {
                                    goto LABEL_498ccc;
                                }
                            }
                        }
                        v5 = v5;
                        if (!(char)v9.contains_id("keymsgReadFailedOpenTmpFileFailedCompressProgExecutionFailed", 3))
                        {
                            v19 = 1;
                            v20 = 1;
                            v21 = *((int *)&v45);
                            v5 = 2;
                            v68.new(&v19, &(char)v0, *((int *)&v57) * 0x10000000000 | v21 | v50 * 0x100000000);
                            (char)v0.unwrap(&v68);
                            v31.push(&(char)v0, &g_58a628);
                            v5 = v4;
                        }
                        v139 = v14 + v15 * 24;
                        while (true)
                        {
                            v140 = v138 + 24;
                            if (v138 == v139)
                            {
                                v140 = v138;
                                if (v138 == v139)
                                    goto LABEL_498c7c;
                            }
                            else if (v138 == v139)
                            {
LABEL_498c7c:
                                v68.try_get_one(&v9, "outputCould not parse string from zero terminated input./home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 6);
                                v141 = "outputCould not parse string from zero terminated input./home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ".unwrap(6, &v68);
                                if (v141)
                                {
                                    v142 = v141->field_8;
                                    v143 = v141->field_10;
                                }
                                else
                                {
                                    v142 = 0;
                                }
                                (char)v0.new(v142, v143);
                                v105 = v2;
                                if (v0 != 9223372036854775809)
                                {
                                    v19 = v0;
                                    v20 = v105;
                                    v21 = v5;
                                    v22 = (&v4)[1];
                                    v31.init_precomputed();
                                    v144 = *((int128_t *)&v19);
                                    *((int128_t *)&v74) = *((int128_t *)&v21);
                                    v66 = v144;
                                    v105 = uu_sort::exec(v14, v15, &v31, &v68, &v82);
                                    v82.wait_if_signal();
                                    core::ptr::drop_in_place<uu_sort::tmp_dir::TmpDirWrapper>(&v82);
                                    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v13);
                                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
                                    core::ptr::drop_in_place<uu_sort::GlobalSettings>(&v31);
                                    return v105;
                                }
                                goto LABEL_498d9c;
                            }
                            uu_sort::open(&v68, v138);
                            v105 = v71;
                            if (((char)v68 & 1))
                                break;
                            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v71, v73);
                            v138 = v140;
                        }
LABEL_498ccc:
                        goto LABEL_498d9c;
                    }
                }
            }
            v105 = v127;
LABEL_498d9c:
            core::ptr::drop_in_place<uu_sort::tmp_dir::TmpDirWrapper>(&v82);
            goto LABEL_498da9;
        }
        v66.try_get_many(&v9, "files0-fromfileshuman-numeric-sorthuman-numericmonth-sortmonthgeneral-numeric-sortgeneral-numericnumeric-sortnumericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckchec", 11);
        v101.unwrap("files0-fromfileshuman-numeric-sorthuman-numericmonth-sortmonthgeneral-numeric-sortgeneral-numericnumeric-sortnumericversion-sortversionrandom-sortrandomignore-nonprintingRAYON_NUM_THREADSbuffer-sizetemporary-directorybatch-sizezero-terminatedmergecheckchec", 11, &v66);
        if (*((long long *)&v101))
        {
            v66.collect(&v101);
            *((int128_t *)&v1) = *((int128_t *)&v70);
            if (v69 == 0x8000000000000000)
                goto LABEL_49789d;
            *((int128_t *)&v28) = (int128_t)v1;
            v26 = v69;
            v106 = v29;
            v16 = 0;
            v17 = 8;
            v18 = 0;
            if (!v30)
                goto LABEL_4978e5;
            v61 = v106 + v30 * 24;
            v107 = v106 + 24;
            v62 = 9223372036854775809;
        }
        else
        {
LABEL_49789d:
            v26 = 0;
            v29 = 8;
            v30 = 0;
            v16 = 0;
            v17 = 8;
            v18 = 0;
            goto LABEL_4978e5;
        }
        while (true)
        {
            v63 = v107;
            uu_sort::open(&v66, v106);
            v105 = v72;
            if ((int)v69 == 1)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v16);
                v110 = &(char)v26;
                goto LABEL_498db1;
            }
            v96.with_capacity(v72, v73);
            v80 = v99;
            v79 = v98;
            v78 = v97;
            v77 = v96;
            v69 = 9223372036854775809;
            v75 = v69;
            v81 = 0;
            v83 = v82;
            while (true)
            {
                v82 = v83;
                v19.next(&v69);
                if (v19 == 0x8000000000000000)
                    break;
                core::str::converts::from_utf8(&(char)v0, v20, v21);
                (char)v0.to_vec((char)v0.expect(), v109);
                v85 = v5;
                memcpy(&v82, &v1, 16);
                v16.push(&v82, &g_58a658);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v19, v20);
                v83 = v84;
            }
            core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<std::io::Split<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>>>>(&v69);
            v106 = v63;
            v107 = v106 + 24;
            if (v106 == v61)
            {
                v107 = v106;
                goto LABEL_4978e5;
            }
            else if (v106 == v61)
            {
LABEL_4978e5:
                v15 = 0;
                v13 = 0;
                v14 = 8;
                core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&(char)v26);
                goto LABEL_497bef;
            }
        }
    }
}
