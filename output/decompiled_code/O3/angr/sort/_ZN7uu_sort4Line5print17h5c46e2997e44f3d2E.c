long long uu_sort::Line::print::h5c46e2997e44f3d2(struct struct_0 **a0, struct_3 *a1, struct_4 *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x218]
    char *v1;  // [bp-0xf8], Other Possible Types: char
    char v2;  // [bp-0xf0], Other Possible Types: unsigned long long
    char v3;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xe0]
    char v5;  // [bp-0xd8]
    unsigned long v6;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xc8]
    void* v8;  // [sp-0xc0], Other Possible Types: unsigned long long
    int v9;  // [bp-0xb8], Other Possible Types: char, unsigned long long
    void* v10;  // [sp-0xb0]
    unsigned long v11;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x90]
    char v13;  // [bp-0x88]
    char v14;  // [bp-0x80]
    char v15;  // [bp-0x78]
    unsigned long long v16;  // [sp-0x70]
    void* v17;  // [sp-0x68]
    unsigned long long v18;  // [sp-0x60]
    void* v19;  // [sp-0x58]
    struct_1 *v20;  // [sp-0x50]
    unsigned long long v21;  // [sp-0x40]
    unsigned long long v22;  // [sp-0x38]
    char *v24;  // r12
    unsigned long v25;  // rbx
    unsigned long long v26;  // rbx
    unsigned long v27;  // rbx
    char *v28;  // r14
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax
    char *v31;  // r14
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rcx
    struct_1 *v34;  // r13
    unsigned long long v35;  // r8
    unsigned long long v36;  // r9
    int v37;  // ymm0
    char *v38;  // r12
    unsigned long long v39;  // r14
    char *v40;  // rdx
    char *v41;  // rdx
    char *v42;  // rsi
    char *v43;  // r15
    unsigned long long v44;  // r15
    unsigned long long v45;  // rbx
    unsigned long long v46;  // rbx
    unsigned long long v47;  // r15
    unsigned long long v48;  // rax
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rsi
    void* v51;  // rsi
    char *v52;  // rax
    char *v53;  // rax
    void* v54;  // rdx
    struct_2 *v55;  // r14
    void* v56;  // rcx
    char *v57;  // rax
    char *v58;  // rcx
    char *v59;  // rsi
    char *v60;  // rdi
    unsigned long long v61;  // r8
    unsigned long long v62;  // r9
    void* v63;  // r9
    unsigned long long v64;  // r10
    unsigned long long v65;  // r11
    char *v66;  // rbp
    unsigned long long v68;  // rbx
    unsigned long long v69;  // r14
    unsigned long long v71;  // rbx
    char *v72;  // r8
    unsigned long long v73;  // rbp
    unsigned long long v74;  // r15
    char v76[4];  // r8
    void* v77;  // rdx
    char v78[4];  // r8
    char *v79;  // r10
    unsigned long long v80;  // rsi
    char v81[4];  // rdi
    unsigned long long v82;  // r9
    char v83[4];  // r8
    unsigned int v84;  // r10d
    unsigned int v85;  // ebp
    unsigned int v86;  // r11d
    unsigned int v87;  // r10d
    unsigned int v88;  // edi
    unsigned int v89;  // r9d
    void* v90;  // r15
    unsigned int v91;  // r8d
    char *v92;  // rcx
    unsigned long long v93;  // rsi
    char *v94;  // rbp
    unsigned long long v95;  // rbx
    void* v97;  // r8
    char *v98;  // r12
    unsigned long long v99;  // r15
    unsigned long long v100;  // r9
    char *v101;  // rsi
    unsigned long long v102;  // rcx
    unsigned long long v103;  // rcx
    unsigned long long v104;  // r10
    unsigned long long v105;  // r11
    unsigned int v106;  // r10d
    unsigned int v107;  // r11d
    char *v110;  // rbp
    char *v111;  // rdi
    unsigned long long v112;  // rbx
    char *v113;  // rsi
    char *v114;  // rdi
    unsigned long long v115;  // rbx
    char *v116;  // rdx
    struct_5 *v117;  // rcx
    struct_6 *v118;  // rcx
    unsigned long long v119;  // rax

    v24 = *(a0);
    if (a2->field_7c)
    {
        v26 = v25;
        alloc::str::_$LT$impl$u20$str$GT$::replace::h9214f2fcb40bef0c(&v13, v24, v26);
        v3 = &v13;
        v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v6 = &g_592938;
        v7 = 2;
        v10 = 0;
        v8 = &v3;
        v9 = 1;
        v29 = std::io::Write::write_fmt::hea334da98541fef9(a1, &v6);
        if (v29)
            goto LABEL_4c2669;
        v17 = 0;
        v18 = 8;
        v19 = 0;
        uu_sort::tokenize::h70667f0b27298df7(v24, v26, a2->field_78, &v17);
        v20 = a2->field_8;
        v16 = a2->field_10;
        v32 = v26;
        if (v16)
        {
            v34 = v20;
            v22 = 56 * v16 + (char *)v34;
            v21 = -(v32);
            v2 = v32;
            v1 = v24;
            do
            {
                v38 = uu_sort::FieldSelector::get_range::h91411669e247756b(v34, v24, v32, v18, v19);
                v39 = v34->field_35;
                if ((unsigned int)v39 >= 2)
                {
                    if ((unsigned int)v39 != 2)
                    {
                        if (!((unsigned int)v39 == 3))
                            goto LABEL_4c20b0;
                        v43 = v116;
                        v44 = v43 - v38;
                        v45 = v2;
                        if (v43 < v38)
                        {
LABEL_4c26ad:
                            goto LABEL_4c2700;
                        }
                        else
                        {
                            if (v38)
                            {
                                if (v38 < v45)
                                {
                                    if (*((char *)(v1 + v38)) <= 191)
                                        goto LABEL_4c26ad;
                                }
                                else
                                {
                                    if (!(v38 == v45))
                                        goto LABEL_4c26ad;
                                }
                            }
                            if (v116)
                            {
                                if (v116 < v45)
                                {
                                    if (*((char *)(v1 + v116)) <= 191)
                                        goto LABEL_4c26ad;
                                }
                                else
                                {
                                    if (!(v116 == v45))
                                        goto LABEL_4c26ad;
                                }
                            }
                            v52 = v1;
                            v6 = v52 + v38;
                            v7 = v116 + v52;
                            v8 = 0;
                            v9 = 0;
                            v53 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0b05f716f327dd71(v52 + v38, v44);
                            v55 = &g_592e70.field_0;
                            v56 = 0;
                            do
                            {
                                v59 = v55->field_8;
                                if (!v59)
                                {
LABEL_4c1c65:
                                    v73 = core::iter::traits::iterator::Iterator::try_fold::h86ce82827ab65ca4(&v6, &v9);
                                    if (v55->field_10)
                                    {
                                        if ((unsigned int)v116 == 0x110000)
                                            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                                        core::iter::traits::iterator::Iterator::try_fold::h86ce82827ab65ca4(&v6, &v9);
                                        if ((unsigned int)v116 != 0x110000)
                                        {
                                            core::iter::traits::iterator::Iterator::try_fold::h86ce82827ab65ca4(&v6, &v9);
                                            if ((unsigned int)v116 != 0x110000 && (unsigned int)v116 != 0x110000)
                                                goto LABEL_4c1f4b;
                                        }
                                    }
                                    goto LABEL_4c1f42;
                                }
                                v60 = v55->field_0;
                                if (v59 < v116)
                                    goto LABEL_4c1ba0;
                                if (v59 == v116 && (v61 = (unsigned long long)*(v53), v62 = (unsigned long long)*(v60), ((char)((unsigned long long)(char)((v61 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v61) == ((char)((unsigned long long)(char)((v62 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v62)))
                                {
                                    v63 = 0;
                                    if (v59 + 1 == v63)
                                        goto LABEL_4c1c65;
                                    v64 = *((char *)(v53 + v63 + 1));
                                    v65 = *((char *)(v60 + v63 + 1));
                                    v63 += 1;
                                    if (((char)(((v64 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v64) == ((char)(((v65 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v65))
                                        continue;
                                }
LABEL_4c1ba0:
                                v56 += 24;
                                v55 = &g_592e70.field_0 + v56;
                            } while (v56 != 288);
LABEL_4c1f42:
LABEL_4c1f4b:
                            v38 = &v38[v73];
                            v90 = v74 - v73;
                            if (v73 > v74)
                                v90 = 0;
                            v94 = v90 + v38;
                            goto LABEL_4c20b0;
                        }
                    }
                    v42 = v116;
                    if (v42 < v38)
                        goto LABEL_4c2700;
                    v46 = v2;
                    if (v38)
                    {
                        if (v38 < v46)
                        {
                            if (*((char *)(v1 + v38)) <= 191)
                                goto LABEL_4c26ce;
                        }
                        else
                        {
                            if (!(v38 == v46))
                                goto LABEL_4c26ce;
                        }
                    }
                    if (v116)
                    {
                        if (v116 < v46)
                        {
                            if (*((char *)(v1 + v116)) <= 191)
                                goto LABEL_4c26ce;
                        }
                        else
                        {
                            if (v116 != v46)
                            {
LABEL_4c26ce:
                                goto LABEL_4c2700;
                            }
                        }
                    }
                    v48 = uu_sort::get_leading_gen::hf862211208a93c80(v1 + v38, v42 - v38, v116);
                    v38 = &v38[v48];
                    v54 = &v116[-1 * v48];
                    if (v48 > v116)
                        v54 = 0;
                    v66 = v54 + v38;
                    goto LABEL_4c20b0;
                }
                v40 = v116;
                if (v40 < v38)
                {
LABEL_4c260e:
                    goto LABEL_4c2700;
                }
                if (v38)
                {
                    if (v38 < v2)
                    {
                        if (*((char *)(v1 + v38)) <= 191)
                            goto LABEL_4c260e;
                    }
                    else
                    {
                        if (!(v38 == v2))
                            goto LABEL_4c260e;
                    }
                }
                if (v116)
                {
                    if (v116 < v2)
                    {
                        if (*((char *)(v1 + v116)) <= 191)
                            goto LABEL_4c260e;
                    }
                    else
                    {
                        if (!(v116 == v2))
                            goto LABEL_4c260e;
                    }
                }
                v47 = v1 + v38;
                *((char *)&v4) = (char)v39 == 1;
                v3 = 0x2e00110000;
                uu_sort::numeric_str_cmp::NumInfo::parse::h536ee64c31bb4548(&v6, v47, v40 - v38, &v3);
                v49 = v8;
                v50 = (long long)v9;
                v51 = v50 - v49;
                if (v50 < v49)
                    v51 = 0;
                v57 = &v38[v49];
                v58 = v51 + v57;
                if (!v50 && !v49)
                {
                    if (v57 > v58)
                    {
LABEL_4c2700:
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                    v71 = v2;
                    v72 = v1;
                    if (v57)
                    {
                        if (v57 < v71)
                        {
                            if (*((char *)(v72 + v57)) <= 191)
                                goto LABEL_4c26f1;
                        }
                        else
                        {
                            if (!(v57 == v71))
                                goto LABEL_4c26f1;
                        }
                    }
                    if (v58)
                    {
                        if (v58 < v71)
                        {
                            if (*((char *)(v72 + v58)) <= 191)
                                goto LABEL_4c26f1;
                        }
                        else
                        {
                            if (v58 != v71)
                            {
LABEL_4c26f1:
                                goto LABEL_4c2700;
                            }
                        }
                    }
                    if (v50 > v49)
                    {
                        v76 = v72 + v57;
                        v77 = 0;
                        do
                        {
                            v81 = v78;
                            v82 = v81[0];
                            if ((char)v82 >= 0)
                            {
                                v83 = &v81[1];
                            }
                            else
                            {
                                v84 = (unsigned int)v82 & 31;
                                v85 = v81[1] & 63;
                                if ((v82 & 255) <= 223)
                                {
                                    v83 = &v81[2];
                                    v82 = v84 * 64 | v85;
                                }
                                else
                                {
                                    v86 = v81[2] & 63 | v85 * 64;
                                    if ((v82 & 255) < 240)
                                    {
                                        v83 = &v81[3];
                                        v82 = v86 | v84 * 0x1000;
                                    }
                                    else
                                    {
                                        v83 = v81 + 1;
                                        v82 = v81[3] & 63 | v86 * 64 | (v84 & 7) * 0x40000;
                                    }
                                }
                            }
                            if ((unsigned int)(v82 - 9) >= 5 && (unsigned int)v82 != 32)
                            {
                                if ((unsigned int)v82 < 128)
                                    goto LABEL_4c1e90;
                                if ((unsigned int)v82 >> 8 > 31)
                                {
                                    switch (v87)
                                    {
                                    case 32:
                                        break;
                                    case 48:
LABEL_4c1e69:
                                        if (!(!(unsigned int)v82 == 5760))
                                            continue;
                                        goto LABEL_4c1e90;
                                    default:
LABEL_4c1e90:
                                        v38 = v57 + v77;
                                        v92 = v58 + v77;
                                        goto LABEL_4c20b0;
                                    }
                                }
                                else
                                {
                                    switch (v87)
                                    {
                                    case 0:
                                        break;
                                    case 22:
                                        goto LABEL_4c1e69;
                                    default:
LABEL_4c1e90:
                                        v38 = v57 + v77;
                                        v92 = v58 + v77;
                                        goto LABEL_4c20b0;
                                    }
                                }
                                goto LABEL_4c1e69;
                            }
                        } while ((v77 = v77 - v81 + v83, v83 != v51 + v76));
                    }
                    v77 = 0;
                    goto LABEL_4c1e90;
                }
                if ((char)v39 != 1)
                {
                    v69 = 0x1600000000000;
                    v2 = v2;
                    goto LABEL_4c1f93;
                }
                v68 = v2;
                v69 = 0x1600000000000;
                if (v58 > v116)
                {
LABEL_4c26bc:
                    goto LABEL_4c2700;
                }
                if (v58)
                {
                    if (v58 < v68)
                    {
                        if (*((char *)(v1 + v58)) <= 191)
                            goto LABEL_4c26bc;
                    }
                    else
                    {
                        if (!(v58 == v68))
                            goto LABEL_4c26bc;
                    }
                }
                if (v116)
                {
                    if (v116 < v68)
                    {
                        if (*((char *)(v1 + v116)) <= 191)
                            goto LABEL_4c26bc;
                    }
                    else
                    {
                        if (!(v116 == v68))
                            goto LABEL_4c26bc;
                    }
                }
                if (v116 != v58)
                {
                    v79 = v1;
                    v80 = *((char *)(v79 + v58));
                    if ((char)v80 < 0)
                    {
                        v88 = (unsigned int)v80 & 31;
                        v89 = *((char *)(v79 + v58 + 1)) & 63;
                        if ((v80 & 255) > 223)
                        {
                            v91 = *((char *)(v79 + v58 + 2)) & 63 | v89 * 64;
                            v80 = ((v80 & 255 & 255) < 240 ? *((char *)(v79 + v58 + 3)) & 63 | v91 * 64 | (v88 & 7) * 0x40000 : v91 | v88 * 0x1000);
                        }
                        else
                        {
                            v80 = v88 * 64 | v89;
                        }
                    }
                    v93 = (unsigned int)v80 - 69;
                    if ((unsigned int)v93 <= 38)
                    {
                        v0 = 274881087813;
                        if (((char)(*((char *)&v0 + ((v93 & 63) >> 3)) >> (char)(v93 & 63 & 7)) & 1))
                            v58 += 1;
                    }
                }
LABEL_4c1f93:
                if (v38 <= v57)
                {
                    v97 = 0;
                }
                else
                {
LABEL_4c25cd:
                    goto LABEL_4c2700;
                }
                while (true)
                {
                    v100 = v99;
                    v101 = v98;
                    v102 = &v101[v49];
                    if (v38)
                    {
                        if (v38 < v95)
                        {
                            if (*((char *)v47) <= 191)
                                goto LABEL_4c25cd;
                        }
                        else
                        {
                            if (!(v38 == v95))
                                goto LABEL_4c25cd;
                        }
                    }
                    if (v102)
                    {
                        if (v102 < v95)
                        {
                            if (*((char *)(v100 + v49)) <= 191)
                                goto LABEL_4c25cd;
                            goto LABEL_4c200c;
                        }
                        goto LABEL_4c25cd;
                    }
LABEL_4c200c:
                    if (v49 == v97)
                        break;
                    v103 = *((char *)(v100 + v49 - 1));
                    if ((char)v103 < 0)
                    {
                        v104 = *((char *)(v100 + v49 - 2));
                        if ((char)v104 >= 192)
                        {
                            v106 = (unsigned int)v104 & 31;
                        }
                        else
                        {
                            v105 = *((char *)(v100 + v49 - 3));
                            if ((char)v105 < 192)
                            {
                                v107 = (unsigned int)v105 & 63 | (*((char *)(v100 + v49 - 4)) & 7) * 64;
                                v69 = 0x1600000000000;
                                v2 = v2;
                            }
                            else
                            {
                                v107 = (unsigned int)v105 & 15;
                            }
                            v106 = (unsigned int)v104 & 63 | v107 * 64;
                        }
                        v103 = (unsigned int)v103 & 63 | v106 * 64;
                    }
                    if ((unsigned int)v103 > 48 || (v0 = v69, !((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((v103 & 4294967295 & 63) >> 3))) >> (unsigned long long)(char)(v103 & 4294967295 & 63 & 7)) & 1)))
                    {
                        v38 = &v101[v49];
                        break;
                    }
                    v57 += 1;
                    v97 += 1;
                    if (v38 > &v101[v49 + 1])
                        goto LABEL_4c25cd;
                }
LABEL_4c20b0:
                v110 = v41;
                v111 = *((long long *)&v14);
                if (v38)
                {
                    v112 = *((long long *)&v15);
                    if (v38 < v112)
                    {
                        if (*((char *)(v111 + v38)) <= 191)
                            goto LABEL_4c262f;
                    }
                    else
                    {
                        if (v38 != v112)
                        {
LABEL_4c262f:
                            goto LABEL_4c2700;
                        }
                    }
                }
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v3, " ", 1, unicode_width::str_width::h790f4f44c65722ae(v111, v38, 0));
                v11 = &v3;
                v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v6 = &g_41f080;
                v7 = 1;
                v10 = 0;
                v8 = &v11;
                v9 = 1;
                v29 = std::io::Write::write_fmt::hea334da98541fef9(a1, &v6);
                if (!(!v29))
                    goto LABEL_4c25ef;
                if (v3)
                    __rust_dealloc(v4);
                v113 = v110;
                if (v113 <= v38)
                {
                    v6 = &g_592958;
                    v7 = 1;
                    v8 = 8;
                    v37 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((int128_t *)&v9) = 0;
                    v29 = std::io::Write::write_fmt::hea334da98541fef9(a1, &v6);
                    v2 = v2;
                    v1 = v1;
                    if (!v29)
                        goto LABEL_4c1915;
                    goto LABEL_4c2642;
                }
                v114 = *((long long *)&v14);
                v115 = *((long long *)&v15);
                if (v38)
                {
                    if (v38 < v115)
                    {
                        if (*((char *)(v114 + v38)) <= 191)
                            goto LABEL_4c261f;
                    }
                    else
                    {
                        if (!(v38 == v115))
                            goto LABEL_4c261f;
                    }
                }
                if (v110 < v115)
                {
                    if (*((char *)(v114 + v110)) <= 191)
                        goto LABEL_4c261f;
                }
                else
                {
                    if (v110 != v115)
                    {
LABEL_4c261f:
                        goto LABEL_4c2700;
                    }
                }
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v3, "_", 1, unicode_width::str_width::h790f4f44c65722ae(v114 + v38, v113 - v38, 0));
                v11 = &v3;
                v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v6 = &g_592938;
                v7 = 2;
                v10 = 0;
                v8 = &v11;
                v9 = 1;
                v29 = std::io::Write::write_fmt::hea334da98541fef9(a1, &v6);
                if (!(!v29))
                    goto LABEL_4c25ef;
                if (v3)
                    __rust_dealloc(v4);
                v2 = v2;
                v1 = v1;
LABEL_4c1915:
                v32 = v2;
                v34 = &v34[1].padding_0[2];
            } while (v34 != v22);
        }
        v29 = a2->field_98;
        if (...)
        {
LABEL_4c2486:
            if (v17)
                v29 = __rust_dealloc(v18);
            if (!*((long long *)&v13))
                return v29;
            __rust_dealloc(*((long long *)&v14));
        }
        else
        {
            if (!v32)
            {
                v6 = &g_592958;
                v7 = 1;
                v8 = 8;
                *((int128_t *)&v9) = 0;
                v29 = std::io::Write::write_fmt::hea334da98541fef9(a1, &v6);
                if (!v29)
                    goto LABEL_4c2486;
LABEL_4c2642:
            }
            else
            {
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v3, "_", 1, unicode_width::str_width::h790f4f44c65722ae(*((long long *)&v14), *((long long *)&v15), 0));
                v11 = &v3;
                v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v6 = &g_592938;
                v7 = 2;
                v10 = 0;
                v8 = &v11;
                v9 = 1;
                v29 = std::io::Write::write_fmt::hea334da98541fef9(a1, &v6);
                if (v29)
                {
LABEL_4c25ef:
                    if (v3)
                        __rust_dealloc(v4);
                }
                else if (v3)
                {
                    v29 = __rust_dealloc(v4);
                    goto LABEL_4c2486;
                }
            }
            if (v17)
                __rust_dealloc(v18);
LABEL_4c2669:
            if (!*((long long *)&v13))
            {
                v6 = v29;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            __rust_dealloc(*((long long *)&v14));
        }
    }
    else
    {
        v25 = v26;
        v28 = a1->field_10;
        if (a1->field_0 - v28 > v26)
        {
            memcpy(&v28[a1->field_8], v24, v27);
            v31 = &v28[v27];
            a1->field_10 = v31;
        }
        else
        {
            v30 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h49ded85386e4024a(a1, v24, v27, a3, a4, a5, *((long long *)&v1), *((long long *)&v2), v3, v4, *((long long *)&v5));
            if (v30)
            {
                v6 = v30;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            v31 = a1->field_10;
        }
        v29 = a2->field_99;
        v3 = v29;
        v33 = a1->field_0 - v31;
        if (a1->field_0 - v31 >= 2)
        {
            v31[a1->field_8] = v29;
            a1->field_10 = &v31[1];
            return v29;
        }
        v29 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h49ded85386e4024a(a1, &v3, 1, v33, v35, v36, *((long long *)&v1), *((long long *)&v2), *((long long *)&v3), v4, *((long long *)&v5));
        if (!v29)
            return v29;
        v6 = v29;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
}
