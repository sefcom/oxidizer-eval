long long uu_pr::build_options(unsigned long a0, unsigned long long a1, unsigned long long a2[2], unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x33f]
    char v1;  // [bp-0x33e]
    char v2;  // [bp-0x33d]
    unsigned int v3;  // [bp-0x33c]
    struct_0 *v4;  // [bp-0x338]
    char v5;  // [bp-0x329]
    int v6;  // [bp-0x328], Other Possible Types: char, unsigned long long
    int v7;  // [bp-0x328]
    unsigned long long v8;  // [bp-0x320]
    unsigned long long v9;  // [bp-0x320]
    int v10;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x318]
    unsigned long long v12;  // [bp-0x310]
    unsigned long v13;  // [bp-0x308], Other Possible Types: unsigned long long
    int v14;  // [bp-0x308]
    int v15;  // [bp-0x308]
    char v16;  // [bp-0x300]
    int v17;  // [bp-0x2f8]
    unsigned long long v18;  // [bp-0x2e8]
    unsigned long long v19;  // [bp-0x2e0]
    unsigned long long v20;  // [bp-0x2d8]
    unsigned long long v21;  // [bp-0x2d0]
    int v22;  // [bp-0x2c8], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x2c8]
    int v24;  // [bp-0x2c8]
    unsigned long long v25;  // [bp-0x2c0]
    void* v26;  // [bp-0x2c0], Other Possible Types: int
    int v27;  // [bp-0x2b8], Other Possible Types: char, unsigned long long
    unsigned long long v28;  // [bp-0x2b8]
    int v29;  // [bp-0x2b0], Other Possible Types: void*, char *
    char *v30;  // [bp-0x2a8], Other Possible Types: char, unsigned long long
    unsigned long long v31;  // [bp-0x2a8]
    unsigned long long v32;  // [bp-0x2a8]
    unsigned long long v33;  // [bp-0x2a0]
    int v34;  // [bp-0x298]
    int v35;  // [bp-0x288], Other Possible Types: char
    unsigned long long v36[2];  // [bp-0x278], Other Possible Types: unsigned long long
    unsigned int v37;  // [bp-0x26c]
    int v38;  // [sp-0x268]
    int v39;  // [sp-0x268]
    unsigned long long v40;  // [bp-0x260]
    char v41;  // [bp-0x258], Other Possible Types: unsigned long long
    int v42;  // [bp-0x250]
    unsigned long long v43;  // [bp-0x240]
    unsigned long long v44;  // [bp-0x238]
    unsigned long long v45;  // [bp-0x228]
    unsigned long v46;  // [bp-0x210]
    unsigned long long v47;  // [bp-0x208]
    unsigned int v48;  // [bp-0x1fc]
    int v49;  // [bp-0x1f8], Other Possible Types: char
    unsigned long long v50;  // [bp-0x1e8]
    int v51;  // [bp-0x1d8], Other Possible Types: char
    unsigned long long v52;  // [bp-0x1c8]
    char v53;  // [bp-0x1b8]
    int v54;  // [bp-0x1b8]
    unsigned long long v55;  // [bp-0x1a8]
    int v56;  // [bp-0x1a0], Other Possible Types: char
    unsigned long long v57;  // [bp-0x190]
    int v58;  // [bp-0x188], Other Possible Types: char
    unsigned long long v59;  // [bp-0x178]
    int v60;  // [bp-0x168], Other Possible Types: char
    unsigned long long v61;  // [bp-0x158]
    unsigned long long v62;  // [bp-0x148]
    unsigned long v63;  // [bp-0x140]
    char v64;  // [bp-0x138]
    int v65;  // [bp-0x138]
    unsigned long v66;  // [bp-0x128]
    unsigned long long v67;  // [bp-0x120]
    int v68;  // [bp-0x118], Other Possible Types: char
    unsigned long long v69;  // [bp-0x108]
    char v70;  // [bp-0xf8]
    unsigned long long v71;  // [bp-0xd8]
    char *v72;  // [bp-0xd0]
    unsigned long long v73;  // [bp-0xc8]
    int v74;  // [bp-0xc0], Other Possible Types: char
    int v75;  // [bp-0xb0]
    unsigned long v76;  // [bp-0xa0]
    int v77;  // [bp-0x98], Other Possible Types: char
    int v78;  // [bp-0x88], Other Possible Types: char
    int v79;  // [bp-0x78], Other Possible Types: char
    int v80;  // [bp-0x68], Other Possible Types: char
    int v81;  // [bp-0x58], Other Possible Types: char
    int v82;  // [bp-0x48], Other Possible Types: char
    char v84;  // r14b
    unsigned long long v85;  // rsi
    unsigned long long v86;  // rax
    unsigned long long v87;  // r13
    char v88;  // cc_dep1
    unsigned long long v89;  // rax
    unsigned long long v90;  // r12
    unsigned long long v91[3];  // rax
    int v92;  // xmm0
    unsigned int v93;  // eax
    unsigned long long v94;  // r14
    int v95;  // xmm0
    int v96;  // xmm1
    unsigned long long v97;  // rcx
    unsigned long long v98;  // rax
    int v99;  // xmm0
    void* v100;  // rdi
    int v101;  // xmm0
    int v102;  // xmm1
    unsigned long long v103;  // rsi
    unsigned long long v104;  // rax
    char v105;  // bpl
    unsigned long long v106[3];  // rax
    unsigned long long v107[3];  // rax
    unsigned long long v108;  // rcx
    int v109;  // xmm2
    int v110;  // xmm3
    unsigned int v112;  // ebp
    char *v113;  // rax
    unsigned long long v114;  // rax
    unsigned long long v115;  // r12
    char v116;  // bpl
    int v117;  // xmm0
    int v118;  // xmm1
    unsigned long v119;  // rax
    int v120;  // xmm0
    char *v121;  // r14
    unsigned long long v122;  // rbp
    void* v123;  // r12
    char v124;  // r12b
    unsigned long v125;  // r15
    unsigned long long v126;  // 4096
    unsigned long long v128;  // rax
    unsigned long long v129;  // rdi
    unsigned long long v130;  // rax
    int v132;  // xmm1
    int v133;  // xmm2

    v1 = a1.get_flag("form-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-lin", 9);
    v84 = a1.get_flag("mergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 5);
    if (v84)
    {
        if ((char)a1.contains_id("columnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6))
        {
            v85 = "pr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ";
        }
        else
        {
            if (!(char)a1.get_flag("acrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6))
                goto LABEL_5ab6e3;
            v85 = "pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ";
        }
        uucore::mods::locale::get_message(&v6, v85, 30);
        v4->field_8 = 9223372036854775809;
        *((int128_t *)&v4->field_10) = *((int128_t *)&v6);
        *((unsigned long long *)&v4->padding_20[0]) = v10;
        v4->field_0 = 2;
        return a0;
    }
    else
    {
LABEL_5ab6e3:
        v5 = a1.get_flag("mergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 5);
        v6.try_get_one(a1, "headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-hel", 6);
        v86 = "headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-hel".unwrap(6, &v6);
        v36[0] = a2;
        if (v84)
        {
            v87 = 1;
        }
        else if (a3)
        {
            v87 = a2[0];
            v88 = a2[0].equal(a2[1], "-%b %d %H:%M %Ystartend \\s*\\+(\\d+:*\\d*)\\s*pr-error-invalid-pages-range\\s*-(\\d+)\\s*pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ", 1);
            if (!v88)
            {
                if (!(!v88))
                    goto LABEL_5ab783;
LABEL_5ab782:
            }
            else
            {
                if (!v88)
                    goto LABEL_5ab782;
LABEL_5ab783:
                v87 = 1;
            }
        }
        else
        {
            core::panicking::panic_bounds_check(0, 0, &g_755bb8); /* do not return */
        }
        v89 = v86.map_or(v87);
        v6.to_vec(v89, a2);
        v59 = v11;
        memcpy(&v58, &v6, 16);
        v6.default();
        v90 = v13;
        core::ptr::drop_in_place<uu_pr::NumberingMode>(&v6);
        uu_pr::parse_usize(&(char)v23, a1, "first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-colum", 17);
        v9 = v90;
        v6 = 9223372036854775813;
        if (v23 != 9223372036854775814)
        {
            v90 = v25;
            *((int128_t *)&v38) = *((int128_t *)&v27);
            v6.drop_in_place<core::result::Result<usize,uu_pr::PrError>>();
            if (v23 != 9223372036854775813)
            {
                *((int128_t *)&v4->field_18) = (int128_t)v38;
                v4->field_8 = v23;
                *((unsigned long long *)&v4->field_10) = v25;
                v4->field_0 = 2;
                ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v58);
                return a0;
            }
        }
        v6.try_get_one(a1, "number-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page", 12);
        v91 = "number-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page".unwrap(12, &v6);
        if (v91)
        {
            uu_pr::build_options::{{closure}}(&v6, v90, v91[1], v91[2]);
            v30 = v13;
            v92 = *((int128_t *)&v6);
            *((int128_t *)&v27) = *((int128_t *)&v11);
            v22 = v92;
        }
        else
        {
            v23 = 0x8000000000000000;
        }
        v74.or_else(&(char)v23, a1);
        v0 = a1.get_flag("double-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-co", 12);
        if (v0)
            alloc::slice::<impl [T]>::repeat(&v6, "\n argument -%b %d %H:%M %Ystartend \\s*\\+(\\d+:*\\d*)\\s*pr-error-invalid-pages-range\\s*-(\\d+)\\s*pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ", 1, 2);
        else
            v6.to_vec("\n argument -%b %d %H:%M %Ystartend \\s*\\+(\\d+:*\\d*)\\s*pr-error-invalid-pages-range\\s*-(\\d+)\\s*pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ", 1);
        v50 = v11;
        memcpy(&v49, &v6, 16);
        v6.to_vec("\n argument -%b %d %H:%M %Ystartend \\s*\\+(\\d+:*\\d*)\\s*pr-error-invalid-pages-range\\s*-(\\d+)\\s*pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ", 1);
        v61 = v11;
        memcpy(&v60, &v6, 16);
        if (!v84)
        {
            if (!a3)
                core::panicking::panic_bounds_check(0, 0, &g_755bd0); /* do not return */
            if (!(!(char)v36[0].equal(v36[1], "-%b %d %H:%M %Ystartend \\s*\\+(\\d+:*\\d*)\\s*pr-error-invalid-pages-range\\s*-(\\d+)\\s*pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ", 1)))
                goto LABEL_5ab9b4;
            v93 = uu_pr::file_last_modified_time(&v64, v36[0], v36[1]);
            v31 = v30;
        }
        else
        {
LABEL_5ab9b4:
            (char)v38.now();
            v23 = "%b %d %H:%M %Ystartend \\s*\\+(\\d+:*\\d*)\\s*pr-error-invalid-pages-range\\s*-(\\d+)\\s*pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ";
            v25 = 14;
            v28 = 8;
            v29 = 0;
            v30 = 0;
            v6.format_with_items(&(char)v38, &v23);
            v64.spec_to_string(&v6);
            v93 = (unsigned int)core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v6);
            v31 = v32;
        }
        v37 = v93 & 0xffffff00 | 1;
        v6.new("\\s*\\+(\\d+:*\\d*)\\s*pr-error-invalid-pages-range\\s*-(\\d+)\\s*pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ", 18);
        v70.unwrap(&v6, &g_755be8);
        (char)v23.captures_at(&v70, a4, a5);
        if ((int)v23 == 2)
        {
            v94 = 1;
            goto LABEL_5abb7d;
        }
        v18 = *((long long *)&v35);
        v95 = *((int128_t *)&v23);
        v96 = *((int128_t *)&v28);
        v17 = v34;
        *((int128_t *)&v15) = *((int128_t *)&v32);
        v10 = v96;
        v7 = v95;
        uu_pr::build_options::{{closure}}(&(char)v38, &v6);
        v97 = (long long)v38;
        v98 = v40;
        memcpy(&v77, &v41, 16);
        if (v97 != 9223372036854775813)
        {
            v94 = 1;
            if (v97 == 9223372036854775814)
                goto LABEL_5abb7d;
            v99 = v77;
            goto LABEL_5ac4b8;
        }
        v94 = v98;
LABEL_5abb7d:
        (char)v23.captures_at(&v70, a4, a5);
        if ((int)v23 == 2)
        {
            v100 = 0;
        }
        else
        {
            v18 = (long long)v35;
            v101 = *((int128_t *)&v23);
            v102 = *((int128_t *)&v28);
            v17 = v34;
            *((int128_t *)&v15) = *((int128_t *)&v31);
            v10 = v102;
            v7 = v101;
            v100 = uu_pr::build_options::{{closure}}(&v6);
        }
        v104 = v100.filter(v103);
        if (v104)
        {
            uu_pr::build_options::{{closure}}(&v6, v104, a2);
            v44 = v9;
            memcpy(&v78, &v11, 16);
            if (!(false))
            {
                v105 = 1;
            }
            else if (!(false))
            {
                *((void*)&v4->field_18) = v78;
                v4->field_8 = 9223372036854775813;
                *((unsigned long long *)&v4->field_10) = v44;
                v4->field_0 = 2;
                goto LABEL_5ac9a5;
            }
        }
        v6.try_get_one(a1, "pagespr-help-pagesFIRST_PAGE[:LAST_PAGE]headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGT", 5);
        v106 = "pagespr-help-pagesFIRST_PAGE[:LAST_PAGE]headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGT".unwrap(5, &v6);
        if (v106)
        {
            uu_pr::build_options::{{closure}}(&v6, v106[1], v106[2]);
            *((int128_t *)&v38) = *((int128_t *)&v9);
            *((int128_t *)&v26) = (int128_t)v38;
            v23 = 9223372036854775813;
            v6.call_once(a1, &v23);
            v97 = 9223372036854775813;
            v98 = v9;
            memcpy(&v79, &v11, 16);
            if (!(false))
            {
                v94 = v98;
            }
            else if (true)
            {
                v99 = v79;
                goto LABEL_5ac4b8;
            }
        }
        v46 = v94;
        v6.try_get_one(a1, "pagespr-help-pagesFIRST_PAGE[:LAST_PAGE]headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGT", 5);
        v107 = "pagespr-help-pagesFIRST_PAGE[:LAST_PAGE]headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGT".unwrap(5, &v6).filter();
        if (!v107)
        {
LABEL_5abe2d:
            if (v105)
            {
                v67 = v44;
                v108 = 1;
                if (!(v46 <= v44))
                    goto LABEL_5ac2fc;
                goto LABEL_5abe58;
            }
            else
            {
                v108 = 0;
                goto LABEL_5abe58;
            }
        }
        uu_pr::build_options::{{closure}}(&v6, v107[1], v107[2]);
        *((int128_t *)&v38) = *((int128_t *)&v9);
        if (0)
            goto LABEL_5abe2d;
        *((int128_t *)&v26) = (int128_t)v38;
        v23 = 9223372036854775813;
        v6.call_once(a1, &v23);
        v97 = 9223372036854775813;
        v98 = v9;
        memcpy(&v80, &v11, 16);
        if (false)
        {
            if (0)
                goto LABEL_5abe2d;
            v99 = v80;
        }
        else
        {
            v44 = v98;
            v67 = v98;
            v108 = 1;
            if (v46 <= v98)
            {
LABEL_5abe58:
                v63 = v108;
                uu_pr::parse_usize(&v23, a1, "lengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separat", 6);
                v36 = (v1 ^ 1) * 3 + 63;
                v8 = v36;
                v6 = 9223372036854775813;
                if (v23 == 9223372036854775814)
                {
LABEL_5abeb1:
                    v112 = (char)a1.get_flag("omit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-strin", 11) & 0xffffff00 | (char)a1.get_flag("omit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-strin", 11) ^ 1;
                    v36 -= 10;
                    goto LABEL_5abed5;
                }
                else
                {
                    v36 = v25;
                    *((int128_t *)&v38) = *((int128_t *)&v28);
                    v6.drop_in_place<core::result::Result<usize,uu_pr::PrError>>();
                    if (v23 == 9223372036854775813)
                    {
                        if (!(v36 < 10))
                            goto LABEL_5abeb1;
                        v112 = 0;
LABEL_5abed5:
                        if ((char)a1.get_flag("form-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-lin", 9))
                        {
                            v113 = 1.alloc_impl(1);
                            if (!v113)
                                alloc::alloc::handle_alloc_error(1, 1); /* do not return */
                            *(v113) = 12;
                            v71 = 1;
                            v72 = v113;
                            v73 = 1;
                            v6.from_utf8(&v71);
                            (char)v54.unwrap(&v6, &g_755c00);
                        }
                        else
                        {
                            v6.to_vec("\n argument -%b %d %H:%M %Ystartend \\s*\\+(\\d+:*\\d*)\\s*pr-error-invalid-pages-range\\s*-(\\d+)\\s*pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ", 1);
                            v55 = v11;
                            memcpy(&v53, &v6, 16);
                        }
                        v2 = a1.get_flag("acrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
                        v6.try_get_one(a1, "sep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 10);
                        v114 = "sep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs".unwrap(10, &v6);
                        if (!v114)
                        {
                            v6.try_get_one(a1, "separatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 9);
                            v114 = "separatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs".unwrap(9, &v6);
                        }
                        v48 = v112;
                        v3 = (int)v56.map_or_else(v114) & 0xffffff00 | 1;
                        v115 = 72;
                        if ((char)a1.contains_id("widthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-hel", 5))
                            v115 = ((char)a1.contains_id("separatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 9) ? 0x200 : 72);
                        uu_pr::parse_usize(&v23, a1, "widthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-hel", 5);
                        v8 = v115;
                        v6 = 9223372036854775813;
                        if (v23 != 9223372036854775814)
                        {
                            v115 = v25;
                            *((int128_t *)&v38) = *((int128_t *)&v28);
                            v6.drop_in_place<core::result::Result<usize,uu_pr::PrError>>();
                            if (v23 == 9223372036854775813)
                                goto LABEL_5ac11b;
                            *((int128_t *)&v4->field_18) = (int128_t)v38;
                            v4->field_8 = v23;
                            *((unsigned long long *)&v4->field_10) = v25;
                            v4->field_0 = 2;
LABEL_5ac98b:
                            ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v56);
LABEL_5ac998:
                            ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&(char)v54);
                        }
                        else
                        {
LABEL_5ac11b:
                            v47 = v115;
                            if (!(char)a1.get_flag("join-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 10))
                            {
                                uu_pr::parse_usize(&v6, a1, "page-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/", 10);
                                if (v6 == 9223372036854775814)
                                    goto LABEL_5ac169;
                                v45 = 1;
                                if (v6 == 9223372036854775813)
                                {
                                    v62 = v8;
LABEL_5ac175:
                                    v6.new("\\s*-(\\d+)\\s*pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ", 12);
                                    v3 = (int)v51.unwrap(&v6, &g_755c18) & 0xffffff00 | 1;
                                    v23.captures_at(&v51, a4, a5);
                                    if ((int)v23 == 2)
                                    {
                                        v116 = 1;
                                    }
                                    else
                                    {
                                        v18 = (long long)v35;
                                        v117 = *((int128_t *)&v23);
                                        v118 = *((int128_t *)&v28);
                                        v17 = v34;
                                        *((int128_t *)&v15) = *((int128_t *)&v31);
                                        v10 = v118;
                                        v7 = v117;
                                        uu_pr::build_options::{{closure}}(&(char)v38, &v6);
                                        v119 = (long long)v38;
                                        v115 = v40;
                                        memcpy(&v81, &v41, 16);
                                        if (v119 != 9223372036854775813)
                                        {
                                            v116 = 1;
                                            if (v119 != 9223372036854775814)
                                            {
                                                v120 = v81;
                                                goto LABEL_5ac8fb;
                                            }
                                        }
                                    }
                                    v121 = &v6;
                                    uu_pr::parse_usize(&v6, a1, "columnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
                                    v119 = v6;
                                    if (v6 == 9223372036854775814)
                                    {
                                        v29 = &v47;
                                        v22 = v56;
                                        v27 = v57;
                                        v30 = &v2;
                                        if (v116)
                                        {
                                            v6 = 0x8000000000000000;
                                            v3 = 0;
                                            core::ptr::drop_in_place<uu_pr::NumberingMode>(&v23);
                                            goto LABEL_5ac5fa;
                                        }
                                    }
                                    else
                                    {
                                        v115 = v8;
                                        if (v6 == 9223372036854775813)
                                        {
                                            v29 = &v47;
                                            memcpy(&v23, &v56, 16);
                                            v27 = v57;
                                        }
                                        else
                                        {
                                            v120 = (int128_t)v10;
LABEL_5ac8fb:
                                            *((void*)&v4->field_18) = v120;
                                            v4->field_8 = v119;
                                            *((unsigned long long *)&v4->field_10) = v115;
                                            v4->field_0 = 2;
                                            v3 = (unsigned int)v119 & 0xffffff00 | 1;
                                            goto LABEL_5ac955;
                                        }
                                    }
                                    v11 = v27;
                                    *((int128_t *)&v6) = *((int128_t *)&v23);
                                    v12 = v47;
                                    v13 = v115;
                                    v16 = v2;
LABEL_5ac5fa:
                                    uu_pr::parse_usize(&(char)v38, a1, "indentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
                                    v26 = 0;
                                    v22 = 9223372036854775813;
                                    v122 = (long long)v38;
                                    if (v122 == 9223372036854775814)
                                    {
                                        v123 = 0;
                                        goto LABEL_5ac66a;
                                    }
                                    else
                                    {
                                        v123 = v40;
                                        memcpy(&v82, &v41, 16);
                                        v22.drop_in_place<core::result::Result<usize,uu_pr::PrError>>();
                                        if (v122 == 9223372036854775813)
                                        {
LABEL_5ac66a:
                                            alloc::slice::<impl [T]>::repeat(&v22, " \\s*\\+(\\d+:*\\d*)\\s*pr-error-invalid-pages-range\\s*-(\\d+)\\s*pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ", 1, v123);
                                            v69 = v27;
                                            memcpy(&v68, &v22, 16);
                                            v124 = a1.get_flag("join-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 10);
                                            v125 = v5;
                                            v22.map_or_else((v6 != 0x8000000000000000 ? &v6 : 0), v125);
                                            v126 = a3;
                                            if (!v125)
                                                v126 = (v6 != 0x8000000000000000 ? &v6 : 0).map_or();
                                            v128 = v126;
                                            if (v124)
                                            {
                                                v129 = 0;
                                                v130 = v128;
                                            }
                                            else
                                            {
                                                v129 = v45;
                                                v130 = v62;
                                                if (v128 >= 2)
                                                {
                                                    if (v6 == 0x8000000000000000)
                                                        v121 = 0;
                                                    v130 = v121.map_or();
                                                    v129 = 1;
                                                }
                                            }
                                            *((unsigned long *)((char *)&v4->field_c0 + 8)) = v76;
                                            *((void*)&(&v4->field_b8)[1]) = v75;
                                            *((void*)((char *)&v4->field_a8 + 8)) = v74;
                                            v4->field_40 = v59;
                                            *((void*)&v4->field_30) = v58;
                                            *((unsigned long long *)((char *)&v4->field_48 + 8)) = v61;
                                            *((void*)&(&v4->field_40)[1]) = v60;
                                            *((unsigned long long *)&v4->field_60) = v50;
                                            *((void*)&v4->field_58) = v49;
                                            *((void*)((char *)&v4->field_60 + 8)) = v65;
                                            (&v4->field_70)[1] = v66;
                                            *((void*)&v4->field_78) = v54;
                                            v4->field_88 = v55;
                                            v132 = (int128_t)v10;
                                            v133 = (int128_t)v15;
                                            *((int128_t *)&v4->field_d0) = *((int128_t *)&v6);
                                            *((void*)&v4->field_d8) = v132;
                                            *((void*)&v4->field_e8) = v133;
                                            *((void*)&(&v4->field_88)[1]) = v68;
                                            *((unsigned long long *)((char *)&v4->field_90 + 8)) = v69;
                                            *((int128_t *)&v4->field_a0) = *((int128_t *)&v22);
                                            *((unsigned long long *)&v4->field_a8) = v27;
                                            v4->field_0 = v63;
                                            v4->field_8 = v44;
                                            *((unsigned long *)&v4->field_10) = v125;
                                            v4->field_18 = a3;
                                            *((unsigned long long *)&v4->padding_20[0]) = v129;
                                            v4->field_28 = v130;
                                            v4->field_f8 = v46;
                                            (&v4->field_f8)[1] = v36;
                                            *((char *)&v4->field_100) = v0;
                                            *((char *)&v4->field_100 + 1) = v48;
                                            *((char *)&v4->field_100 + 2) = v1;
                                            *((char *)&v4->field_100 + 3) = v124;
                                            v3 = 0;
                                            core::ptr::drop_in_place<regex::regex::string::Regex>(&v51);
                                            v37 = 0;
                                            core::ptr::drop_in_place<regex::regex::string::Regex>(&v70);
                                            return a0;
                                        }
                                        *((void*)&v4->field_18) = v82;
                                        v4->field_8 = v122;
                                        *((unsigned long long *)&v4->field_10) = v40;
                                        v4->field_0 = 2;
                                        v3 = 0;
                                        v6.drop_in_place<core::option::Option<uu_pr::ColumnModeOptions>>();
                                        v3 = 0;
LABEL_5ac955:
                                        core::ptr::drop_in_place<regex::regex::string::Regex>(&v51);
                                        if (!(char)v3)
                                            goto LABEL_5ac998;
                                        goto LABEL_5ac98b;
                                    }
                                }
                                else
                                {
                                    *((int128_t *)&v4->field_18) = *((int128_t *)&v11);
                                    v4->field_8 = v6;
                                    *((unsigned long long *)&v4->field_10) = v8;
                                    v4->field_0 = 2;
                                    goto LABEL_5ac98b;
                                }
                            }
                            else
                            {
LABEL_5ac169:
                                v45 = 0;
                                goto LABEL_5ac175;
                            }
                        }
                    }
                    else
                    {
                        *((int128_t *)&v4->field_18) = (int128_t)v38;
                        v4->field_8 = v23;
                        *((unsigned long long *)&v4->field_10) = v36;
                        v4->field_0 = 2;
                        goto LABEL_5ac9a5;
                    }
                }
            }
            else
            {
LABEL_5ac2fc:
                v6.to_vec("startend \\s*\\+(\\d+:*\\d*)\\s*pr-error-invalid-pages-range\\s*-(\\d+)\\s*pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ", 5);
                v27 = v11;
                *((int128_t *)&v22) = *((int128_t *)&v6);
                v6.spec_to_string(&v46);
                v41 = v27;
                *((int128_t *)&v39) = *((int128_t *)&v23);
                *((int128_t *)&v42) = *((int128_t *)&v6);
                v43 = v11;
                v6.to_vec("end \\s*\\+(\\d+:*\\d*)\\s*pr-error-invalid-pages-range\\s*-(\\d+)\\s*pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ", 3);
                v52 = v11;
                memcpy(&v51, &v6, 16);
                v6.spec_to_string(&v67);
                v27 = v52;
                v24 = v51;
                *((int128_t *)&v29) = *((int128_t *)&v6);
                v33 = v11;
                v109 = *((int128_t *)&v41);
                v110 = (int128_t)(&v42)[8];
                *((int128_t *)&v7) = (int128_t)v39;
                v10 = v109;
                v14 = v110;
                v20 = v31;
                v21 = v33;
                v18 = v27;
                v19 = v29;
                v17 = v51;
                (unsigned long long)v24.from_iter(&v6);
                uucore::mods::locale::get_message_with_args(&v6, "pr-error-invalid-pages-range\\s*-(\\d+)\\s*pr-error-across-merge-conflictpr-error-column-merge-conflictinvalid + argument /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/regex/string.rsinvalid --pages argument invalid - argument ", 28, &(unsigned long long)v24);
                *((unsigned long long *)&v4->padding_20[0]) = v11;
                *((int128_t *)&v4->field_10) = *((int128_t *)&v6);
                v4->field_8 = 9223372036854775809;
                v4->field_0 = 2;
                goto LABEL_5ac9a5;
            }
        }
LABEL_5ac4b8:
        *((void*)&v4->field_18) = v99;
        v4->field_8 = v97;
        *((unsigned long long *)&v4->field_10) = v98;
        v4->field_0 = 2;
LABEL_5ac9a5:
        core::ptr::drop_in_place<regex::regex::string::Regex>(&v70);
        ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v64);
        ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v60);
        ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v49);
        v74.drop_in_place<core::option::Option<uu_pr::NumberingMode>>();
        ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v58);
        return a0;
    }
}
