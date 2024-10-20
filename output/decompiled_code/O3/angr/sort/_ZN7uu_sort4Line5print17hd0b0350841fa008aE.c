long long uu_sort::Line::print::hd0b0350841fa008a(struct struct_1 **a0, struct_0 *a1, struct_3 *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x218]
    char *v1;  // [sp-0xf8]
    unsigned long long v2;  // [sp-0xf0]
    char v3;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xe0]
    unsigned long v5;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xc8]
    void* v7;  // [sp-0xc0], Other Possible Types: unsigned long long
    int v8;  // [bp-0xb8], Other Possible Types: char, unsigned long long
    void* v9;  // [sp-0xb0]
    unsigned long v10;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x90]
    char v12;  // [bp-0x88]
    char v13;  // [bp-0x80]
    char v14;  // [bp-0x78]
    unsigned long long v15;  // [sp-0x70]
    void* v16;  // [sp-0x68]
    unsigned long long v17;  // [sp-0x60]
    void* v18;  // [sp-0x58]
    struct_2 *v19;  // [sp-0x50]
    unsigned long long v20;  // [sp-0x40]
    unsigned long long v21;  // [sp-0x38]
    char *v23;  // r12
    unsigned long v24;  // rbx
    unsigned long long v25;  // rbx
    unsigned long v26;  // rbx
    char *v27;  // r14
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    char *v30;  // r14
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rcx
    struct_2 *v33;  // r13
    unsigned long long v34;  // r8
    unsigned long long v35;  // r9
    int v36;  // ymm0
    char *v37;  // r12
    unsigned long long v38;  // r14
    char *v39;  // rdx
    char *v40;  // rdx
    char *v41;  // rsi
    char *v42;  // r15
    unsigned long long v43;  // r15
    unsigned long long v44;  // rbx
    unsigned long long v45;  // rbx
    unsigned long long v46;  // r15
    unsigned long long v47;  // rax
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rsi
    void* v50;  // rsi
    char *v51;  // rax
    char *v52;  // rax
    void* v53;  // rdx
    struct_4 *v54;  // r14
    void* v55;  // rcx
    char *v56;  // rax
    char *v57;  // rcx
    char *v58;  // rsi
    char *v59;  // rdi
    unsigned long long v60;  // r8
    unsigned long long v61;  // r9
    void* v62;  // r9
    unsigned long long v63;  // r10
    unsigned long long v64;  // r11
    char *v65;  // rbp
    unsigned long long v67;  // rbx
    unsigned long long v68;  // r14
    unsigned long long v70;  // rbx
    char *v71;  // r8
    unsigned long long v72;  // rbp
    unsigned long long v73;  // r15
    char v75[4];  // r8
    void* v76;  // rdx
    char v77[4];  // r8
    char *v78;  // r10
    unsigned long long v79;  // rsi
    char v80[4];  // rdi
    unsigned long long v81;  // r9
    char v82[4];  // r8
    unsigned int v83;  // r10d
    unsigned int v84;  // ebp
    unsigned int v85;  // r11d
    unsigned int v86;  // r10d
    unsigned int v87;  // edi
    unsigned int v88;  // r9d
    void* v89;  // r15
    unsigned int v90;  // r8d
    char *v91;  // rcx
    unsigned long long v92;  // rsi
    char *v93;  // rbp
    unsigned long long v94;  // rbx
    void* v96;  // r8
    char *v97;  // r12
    unsigned long long v98;  // r15
    unsigned long long v99;  // r9
    char *v100;  // rsi
    unsigned long long v101;  // rcx
    unsigned long long v102;  // rcx
    unsigned long long v103;  // r10
    unsigned long long v104;  // r11
    unsigned int v105;  // r10d
    unsigned int v106;  // r11d
    char *v109;  // rbp
    char *v110;  // rdi
    unsigned long long v111;  // rbx
    char *v112;  // rsi
    char *v113;  // rdi
    unsigned long long v114;  // rbx
    char *v115;  // rdx
    struct_5 *v116;  // rcx
    struct_6 *v117;  // rcx

    v23 = *(a0);
    if (a2->field_7c)
    {
        v25 = v24;
        alloc::str::_$LT$impl$u20$str$GT$::replace::h9214f2fcb40bef0c(&v12, v23, v25);
        v3 = &v12;
        v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v5 = &g_592938;
        v6 = 2;
        v9 = 0;
        v7 = &v3;
        v8 = 1;
        v28 = std::io::Write::write_fmt::hffbb6f384d6cdfbc(a1, &v5);
        if (v28)
            goto LABEL_4c36a9;
        v16 = 0;
        v17 = 8;
        v18 = 0;
        uu_sort::tokenize::h70667f0b27298df7(v23, v25, a2->field_78, &v16);
        v19 = a2->field_8;
        v15 = a2->field_10;
        v31 = v25;
        if (v15)
        {
            v33 = v19;
            v21 = 56 * v15 + (char *)v33;
            v20 = -(v31);
            v2 = v31;
            v1 = v23;
            do
            {
                v37 = uu_sort::FieldSelector::get_range::h91411669e247756b(v33, v23, v31, v17, v18);
                v38 = v33->field_35;
                if ((unsigned int)v38 >= 2)
                {
                    if ((unsigned int)v38 != 2)
                    {
                        if (!((unsigned int)v38 == 3))
                            goto LABEL_4c30f0;
                        v42 = v115;
                        v43 = v42 - v37;
                        v44 = v2;
                        if (v42 < v37)
                        {
LABEL_4c36ed:
                            goto LABEL_4c3740;
                        }
                        else
                        {
                            if (v37)
                            {
                                if (v37 < v44)
                                {
                                    if (*((char *)(v1 + v37)) <= 191)
                                        goto LABEL_4c36ed;
                                }
                                else
                                {
                                    if (!(v37 == v44))
                                        goto LABEL_4c36ed;
                                }
                            }
                            if (v115)
                            {
                                if (v115 < v44)
                                {
                                    if (*((char *)(v1 + v115)) <= 191)
                                        goto LABEL_4c36ed;
                                }
                                else
                                {
                                    if (!(v115 == v44))
                                        goto LABEL_4c36ed;
                                }
                            }
                            v51 = v1;
                            v5 = v51 + v37;
                            v6 = v115 + v51;
                            v7 = 0;
                            v8 = 0;
                            v52 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0b05f716f327dd71(v51 + v37, v43);
                            v54 = &g_592e70.field_0;
                            v55 = 0;
                            do
                            {
                                v58 = v54->field_8;
                                if (!v58)
                                {
LABEL_4c2ca5:
                                    v72 = core::iter::traits::iterator::Iterator::try_fold::h648ead6e8105dcea(&v5, &v8);
                                    if (v54->field_10)
                                    {
                                        if ((unsigned int)v115 == 0x110000)
                                            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                                        core::iter::traits::iterator::Iterator::try_fold::h648ead6e8105dcea(&v5, &v8);
                                        if ((unsigned int)v115 != 0x110000)
                                        {
                                            core::iter::traits::iterator::Iterator::try_fold::h648ead6e8105dcea(&v5, &v8);
                                            if ((unsigned int)v115 != 0x110000 && (unsigned int)v115 != 0x110000)
                                                goto LABEL_4c2f8b;
                                        }
                                    }
                                    goto LABEL_4c2f82;
                                }
                                v59 = v54->field_0;
                                if (v58 < v115)
                                    goto LABEL_4c2be0;
                                if (v58 == v115 && (v60 = (unsigned long long)*(v52), v61 = (unsigned long long)*(v59), ((char)((unsigned long long)(char)((v60 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v60) == ((char)((unsigned long long)(char)((v61 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v61)))
                                {
                                    v62 = 0;
                                    if (v58 + 1 == v62)
                                        goto LABEL_4c2ca5;
                                    v63 = *((char *)(v52 + v62 + 1));
                                    v64 = *((char *)(v59 + v62 + 1));
                                    v62 += 1;
                                    if (((char)(((v63 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v63) == ((char)(((v64 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v64))
                                        continue;
                                }
LABEL_4c2be0:
                                v55 += 24;
                                v54 = &g_592e70.field_0 + v55;
                            } while (v55 != 288);
LABEL_4c2f82:
LABEL_4c2f8b:
                            v37 = &v37[v72];
                            v89 = v73 - v72;
                            if (v72 > v73)
                                v89 = 0;
                            v93 = v89 + v37;
                            goto LABEL_4c30f0;
                        }
                    }
                    v41 = v115;
                    if (v41 < v37)
                        goto LABEL_4c3740;
                    v45 = v2;
                    if (v37)
                    {
                        if (v37 < v45)
                        {
                            if (*((char *)(v1 + v37)) <= 191)
                                goto LABEL_4c370e;
                        }
                        else
                        {
                            if (!(v37 == v45))
                                goto LABEL_4c370e;
                        }
                    }
                    if (v115)
                    {
                        if (v115 < v45)
                        {
                            if (*((char *)(v1 + v115)) <= 191)
                                goto LABEL_4c370e;
                        }
                        else
                        {
                            if (v115 != v45)
                            {
LABEL_4c370e:
                                goto LABEL_4c3740;
                            }
                        }
                    }
                    v47 = uu_sort::get_leading_gen::hf862211208a93c80(v1 + v37, v41 - v37, v115);
                    v37 = &v37[v47];
                    v53 = &v115[-1 * v47];
                    if (v47 > v115)
                        v53 = 0;
                    v65 = v53 + v37;
                    goto LABEL_4c30f0;
                }
                v39 = v115;
                if (v39 < v37)
                {
LABEL_4c364e:
                    goto LABEL_4c3740;
                }
                if (v37)
                {
                    if (v37 < v2)
                    {
                        if (*((char *)(v1 + v37)) <= 191)
                            goto LABEL_4c364e;
                    }
                    else
                    {
                        if (!(v37 == v2))
                            goto LABEL_4c364e;
                    }
                }
                if (v115)
                {
                    if (v115 < v2)
                    {
                        if (*((char *)(v1 + v115)) <= 191)
                            goto LABEL_4c364e;
                    }
                    else
                    {
                        if (!(v115 == v2))
                            goto LABEL_4c364e;
                    }
                }
                v46 = v1 + v37;
                *((char *)&v4) = (char)v38 == 1;
                v3 = 0x2e00110000;
                uu_sort::numeric_str_cmp::NumInfo::parse::h536ee64c31bb4548(&v5, v46, v39 - v37, &v3);
                v48 = v7;
                v49 = v8;
                v50 = v49 - v48;
                if (v49 < v48)
                    v50 = 0;
                v56 = &v37[v48];
                v57 = v50 + v56;
                if (!v49 && !v48)
                {
                    if (v56 > v57)
                    {
LABEL_4c3740:
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                    v70 = v2;
                    v71 = v1;
                    if (v56)
                    {
                        if (v56 < v70)
                        {
                            if (*((char *)(v71 + v56)) <= 191)
                                goto LABEL_4c3731;
                        }
                        else
                        {
                            if (!(v56 == v70))
                                goto LABEL_4c3731;
                        }
                    }
                    if (v57)
                    {
                        if (v57 < v70)
                        {
                            if (*((char *)(v71 + v57)) <= 191)
                                goto LABEL_4c3731;
                        }
                        else
                        {
                            if (v57 != v70)
                            {
LABEL_4c3731:
                                goto LABEL_4c3740;
                            }
                        }
                    }
                    if (v49 > v48)
                    {
                        v75 = v71 + v56;
                        v76 = 0;
                        do
                        {
                            v80 = v77;
                            v81 = v80[0];
                            if ((char)v81 >= 0)
                            {
                                v82 = &v80[1];
                            }
                            else
                            {
                                v83 = (unsigned int)v81 & 31;
                                v84 = v80[1] & 63;
                                if ((v81 & 255) <= 223)
                                {
                                    v82 = &v80[2];
                                    v81 = v83 * 64 | v84;
                                }
                                else
                                {
                                    v85 = v80[2] & 63 | v84 * 64;
                                    if ((v81 & 255) < 240)
                                    {
                                        v82 = &v80[3];
                                        v81 = v85 | v83 * 0x1000;
                                    }
                                    else
                                    {
                                        v82 = v80 + 1;
                                        v81 = v80[3] & 63 | v85 * 64 | (v83 & 7) * 0x40000;
                                    }
                                }
                            }
                            if ((unsigned int)(v81 - 9) >= 5 && (unsigned int)v81 != 32)
                            {
                                if ((unsigned int)v81 < 128)
                                    goto LABEL_4c2ed0;
                                if ((unsigned int)v81 >> 8 > 31)
                                {
                                    switch (v86)
                                    {
                                    case 32:
                                        break;
                                    case 48:
LABEL_4c2ea9:
                                        if (!(!(unsigned int)v81 == 5760))
                                            continue;
                                        goto LABEL_4c2ed0;
                                    default:
LABEL_4c2ed0:
                                        v37 = v56 + v76;
                                        v91 = v57 + v76;
                                        goto LABEL_4c30f0;
                                    }
                                }
                                else
                                {
                                    switch (v86)
                                    {
                                    case 0:
                                        break;
                                    case 22:
                                        goto LABEL_4c2ea9;
                                    default:
LABEL_4c2ed0:
                                        v37 = v56 + v76;
                                        v91 = v57 + v76;
                                        goto LABEL_4c30f0;
                                    }
                                }
                                goto LABEL_4c2ea9;
                            }
                        } while ((v76 = v76 - v80 + v82, v82 != v50 + v75));
                    }
                    v76 = 0;
                    goto LABEL_4c2ed0;
                }
                if ((char)v38 != 1)
                {
                    v68 = 0x1600000000000;
                    v2 = v2;
                    goto LABEL_4c2fd3;
                }
                v67 = v2;
                v68 = 0x1600000000000;
                if (v57 > v115)
                {
LABEL_4c36fc:
                    goto LABEL_4c3740;
                }
                if (v57)
                {
                    if (v57 < v67)
                    {
                        if (*((char *)(v1 + v57)) <= 191)
                            goto LABEL_4c36fc;
                    }
                    else
                    {
                        if (!(v57 == v67))
                            goto LABEL_4c36fc;
                    }
                }
                if (v115)
                {
                    if (v115 < v67)
                    {
                        if (*((char *)(v1 + v115)) <= 191)
                            goto LABEL_4c36fc;
                    }
                    else
                    {
                        if (!(v115 == v67))
                            goto LABEL_4c36fc;
                    }
                }
                if (v115 != v57)
                {
                    v78 = v1;
                    v79 = *((char *)(v78 + v57));
                    if ((char)v79 < 0)
                    {
                        v87 = (unsigned int)v79 & 31;
                        v88 = *((char *)(v78 + v57 + 1)) & 63;
                        if ((v79 & 255) <= 223)
                        {
                            v79 = v87 * 64 | v88;
                        }
                        else
                        {
                            v90 = *((char *)(v78 + v57 + 2)) & 63 | v88 * 64;
                            v79 = ((v79 & 255 & 255) < 240 ? *((char *)(v78 + v57 + 3)) & 63 | v90 * 64 | (v87 & 7) * 0x40000 : v90 | v87 * 0x1000);
                        }
                    }
                    v92 = (unsigned int)v79 - 69;
                    if ((unsigned int)v92 <= 38)
                    {
                        v0 = 274881087813;
                        if (((char)(*((char *)&v0 + ((v92 & 63) >> 3)) >> (char)(v92 & 63 & 7)) & 1))
                            v57 += 1;
                    }
                }
LABEL_4c2fd3:
                if (v37 <= v56)
                {
                    v96 = 0;
                }
                else
                {
LABEL_4c360d:
                    goto LABEL_4c3740;
                }
                while (true)
                {
                    v99 = v98;
                    v100 = v97;
                    v101 = &v100[v48];
                    if (v37)
                    {
                        if (v37 < v94)
                        {
                            if (*((char *)v46) <= 191)
                                goto LABEL_4c360d;
                        }
                        else
                        {
                            if (!(v37 == v94))
                                goto LABEL_4c360d;
                        }
                    }
                    if (v101)
                    {
                        if (v101 < v94)
                        {
                            if (*((char *)(v99 + v48)) <= 191)
                                goto LABEL_4c360d;
                            goto LABEL_4c304c;
                        }
                        goto LABEL_4c360d;
                    }
LABEL_4c304c:
                    if (v48 == v96)
                        break;
                    v102 = *((char *)(v99 + v48 - 1));
                    if ((char)v102 < 0)
                    {
                        v103 = *((char *)(v99 + v48 - 2));
                        if ((char)v103 >= 192)
                        {
                            v105 = (unsigned int)v103 & 31;
                        }
                        else
                        {
                            v104 = *((char *)(v99 + v48 - 3));
                            if ((char)v104 >= 192)
                            {
                                v106 = (unsigned int)v104 & 15;
                            }
                            else
                            {
                                v106 = (unsigned int)v104 & 63 | (*((char *)(v99 + v48 - 4)) & 7) * 64;
                                v68 = 0x1600000000000;
                                v2 = v2;
                            }
                            v105 = (unsigned int)v103 & 63 | v106 * 64;
                        }
                        v102 = (unsigned int)v102 & 63 | v105 * 64;
                    }
                    if ((unsigned int)v102 > 48 || (v0 = v68, !((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((v102 & 4294967295 & 63) >> 3))) >> (unsigned long long)(char)(v102 & 4294967295 & 63 & 7)) & 1)))
                    {
                        v37 = &v100[v48];
                        break;
                    }
                    v56 += 1;
                    v96 += 1;
                    if (v37 > &v100[v48 + 1])
                        goto LABEL_4c360d;
                }
LABEL_4c30f0:
                v109 = v40;
                v110 = *((long long *)&v13);
                if (v37)
                {
                    v111 = *((long long *)&v14);
                    if (v37 < v111)
                    {
                        if (*((char *)(v110 + v37)) <= 191)
                            goto LABEL_4c366f;
                    }
                    else
                    {
                        if (v37 != v111)
                        {
LABEL_4c366f:
                            v1 = v110;
                            goto LABEL_4c3740;
                        }
                    }
                }
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v3, " ", 1, unicode_width::str_width::h790f4f44c65722ae(v110, v37, 0));
                v10 = &v3;
                v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v5 = &g_41f080;
                v6 = 1;
                v9 = 0;
                v7 = &v10;
                v8 = 1;
                v28 = std::io::Write::write_fmt::hffbb6f384d6cdfbc(a1, &v5);
                if (!(!v28))
                    goto LABEL_4c362f;
                if (v3)
                    __rust_dealloc(v4);
                v112 = v109;
                if (v112 <= v37)
                {
                    v5 = &g_592958;
                    v6 = 1;
                    v7 = 8;
                    v36 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((int128_t *)&v8) = 0;
                    v28 = std::io::Write::write_fmt::hffbb6f384d6cdfbc(a1, &v5);
                    v2 = v2;
                    v1 = v1;
                    if (!v28)
                        goto LABEL_4c2955;
                    goto LABEL_4c3682;
                }
                v113 = *((long long *)&v13);
                v114 = *((long long *)&v14);
                if (v37)
                {
                    if (v37 < v114)
                    {
                        if (*((char *)(v113 + v37)) <= 191)
                            goto LABEL_4c365f;
                    }
                    else
                    {
                        if (!(v37 == v114))
                            goto LABEL_4c365f;
                    }
                }
                if (v109 < v114)
                {
                    if (*((char *)(v113 + v109)) <= 191)
                        goto LABEL_4c365f;
                }
                else
                {
                    if (v109 != v114)
                    {
LABEL_4c365f:
                        v1 = v113;
                        goto LABEL_4c3740;
                    }
                }
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v3, "_", 1, unicode_width::str_width::h790f4f44c65722ae(v113 + v37, v112 - v37, 0));
                v10 = &v3;
                v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v5 = &g_592938;
                v6 = 2;
                v9 = 0;
                v7 = &v10;
                v8 = 1;
                v28 = std::io::Write::write_fmt::hffbb6f384d6cdfbc(a1, &v5);
                if (!(!v28))
                    goto LABEL_4c362f;
                if (v3)
                    __rust_dealloc(v4);
                v2 = v2;
                v1 = v1;
LABEL_4c2955:
                v31 = v2;
                v33 = &v33[1].padding_0[2];
            } while (v33 != v21);
        }
        v28 = a2->field_98;
        if (...)
        {
LABEL_4c34c6:
            if (v16)
                __rust_dealloc(v17);
            if (!*((long long *)&v12))
                return v28;
            v28 = __rust_dealloc(*((long long *)&v13));
        }
        else
        {
            if (!v31)
            {
                v5 = &g_592958;
                v6 = 1;
                v7 = 8;
                *((int128_t *)&v8) = 0;
                v28 = std::io::Write::write_fmt::hffbb6f384d6cdfbc(a1, &v5);
                if (!v28)
                    goto LABEL_4c34c6;
LABEL_4c3682:
            }
            else
            {
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v3, "_", 1, unicode_width::str_width::h790f4f44c65722ae(*((long long *)&v13), *((long long *)&v14), 0));
                v10 = &v3;
                v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v5 = &g_592938;
                v6 = 2;
                v9 = 0;
                v7 = &v10;
                v8 = 1;
                v28 = std::io::Write::write_fmt::hffbb6f384d6cdfbc(a1, &v5);
                if (v28)
                {
LABEL_4c362f:
                    if (v3)
                        __rust_dealloc(v4);
                }
                else if (v3)
                {
                    __rust_dealloc(v4);
                    goto LABEL_4c34c6;
                }
            }
            if (v16)
                __rust_dealloc(v17);
LABEL_4c36a9:
            if (!*((long long *)&v12))
            {
                v5 = v28;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            __rust_dealloc(*((long long *)&v13));
        }
    }
    else
    {
        v24 = v25;
        v27 = a1->field_10;
        if (a1->field_0 - v27 > v25)
        {
            memcpy(&v27[a1->field_8], v23, v26);
            v30 = &v27[v26];
            a1->field_10 = v30;
        }
        else
        {
            v29 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he256dde4e9b9e168(a1, v23, v26, a3, a4, a5);
            if (v29)
            {
                v5 = v29;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            v30 = a1->field_10;
        }
        v28 = a2->field_99;
        v3 = v28;
        v32 = a1->field_0 - v30;
        if (a1->field_0 - v30 >= 2)
        {
            v30[a1->field_8] = v28;
            a1->field_10 = &v30[1];
            return v28;
        }
        v28 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he256dde4e9b9e168(a1, &v3, 1, v32, v34, v35);
        if (!v28)
            return v28;
        v5 = v28;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
}
