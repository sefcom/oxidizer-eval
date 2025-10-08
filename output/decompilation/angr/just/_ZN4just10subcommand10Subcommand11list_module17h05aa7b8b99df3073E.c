long long just::subcommand::Subcommand::list_module(struct_4 *a0, unsigned long long a1[90], unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x348]
    int v1;  // [bp-0x348]
    char v2;  // [bp-0x32a]
    char v3;  // [bp-0x329]
    void* v4;  // [bp-0x328], Other Possible Types: unsigned long long
    struct_6 *v5;  // [sp-0x320], Other Possible Types: void*, unsigned long long
    char *v6;  // [bp-0x318], Other Possible Types: unsigned long long, unsigned long
    int v7;  // [bp-0x310], Other Possible Types: unsigned long long, unsigned long
    void* v8;  // [sp-0x308], Other Possible Types: unsigned long long
    void* v9;  // [bp-0x300]
    char *v10;  // [bp-0x2f8], Other Possible Types: unsigned long
    unsigned long long v11;  // [bp-0x2f0], Other Possible Types: unsigned long
    void* v12;  // [bp-0x2e8], Other Possible Types: unsigned short, unsigned long
    void* v13;  // [bp-0x2e0], Other Possible Types: char [8], unsigned int
    unsigned int v14;  // [bp-0x2e0]
    unsigned long long v15[90];  // [bp-0x2d8], Other Possible Types: unsigned long long
    unsigned long v16;  // [bp-0x2c8], Other Possible Types: unsigned long long
    int v17;  // [sp-0x2c8]
    unsigned long long v18;  // [bp-0x2c0]
    int v19;  // [bp-0x2b8], Other Possible Types: void*, char *
    int v20;  // [bp-0x2b7]
    unsigned long long v21;  // [bp-0x2b0], Other Possible Types: unsigned long
    char v22;  // [bp-0x2b0]
    unsigned long long v23;  // [bp-0x2b0]
    unsigned int v24;  // [bp-0x2af], Other Possible Types: unsigned long long
    unsigned int v25;  // [bp-0x2ac]
    void* v26;  // [bp-0x2a8], Other Possible Types: char *, unsigned int, unsigned short
    char v27;  // [bp-0x2a7]
    unsigned int v28;  // [bp-0x2a4]
    unsigned long long v29;  // [bp-0x2a0]
    char *v30;  // [bp-0x288], Other Possible Types: unsigned long, unsigned long long
    int v31;  // [bp-0x288], Other Possible Types: struct_5 *
    int v32;  // [bp-0x280], Other Possible Types: struct_6 *, unsigned long long
    unsigned long long v33;  // [bp-0x280]
    void* v34;  // [bp-0x278], Other Possible Types: char *, struct_6 *, unsigned long
    void* v35;  // [bp-0x270]
    unsigned int v36;  // [bp-0x268]
    unsigned int v37;  // [bp-0x264]
    unsigned int v38;  // [bp-0x25c]
    int v39;  // [bp-0x258], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0x258]
    unsigned long long v41;  // [bp-0x250]
    char *v42;  // [bp-0x248]
    unsigned long long v43;  // [bp-0x240]
    void* v44;  // [bp-0x238]
    unsigned long long v45;  // [bp-0x228]
    void* v46;  // [bp-0x220], Other Possible Types: char *, unsigned long long [2], unsigned long long
    unsigned long long v47;  // [bp-0x218]
    void* v48;  // [bp-0x210], Other Possible Types: unsigned long long
    void* v49;  // [bp-0x208]
    unsigned int v50;  // [bp-0x200]
    unsigned int v51;  // [bp-0x1fc]
    int v52;  // [bp-0x1f8], Other Possible Types: void*
    unsigned long long v53;  // [bp-0x1f0]
    void* v54;  // [bp-0x1e8], Other Possible Types: char *
    unsigned long long v55;  // [bp-0x1d8]
    unsigned long v56;  // [bp-0x1d0], Other Possible Types: unsigned long long
    int v57;  // [bp-0x1c8]
    struct_6 *v58;  // [bp-0x1b8]
    int v59;  // [bp-0x1a8]
    unsigned long long v60;  // [bp-0x1a0]
    void* v61;  // [bp-0x198]
    char v62;  // [bp-0x188]
    char *v63;  // [bp-0x178]
    int v64;  // [bp-0x168]
    unsigned long long v65;  // [bp-0x160]
    void* v66;  // [bp-0x158]
    int v67;  // [bp-0x148]
    unsigned long long v68;  // [bp-0x140]
    void* v69;  // [bp-0x138]
    int v70;  // [bp-0x128]
    unsigned long long v71;  // [bp-0x118]
    unsigned long v72;  // [bp-0x108]
    unsigned long long v73;  // [bp-0x100]
    char v74;  // [bp-0xf8]
    unsigned long long *v75;  // [bp-0xf0]
    unsigned long long v76;  // [bp-0xe8]
    void* v77;  // [bp-0xe0]
    void* v78;  // [bp-0xd0]
    void* v79;  // [bp-0xc0]
    int v80;  // [bp-0xb8]
    unsigned long long v81;  // [bp-0xa8]
    char v82;  // [bp-0xa0]
    unsigned long long v83;  // [bp-0xa0]
    char v84;  // [bp-0x98]
    int v85;  // [bp-0x98]
    unsigned long long v86;  // [bp-0x88]
    unsigned long long v87;  // [bp-0x80]
    struct_6 *v88;  // [bp-0x78]
    char v89;  // [bp-0x70]
    void* v90;  // [bp-0x50]
    int v91;  // [bp-0x48]
    char v92;  // [bp-0x38]
    unsigned long long v94[90];  // 4096
    unsigned long v95;  // rax
    unsigned long v96;  // rcx
    unsigned long v97;  // rax
    struct_7 *v99;  // r13
    struct_6 *v101;  // rdx
    unsigned long long v102;  // rax
    unsigned long v105;  // rax
    unsigned long v106;  // rcx
    unsigned long v107;  // rax
    char *v109;  // rbx
    unsigned long long v110[2];  // r14
    struct_0 *v111;  // rax
    unsigned long long v112;  // rdx
    void* v113;  // rcx
    unsigned long long v114[2];  // rax
    unsigned long v116;  // rax
    unsigned long v117;  // rcx
    unsigned long v118;  // rax
    unsigned long long v120[2];  // rax
    unsigned long v121;  // r13
    unsigned long v122;  // rbp
    char *v124;  // rcx
    unsigned long long v125;  // rdx
    unsigned long long v126;  // rsi
    unsigned long long v128[30];  // rax
    unsigned long long v129[30];  // rbx
    unsigned long long v132[3];  // rax
    unsigned long long v133[3];  // rbp
    unsigned long v134;  // rsi
    unsigned long long v135;  // r15
    unsigned long v136;  // r14
    unsigned long v139;  // r12
    char *v140;  // r15
    char v141;  // bl
    unsigned int v142;  // r14d
    unsigned int v143;  // ecx
    struct_1 *v144;  // rax
    char v145[8];  // rdx
    unsigned long v146;  // rax
    unsigned long v147;  // r14
    struct_3 *v149;  // rbx
    unsigned long long v150;  // rdx
    void* v151;  // rcx
    unsigned long long v152;  // rax
    struct_6 *v153;  // r13
    struct_6 *v154;  // rdx
    struct_6 *v155;  // rdx
    struct_6 *v156;  // rbx
    unsigned long long v157;  // rax
    unsigned long long v158;  // rax
    unsigned int v159;  // ecx
    unsigned int v160;  // eax
    unsigned int v161;  // ecx
    unsigned int v162;  // eax
    unsigned long v163;  // rax
    struct_9 *v164;  // r15
    unsigned long v165;  // r13
    unsigned long long v166;  // rbx
    struct_8 *v167;  // rax
    unsigned long long v168;  // r9
    unsigned long long v169[3];  // rax
    unsigned long long v170;  // rax
    struct_6 *v171;  // r13
    unsigned long long v172;  // rbx
    unsigned long long v173;  // rax
    struct_9 *v174;  // rsi
    void* v175;  // rcx
    unsigned long v176;  // r8
    void* v177;  // [bp-0x328], Other Possible Types: unsigned long long
    int v178;  // [bp-0x317]
    unsigned long long v179;  // [bp-0x310]
    unsigned long long v180;  // [bp-0x1c8]
    unsigned long v181;  // [bp-0x1c0]

    v15[0] = a1;
    v56 = a2;
    if (a0->field_19e)
    {
        v52 = 0;
        v54 = 0;
        v13 = 0;
        v94 = a1;
    }
    else
    {
        v40 = 0;
        v42 = 0;
        v95 = a1[77];
        v96 = a1[78];
        v97 = v95;
        if (v97)
            v97 = v15[79];
        v4 = v95;
        v5 = 0;
        v6 = v95;
        v7 = v96;
        v8 = v4;
        v9 = 0;
        v10 = v95;
        v11 = v7;
        v12 = v97;
        while (true)
        {
            v99 = v4.try_fold();
            if (!v99)
                break;
            v16.entry(&v40, v99->field_18 + 160.lexeme(), v101);
            v102 = v16.or_default();
            v102.push(v99 + 1.lexeme(), a2, &g_8312f0);
        }
        *((int128_t *)&v52) = *((int128_t *)&v40);
        v54 = v42;
        v13 = v52;
        v45 = v53;
        v94[0] = v15;
    }
    v77 = 0;
    v78 = 0;
    v105 = v94[87];
    v106 = v94[88];
    v107 = v105;
    if (v107)
        v107 = v15[89];
    v4 = v105;
    v5 = 0;
    v6 = v105;
    v7 = v106;
    v8 = v4;
    v9 = 0;
    v10 = v105;
    v11 = v7;
    v12 = v107;
    v109 = &v4;
    while (true)
    {
        v110 = v109.next();
        if (!v110)
            break;
        if (!v101->field_0->field_10c && !v101->field_0->padding_a8[64].contains(15))
        {
            v111 = v13.get(v45, v110[0], v110[1]);
            if (v111)
            {
                v112 = v111->field_8;
                v113 = v111->field_10;
            }
            else
            {
                v112 = 8;
                v113 = 0;
            }
            v40.chain(v110, v112, v113);
            if (core::iter::adapters::chain::and_then_or_clear(&v40).or_else(&v42))
            {
                do
                {
                    v30 = v114[0];
                    v33 = v114[1];
                    v34 = &v101->field_0->padding_0[16];
                    v16 = &v30;
                    v18 = &g_831320;
                    v22 = 0;
                    v19 = 0;
                    v24 = 42949672970;
                    v27 = 2;
                    v46.spec_to_string(&v16);
                    v77.insert(v30, v33, v47.rfold(v48 + v47));
                    core::ptr::drop_in_place<alloc::string::String>(&v46);
                    v114 = core::iter::adapters::chain::and_then_or_clear(&v40).or_else(&v42);
                } while (v114);
            }
            core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(0, 8);
            v109 = &v4;
        }
    }
    v2 = a0->field_19c;
    if (!a0->field_19c)
    {
        v116 = v15[84];
        v117 = v15[85];
        v118 = v116;
        if (v118)
            v118 = v15[86];
        v4 = v116;
        v5 = 0;
        v6 = v116;
        v7 = v117;
        v8 = v4;
        v9 = 0;
        v10 = v116;
        v11 = v7;
        v12 = v118;
        while (true)
        {
            v120 = v4.next();
            if (!v120)
                break;
            v46[0] = v120;
            v121 = v120[0];
            v122 = v120[1];
            v30 = &v46;
            v33 = <&T as core::fmt::Display>::fmt;
            v16 = &g_831210;
            v18 = 2;
            v26 = 0;
            v19 = &v30;
            v23 = 1;
            v40.map_or_else(0, a2, &v16);
            *((int128_t *)&v17) = *((int128_t *)&v40);
            v19 = v42;
            v77.insert(v121, v122, v18.rfold(&v42[v18]));
            core::ptr::drop_in_place<alloc::string::String>(&v16);
        }
    }
    v61 = 0;
    *((int128_t *)&v59) = *((int128_t *)&v77);
    v124 = (long long)v59;
    v125 = v60;
    v126 = v124;
    v177 = v126;
    v5 = 0;
    v6 = v124;
    v179 = v125;
    v8 = v126;
    v9 = 0;
    v10 = v124;
    v11 = v125;
    v12 = 0;
    *((int *)&v45) = (((char)v177.reduce() & 1) ? v101 : 0);
    v72 = v56 + 1;
    alloc::slice::<impl [T]>::repeat(&v177, a0->field_50, a0->field_58, v56 + 1);
    v63 = v6;
    memcpy(&v62, &v177, 16);
    if (!v56)
    {
        v16 = &a0->padding_0[48];
        v18 = <alloc::string::String as core::fmt::Display>::fmt;
        v177 = &g_465db0;
        v5 = 1;
        v8 = 0;
        v6 = &v16;
        v179 = 1;
        std::io::stdio::_print(&v177);
    }
    v46 = 0;
    v48 = 0;
    v13 = a0->field_1a3;
    v177.public_recipes(v15, a0->field_1a3);
    v40.into_iter(&v177);
    v128 = v40.next();
    if (v128)
    {
        v129 = v128;
        do
        {
            v80.groups(v129);
            if (v81)
            {
                v177.into_iter(&v80);
                while (true)
                {
                    v16.next(&v177);
                    if (v16 == 0x8000000000000000)
                        break;
                    *((int128_t *)&v32) = *((int128_t *)&v18);
                    v30 = v16;
                    v16.entry(&v46, &v30);
                    v16.or_default().push(v129, &g_831388);
                }
                core::ptr::drop_in_place<alloc::collections::btree::set::IntoIter<alloc::string::String>>(&v177);
            }
            else
            {
                v16 = 0x8000000000000000;
                v177.entry(&v46, &v16);
                v177.or_default().push(v129, &g_831370);
                core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<alloc::string::String>>(&v80);
            }
            v129 = v40.next();
        } while (v129);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&just::binding::Binding<just::expression::Expression>>>(&v40);
    *((int128_t *)&v64) = *((int128_t *)&v46);
    v66 = 0;
    v30 = 0;
    v34 = 0;
    v177.modules(v15, v14);
    v16.into_iter(&v177);
    v132 = v16.next();
    if (v132)
    {
        v133 = v132;
        do
        {
            if (v133[2])
            {
                v134 = v133[1];
                v135 = v134 + v133[2] * 24;
                while (true)
                {
                    v136 = v134 + 24;
                    if (v134 == v135)
                    {
                        v136 = v134;
                        if (v134 == v135)
                            break;
                    }
                    else if (v134 == v135)
                    {
                        break;
                    }
                    v177.clone(v134);
                    v42 = v6;
                    *((int128_t *)&v39) = *((int128_t *)&v177);
                    v177.entry(&v30, &v40);
                    v177.or_default().push(v133, &g_831358);
                    v134 = v136;
                }
            }
            else
            {
                v40 = 0x8000000000000000;
                v177.entry(&v30, &v40);
                v177.or_default().push(v133, &g_831340);
            }
            v133 = v16.next();
        } while (v133);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&just::binding::Binding<just::expression::Expression>>>(&v16);
    *((int128_t *)&v67) = *((int128_t *)&v30);
    v69 = 0;
    v16.public_groups(v15, v14);
    v177.into_iter(&v16);
    v74.collect(&v177);
    if ((long long)v64.get(v65, &g_49e600) || (long long)v67.get(v68, &g_49e600))
    {
        v177 = 0x8000000000000000;
        v74.insert(&v177);
    }
    v55 = v76;
    if (v76 == 1)
    {
        v38 = *(v75).eq();
        v55 = (char)v38 ^ 1;
    }
    else
    {
        v38 = 0;
    }
    v89.into_iter(&v74);
    v90 = 0;
    v82.next(&v89);
    v15 = 9223372036854775809;
    if (*((long long *)&v84) != 9223372036854775809)
    {
        v139 = &a0->padding_60[292];
        v3 = a0->field_1a6;
        v55 = -(v55);
        v140 = &v177;
        do
        {
            v71 = v86;
            v70 = v85;
            if (v83)
            {
                v177 = &g_82dbf8;
                v5 = 1;
                v6 = 8;
                *((uint128_t *)&v7) = 0;
                std::io::stdio::_print(v140);
            }
            if (!(long long)v70 == 0x8000000000000000 && !(char)v38)
            {
                v46 = &v70;
                v140.stdout(v139);
                v141 = (char)v177;
                v142 = (char)v178;
                v30 = &v46;
                v32 = <&T as core::fmt::Display>::fmt;
                v4 = &g_830e00;
                v5 = 2;
                v8 = 0;
                v6 = &v30;
                v7 = 1;
                v40.map_or_else(0, a2, v140);
                *((int128_t *)&v31) = *((int128_t *)&v40);
                v34 = v42;
                v143 = 3;
                if (v142 && (v142 != 1 || !v141))
                    v143 = 10;
                v22 = 1;
                v25 = 0;
                v24 = 0;
                v26 = v143;
                v28 = 10;
                v16 = 0x8000000000000000;
                v18 = <&T as core::fmt::Display>::fmt;
                v19 = v42;
                v40 = &v62;
                v41 = <alloc::string::String as core::fmt::Display>::fmt;
                v42 = &v16;
                v43 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
                v177 = &g_831060;
                v5 = 3;
                v8 = 0;
                v6 = &v40;
                v179 = 2;
                std::io::stdio::_print(v140);
                core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v16);
                core::ptr::drop_in_place<alloc::string::String>(&v30);
            }
            v144 = (long long)v64.get(v65, &v70);
            if (v144 && v144->field_10)
            {
                v145 = v144->field_8;
                v73 = &v145[v144->field_10];
                *((char *[8])&v13[0]) = v145;
                v146 = v145 + 1;
                do
                {
                    v147 = v146;
                    v149 = (v3 == 2 ? v52.get(v53, *(v13) + 144.lexeme(), v101) : 0);
                    v87 = *(v13) + 144.lexeme();
                    v88 = v101;
                    v56 = v147;
                    if (v149)
                    {
                        v150 = v149->field_8;
                        v151 = v149->field_10;
                    }
                    else
                    {
                        v150 = 8;
                        v151 = 0;
                    }
                    v77.chain(&v87, v150, v151);
                    v79 = 0;
                    v152 = v77.next();
                    if (v101)
                    {
                        v153 = v101;
                        v154 = v101;
                        do
                        {
                            v155 = v154;
                            if (v152)
                            {
                                *((char [8])&v16) = *(v13) + 144;
                                v18 = <just::name::Name as core::fmt::Display>::fmt;
                                v177 = &g_831230;
                                v5 = 2;
                                v8 = 0;
                                v6 = &v16;
                                v7 = 1;
                                v91.map_or_else(0, v155, &v177);
                                v57 = v91;
                                v58 = *((long long *)&v92);
                                if (v180 == v15)
                                    continue;
                                v147 = v181;
                                v156 = v58;
                                goto LABEL_68f99e;
                            }
                            else
                            {
                                v147 = *(v13).doc();
                                if (v147)
                                {
                                    v156 = v101;
                                    v180 = 0x8000000000000000;
                                    v181 = v147;
                                    v58 = v101;
LABEL_68f99e:
                                    (char)v6.into_searcher(10, v147, v156);
                                    v177 = 0;
                                    v5 = v156;
                                    v12 = 0;
                                    if (v177.fold() >= 2)
                                    {
                                        (char)v6.into_searcher(10, v147, v156);
                                        v177 = 0;
                                        v5 = v156;
                                        v12 = 0;
                                        while (true)
                                        {
                                            v157 = v177.next_inclusive();
                                            if (!v157)
                                                break;
                                            v158 = v157.call(v101);
                                            if (!v158)
                                                break;
                                            v16.stdout(v139);
                                            v159 = (char)v20;
                                            v160 = 4;
                                            switch (v159)
                                            {
                                            case 0:
                                                break;
                                            case 2:
LABEL_68fa67:
                                                v160 = 10;
                                                break;
                                            default:
                                                if (!(char)v16)
                                                    goto LABEL_68fa67;
                                                else
                                                    goto LABEL_68fa6c;
                                            }
LABEL_68fa6c:
                                            v49 = 0;
                                            v50 = v160;
                                            v51 = 10;
                                            v46 = 0x8000000000000000;
                                            v47 = "#/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/io/mod.rsstream did not contain valid UTF-8a formatting trait implementation returned an error when the underlying stream did notfailed to fill whole bufferfailed to write whole buffer";
                                            v48 = 1;
                                            v16.stdout(v139);
                                            v161 = (char)v20;
                                            v162 = 4;
                                            switch (v161)
                                            {
                                            case 0:
                                                break;
                                            case 2:
LABEL_68fae1:
                                                v162 = 10;
                                                break;
                                            default:
                                                if (!(char)v16)
                                                    goto LABEL_68fae1;
                                                else
                                                    goto LABEL_68fae6;
                                            }
LABEL_68fae6:
                                            v35 = 0;
                                            v36 = v162;
                                            v37 = 10;
                                            v30 = 0x8000000000000000;
                                            v32 = v158;
                                            v34 = v101;
                                            v16 = &v62;
                                            v18 = <alloc::string::String as core::fmt::Display>::fmt;
                                            v147 = &v46;
                                            v19 = &v46;
                                            v21 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
                                            v26 = &v30;
                                            v29 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
                                            v39 = &g_831250;
                                            v41 = 4;
                                            v44 = 0;
                                            v42 = &v16;
                                            v43 = 3;
                                            std::io::stdio::_print(&v39);
                                            core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v30);
                                            core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v46);
                                        }
                                    }
                                }
                                else
                                {
                                    v180 = v15;
                                }
                            }
                            v163 = *(v13);
                            *((int128_t *)&v31) = *((int128_t *)&v153);
                            v34 = v163;
                            v177.stdout(v139);
                            v16 = &(unsigned long long)v31;
                            v18 = &g_831320;
                            v26 = (short)v6;
                            *((int128_t *)&v19) = *((int128_t *)&v177);
                            v40 = &v62;
                            v41 = <alloc::string::String as core::fmt::Display>::fmt;
                            v42 = &v16;
                            v43 = <just::color_display::Wrapper as core::fmt::Display>::fmt;
                            v177 = &g_46ca80;
                            v5 = 2;
                            v8 = 0;
                            v6 = &v40;
                            v179 = 2;
                            std::io::stdio::_print(&v177);
                            v164 = v153->field_0;
                            v165 = *((long long *)&v153->field_8);
                            v177.filter(&v180);
                            if (!((char)(((0 ^ v177) & (0 ^ -(v177))) >> 63)) && v177 == 9223372036854775809)
                            {
                                v166 = 0;
                            }
                            else
                            {
                                v166 = 2;
                                v147 = v6;
                            }
                            v167 = v52.get(v53, *(v13) + 144.lexeme(), v101);
                            if (v167)
                            {
                                v168 = v167->field_8;
                                v167 = v167->field_10;
                            }
                            else
                            {
                                v168 = 0;
                            }
                            if (!v168)
                                v167 = 0;
                            if (!v168)
                                v168 = 8;
                            *((int128_t *)&v1) = (int128_t)v59;
                            just::subcommand::Subcommand::list_module::print_doc_and_aliases(a0, v164, v165, v166, v147, v168, v167, v45, v0, &g_68fd10);
                            core::ptr::drop_in_place<core::option::Option<alloc::borrow::Cow<str>>>(&v177);
                            v152 = v77.next();
                            v153 = v101;
                            v154 = v101;
                        } while (v154);
                    }
                    core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(0, 8);
                    *((unsigned long *)&v13[0]) = v56;
                    v146 = &v13[v13 != v73];
                    v140 = &v177;
                } while (v13 != v73);
            }
            v169 = (long long)v67.get(v68, &v70);
            if (v169)
            {
                v40 = v169[1];
                v41 = v169[1] + v169[2] * 8;
                v42 = 0;
                v170 = v40.next();
                if (v101)
                {
                    v171 = v101;
                    if (v2)
                    {
                        do
                        {
                            if ((v170 != v55 & (char)v38) == 1)
                            {
                                v4 = &g_82dbf8;
                                v5 = 1;
                                v6 = 8;
                                *((uint128_t *)&v7) = 0;
                                std::io::stdio::_print(&v4);
                            }
                            v30 = v171->field_0.name();
                            v32 = v101;
                            v16 = &v62;
                            v18 = <alloc::string::String as core::fmt::Display>::fmt;
                            v19 = &v30;
                            v21 = <&T as core::fmt::Display>::fmt;
                            v177 = &g_831290;
                            v5 = 3;
                            v8 = 0;
                            v6 = &v16;
                            v179 = 2;
                            std::io::stdio::_print(&v177);
                            a0.list_module(v171->field_0, v72);
                            v170 = v40.next();
                            v171 = v101;
                        } while (v101);
                    }
                    else
                    {
                        v172 = (long long)v59;
                        do
                        {
                            v30 = v171->field_0.name();
                            v32 = v101;
                            v16 = &v62;
                            v18 = <alloc::string::String as core::fmt::Display>::fmt;
                            v19 = &v30;
                            v21 = <&T as core::fmt::Display>::fmt;
                            v177 = &g_8312c0;
                            v5 = 3;
                            v8 = 0;
                            v6 = &v16;
                            v179 = 2;
                            std::io::stdio::_print(&v177);
                            v173 = v171->field_0.name();
                            v174 = v171->field_0;
                            if (v174->field_90 == 0x8000000000000000)
                            {
                                v175 = 0;
                            }
                            else
                            {
                                v175 = v174->field_98;
                                v176 = v174->field_a0;
                            }
                            v0 = v172;
                            just::subcommand::Subcommand::list_module::print_doc_and_aliases(a0, v173, a2, v175, v176, 8, 0, v45, v172, v60);
                            v40.next();
                            v171 = v101;
                        } while (v101);
                    }
                }
                v140 = &v177;
            }
            core::ptr::drop_in_place<regex::error::Error>(&v70);
            v82.next(&v89);
        } while ((long long)v85 != v15);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::option::Option<alloc::string::String>>>>(&v89);
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<core::option::Option<alloc::string::String>,alloc::vec::Vec<&just::recipe::Recipe>>>(&(char)v67);
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<core::option::Option<alloc::string::String>,alloc::vec::Vec<&just::recipe::Recipe>>>(&(char)v64);
    core::ptr::drop_in_place<alloc::string::String>(&v62);
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<&str,usize>>(&(char)v59);
    return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<&str,alloc::vec::Vec<&str>>>(&v52);
}
