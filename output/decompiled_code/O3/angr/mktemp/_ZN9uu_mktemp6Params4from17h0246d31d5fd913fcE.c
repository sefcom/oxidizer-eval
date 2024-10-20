long long uu_mktemp::Params::from::h0246d31d5fd913fc(unsigned long long a0[10], struct_1 *a1)
{
    unsigned long v0;  // [sp-0x2a8], Other Possible Types: unsigned long long
    struct_0 *v1;  // [sp-0x180]
    void* v2;  // [bp-0x170]
    unsigned long long v3;  // [sp-0x168]
    unsigned long long v4;  // [sp-0x160]
    unsigned long long v5;  // [sp-0x158]
    void* v6;  // [sp-0x150]
    unsigned long long v7;  // [sp-0x148]
    char *v8;  // [sp-0x140], Other Possible Types: unsigned long long
    int v9;  // [bp-0x138], Other Possible Types: void*, char, unsigned long long
    unsigned long long v10;  // [sp-0x130]
    void* v11;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x120]
    unsigned long long v13;  // [sp-0x118]
    void* v14;  // [sp-0x110]
    char v15;  // [bp-0x108], Other Possible Types: unsigned long, unsigned long long
    int v16;  // [sp-0x100], Other Possible Types: unsigned long, unsigned long long
    void* v17;  // [sp-0xf8], Other Possible Types: unsigned long
    void* v18;  // [sp-0xf0], Other Possible Types: unsigned long
    unsigned long long v19;  // [sp-0xe8]
    void* v20;  // [sp-0xe0]
    unsigned long long v22;  // [sp-0xd0]
    struct_0 *v23;  // [sp-0xc8]
    void* v24;  // [bp-0xc0], Other Possible Types: struct_0 *, char, unsigned long, unsigned long long
    void* v25;  // [sp-0xb8], Other Possible Types: unsigned long long
    void* v26;  // [sp-0xb0], Other Possible Types: char *, unsigned long long
    char *v27;  // [sp-0xa8], Other Possible Types: unsigned long long
    char v28;  // [bp-0xa7]
    char v29;  // [bp-0xa6]
    void* v30;  // [sp-0xa0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v31;  // [sp-0x98]
    char *v32;  // [sp-0x90], Other Possible Types: unsigned long long
    char v33;  // [bp-0x88]
    char v34;  // [bp-0x80]
    char v35;  // [bp-0x78]
    char v36;  // [bp-0x70]
    char v37;  // [bp-0x68]
    char v38;  // [bp-0x60]
    unsigned long v39;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v40;  // [sp-0x50]
    char v41;  // [bp-0x48]
    char v42;  // [bp-0x40]
    char v43;  // [bp-0x38]
    unsigned long long v45[10];  // r15
    struct_0 *v46;  // rsi
    unsigned long long v47;  // r14
    unsigned long long v48;  // rsi
    char *v49;  // rdx
    unsigned long long v50;  // rcx
    char *v51;  // rsi
    char *v52;  // rax
    unsigned long long v53;  // r9
    char *v54;  // r10
    char *v55;  // r11
    char *v56;  // r8
    char *v57;  // r12
    char v58;  // al
    char *v59;  // r12
    unsigned long long v60;  // rbp
    char *v64;  // r8
    char *v65;  // rbp
    char *v66;  // r13
    char *v67;  // rbx
    char *v68;  // rdi
    char *v69;  // rdi
    char *v71;  // rdx
    char *v73;  // rsi
    char *v75;  // r8
    char *v76;  // r13
    char *v78;  // rdi
    char *v79;  // rdi
    unsigned long long v80;  // rsi
    unsigned long long v81;  // r11
    struct_0 *v82;  // r12
    unsigned long long v83;  // r11
    unsigned long long v84;  // rcx
    char v85;  // bpl
    unsigned long long v86;  // rdx
    unsigned long long v87;  // r9
    unsigned int v89;  // edx
    unsigned long long v90;  // rsi
    char v91;  // r14b
    unsigned long long v92;  // rax
    char *v93;  // rax
    struct_0 *v94;  // rdi
    struct_0 *v95;  // rdi
    struct_0 *v96;  // r14
    unsigned long long v97;  // rax
    struct_0 *v98;  // r14
    unsigned long long v99;  // rcx
    unsigned long long v100;  // rdx
    struct_0 *v101;  // r14
    unsigned int v102;  // ecx
    unsigned int v103;  // edx
    struct_0 *v104;  // r14
    unsigned long long v105;  // rax
    unsigned long long v106;  // rcx
    unsigned long long v107;  // rdx
    unsigned int v108;  // ecx
    unsigned int v109;  // edx
    struct_0 *v110;  // r14
    unsigned long long v111;  // rdi
    unsigned long long v112;  // r13
    unsigned long long v113;  // rdx
    struct_0 *v114;  // rbp
    struct_0 *v115;  // rax
    struct_0 *v116;  // rcx
    unsigned long long v117;  // rax
    unsigned long long v118;  // rax
    unsigned long long v119;  // rdi
    unsigned long long v120;  // r12
    unsigned long long v121;  // rax
    unsigned long long v122;  // rdx
    unsigned long long v123;  // rcx
    unsigned long long v124;  // rax
    unsigned long v125;  // r12
    unsigned long long v126;  // r12
    struct_0 *v127;  // rbp
    void* v128;  // rax
    char *v129;  // rbp
    unsigned long long v130;  // r13
    char *v131;  // rax
    unsigned long long v132;  // rax
    unsigned long long v133;  // r14

    a1 = a1;
    v5 = a1->field_30;
    if (v5 == 0x8000000000000000)
    {
        v46 = a1->padding_8;
        v47 = a1->field_10;
    }
    else
    {
        v47 = a1->field_10;
        if (!(v47) || !((v46 = a1->padding_8, (&v46->field_-3)[v47] == 88)))
        {
            a0[3] = a1->field_10;
            *((int128_t *)&a0[1]) = *((int128_t *)&a1->field_0);
            a0[4] = 9223372036854775809;
            a0[0] = 0x8000000000000000;
            v48 = a1->field_18;
            if (v48 != 0x8000000000000000 && v48)
                __rust_dealloc(a1->field_20);
            if (v5)
            {
                v1 = a1->field_38;
                __rust_dealloc(v1);
                return v45;
            }
            return v45;
        }
    }
    v1 = v46;
    core::str::pattern::StrSearcher::new::h5c57f06bc9dca553(&v24, v1, v3, "XXXsrc/uu/mktemp/src/mktemp.rs", 3);
    v3 = v47;
    v45[0] = a0;
    if (v24)
    {
        v49 = v32;
        v50 = *((long long *)&v36);
        v51 = *((long long *)&v38);
        v52 = v49 - v51;
        if (!(v52 < v50))
            goto LABEL_488006;
        v53 = *((long long *)&v33);
        v54 = *((long long *)&v35);
        v55 = *((long long *)&v37);
        v56 = v26;
        v8 = v27;
        v57 = *((long long *)&v34);
        v7 = v55 + 1;
        v4 = &g_4f0090;
        a1 = a1;
        goto LABEL_487ea3;
    }
    if (!(!v29))
        goto LABEL_488006;
    v58 = v28;
    v59 = v26;
    if (!v59)
    {
        v82 = 3;
        v45 = v45;
        v81 = v3;
        if (!(!v58))
            goto LABEL_4880d8;
        goto LABEL_488010;
    }
    v79 = *((long long *)&v35);
    v80 = *((long long *)&v36);
    v45 = v45;
    v81 = v3;
    if (v59 < v80)
    {
        if (!(*((char *)(v79 + v59)) < 192))
            goto LABEL_4886c5;
LABEL_488146:
        goto LABEL_4880f0;
    }
    if (!(v59 == v80))
        goto LABEL_488146;
LABEL_4886c5:
    v84 = *((char *)(v79 + v59 - 1));
    if ((char)v84 < 0)
    {
        v86 = *((char *)(v79 + v59 - 2));
        if ((char)v86 > 191)
        {
            v89 = (unsigned int)v86 & 31;
        }
        else
        {
            v87 = *((char *)(v79 + v59 - 3));
            v89 = (unsigned int)v86 & 63 | ((char)v87 <= 191 ? (unsigned int)v87 & 15 : (unsigned int)v87 & 63 | (*((char *)(v79 + v59 - 4)) & 7) * 64) * 64;
        }
        v84 = (unsigned int)v84 & 63 | v89 * 64;
    }
    if (v58)
        goto LABEL_4880cb;
    v92 = -1;
    if ((unsigned int)v84 >= 128)
    {
        v92 = -2;
        if ((unsigned int)v84 >= 0x800)
            v92 = -0x100 | (unsigned int)v84 < 0x10000 | -4;
    }
    v93 = &v59[v92];
    if (!&v59[v92])
    {
        v82 = 3;
        goto LABEL_4880d8;
    }
    if (v93 >= v80)
    {
        if (!(v93 == v80))
            goto LABEL_488b57;
LABEL_488b6c:
        if (*((char *)(v79 + v93 - 1)) < 0)
            goto LABEL_4880cb;
    }
    else
    {
        if (!(*((char *)(v79 + v93)) <= 191))
            goto LABEL_488b6c;
LABEL_488b57:
        goto LABEL_4880f0;
    }
    while (true)
    {
LABEL_487ea3:
        v0 = v30;
        if (!((char)(*((char *)&v0 + ((*((char *)(v54 + v52)) & 63) >> 3)) >> (*((char *)(v54 + v52)) & 63 & 7)) & 1))
        {
            if (v53 == -1)
                goto LABEL_487f8d;
            goto LABEL_487f8a;
        }
        v65 = v64;
        if (v65 + 1 < v51)
        {
            v66 = -(v65);
            v67 = &v65[v7];
            v68 = v52 + v65 - 1;
            while (true)
            {
                v69 = v68;
                if (!v66)
                    break;
                if (!(v69 < v50))
                    goto LABEL_488bb2;
                v60 = *(v67);
                v66 += 1;
                v67 += 1;
                if ((char)v60 != *((char *)(v54 + v69)))
                {
                    v71 = v49 - v56 - v66;
                    goto LABEL_487f79;
                }
            }
        }
        else if (v65)
        {
            v4 = &g_4f0078;
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        }
        v76 = v75;
        if (v76 >= v73)
            break;
        if (v76 >= v51)
        {
            v4 = &g_4f0048;
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        }
        if (v52 + v76 >= v50)
        {
            v4 = &g_4f0060;
LABEL_488bb2:
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        }
        v60 = *((char *)(v55 + v76));
        if ((char)v60 == *(v54 + v52 + v76))
            continue;
        v78 = v8;
        v71 = v49 - v78;
LABEL_487f79:
        v52 = v71;
        a1 = a1;
        if (v53 == -1)
            goto LABEL_487f8d;
LABEL_487f8a:
LABEL_487f8d:
        v49 = v52;
        v52 = v49 - v51;
        if (v52 >= v50)
        {
LABEL_488006:
            v83 = v3;
LABEL_488010:
            if (v5 == 0x8000000000000000)
            {
                v11 = a1->field_10;
                *((int128_t *)&v9) = *((int128_t *)&a1->field_0);
                v85 = 0;
            }
            else
            {
                v24 = v1;
                v25 = &(&v24->field_-4)[v83];
                v26 = v83;
                _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h5571a877b7ef86a0(&v9, &v24);
                v85 = v60 | -0x100 | 1;
            }
            v45[3] = v11;
            *((int128_t *)&v45[1]) = (int128_t)v9;
            v45[4] = 9223372036854775810;
            v45[0] = 0x8000000000000000;
            v90 = a1->field_18;
            if (v90 != 0x8000000000000000 && v90)
                __rust_dealloc(a1->field_20);
            v91 = 0;
            goto LABEL_4889a6;
        }
    }
    v3 = v3;
LABEL_4880cb:
    v82 = v52 + 3;
    if (!v52 + 3)
    {
        v82 = 0;
        v1 = v1;
        while (true)
        {
            v96 = v1;
            if (v96 == v1)
                break;
            v97 = v96->field_-3;
            if ((char)v97 < 0)
            {
                v99 = (unsigned long long)v96->padding_-2;
                if ((char)v99 >= 192)
                {
                    v101 = &v96->padding_-2;
                    v102 = (unsigned int)v99 & 31;
                }
                else
                {
                    v100 = v96->field_-1;
                    if ((char)v100 >= 192)
                    {
                        v101 = &v96->field_-1;
                        v103 = (unsigned int)v100 & 15;
                    }
                    else
                    {
                        v101 = &v96->field_0;
                        v103 = (unsigned int)v100 & 63 | (v96->field_0 & 7) * 64;
                    }
                    v102 = (unsigned int)v99 & 63 | v103 * 64;
                }
                if (((unsigned int)v97 & 63 | v102 << 6) != 88)
                    goto LABEL_488247;
            }
            else
            {
                v98 = &v96->field_-3;
                if ((unsigned int)v97 == 88)
                    continue;
            }
        }
LABEL_488247:
        v110 = v98 - v1 + 1;
        goto LABEL_488254;
    }
LABEL_4880d8:
    if (v82 >= v81)
    {
        v95 = v1;
        if (v82 == v81)
            goto LABEL_488158;
LABEL_4880f0:
        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
    }
    else
    {
        v94 = v1;
        if (*((char *)(v94 + v82)) <= 191)
            goto LABEL_4880f0;
LABEL_488158:
        v104 = v95 + v82;
        while (v104 != v1)
        {
            v105 = v104->field_-3;
            if ((char)v105 < 0)
            {
                v106 = (unsigned long long)v104->padding_-2;
                if ((char)v106 >= 192)
                {
                    v104 = &v104->padding_-2;
                    v108 = (unsigned int)v106 & 31;
                }
                else
                {
                    v107 = v104->field_-1;
                    if ((char)v107 >= 192)
                    {
                        v104 = &v104->field_-1;
                        v109 = (unsigned int)v107 & 15;
                    }
                    else
                    {
                        v104 = &v104->field_0;
                        v109 = (unsigned int)v107 & 63 | (v104->field_0 & 7) * 64;
                    }
                    v108 = (unsigned int)v106 & 63 | v109 * 64;
                }
                if (((unsigned int)v105 & 63 | v108 << 6) != 88)
                    goto LABEL_488247;
            }
            else
            {
                v104 = &v104->field_-3;
                if ((unsigned int)v105 == 88)
                    continue;
            }
        }
    }
    v110 = 0;
LABEL_488254:
    v20 = a1->field_20;
    v7 = a1->field_18;
    if (v7 == 0x8000000000000000)
    {
        v8 = 1;
        v2 = 0;
        if (!v110)
            goto LABEL_488330;
LABEL_4882fa:
        if (v110 >= v3)
        {
            if (v110 != v3)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        else
        {
            if (*((char *)(v1 + v110)) <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        goto LABEL_488330;
    }
    v2 = a1->field_28;
    if (!v2)
    {
        v111 = 1;
    }
    else if (v2 < 0)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    else
    {
        v111 = __rust_alloc(v2, 1);
        if (!v111)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    v8 = v111;
    memcpy(v8, v20, v2);
    if (!(!v110))
        goto LABEL_4882fa;
LABEL_488330:
    std::path::Path::_join::h609728e54bd034cb(&v15, v8, v2, v1, v110);
    v23 = v82;
    v39 = v16;
    v40 = v17;
    v9 = 0;
    v10 = 1;
    v11 = 0;
    v32 = 32;
    v33 = 3;
    v24 = 0;
    v26 = 0;
    v30 = &v9;
    v31 = &g_4f0000;
    if ((char)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76(&v39, &v24))
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    v19 = v9;
    v4 = v10;
    v112 = v11;
    if (v15)
        __rust_dealloc(v39);
    v114 = v23;
    if (!a1->field_4b)
    {
LABEL_488489:
        v118 = 0x8000000000000000;
        if (v7 != 0x8000000000000000 && (v118 = std::path::Path::is_absolute::h3431a23d91045560(v1, v110), (char)v118))
        {
            v117 = 9223372036854775813;
            goto LABEL_4884ba;
        }
        v119 = v4;
        if (!v112 || *((char *)(v119 + v112 - 1)) != 47)
        {
            v121 = std::path::Path::parent::h65c9a340a6266f2d(v119, v112, v113, v116);
            if (!v121)
            {
                v13 = 1;
                v6 = 0;
            }
            else
            {
                v15 = v121;
                v16 = v122;
                v9 = 0;
                v10 = 1;
                v11 = 0;
                v32 = 32;
                v33 = 3;
                v24 = 0;
                v26 = 0;
                v30 = &v9;
                v31 = &g_4f0000;
                if ((char)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76(&v15, &v24))
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                v6 = v9;
                v13 = v10;
            }
            v22 = 0;
            v124 = std::path::Path::file_name::h79ecbb7850a9c7f3(v4, v112, v122, v123);
            if (!v124)
            {
                v120 = 1;
                v18 = 0;
                v14 = 0;
            }
            else
            {
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v24, v124, v122);
                if (v24)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                if (!v125)
                {
                    v120 = 1;
                }
                else
                {
                    v126 = v26;
                    if (v125 < 0)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v120 = __rust_alloc(v126, 1);
                    if (!v120)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v127 = v23;
                }
                v14 = v126;
                memcpy(v120, v25, v14);
                v18 = 0;
            }
        }
        else
        {
            v120 = 1;
            v18 = v118 | -0x100 | 1;
            v14 = 0;
            v6 = v19;
            v13 = v119;
            v22 = v112;
        }
        v128 = v5;
        if (v128 == 0x8000000000000000)
        {
            v16 = 1;
            v17 = 0;
            v128 = 0;
        }
        else
        {
            *((int128_t *)&v16) = *((int128_t *)&a1->field_38);
        }
        v15 = v128;
        if (v114)
        {
            if (v3 <= v114)
            {
                if (v3 != v114)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            else
            {
                if (*((char *)(v1 + v114)) <= 191)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
        }
        v39 = v1 + v114;
        v40 = v3 - (char *)v114;
        v9 = &v39;
        v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha50f48721d06c012;
        v11 = &v15;
        v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v24 = &g_416360;
        v25 = 2;
        v30 = 0;
        v26 = &v9;
        v27 = 2;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v41, &v24);
        v3 = *((long long *)&v41);
        v129 = *((long long *)&v42);
        v130 = *((long long *)&v43);
        if (v130 > 15)
        {
            if (!(core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(47, v129) == 1))
                goto LABEL_488a0a;
            v45[1] = v3;
            v45[2] = v129;
            v45[3] = v130;
            v45[4] = 9223372036854775812;
            v45[0] = 0x8000000000000000;
            if (v15)
                __rust_dealloc(v16);
            v133 = v6;
            if (v14)
                __rust_dealloc(v120);
            if (v133)
                __rust_dealloc(v13);
            v85 = v129 | -0x100 | 1;
            v91 = v133 | -0x100 | 1;
            if ((char)v18)
            {
LABEL_488967:
                if (v2)
                    __rust_dealloc(v8);
                if (v7 << 1)
                    __rust_dealloc(v20);
LABEL_4889a6:
                if (v5 != 0x8000000000000000 && !v91 && v5)
                    __rust_dealloc(a1->field_38);
                if (!v85)
                    return v45;
LABEL_4889dd:
                if (a1->field_0)
                {
                    __rust_dealloc(v1);
                    return v45;
                }
                return v45;
            }
        }
        else
        {
            if (!v130)
                goto LABEL_488a0a;
            v131 = 0;
            while (*((char *)(v129 + v131)) != 47)
            {
                v131 += 1;
                if (v130 == v131)
                    goto LABEL_488a0a;
            }
LABEL_488a0a:
            v45[0] = v6;
            v45[1] = v13;
            v45[2] = v22;
            v132 = v14;
            v45[3] = v132;
            v45[4] = v120;
            v45[5] = v132;
            v45[6] = v3;
            v45[7] = v129;
            v45[8] = v130;
            v45[9] = v23 - v110;
            if (v15)
                __rust_dealloc(v16);
            if (!(char)v18 && v19)
                __rust_dealloc(v4);
            if (v2)
                __rust_dealloc(v8);
            if (v7 << 1)
            {
                __rust_dealloc(v20);
                goto LABEL_4889dd;
            }
        }
    }
    else if (v110 > 15)
    {
        if (core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(47, v1) == 1)
            goto LABEL_488479;
        goto LABEL_488489;
    }
    else
    {
        if (!v110)
            goto LABEL_488489;
        v115 = 0;
        v116 = v1;
        while (*((char *)(v116 + v115)) != 47)
        {
            v115 = &v115->field_-3;
            if (v110 == v115)
                goto LABEL_488489;
        }
LABEL_488479:
        v117 = 9223372036854775811;
LABEL_4884ba:
        v45[3] = a1->field_10;
        *((int128_t *)&v45[1]) = *((int128_t *)&a1->field_0);
        v45[4] = v117;
        v45[0] = 0x8000000000000000;
        v85 = 0;
        v91 = 0;
    }
    if (v19)
        __rust_dealloc(v4);
    goto LABEL_488967;
}
