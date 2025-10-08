long long fish::builtins::complete::complete(struct_2 *a0, struct_0 *a1, unsigned long long a2[2305843009213693951], unsigned long long a3)
{
    int v0;  // [bp-0x488]
    int v1;  // [bp-0x478]
    unsigned long long v2;  // [bp-0x420], Other Possible Types: unsigned int
    unsigned long long v3;  // [bp-0x420]
    unsigned long long v4;  // [bp-0x420]
    unsigned long long v5[3];  // [bp-0x418], Other Possible Types: unsigned long, unsigned long long
    void* v6;  // [bp-0x410], Other Possible Types: unsigned long long [3], unsigned long
    struct_0 *v7;  // [bp-0x408], Other Possible Types: unsigned long
    struct_2 *v8;  // [bp-0x400], Other Possible Types: unsigned long
    int v9;  // [bp-0x3f8], Other Possible Types: void*, unsigned long long
    unsigned long long v10;  // [bp-0x3f8]
    int v11;  // [bp-0x3f8]
    int v12;  // [bp-0x3f8]
    int v13;  // [bp-0x3f8]
    int v14;  // [bp-0x3f8]
    int v15;  // [bp-0x3f8]
    unsigned long long v16;  // [bp-0x3f0]
    int v17;  // [bp-0x3e8], Other Possible Types: void*, unsigned long long
    void* v18;  // [bp-0x3e8]
    char v19;  // [bp-0x3e0]
    int v20;  // [bp-0x3d8], Other Possible Types: char
    unsigned long long v21;  // [bp-0x3d0]
    unsigned long long v22;  // [bp-0x3c8]
    int v23;  // [bp-0x3b8], Other Possible Types: unsigned long long, char
    int v24;  // [bp-0x3b8]
    int v25;  // [bp-0x3b8]
    unsigned long long v26;  // [bp-0x3b8]
    unsigned long long v27;  // [bp-0x3b0], Other Possible Types: unsigned long
    int v28;  // [bp-0x3a8], Other Possible Types: void*, unsigned long long, unsigned long
    void* v29;  // [bp-0x3a8]
    int v30;  // [bp-0x3a0], Other Possible Types: char
    char v31;  // [bp-0x398]
    int v32;  // [bp-0x398]
    void* v33;  // [bp-0x390], Other Possible Types: unsigned long long
    void* v34;  // [bp-0x388], Other Possible Types: unsigned long long
    char v35;  // [bp-0x360]
    unsigned int v36;  // [bp-0x350]
    unsigned int v37;  // [bp-0x34c]
    void* v38;  // [bp-0x348], Other Possible Types: char
    int v39;  // [bp-0x348], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0x340]
    void* v41;  // [bp-0x338], Other Possible Types: unsigned long long
    int v42;  // [bp-0x328]
    unsigned long long v43;  // [bp-0x318]
    unsigned long v44;  // [bp-0x310], Other Possible Types: unsigned int
    unsigned long long v45;  // [bp-0x310]
    unsigned long long v46;  // [bp-0x310]
    int v47;  // [bp-0x308]
    unsigned long long v48;  // [bp-0x300]
    void* v49;  // [bp-0x2f8], Other Possible Types: unsigned long long
    struct_2 *v50;  // [bp-0x2f0]
    unsigned long long v51;  // [bp-0x2e0], Other Possible Types: unsigned int
    unsigned long long v52;  // [bp-0x2e0]
    unsigned long long v53;  // [bp-0x2e0]
    void* v54;  // [bp-0x2d8]
    int v55;  // [bp-0x2d8]
    unsigned long long v56;  // [bp-0x2d0]
    void* v57;  // [bp-0x2c8]
    unsigned int v58;  // [bp-0x2b4]
    unsigned int v59;  // [bp-0x2b0]
    unsigned int v60;  // [bp-0x2ac]
    int v61;  // [bp-0x2a8]
    void* v62;  // [bp-0x298], Other Possible Types: unsigned long long
    int v63;  // [bp-0x288], Other Possible Types: unsigned long
    unsigned long long v64;  // [bp-0x288]
    int v65;  // [bp-0x288]
    void* v66;  // [bp-0x278]
    void* v67;  // [bp-0x270]
    unsigned long long v68;  // [bp-0x268]
    void* v69;  // [bp-0x260]
    void* v70;  // [bp-0x258]
    unsigned long long v71;  // [bp-0x250]
    void* v72;  // [bp-0x248]
    void* v73;  // [bp-0x240]
    unsigned long long v74;  // [bp-0x238]
    void* v75;  // [bp-0x230]
    void* v76;  // [bp-0x228]
    int v77;  // [bp-0x228]
    unsigned long long v78;  // [bp-0x220]
    void* v79;  // [bp-0x218]
    void* v80;  // [bp-0x208]
    unsigned long long v81;  // [bp-0x200]
    void* v82;  // [bp-0x1f8]
    void* v83;  // [bp-0x1f0]
    unsigned long long v84;  // [bp-0x1e8]
    void* v85;  // [bp-0x1e0]
    void* v86;  // [bp-0x1d8]
    int v87;  // [bp-0x1d8]
    unsigned long long v88;  // [bp-0x1d0]
    void* v89;  // [bp-0x1c8]
    int v90;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v91;  // [bp-0x1b0]
    void* v92;  // [bp-0x1a8], Other Possible Types: unsigned long long
    int v93;  // [bp-0x198]
    unsigned long long v94;  // [bp-0x190]
    void* v95;  // [bp-0x188]
    void* v96;  // [bp-0x180]
    unsigned long long v97;  // [bp-0x178]
    void* v98;  // [bp-0x170]
    void* v99;  // [bp-0x168]
    unsigned long long v100;  // [bp-0x160]
    void* v101;  // [bp-0x158]
    void* v102;  // [bp-0x150]
    unsigned long long v103;  // [bp-0x148]
    void* v104;  // [bp-0x140]
    unsigned long long v105[2305843009213693951];  // [bp-0x138]
    unsigned long long v106;  // [bp-0x130]
    unsigned long long v107;  // [bp-0x128]
    unsigned long long v108;  // [bp-0x120]
    unsigned long long v109;  // [bp-0x118]
    unsigned long long v110;  // [bp-0x110]
    unsigned long long v111;  // [bp-0x108]
    int v112;  // [bp-0x100]
    unsigned long long v113;  // [bp-0xf8]
    unsigned long long v114;  // [bp-0xf0]
    void* v115;  // [bp-0xe8]
    uint128_t v116;  // [bp-0xe0]
    unsigned int v117;  // [bp-0xd0]
    unsigned short v118;  // [bp-0xcc]
    char v119;  // [bp-0xca]
    char v120;  // [bp-0xc8]
    unsigned long long v121;  // [bp-0xb8]
    int v122;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v123;  // [bp-0x98]
    char v124;  // [bp-0x88]
    void* v125;  // [bp-0x78]
    int v126;  // [bp-0x68]
    unsigned long long v127;  // [bp-0x58]
    char v128;  // [bp-0x48]
    unsigned int v130;  // ebx
    unsigned long long v132;  // rax
    char *v133;  // rdi
    unsigned long long v134;  // rbx
    unsigned long long v136;  // rdx
    unsigned long long v138;  // rdx
    void* v140;  // r13
    unsigned long long v141;  // rbx
    int v142;  // xmm0
    int v143;  // xmm1
    unsigned long long v145;  // rdx
    unsigned long long v146;  // r14
    unsigned long long v147;  // rbx
    unsigned long long v149;  // rdx
    struct_1 *v150;  // rbp
    int v151;  // xmm0
    unsigned long long v152;  // rdx
    struct_3 *v153;  // rax
    int v154;  // xmm0
    int v155;  // xmm1
    unsigned long long v156;  // rax
    unsigned long v157;  // rbp
    char v158;  // r13b
    void* v159;  // r14
    int v160;  // xmm0
    int v161;  // xmm0
    unsigned long v162;  // xmm2lq
    unsigned int v163;  // r10d
    unsigned int v164;  // esi
    unsigned long long v165;  // r12
    unsigned long long v166;  // r12
    unsigned long long v167[3];  // rax
    unsigned long long v168[3];  // rbp
    unsigned long long v169;  // r12
    unsigned long long v170[3];  // rax
    unsigned long long v171[3];  // rbp
    unsigned long long v172[3];  // rbp
    unsigned long long v173[3];  // rbp
    unsigned long long v174;  // rbx
    unsigned long long v176;  // rdx
    unsigned long v177;  // rdi
    unsigned long long v180;  // rbx
    unsigned long long v181;  // rbx
    unsigned long long v183;  // rdx
    unsigned long long v184;  // rbx
    unsigned long long v186;  // rdx
    unsigned long long v187;  // rbx
    unsigned long long v189;  // rdx
    unsigned long long v190;  // rbx
    unsigned long long v192;  // rdx
    void* v197;  // [bp-0x308]

    v7 = a1;
    v8 = a0;
    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14c87f0); /* do not return */
    v5 = a2[0];
    v6 = a2[1];
    v80 = 0;
    v81 = 4;
    v82 = 0;
    v70 = 0;
    v71 = 8;
    v72 = 0;
    v73 = 0;
    v74 = 8;
    v75 = 0;
    v76 = 0;
    v78 = 4;
    v79 = 0;
    v86 = 0;
    v88 = 4;
    v89 = 0;
    v96 = 0;
    v97 = 8;
    v98 = 0;
    v64 = 0x8000000000000000;
    v67 = 0;
    v68 = 8;
    v69 = 0;
    v83 = 0;
    v84 = 8;
    v85 = 0;
    v99 = 0;
    v100 = 8;
    v101 = 0;
    v105[0] = a2;
    v106 = a3;
    v107 = "a";
    v108 = 30;
    v109 = &g_14c8610;
    v110 = 20;
    v111 = 4;
    *((uint128_t *)&v112) = 0;
    v115 = 0;
    v117 = 63;
    v119 = 1;
    v118 = 0;
    v102 = 0;
    v116 = 0;
    v103 = 8;
    v104 = 0;
    *((unsigned int **)&v60) = &g_14c8601;
    v59 = 0;
    v58 = 0;
    v2 = 0;
    v51 = 0;
    v36 = 0;
    v37 = 0;
    v44 = 0;
    while (true)
    {
        v130 = v102.next_opt();
        if (v130 != 0x110000)
        {
            switch (v130)
            {
            case 1:
                v60 = 0;
                continue;
            case 58:
                v177 = v115 - 1;
                if (v115 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c89b8); /* do not return */
                }
                else if (v177 < a3)
                {
                    fish::builtins::shared::builtin_missing_argument(v8, v7, v5, v6, a2[2 * v177], a2[1 + 2 * v177], 1);
                    goto LABEL_13478c9;
                }
                else
                {
                    core::panicking::panic_bounds_check(v177, a3, &g_14c89d0); /* do not return */
                }
            case 59:
                v177 = v115 - 1;
                if (v115 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c89e8); /* do not return */
                }
                else if (v177 < a3)
                {
                    fish::builtins::shared::builtin_unexpected_argument(v8, v7, v5, v6, a2[2 * v177], a2[1 + 2 * v177], 1);
                }
                else
                {
                    core::panicking::panic_bounds_check(v177, a3, &g_14c8a00); /* do not return */
                }
LABEL_13478c9:
                v146 = 0x200000000;
                goto LABEL_13478d3;
            case 63:
                v177 = v115 - 1;
                if (v115 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c8a18); /* do not return */
                }
                else if (v177 < a3)
                {
                    fish::builtins::shared::builtin_unknown_option(v8, v7, v5, v6, a2[2 * v177], a2[1 + 2 * v177], 1);
                    goto LABEL_13478c9;
                }
                else
                {
                    core::panicking::panic_bounds_check(v177, a3, &g_14c8a30); /* do not return */
                }
            case 65: case 83: case 117:
                break;
            case 67:
                v2 = (unsigned int)v132 & 0xffffff00 | 1;
                v3 = v4;
                if (v113)
                {
                    v26.to_vec(v113, v114);
                    v18 = v29;
                    *((int128_t *)&v11) = *((int128_t *)&v26);
                    core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v65);
                    v66 = v18;
                    memcpy(&v65, &v11, 16);
                    v65 = v63;
                    v3 = v4;
                    break;
                }
                break;
            case 70:
                v37 = (unsigned int)v132 & 0xffffff00 | 1;
                continue;
            case 97:
                if (v113)
                {
                    v26.to_vec(v113, v114);
                    v18 = v29;
                    *((int128_t *)&v12) = *((int128_t *)&v26);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v76);
                    v79 = v18;
                    *((int128_t *)&v77) = *((int128_t *)&v10);
                    break;
                }
                else
                {
                    core::option::unwrap_failed(&g_14c8940); /* do not return */
                }
            case 99: case 112:
                if (!v113)
                    core::option::unwrap_failed(&g_14c8808); /* do not return */
                fish::common::unescape_string(&v128, v113, v114, 0, 1);
                if (*((long long *)&v128) != 0x8000000000000000)
                {
                    v133 = &v67;
                    if (v130 == 112)
                        v133 = &v83;
                    v133.push(&v128, (v130 == 112 ? &g_14c8820 : &g_14c8838));
                    break;
                }
                else
                {
                    v181 = v7->field_10;
                    v38 = 0;
                    v40 = 4;
                    v41 = 0;
                    v16 = "%";
                    v17 = 25;
                    v9 = 0x8000000000000000;
                    v23 = 1;
                    v27 = v5;
                    v28 = v6;
                    v31 = 1;
                    v33 = v113;
                    v34 = v114;
                    fish_printf::printf_impl::sprintf_locale(&(char)v61, &v38, v9.localize(), v183, ".", &v23, 2);
                    (char)v61.unwrap(&g_14c8850);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v23);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v9);
                    *((int128_t *)&v24) = *((int128_t *)&v38);
                    v28 = 0;
                    v181.append(&v23);
                    v146 = 0x200000000;
                    core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v128);
LABEL_13478d3:
                    v180 = 1;
LABEL_13478d8:
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v102);
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v99);
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v83);
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v67);
                    if (v63 != 0x8000000000000000)
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v65);
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v96);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v86);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v76);
                    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v73, 8);
                    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v70, 8);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v80);
                    return v180 | v146;
                }
            case 100:
                if (v113)
                {
                    v26.to_vec(v113, v114);
                    v18 = v29;
                    *((int128_t *)&v13) = *((int128_t *)&v26);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v86);
                    v89 = v18;
                    *((int128_t *)&v87) = *((int128_t *)&v10);
                    break;
                }
                else
                {
                    core::option::unwrap_failed(&g_14c8868); /* do not return */
                }
            case 101:
                v51 = (unsigned int)v132 & 0xffffff00 | 1;
                v52 = v53;
                continue;
            case 102:
                v44 = (unsigned int)v132 & 0xffffff00 | 1;
                v45 = v46;
                break;
            case 104:
                fish::builtins::shared::builtin_print_help(v8, v7, v5, v6);
                v146 = 0x200000000;
                v180 = 0;
                goto LABEL_13478d8;
            case 107:
                v58 = (unsigned int)v132 & 0xffffff00 | 1;
                continue;
            case 108:
                if (!v113)
                    core::option::unwrap_failed(&g_14c88b0); /* do not return */
                v70.push(v113, v114, &g_14c88c8);
                if (v114)
                    continue;
                v184 = v7->field_10;
                v38 = 0;
                v40 = 4;
                v41 = 0;
                v16 = "%";
                v17 = 36;
                v9 = 0x8000000000000000;
                v23 = 1;
                v27 = v5;
                v28 = v6;
                fish_printf::printf_impl::sprintf_locale(&(char)v61, &v38, v9.localize(), v186, ".", &(unsigned long long)v24, 1);
                (char)v61.unwrap(&g_14c88e0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v24);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v9);
                *((int128_t *)&v24) = *((int128_t *)&v38);
                v28 = 0;
                v184.append(&(unsigned long long)v24);
                goto LABEL_13478c9;
            case 110:
                if (v113)
                {
                    v26.to_vec(v113, v114);
                    v18 = v29;
                    *((int128_t *)&v15) = *((int128_t *)&v26);
                    v96.push(&v10, &g_14c8970);
                    break;
                }
                else
                {
                    core::option::unwrap_failed(&g_14c8958); /* do not return */
                }
            case 111:
                if (!v113)
                    core::option::unwrap_failed(&g_14c88f8); /* do not return */
                v73.push(v113, v114, &g_14c8910);
                if (v114)
                    continue;
                v190 = v7->field_10;
                v38 = 0;
                v40 = 4;
                v41 = 0;
                v16 = "%";
                v17 = 36;
                v9 = 0x8000000000000000;
                v23 = 1;
                v27 = v5;
                v28 = v6;
                fish_printf::printf_impl::sprintf_locale(&(char)v61, &v38, v9.localize(), v192, ".", &(unsigned long long)v24, 1);
                (char)v61.unwrap(&g_14c8928);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v24);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v9);
                *((int128_t *)&v24) = *((int128_t *)&v38);
                v28 = 0;
                v190.append(&(unsigned long long)v24);
                goto LABEL_13478c9;
            case 114:
                v36 = (unsigned int)v132 & 0xffffff00 | 1;
                continue;
            case 115:
                if (!v113)
                    core::option::unwrap_failed(&g_14c8880); /* do not return */
                v80.extend(v113, v113 + v114 * 4);
                if (v114)
                    continue;
                v187 = v7->field_10;
                v38 = 0;
                v40 = 4;
                v41 = 0;
                v16 = "%";
                v17 = 36;
                v9 = 0x8000000000000000;
                v23 = 1;
                v27 = v5;
                v28 = v6;
                fish_printf::printf_impl::sprintf_locale(&(char)v61, &v38, v9.localize(), v189, ".", &(unsigned long long)v24, 1);
                (char)v61.unwrap(&g_14c8898);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v24);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v9);
                *((int128_t *)&v24) = *((int128_t *)&v38);
                v28 = 0;
                v187.append(&(unsigned long long)v24);
                goto LABEL_13478c9;
            case 119:
                if (v113)
                {
                    v26.to_vec(v113, v114);
                    v18 = v29;
                    *((int128_t *)&v14) = *((int128_t *)&v26);
                    v99.push(&v10, &g_14c89a0);
                    break;
                }
                else
                {
                    core::option::unwrap_failed(&g_14c8988); /* do not return */
                }
            case 120:
                v59 = (unsigned int)v132 & 0xffffff00 | 1;
                v132 = v59 & 0xffffffffffffff00 | 1;
                v36 = v132;
            default:
                v23 = &g_14c60b8;
                v27 = 1;
                v28 = 8;
                *((uint128_t *)&v30) = 0;
                core::panicking::panic_fmt(&v23, &g_14c8a48); /* do not return */
            }
        }
        else
        {
            if (((char)v45 & 1) && ((char)v37 & 1))
            {
                v134 = v7->field_10;
                if (((char)v59 & 1))
                {
                    v9 = 0;
                    v16 = 4;
                    v17 = 0;
                    v23 = 0;
                    v27 = "complete:";
                    v28 = 8;
                    v31 = 0;
                    v33 = "'--exclusive' and '--force-files'Unescaping commandline to complete failedsrc/builtins/complete.rs";
                    v34 = 33;
                    fish_printf::printf_impl::sprintf_locale(&v38, &v9, g_14c7d28[0].localize(), v136, ".", &(unsigned long long)v24, 2);
                    v38.unwrap(&g_14c8b50);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v24);
                    *((int128_t *)&v24) = *((int128_t *)&v9);
                    v28 = 0;
                    v134.append(&(unsigned long long)v24);
                    goto LABEL_13478c9;
                }
                else
                {
                    v9 = 0;
                    v16 = 4;
                    v17 = 0;
                    v23 = 0;
                    v27 = "complete:";
                    v28 = 8;
                    v31 = 0;
                    v33 = "'--no-files' and '--force-files'j";
                    v34 = 32;
                    fish_printf::printf_impl::sprintf_locale(&v38, &v9, g_14c7d28[0].localize(), v138, ".", &(unsigned long long)v24, 2);
                    v38.unwrap(&g_14c8b38);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v24);
                    *((int128_t *)&v24) = *((int128_t *)&v9);
                    v28 = 0;
                    v134.append(&(unsigned long long)v24);
                    goto LABEL_13478c9;
                }
            }
            v65 = v65;
            if (v115 != a3)
            {
                if (((char)v3 & 1))
                {
                    if (v63 != 0x8000000000000000)
                        goto LABEL_13468d8;
                    if ((char)_ccall(4, 24, v115 + 1, 0, (unsigned long long)(char)(v63 < 0x8000000000000000)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14c8a60); /* do not return */
                    if (a3 != v115 + 1)
                        goto LABEL_13468d8;
                    v26.to_vec(a2[2 + 2 * a3], a2[1 + 2 * a3]);
                    v18 = v29;
                    *((int128_t *)&v9) = *((int128_t *)&v26);
                    core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v65);
                    v66 = v18;
                    memcpy(&v65, &v11, 16);
                    v65 = v63;
                }
                else if (!v69)
                {
                    if ((char)_ccall(4, 24, v115 + 1, 0, (unsigned long long)(char)(v69 < 0)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14c8a78); /* do not return */
                    if (a3 != v115 + 1)
                        goto LABEL_13468d8;
                    v26.to_vec(a2[2 + 2 * a3], a2[1 + 2 * a3]);
                    v18 = v29;
                    *((int128_t *)&v9) = *((int128_t *)&v26);
                    v67.push(&v10, &g_14c8a90);
                    v65 = v65;
                }
                else
                {
LABEL_13468d8:
                    v174 = v7->field_10;
                    v9 = 0;
                    v16 = 4;
                    v17 = 0;
                    v23 = 1;
                    v27 = v5;
                    v28 = v6;
                    fish_printf::printf_impl::sprintf_locale(&(char)v39, &v9, g_14c6510[0].localize(), v176, ".", &(unsigned long long)v24, 1);
                    (char)v39.unwrap(&g_14c8aa8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v24);
                    *((int128_t *)&v24) = *((int128_t *)&v9);
                    v28 = 0;
                    v174.append(&(unsigned long long)v24);
                    fish::builtins::shared::builtin_print_error_trailer(v8, v174, v5, v6);
                    goto LABEL_13478c9;
                }
            }
            if (false)
            {
                v140 = 0;
                do
                {
                    v54 = 0;
                    v56 = 8;
                    v57 = 0;
                    if (((char)fish::parse_util::parse_util_detect_errors((long long)v140[16], (long long)v140[24], &v54, 0) & 1))
                    {
                        v38.into_iter(&v54);
                        v10.next(&v38);
                        if (v10 != 0x8000000000000000)
                        {
                            v141 = v7->field_10;
                            do
                            {
                                v142 = *((int128_t *)&v10);
                                v143 = *((int128_t *)&v17);
                                *((int128_t *)&v32) = *((int128_t *)&v20);
                                v28 = v143;
                                v23 = v142;
                                v61.to_vec(v5, v6);
                                v49 = v62;
                                v47 = v61;
                                v61.add(&(unsigned long long)v47, ":", 6);
                                (unsigned long long)v47.add(&v61, (long long)v140[16].index((long long)v140[24], &g_14c8b20), v145);
                                v90.add(&(unsigned long long)v47, "'", 3);
                                v61.describe_with_prefix(&v10, (long long)v140[16], (long long)v140[24], v91, v92, v8->field_5a, 0);
                                v141.append(&v61);
                                v141.push(10);
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v90);
                                core::ptr::drop_in_place<fish::parser::ProfileItem>(&v10);
                                v10.next(&v38);
                            } while (v10 != 0x8000000000000000);
                        }
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::parse_constants::ParseError>>(&v38);
                        v146 = 0x100000000;
                        goto LABEL_13478d3;
                    }
                    core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v54);
                    v140 += 24;
                } while (v140);
            }
            if (v79)
            {
                v197 = 0;
                v48 = 4;
                v49 = 0;
                v197.spec_extend(v5, v5 + v6 * 4);
                v197.extend(": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", "/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs");
                fish::parse_util::parse_util_detect_errors_in_argument_list(&v122, 4, v79, v48, v49);
                if (*((long long *)&v122) == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v197);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v122);
                }
                else
                {
                    v62 = v123;
                    v61 = v122;
                    v147 = v7->field_10;
                    v38 = 0;
                    v40 = 4;
                    v41 = 0;
                    v16 = "%";
                    v17 = 34;
                    v9 = 0x8000000000000000;
                    v23 = 1;
                    v27 = v5;
                    v28 = v6;
                    v31 = 1;
                    v33 = 4;
                    v34 = v79;
                    fish_printf::printf_impl::sprintf_locale(&v90, &v38, v9.localize(), v149, ".", &v23, 2);
                    v90.unwrap(&g_14c8ac0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v23);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v9);
                    *((int128_t *)&v24) = *((int128_t *)&v38);
                    v28 = 0;
                    v147.append(&v23);
                    v147.append(&v122);
                    v147.push(10);
                    v146 = 0x100000000;
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v197);
                    goto LABEL_13478d3;
                }
            }
            if (((char)v3 & 1))
            {
                v2 = 0x8000000000000000 | v63 != 0x8000000000000000;
                if (v63 != 0x8000000000000000)
                {
                    v95 = v66;
                    v93 = v65;
                }
                else
                {
                    fish::reader::commandline_get_state(&(unsigned long long)v25, 1);
                    if (fish::proc::is_interactive_session())
                    {
                        v95 = v33;
                        *((int128_t *)&v93) = *((int128_t *)&v30);
                        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::history::History>>>(&v35);
                        core::ptr::drop_in_place<core::option::Option<fish::path::BaseDirectory>>(&(char)v34);
                    }
                    else
                    {
                        v7->field_10.append(v5, v6);
                        v7->field_10.append(":", 50);
                        v146 = 0x100000000;
                        core::ptr::drop_in_place<fish::reader::CommandlineState>(&(unsigned long long)v25);
                        goto LABEL_13478d3;
                    }
                }
                fish::parse_util::parse_util_token_extent(&(unsigned long long)v25, v94, v95, v95);
                v5 = v26;
                v150 = v8.libdata_mut();
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v10, v94, v95);
                v28 = v18;
                v151 = *((int128_t *)&v10);
                v25 = v151;
                v127 = v150->field_40;
                *((uint128_t *)&v126) = v150->field_30;
                v150->field_40 = v18;
                *((void*)&v150->field_30) = v151;
                core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v152);
                v49 = v127;
                v47 = v126;
                v50 = v8;
                v153 = v8.libdata();
                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v152);
                if (!v153->field_7e)
                {
                    if (v63 == 0x8000000000000000)
                    {
                        *((char *)(v8.libdata_mut() + 126)) = 1;
                        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v152);
                    }
                    (unsigned long long)v25.context(v8);
                    fish::complete::complete(&v10, v94, v95, 0x10100, &(unsigned long long)v25);
                    v6 = v95;
                    v125 = v18;
                    memcpy(&v124, &v11, 16);
                    v121 = v21;
                    memcpy(&v120, &v19, 16);
                    core::ptr::drop_in_place<fish::operation_context::OperationContext>(&(unsigned long long)v25);
                    fish::complete::sort_and_prioritize(&v124, 0);
                    (char)v61.into_iter(&v124);
                    v38.next(&(char)v61);
                    if (v39 != 0x8000000000000000)
                    {
                        v5 = v5.clone(v27);
                        v51 = v152;
                        v44 = &v8[5].padding_0[17];
                        v7 = v7->field_8;
                        do
                        {
                            v22 = v43;
                            v154 = *((int128_t *)&v39);
                            v155 = *((int128_t *)&v41);
                            v20 = v42;
                            v17 = v155;
                            v9 = v154;
                            v156 = v94.index(v6, v5, v51, &g_14c8ad8);
                            v26.background_interruptible(v44, &g_14c7518);
                            v157 = *((short *)((char *)&v22 + 2));
                            fish::reader::completion_apply_to_command_line(&v54, &v26, v16, v18, v157 & 65535, v156, v152, &v152, 0, 0);
                            core::ptr::drop_in_place<fish::operation_context::OperationContext>(&v26);
                            if (!((char)v157 & 1) && (char)fish::wcstringutil::string_suffixes_string(" ", 1, v56, v57))
                            {
                                if (v57)
                                    v57 -= 1;
                                else
                                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c8af0); /* do not return */
                            }
                            if (((char)v60 & 1))
                            {
                                fish::common::unescape_string(&v26, v56, v57, 0, 0);
                                if (v26 == 0x8000000000000000)
                                    core::option::expect_failed("Unescaping commandline to complete failedsrc/builtins/complete.rs", 41, &g_14c8b08); /* do not return */
                                v92 = v28;
                                *((int128_t *)&v90) = *((int128_t *)&v26);
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v54);
                                v57 = v92;
                                *((int128_t *)&v55) = (int128_t)v90;
                            }
                            if (v21)
                            {
                                v54.reserve(v21 + v57 + 2);
                                v54.push(9);
                                v54.spec_extend((long long)v20, (long long)v20 + v21 * 4);
                            }
                            v54.push(10);
                            v28 = v57;
                            *((int128_t *)&v25) = *((int128_t *)&v54);
                            v7.append(&v26);
                            core::ptr::drop_in_place<fish::complete::Completion>(&v38);
                            v38.next(&(char)v61);
                        } while (v39 != 0x8000000000000000);
                    }
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::complete::Completion>>(&(char)v61);
                    *((char *)(v8.libdata_mut() + 126)) = 0;
                    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v152);
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v120);
                }
                core::ptr::drop_in_place<fish::common::ScopeGuard<(),fish::builtins::complete::complete::{{closure}}>>(&v197);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v93);
                v158 = 1;
                goto LABEL_13474ac;
            }
            else
            {
                if (!v85 && !v82 && !((v79 | (char)v52) & 1) && !v89 && !((char)v45 & 1) && !((char)v37 & 1) && !((char)v36 & 1))
                {
                    if (v69)
                    {
                        (unsigned long long)v25.into_iter(&v67);
                        v10.next(&(unsigned long long)v25);
                        if (v10 != 0x8000000000000000)
                        {
                            do
                            {
                                fish::builtins::complete::builtin_complete_print(v16, v18, v7->field_8, v7->field_27, v8);
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v10);
                                v10.next(&(unsigned long long)v25);
                            } while (v10 != 0x8000000000000000);
                        }
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&(unsigned long long)v25);
                        v2 = 0;
                    }
                    else
                    {
                        v158 = 1;
                        v2 = 0;
                        fish::builtins::complete::builtin_complete_print(4, 0, v7->field_8, v7->field_27, v8);
                    }
LABEL_13474ac:
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v102);
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v99);
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v83);
                    if (!v158)
                        break;
                    goto LABEL_1347a67;
                }
                if (((char)v52 & 1))
                {
                    v159 = v69;
                    v160 = *((int128_t *)&v71);
                    *((int128_t *)&v1) = *((int128_t *)&v74);
                    v0 = v160;
                    v6[0] = v68;
                    fish::builtins::complete::builtin_complete_remove(v68, v69, v84, v85, v81, (unsigned int)v82, (long long)v0, (long long)(&v0)[8], (long long)v1, (int)(&v1)[8]);
                }
                else
                {
                    v159 = v69;
                    v161 = *((int128_t *)&v71);
                    v162 = *((int128_t *)&v88);
                    v163 = (char)v37 * 0x100 | (char)v45;
                    v164 = (char)v36 * 0x10000;
                    *((int128_t *)&v1) = *((int128_t *)&v74);
                    v0 = v161;
                    v6[0] = v68;
                    fish::builtins::complete::builtin_complete_add(v68, v69, v84, v85, v81, v82, (long long)v0, (long long)(&v0)[8], (long long)v1, (long long)(&v1)[8], v164 | v163, 8, 0, 4, v79, v162, v162, ((char)v58 & 1) * 32 | 20);
                }
                (unsigned long long)v25.into_iter(&v99);
                v197.next(&(unsigned long long)v25);
                if (v197 != 0x8000000000000000)
                {
                    if (!v159)
                    {
                        v165 = 0;
                        if (!v159)
                            goto LABEL_13479f1;
                    }
                    else
                    {
                        v165 = 24;
                        if (!v159)
                        {
LABEL_13479f1:
                            do
                            {
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v197);
                                v197.next(&(unsigned long long)v25);
                            } while (v197 != 0x8000000000000000);
                            goto LABEL_1347a37;
                        }
                    }
                    v5[0] = (char *)v6 + v165;
                    v8 = v165 - v159 * 24;
                    do
                    {
                        v167 = v5;
                        v168 = v6;
                        if (((char)v52 & 1))
                        {
                            v169 = v8;
                            v170 = v5;
                            v171 = v6;
                            do
                            {
                                v172 = v170;
                                fish::builtins::fish_indent::fish_indent::{{closure}}(&v10, v171[1], v171[2]);
                                v41 = v18;
                                *((int128_t *)&v39) = *((int128_t *)&v10);
                                fish::complete::complete_remove_wrapper(&(unsigned long long)v39, v48, v49);
                                v170 = v172 + 1;
                                v169 += 24;
                                v171 = v172;
                            } while (v169 != 24);
                        }
                        else
                        {
                            do
                            {
                                v173 = v167;
                                fish::builtins::fish_indent::fish_indent::{{closure}}(&v10, v168[1], v168[2]);
                                v62 = v18;
                                memcpy(&v61, &v11, 16);
                                fish::builtins::fish_indent::fish_indent::{{closure}}(&v10, v48, v49);
                                v41 = v18;
                                *((int128_t *)&v39) = *((int128_t *)&v10);
                                fish::complete::complete_add_wrapper(&v61, &(unsigned long long)v39);
                                v167 = v173 + 1;
                                v166 += 24;
                                v168 = v173;
                            } while (v166 != 24);
                        }
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v197);
                        v197.next(&(unsigned long long)v25);
                        v166 = v8;
                    } while (v197 != 0x8000000000000000);
                    goto LABEL_1347a37;
                }
                else
                {
LABEL_1347a37:
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&(unsigned long long)v25);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v102);
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v83);
                    v2 = 0;
LABEL_1347a67:
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v67);
                    break;
                }
            }
        }
    }
    if (!(char)v2 && v63 != 0x8000000000000000)
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v65);
    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v96);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v86);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v76);
    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v73, 8);
    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v70, 8);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v80);
    return 0;
}
