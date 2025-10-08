long long uu_pr::build_options(void* a0, unsigned long long a1, unsigned long long a2[2], unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x333]
    char v1;  // [bp-0x332]
    char v2;  // [bp-0x331]
    unsigned int v3;  // [bp-0x330]
    unsigned int v4;  // [bp-0x32c]
    int v5;  // [bp-0x328], Other Possible Types: char, unsigned long long
    unsigned long long v6;  // [bp-0x328]
    int v7;  // [bp-0x328]
    unsigned long long v8;  // [bp-0x320]
    unsigned long long v9;  // [bp-0x320]
    char *v10;  // [bp-0x318], Other Possible Types: int, unsigned long
    unsigned long long v11;  // [bp-0x318]
    unsigned long long v12;  // [bp-0x318]
    unsigned long long v13;  // [bp-0x310]
    unsigned long long v14;  // [sp-0x310]
    unsigned long long v15;  // [bp-0x308]
    int v16;  // [bp-0x308]
    void* v17;  // [sp-0x308]
    char v18;  // [bp-0x300]
    int v19;  // [bp-0x2f8]
    unsigned long long v20;  // [bp-0x2e8]
    unsigned long long v21;  // [bp-0x2c8]
    unsigned long long v22;  // [bp-0x2c8]
    char v23;  // [bp-0x2c0], Other Possible Types: unsigned long long
    char v24;  // [bp-0x2c0]
    char *v25;  // [bp-0x2b8], Other Possible Types: int
    unsigned long long v26;  // [bp-0x2b8]
    unsigned long long v27;  // [bp-0x2b8]
    void* v28;  // [bp-0x2b0], Other Possible Types: int, unsigned long long
    unsigned long long v29;  // [bp-0x2b0]
    unsigned long long v30;  // [bp-0x2b0]
    int v31;  // [bp-0x2a8], Other Possible Types: char *, char, unsigned long long
    unsigned long long v32;  // [bp-0x2a8]
    void* v33;  // [bp-0x2a0], Other Possible Types: char *, unsigned long long
    char *v34;  // [bp-0x298], Other Possible Types: char, unsigned long long
    int v35;  // [bp-0x288]
    int v36;  // [bp-0x278], Other Possible Types: char
    int v37;  // [bp-0x268], Other Possible Types: char
    unsigned long long v38;  // [bp-0x268]
    unsigned int v39;  // [bp-0x268]
    unsigned long long v40;  // [bp-0x268]
    unsigned long long v41;  // [bp-0x268]
    unsigned long long v42;  // [bp-0x260]
    char v43;  // [bp-0x258]
    unsigned long v44;  // [bp-0x240]
    char v45;  // [bp-0x238]
    char v46;  // [bp-0x238]
    unsigned long long v47;  // [bp-0x228]
    unsigned long long v48;  // [bp-0x218]
    unsigned int v49;  // [bp-0x20c]
    int v50;  // [bp-0x208], Other Possible Types: char
    unsigned long long v51;  // [bp-0x1f8]
    int v52;  // [bp-0x1e8]
    unsigned long long v53;  // [bp-0x1e8]
    int v54;  // [bp-0x1e0]
    unsigned long long v55;  // [bp-0x1d8]
    unsigned long long v56;  // [bp-0x1d0]
    int v57;  // [bp-0x1c8], Other Possible Types: char
    unsigned long long v58;  // [bp-0x1b8]
    char v59;  // [bp-0x1a8]
    int v60;  // [bp-0x1a8]
    unsigned long long v61;  // [bp-0x198]
    int v62;  // [bp-0x188], Other Possible Types: char
    int v63;  // [bp-0x178]
    char v64;  // [bp-0x168]
    unsigned long long v65;  // [bp-0x158]
    char v66;  // [bp-0x150]
    int v67;  // [bp-0x150]
    unsigned long v68;  // [bp-0x140]
    int v69;  // [bp-0x138], Other Possible Types: char
    unsigned long long v70;  // [bp-0x128]
    int v71;  // [bp-0x118], Other Possible Types: char
    unsigned long v72;  // [bp-0x108]
    char v73;  // [bp-0x100]
    unsigned long long v74;  // [bp-0xe0]
    char *v75;  // [bp-0xd8]
    unsigned long long v76;  // [bp-0xd0]
    char v77;  // [bp-0xc8]
    int v78;  // [bp-0xa8], Other Possible Types: char
    int v79;  // [bp-0x98], Other Possible Types: char
    int v80;  // [bp-0x88], Other Possible Types: char
    int v81;  // [bp-0x78], Other Possible Types: char
    int v82;  // [bp-0x68], Other Possible Types: char
    int v83;  // [bp-0x58], Other Possible Types: char
    int v84;  // [bp-0x48], Other Possible Types: char
    char v85;  // [bp-0x38]
    unsigned long long v87;  // rsi
    char *v88;  // rdi
    unsigned long long v89;  // rdx
    unsigned long long v90[3];  // rax
    unsigned long v91;  // r15, Other Possible Types: unsigned long long
    unsigned long long v92;  // r13
    void* v93;  // rcx
    char v94;  // cc_dep1
    void* v95;  // r12
    void* v96;  // r12
    unsigned long v97;  // r15
    unsigned long long v98;  // r12
    unsigned long long v99;  // r12
    void* v100;  // r15
    unsigned long long v101[3];  // rax
    int v102;  // xmm0
    unsigned int v103;  // eax
    unsigned long long v104;  // r12
    int v105;  // xmm0
    int v106;  // xmm1
    unsigned long long v107;  // rcx
    unsigned long long v108;  // rax
    int v109;  // xmm0
    void* v110;  // rdi
    int v111;  // xmm0
    int v112;  // xmm1
    unsigned long long v113;  // rsi
    unsigned long long v114;  // rax
    unsigned long long v115[3];  // rax
    unsigned long long v116[3];  // rax
    unsigned long long v117;  // r12
    unsigned long long v119;  // r14
    char *v120;  // rax
    unsigned long long v121;  // rax
    unsigned long long v122;  // rax
    unsigned long long v124;  // r14
    unsigned long long v125;  // r12
    unsigned long long v126;  // rbp
    unsigned long long v127;  // r14
    unsigned long long v128;  // r15
    unsigned long long v129;  // r14
    unsigned long long v130;  // r14
    int v131;  // xmm0
    int v132;  // xmm1
    unsigned long long v133;  // rax
    int v134;  // xmm0
    void* v135;  // rcx
    char v136;  // bpl
    unsigned long long v137;  // r14
    char v138;  // bpl
    unsigned long long v139;  // r14
    unsigned long long v140;  // rdx
    unsigned long long v141;  // rcx
    int v142;  // xmm1
    int v143;  // xmm2
    char v144;  // r14b

    v21 = a5;
    v0 = a1.get_flag("form-feedUse a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option ", 9);
    v23 = a1.get_flag("mergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall suppo", 5);
    if (v23)
    {
        if ((char)a1.contains_id("columnProduce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i sh", 6))
        {
            v87 = "cannot specify number of columns when printing in parallelcannot specify both printing across and printing in parallel%b %d %H:%M %Yinvalid --pages argument ':'";
            v88 = &v5;
            v89 = 58;
        }
        else
        {
            if (!(char)a1.get_flag("acrossModify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, when column is 2, the first input line heads column 1, the second heads column 2, the third is the second line in column 1,", 6))
                goto LABEL_533cd4;
            v87 = "cannot specify both printing across and printing in parallel%b %d %H:%M %Yinvalid --pages argument ':'";
            v88 = &v5;
            v89 = 60;
        }
        v88.to_vec(v87, v89);
        *((unsigned long long *)&a0[8]) = 9223372036854775809;
        *((int128_t *)&a0[16]) = *((int128_t *)&v5);
        *((unsigned long *)&a0[32]) = v10;
        *((unsigned long long *)a0) = 2;
        return a0;
    }
LABEL_533cd4:
    v2 = a1.get_flag("mergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall suppo", 5);
    v95 = "headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numberi";
    v5.try_get_one(a1, "headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numberi", 6);
    v90 = "headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numberi".unwrap(6, &v5);
    if (v90)
    {
        v91 = v90[1];
        v95 = v90[2];
        if (!v24)
            goto LABEL_533d49;
LABEL_533d35:
        v92 = 1;
        v93 = 0;
    }
    else
    {
        v91 = 0;
        if (v24)
            goto LABEL_533d35;
LABEL_533d49:
        if (!a3)
            core::panicking::panic_bounds_check(0, 0, &g_669208); /* do not return */
        v92 = a2[0];
        v94 = a2[0].equal(a2[1], "-cannot specify number of columns when printing in parallelcannot specify both printing across and printing in parallel%b %d %H:%M %Yinvalid --pages argument ':'", 1);
        if (!v94)
        {
            v93 = a2[1];
            if (v94)
                goto LABEL_533d8e;
LABEL_533d8d:
        }
        else
        {
            v93 = 0;
            if (!v94)
                goto LABEL_533d8d;
LABEL_533d8e:
            v92 = 1;
        }
    }
    if (!v91)
    {
        v96 = v93;
        if (!v91)
            goto LABEL_533da1;
LABEL_533da0:
        v97 = v91;
    }
    else
    {
        v96 = v95;
        if (v91)
            goto LABEL_533da0;
LABEL_533da1:
        v97 = v92;
    }
    v71.to_vec(v97, v96);
    v5.default();
    v98 = v15;
    core::ptr::drop_in_place<uu_pr::NumberingMode>(&v5);
    uu_pr::parse_usize(&(char)v26, a1, "first-line-numberstart counting with NUMBER at 1st line of first page printedNUMBERomit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spa", 17);
    v9 = v98;
    v6 = 9223372036854775813;
    v99 = v98;
    if (v26 != 9223372036854775814)
    {
        memcpy(&v62, &v31, 16);
        v6.drop_in_place<core::result::Result<usize,uu_pr::PrError>>();
        v29 = v28;
        v99 = v28;
        if (v26 != 9223372036854775813)
        {
            a0[24] = v62;
            *((unsigned long long *)&a0[8]) = v26;
            *((unsigned long long *)&a0[16]) = v28;
            *((unsigned long long *)a0) = 2;
            core::ptr::drop_in_place<alloc::string::String>(&v71);
            return a0;
        }
    }
    v6.try_get_one(a1, "number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width column positions of each text column or each line of -m output.  If char (any non-digit character) is given, it is appended", 12);
    v101 = "number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width column positions of each text column or each line of -m output.  If char (any non-digit character) is given, it is appended".unwrap(12, &v6);
    if (v101)
    {
        uu_pr::build_options::{{closure}}(&v6, v99, v101[1], v101[2]);
        v34 = v15;
        v102 = *((int128_t *)&v6);
        *((int128_t *)&v31) = *((int128_t *)&v10);
        v25 = v102;
    }
    else
    {
        v26 = 0x8000000000000000;
    }
    v62.or_else(&(char)v26, a1);
    v45 = a1.get_flag("double-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the f", 12);
    v100 = a0;
    if (v46)
        alloc::slice::<impl [T]>::repeat(&v6, "\n argument -cannot specify number of columns when printing in parallelcannot specify both printing across and printing in parallel%b %d %H:%M %Yinvalid --pages argument ':'", 2);
    else
        v6.to_vec("\n argument -cannot specify number of columns when printing in parallelcannot specify both printing across and printing in parallel%b %d %H:%M %Yinvalid --pages argument ':'", 1);
    v51 = v12;
    memcpy(&v50, &v6, 16);
    v6.to_vec("\n argument -cannot specify number of columns when printing in parallelcannot specify both printing across and printing in parallel%b %d %H:%M %Yinvalid --pages argument ':'", 1);
    v58 = v12;
    memcpy(&v57, &v6, 16);
    if (!v24)
    {
        if (!a3)
            core::panicking::panic_bounds_check(0, 0, &g_669220); /* do not return */
        if ((char)a2[0].equal(a2[1], "-cannot specify number of columns when printing in parallelcannot specify both printing across and printing in parallel%b %d %H:%M %Yinvalid --pages argument ':'", 1))
            goto LABEL_533fb4;
        v103 = uu_pr::file_last_modified_time(&v66, a2[0], a2[1]);
    }
    else
    {
LABEL_533fb4:
        v37.now();
        v26 = "%b %d %H:%M %Yinvalid --pages argument ':'";
        v30 = 14;
        v32 = 8;
        v33 = 0;
        v34 = 0;
        v6.format_with_items(&v37, &v26);
        v66.spec_to_string(&v6);
        v103 = (unsigned int)core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v6);
    }
    v4 = v103 & 0xffffff00 | 1;
    v6.new("\\s*\\+(\\d+:*\\d*)\\s*\\s*-(\\d+)\\s*/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid + argument invalid --pages argument invalid - argument ", 18);
    v73.unwrap(&v6, &g_669238);
    (char)v26.captures_at(&v73, a4, v21);
    if ((int)v26 == 2)
    {
        v104 = 1;
        goto LABEL_53417a;
    }
    v20 = *((long long *)&v36);
    v105 = *((int128_t *)&v26);
    v106 = (int128_t)v31;
    v19 = v35;
    *((int128_t *)&v16) = *((int128_t *)&v34);
    v10 = v106;
    v5 = v105;
    uu_pr::build_options::{{closure}}(&v38, &v6);
    v107 = v38;
    v108 = v42;
    memcpy(&v78, &v43, 16);
    if (v38 != 9223372036854775813)
    {
        v104 = 1;
        if (v38 == 9223372036854775814)
            goto LABEL_53417a;
        v109 = v78;
        goto LABEL_534b1d;
    }
    v104 = v108;
LABEL_53417a:
    (char)v26.captures_at(&v73, a4, v21);
    if ((int)v26 == 2)
    {
        v110 = 0;
    }
    else
    {
        v20 = (long long)v36;
        v111 = *((int128_t *)&v26);
        v112 = (int128_t)v31;
        v19 = v35;
        *((int128_t *)&v16) = *((int128_t *)&v34);
        v10 = v112;
        v5 = v111;
        v110 = uu_pr::build_options::{{closure}}(&v6);
    }
    v114 = v110.filter(v113);
    if (!v114)
    {
        v23 = 0;
        goto LABEL_534261;
    }
    uu_pr::build_options::{{closure}}(&v6, v114, a2);
    v44 = v9;
    memcpy(&v79, &v12, 16);
    if (false)
    {
        a0[24] = v79;
        *((long long *)&a0[8]) = 9223372036854775813;
        v108 = v44;
        goto LABEL_534b26;
    }
    v23 = 1;
LABEL_534261:
    v6.try_get_one(a1, "pagesBegin and stop printing with page FIRST_PAGE[:LAST_PAGE]FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output follow", 5);
    v115 = "pagesBegin and stop printing with page FIRST_PAGE[:LAST_PAGE]FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output follow".unwrap(5, &v6);
    if (v115)
    {
        uu_pr::build_options::{{closure}}(&v6, v115[1], v115[2]);
        *((int128_t *)&v37) = *((int128_t *)&v9);
        *((int128_t *)&v28) = *((int128_t *)&v38);
        v26 = 9223372036854775813;
        v6.call_once(a1, &v26);
        v107 = 9223372036854775813;
        v108 = v9;
        memcpy(&v80, &v12, 16);
        if (!(false))
        {
            v104 = v108;
        }
        else if (true)
        {
            v109 = v80;
            goto LABEL_534b1d;
        }
    }
    v56 = v104;
    v6.try_get_one(a1, "pagesBegin and stop printing with page FIRST_PAGE[:LAST_PAGE]FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output follow", 5);
    v116 = "pagesBegin and stop printing with page FIRST_PAGE[:LAST_PAGE]FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output follow".unwrap(5, &v6).filter();
    if (v116)
    {
        uu_pr::build_options::{{closure}}(&v6, v116[1], v116[2]);
        *((int128_t *)&v37) = *((int128_t *)&v9);
        if (0)
            goto LABEL_534425;
        *((int128_t *)&v28) = *((int128_t *)&v38);
        v26 = 9223372036854775813;
        v6.call_once(a1, &v26);
        v107 = 9223372036854775813;
        v108 = v9;
        memcpy(&v81, &v12, 16);
        v23 = 1;
        v44 = v108;
        v38 = v44;
        if (v104 > v44)
        {
LABEL_53444a:
            v25 = &v56;
            v28 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v31 = &v38;
            v33 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v5 = &g_6691d8;
            v8 = 3;
            v17 = 0;
            v10 = &v25;
            v14 = 2;
            v84.map_or_else(&v5);
            *((long long *)&a0[32]) = *((long long *)&v85);
            a0[16] = v84;
            *((unsigned long long *)&a0[8]) = 9223372036854775809;
            goto LABEL_534b2a;
        }
        else
        {
LABEL_534510:
            uu_pr::parse_usize(&v26, a1, "lengthOverride the 66-line default (default number of lines of text 56, and with -F 63) and reset the page length to lines.  If lines is not greater than the sum  of  both the  header  and trailer depths (in lines), the pr utility shall suppress both the h", 6);
            v117 = (v0 ^ 1) * 3 + 63;
            v8 = v117;
            v5 = 9223372036854775813;
            if (v26 == 9223372036854775814)
            {
                v119 = (int)a1.get_flag("omit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page.lengthOverride the 66-line default (default number of l", 11) & 0xffffff00 | (char)a1.get_flag("omit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page.lengthOverride the 66-line default (default number of l", 11) ^ 1;
                v117 -= 10;
                goto LABEL_534579;
            }
            else
            {
                v117 = v30;
                *((int128_t *)&v37) = *((int128_t *)&v32);
                v5.drop_in_place<core::result::Result<usize,uu_pr::PrError>>();
                if (v26 != 9223372036854775813)
                {
                    *((int128_t *)&a0[24]) = *((int128_t *)&v38);
                    *((unsigned long long *)&a0[8]) = v26;
                    *((unsigned long long *)&a0[16]) = v117;
                    goto LABEL_534b2a;
                }
                else if (v117 < 10)
                {
                    v119 = 0;
LABEL_534579:
                    if ((char)a1.get_flag("form-feedUse a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option ", 9))
                    {
                        v120 = 1.alloc_impl(1);
                        if (!v120)
                            alloc::alloc::handle_alloc_error(1, 1); /* do not return */
                        *(v120) = 12;
                        v74 = 1;
                        v75 = v120;
                        v76 = 1;
                        v5.from_utf8(&v74);
                        (char)v60.unwrap(&v5, &g_669250);
                    }
                    else
                    {
                        v5.to_vec("\n argument -cannot specify number of columns when printing in parallelcannot specify both printing across and printing in parallel%b %d %H:%M %Yinvalid --pages argument ':'", 1);
                        v61 = v12;
                        memcpy(&v59, &v6, 16);
                    }
                    v1 = a1.get_flag("acrossModify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, when column is 2, the first input line heads column 1, the second heads column 2, the third is the second line in column 1,", 6);
                    v5.try_get_one(a1, "sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -S\" \"), no effect on column optionsstringmergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file ", 10);
                    v121 = "sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -S\" \"), no effect on column optionsstringmergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file ".unwrap(10, &v5);
                    v65 = v117;
                    v49 = v119;
                    if (!v121)
                    {
                        v5.try_get_one(a1, "separatorSeparate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character).sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (", 9);
                        v121 = "separatorSeparate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character).sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (".unwrap(9, &v5);
                        if (!v121)
                            goto LABEL_534725;
                    }
                    v5.clone(v121);
                    v122 = v5;
                    *((int128_t *)&v25) = *((int128_t *)&v8);
                    if (v122 == 0x8000000000000000)
                    {
LABEL_534725:
                        v39 = 0;
                        v5.to_vec(::0x52b3d0::core::char::methods::encode_utf8_raw(9, &v39), 1);
                        v122 = v12;
                        v55 = v122;
                        *((int128_t *)&v52) = *((int128_t *)&v5);
                        v41 = v40;
                    }
                    else
                    {
                        *((int128_t *)&v54) = *((int128_t *)&v26);
                        v53 = v122;
                        v41 = v38;
                    }
                    v3 = (unsigned int)v122 & 0xffffff00 | 1;
                    v124 = v119 & 0xffffffffffffff00 | 1;
                    v125 = a1;
                    v126 = 72;
                    if ((char)a1.contains_id("widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is speci", 5))
                    {
                        v124 = v124 & 0xffffffffffffff00 | 1;
                        v126 = ((char)v125.contains_id("separatorSeparate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character).sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (", 9) ? 0x200 : 72);
                    }
                    v127 = v124 & 0xffffffffffffff00 | 1;
                    uu_pr::parse_usize(&v26, v125, "widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is speci", 5);
                    v8 = v126;
                    v5 = 9223372036854775813;
                    v128 = v26;
                    if (v26 != 9223372036854775814)
                    {
                        v126 = v30;
                        *((int128_t *)&v37) = *((int128_t *)&v32);
                        v127 = v127 & 0xffffffffffffff00 | 1;
                        v5.drop_in_place<core::result::Result<usize,uu_pr::PrError>>();
                        if (v26 != 9223372036854775813)
                        {
                            *((int128_t *)&a0[24]) = *((int128_t *)&v41);
                            *((unsigned long long *)&a0[8]) = v26;
                            v100 = a0;
                            *((unsigned long long *)&a0[16]) = v30;
                            *((unsigned long long *)a0) = 2;
LABEL_534cda:
                            core::ptr::drop_in_place<alloc::string::String>(&(char)v53);
LABEL_534ce7:
                            core::ptr::drop_in_place<alloc::string::String>(&(char)v60);
LABEL_534cf4:
                            core::ptr::drop_in_place<regex::regex::string::Regex>(&v73);
                            core::ptr::drop_in_place<alloc::string::String>(&v66);
                            core::ptr::drop_in_place<alloc::string::String>(&v57);
                            core::ptr::drop_in_place<alloc::string::String>(&v50);
                            v62.drop_in_place<core::option::Option<uu_pr::NumberingMode>>();
                            core::ptr::drop_in_place<alloc::string::String>(&v71);
                            return v100;
                        }
                    }
                    v48 = v126;
                    v129 = v127 & 0xffffffffffffff00 | 1;
                    if (!(char)v125.get_flag("join-linesmerge full lines, turns off -W line truncation, no column alignment, --sep-string[=STRING] sets separatorsPrint help informationfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 10))
                    {
                        v129 = v129 & 0xffffffffffffff00 | 1;
                        uu_pr::parse_usize(&v5, v125, "page-widthset page width to PAGE_WIDTH (72) characters always, truncate lines, except -J option is set, no interference with -S or -sacrossModify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for", 10);
                        if (v5 == 9223372036854775814)
                            goto LABEL_53488c;
                        v128 = v8;
                        v47 = 1;
                        if (v5 == 9223372036854775813)
                        {
LABEL_534898:
                            v5.new("\\s*-(\\d+)\\s*/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid + argument invalid --pages argument invalid - argument ", 12);
                            v130 = (v129 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
                            v77.unwrap(&v5, &g_669268);
                            v26.captures_at(&v77, a4, v21);
                            if ((int)v26 != 2)
                            {
                                v20 = (long long)v36;
                                v131 = *((int128_t *)&v26);
                                v132 = (int128_t)v31;
                                v19 = v35;
                                *((int128_t *)&v16) = *((int128_t *)&v34);
                                v10 = v132;
                                v7 = v131;
                                uu_pr::build_options::{{closure}}(&v41, &v5);
                                v133 = v41;
                                v130 = v42;
                                memcpy(&v82, &v43, 16);
                                if (v41 == 9223372036854775813)
                                {
                                    v136 = 1;
LABEL_53498f:
                                    uu_pr::parse_usize(&v5, v125, "columnProduce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i sh", 6);
                                    v133 = v5;
                                    if (v5 == 9223372036854775814)
                                    {
                                        v33 = &v48;
                                        *((int128_t *)&v25) = (int128_t)v52;
                                        v31 = v55;
                                        v34 = &v1;
                                        if (!v136)
                                        {
                                            v22 = v128;
                                            v5 = 0x8000000000000000;
                                            core::ptr::drop_in_place<uu_pr::NumberingMode>(&v26);
                                            goto LABEL_534aab;
                                        }
                                    }
                                    else
                                    {
                                        v130 = v8;
                                        v135 = a0;
                                        if (v5 == 9223372036854775813)
                                        {
                                            v33 = &v48;
                                            memcpy(&v26, &(char)v53, 16);
                                            v31 = v55;
                                        }
                                        else
                                        {
                                            v134 = (int128_t)v10;
                                            goto LABEL_534c7e;
                                        }
                                    }
                                    v22 = v128;
                                    v11 = v31;
                                    *((int128_t *)&v5) = *((int128_t *)&v26);
                                    v13 = v48;
                                    v15 = v130;
                                    v18 = v1;
LABEL_534aab:
                                    uu_pr::parse_usize(&v41, v125, "indentEach line of output shall be preceded by offset <space>s. If the -o option is not specified, the default offset shall be zero. The space taken is in addition to the output line width (see the -w option below).marginjoin-linesmerge full lines, turns o", 6);
                                    v28 = 0;
                                    v27 = 9223372036854775813;
                                    if (v41 == 9223372036854775814)
                                    {
                                        v137 = 0;
                                        goto LABEL_534b64;
                                    }
                                    else
                                    {
                                        v137 = v42;
                                        memcpy(&v83, &v43, 16);
                                        v27.drop_in_place<core::result::Result<usize,uu_pr::PrError>>();
                                        if (v41 == 9223372036854775813)
                                        {
LABEL_534b64:
                                            alloc::slice::<impl [T]>::repeat(&v27, " \\s*\\+(\\d+:*\\d*)\\s*\\s*-(\\d+)\\s*/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid + argument invalid --pages argument invalid - argument ", v137);
                                            v70 = v31;
                                            memcpy(&v69, &v27, 16);
                                            v138 = v125.get_flag("join-linesmerge full lines, turns off -W line truncation, no column alignment, --sep-string[=STRING] sets separatorsPrint help informationfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 10);
                                            v139 = v2;
                                            if (v5 != 0x8000000000000000)
                                            {
                                                v27.clone(&v5);
                                                *((int128_t *)&v37) = *((int128_t *)&v28);
                                                if (v27 == 0x8000000000000000)
                                                    goto LABEL_534c04;
                                                memcpy(&v28, &v41, 16);
                                                if (v138)
                                                    goto LABEL_534c1d;
LABEL_534d78:
                                                v141 = (v5 == 0x8000000000000000 ? 0 : v15);
                                                if (v139)
                                                    v141 = a3;
                                                v140 = v47;
                                                if (v141 >= 2)
                                                {
                                                    v22 = 72;
                                                    if (v5 != 0x8000000000000000)
                                                        v22 = v13;
                                                    v140 = 1;
                                                }
                                            }
                                            else
                                            {
LABEL_534c04:
                                                uu_pr::build_options::{{closure}}(&v27, v139);
                                                if (!v138)
                                                    goto LABEL_534d78;
LABEL_534c1d:
                                                v140 = 0;
                                            }
                                            *((long long *)&a0[248]) = *((long long *)&v64);
                                            a0[232] = v63;
                                            a0[216] = v62;
                                            *((unsigned long *)&a0[64]) = v72;
                                            a0[48] = v71;
                                            *((unsigned long long *)&a0[88]) = v58;
                                            a0[72] = v57;
                                            *((unsigned long long *)&a0[112]) = v51;
                                            a0[96] = v50;
                                            a0[120] = v67;
                                            *((unsigned long *)&a0[136]) = v68;
                                            a0[144] = v60;
                                            *((unsigned long long *)&a0[160]) = v61;
                                            v142 = (int128_t)v10;
                                            v143 = (int128_t)v16;
                                            *((int128_t *)&a0[0x100]) = *((int128_t *)&v5);
                                            a0[272] = v142;
                                            a0[288] = v143;
                                            a0[168] = v69;
                                            *((unsigned long long *)&a0[184]) = v70;
                                            *((int128_t *)&a0[192]) = *((int128_t *)&v27);
                                            *((unsigned long long *)&a0[208]) = v31;
                                            *((unsigned long long *)a0) = v23;
                                            *((unsigned long *)&a0[8]) = v44;
                                            *((unsigned long long *)&a0[16]) = v139;
                                            *((unsigned long long *)&a0[24]) = a3;
                                            *((unsigned long long *)&a0[32]) = v140;
                                            *((unsigned long long *)&a0[40]) = v22;
                                            *((unsigned long long *)&a0[304]) = v56;
                                            *((unsigned long long *)&a0[312]) = v65;
                                            *((char *)&a0[320]) = v46;
                                            *((char *)&a0[321]) = v49;
                                            *((char *)&a0[322]) = v0;
                                            *((char *)&a0[323]) = v138;
                                            v3 = 0;
                                            core::ptr::drop_in_place<regex::regex::string::Regex>(&v77);
                                            v4 = 0;
                                            core::ptr::drop_in_place<regex::regex::string::Regex>(&v73);
                                            return a0;
                                        }
                                        a0[24] = v83;
                                        *((unsigned long long *)&a0[8]) = v41;
                                        *((unsigned long long *)&a0[16]) = v42;
                                        *((unsigned long long *)a0) = 2;
                                        v5.drop_in_place<core::option::Option<uu_pr::ColumnModeOptions>>();
LABEL_534cc3:
                                        core::ptr::drop_in_place<regex::regex::string::Regex>(&v77);
                                        v100 = a0;
                                        if (!v144)
                                            goto LABEL_534ce7;
                                        goto LABEL_534cda;
                                    }
                                }
                                else if (v41 != 9223372036854775814)
                                {
                                    v134 = v82;
                                    v135 = a0;
LABEL_534c7e:
                                    v135[24] = v134;
                                    *((unsigned long long *)&v135[8]) = v133;
                                    *((unsigned long long *)&v135[16]) = v130;
                                    *((unsigned long long *)v135) = 2;
                                    v144 = 1;
                                    goto LABEL_534cc3;
                                }
                            }
                            else
                            {
                                goto LABEL_53498f;
                            }
                        }
                        else
                        {
                            v100 = a0;
                            *((int128_t *)&a0[24]) = *((int128_t *)&v12);
                            *((unsigned long long *)&a0[8]) = v5;
                            *((unsigned long long *)&v100[16]) = v128;
                            *((unsigned long long *)a0) = 2;
                            goto LABEL_534cda;
                        }
                    }
                    else
                    {
LABEL_53488c:
                        v47 = 0;
                        goto LABEL_534898;
                    }
                }
            }
        }
        if (0)
            goto LABEL_534425;
        v109 = v81;
    }
    else
    {
LABEL_534425:
        if (v23)
        {
            v38 = v44;
            if (v104 > v44)
                goto LABEL_53444a;
            goto LABEL_534510;
        }
    }
LABEL_534b1d:
    a0[24] = v109;
    *((unsigned long long *)&a0[8]) = v107;
LABEL_534b26:
    *((unsigned long long *)&a0[16]) = v108;
LABEL_534b2a:
    *((unsigned long long *)a0) = 2;
    goto LABEL_534cf4;
}
