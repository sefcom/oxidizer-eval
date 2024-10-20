long long uu_fold::fold::he29cde6d24971cb5(struct_1 *a0, unsigned long a1, char a2, unsigned int a3, char *a4)
{
    unsigned int v0;  // [sp-0x13c]
    void* v1;  // [bp-0x138], Other Possible Types: char
    char v2;  // [bp-0x134]
    char *v3;  // [sp-0x130]
    char *v4;  // [sp-0x128]
    unsigned int v5;  // [sp-0x11c]
    unsigned int v6;  // [bp-0x118], Other Possible Types: unsigned long long, char, unsigned long
    char v7;  // [sp-0x117]
    char v8;  // [sp-0x116]
    char v9;  // [sp-0x115]
    char v10;  // [bp-0x110], Other Possible Types: unsigned int, unsigned long long
    unsigned short v11;  // [sp-0x10c]
    struct struct_3 **v12;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x100]
    void* v14;  // [sp-0xf8]
    char *v15;  // [sp-0xe8], Other Possible Types: unsigned long long
    char *v16;  // [sp-0xe0], Other Possible Types: unsigned long long
    void* v17;  // [sp-0xd8]
    char *v18;  // [bp-0xd0], Other Possible Types: unsigned int
    unsigned int v19;  // [sp-0xc8]
    unsigned int v20;  // [sp-0xc4]
    void* v21;  // [sp-0xc0]
    char v22[4];  // [sp-0xb8]
    void* v23;  // [sp-0xb0]
    struct_1 *v24;  // [sp-0xa8]
    struct struct_2 **v25;  // [sp-0xa0]
    unsigned long long v26;  // [sp-0x98]
    unsigned long long v27;  // [sp-0x90]
    unsigned long v28;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long v29;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v30;  // [sp-0x78]
    int v31;  // [sp-0x70]
    void* v32;  // [sp-0x60]
    unsigned long long v33;  // [sp-0x58]
    unsigned long long v34;  // [sp-0x50]
    unsigned long long v35;  // [sp-0x48]
    unsigned long long v36;  // [sp-0x38]
    struct_1 *v38;  // rdi
    int v39;  // ymm0
    char *v40;  // rbx
    unsigned long long v41;  // r12
    unsigned long long v42;  // rbx
    unsigned long long v43;  // r15
    unsigned long long v44;  // rax
    int v45;  // ymm0
    int v78;  // ymm0
    char *v79;  // r12
    unsigned long long v80;  // r13
    unsigned long long v81;  // rbx
    unsigned long long v82;  // r15
    unsigned long long v83;  // rax
    struct struct_2 **v84;  // rax
    unsigned long long v85;  // rbx
    char *v86;  // r15
    unsigned long long v87;  // rdx
    unsigned long long v88;  // r14
    char v90[4];  // rbp
    unsigned long long v91;  // r14
    unsigned long long v92;  // rdx
    unsigned long long v93;  // rdx
    char *v94;  // rsi
    char *v95;  // r12
    unsigned int v96;  // eax
    unsigned int v97;  // ecx
    char *v98;  // r15
    char *v100;  // rdi
    char *v101;  // rsi
    char *v102;  // rsi
    char *v104;  // r15
    unsigned long long v105;  // rdx
    char *v106;  // rsi
    char *v107;  // rsi
    unsigned long long v108;  // rbx
    char *v110;  // rsi
    unsigned int v112;  // eax
    char v113;  // al
    unsigned long long v114;  // rax
    unsigned int v115;  // cc_dep1
    unsigned int v116;  // cc_dep2
    unsigned int v117;  // eax
    char *v118;  // r13
    unsigned long long v119;  // r13
    char *v120;  // rsi
    char *v121;  // rsi
    unsigned long long v122;  // rdx
    void* v124;  // rbx
    char *v125;  // rsi

    v38 = a0;
    v20 = a3;
    if (!a1)
    {
        v17 = 0;
        return v17;
    }
    v35 = &a0[a1];
    if (!a2)
    {
        v36 = (char)v20;
        v17 = 0;
        v27 = &g_4e3f30;
        while (true)
        {
            v79 = v38->field_8;
            v24 = v38;
            v80 = v38->field_10;
            if (v80 != 1 || *(v79) != 45)
            {
                v6 = 0x1b600000000;
                v11 = 0;
                v10 = 0;
                v10 = 1;
                std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v1, &v6, v79, v80);
                if ((int)v1)
                {
                    *((double *)&v17) = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h55a74ce188d55c7c(v3, v79, v80);
                    return v17;
                }
                v5 = *((int *)&v2);
                v0 = v5 | -0x100 | 1;
                v19 = 0;
                v81 = &g_4e3e20;
                v82 = &v5;
            }
            else
            {
                v28 = std::io::stdio::stdin::h7215cc131abb55d8();
                v19 = v28 | -0x100 | 1;
                v0 = 0;
                v81 = &g_4e3e78;
                v82 = &v28;
            }
            v83 = __rust_alloc(0x2000, 1);
            if (!v83)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v24 += 1;
            v29 = v83;
            v30 = 0x2000;
            v78 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            *((int128_t *)&v31) = 0;
            v32 = 0;
            v33 = v82;
            v34 = v81;
            v21 = 0;
            *((long long *)&v22) = 1;
            v23 = 0;
            v1 = 0;
            v3 = 1;
            v84 = &v4;
            v85 = 0;
            v86 = 0;
            while (true)
            {
                *(v84) = 0;
                if (std::io::append_to_string::hc530d77680bba6c7(&v21, &v29))
                {
                    if (v1)
                        __rust_dealloc(v3);
                    if (v21)
                        __rust_dealloc(v22);
                    *((double *)&v17) = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h3a537ffa44155957(v87);
                    if (v30)
                        __rust_dealloc(v29);
                    if ((char)v19)
                        return v17;
                    goto LABEL_4846f0;
                }
                if (!v87)
                    break;
                v88 = v23;
                if (v88)
                {
                    v90 = v22;
                    v91 = &v90[v88];
                    while (true)
                    {
                        v93 = v92;
                        v95 = v90[0];
                        if ((char)v95 >= 0)
                        {
                            v90 = &v90[1];
                            if ((unsigned int)v95 == 10)
                                goto LABEL_48449a;
                            goto LABEL_484090;
                        }
                        v96 = (unsigned int)v95 & 31;
                        v93 = v90[1] & 63;
                        if ((v95 & 255) <= 223)
                        {
                            v90 = &v90[2];
                            v95 = v96 * 64 | (unsigned int)v93;
                            if ((unsigned int)v95 == 10)
                                goto LABEL_48449a;
                            goto LABEL_484090;
                        }
                        v93 = (unsigned int)v93 * 64;
                        v97 = v90[2] & 63 | (unsigned int)v93;
                        if ((v95 & 255) >= 240)
                        {
                            v90 += 1;
                            v95 = v90[3] & 63 | v97 * 64 | (v96 & 7) * 0x40000;
                            if ((unsigned int)v95 == 10)
                                goto LABEL_48449a;
                        }
                        else
                        {
                            v90 = &v90[3];
                            v95 = v97 | v96 * 0x1000;
                            if ((unsigned int)v95 == 10)
                            {
LABEL_48449a:
                                v15 = v3;
                                v16 = v4;
                                v25 = &v15;
                                v26 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d580db3d38e7ba9;
                                v6 = &g_4e3f10;
                                v10 = 2;
                                v14 = 0;
                                v12 = &v25;
                                v13 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v6, v94, v93);
                                alloc::string::String::replace_range::h062a5da02cd3d5fc(&v1, v16, 1, 0);
                                v124 = 0;
                                goto LABEL_484527;
                            }
                        }
LABEL_484090:
                        if ((unsigned int)v95 == 0x110000)
                            goto LABEL_484490;
                        if (v86 >= a4)
                        {
                            v100 = v3;
                            v101 = v4;
                            if (!v16)
                            {
LABEL_4840e1:
                                v15 = v100;
                                v16 = v102;
                                v25 = &v15;
                                v26 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d580db3d38e7ba9;
                                v6 = &g_4e3f10;
                                v10 = 2;
                                v14 = 0;
                                v12 = &v25;
                                v13 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v6, v101, v93);
                                alloc::string::String::replace_range::h062a5da02cd3d5fc(&v1, v16, 1, 0);
                                v85 = 0;
                                v98 = v4;
                            }
                            else if (v16 < v101)
                            {
                                if (!(*((char *)(v100 + v16)) <= 191))
                                    goto LABEL_4840e1;
                                goto LABEL_484793;
                            }
                            else
                            {
                                if (v16 == v101)
                                    goto LABEL_4840e1;
                                goto LABEL_484793;
                            }
                        }
                        v104 = v98;
                        if ((unsigned int)v95 == 8)
                        {
                            v86 = v104 + 1;
                            if (v104 < 1)
                                v86 = 0;
                            goto LABEL_48433c;
                        }
                        if ((unsigned int)v95 == 9)
                            break;
                        if ((unsigned int)v95 == 13)
                        {
                            v86 = 0;
                            goto LABEL_48433c;
                        }
                        if (!(char)v20)
                        {
LABEL_484227:
                            v86 = v104 + 1;
                            if ((unsigned int)v95 < 128)
                                goto LABEL_48433c;
                            goto LABEL_484237;
                        }
                        if (!((unsigned int)(v95 + 9) >= 5) || !((unsigned int)v95 != 32))
                        {
LABEL_484218:
                            v85 = 1;
                            v18 = v4;
                            goto LABEL_484227;
                        }
                        else
                        {
                            if ((unsigned int)v95 <= 127)
                            {
                                v86 = v104 + 1;
                                goto LABEL_48433c;
                            }
                            v112 = (unsigned int)v95 >> 8;
                            if (v112 <= 31)
                            {
                                if (!v112)
                                {
                                    v113 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v95 & 4294967295];
                                    goto LABEL_48447b;
                                }
                                else
                                {
                                    if (!(v112 == 22))
                                        goto LABEL_484485;
                                    v115 = (unsigned int)v95;
                                    v116 = 5760;
                                }
                            }
                            if (v112 != 32)
                            {
                                if (!(v112 == 48) || !((v115 = (unsigned int)v95, v116 = 0x3000, v115 == v116)))
                                    goto LABEL_484485;
                                goto LABEL_484218;
                            }
                            else
                            {
                                v114 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v95 & 4294967295];
                                v113 = v114 | -0x100 | (v114 & 255) >> 1 & 255;
LABEL_48447b:
                                if (!(!(v113 & 1)))
                                    goto LABEL_484218;
LABEL_484485:
                                v86 = v104 + 1;
LABEL_484237:
                                v6 = 0;
                                v117 = (unsigned int)v95;
                                if ((unsigned int)v95 < 0x800)
                                {
                                    v6 = (char)(v117 >> 6) | 192;
                                    v7 = (char)v95 & 63 | 128;
                                    v119 = 2;
                                }
                                else if ((unsigned int)v95 < 0x10000)
                                {
                                    v6 = (char)(v117 >> 12) | 224;
                                    v7 = (char)((v95 & 4294967295 & 4294967295) >> 6 & 4294967295) & 63 | 128;
                                    v8 = (char)v95 & 63 | 128;
                                    v119 = 3;
                                }
                                else
                                {
                                    v6 = (char)(v117 >> 18) | 240;
                                    v7 = (char)((v95 & 4294967295 & 4294967295) >> 12 & 4294967295) & 63 | 128;
                                    v8 = (char)((v95 & 4294967295 & 4294967295) >> 6 & 4294967295) & 63 | 128;
                                    v9 = (char)v95 & 63 | 128;
                                    v119 = 4;
                                }
                                v120 = v4;
                                if (v1 - v120 < v119)
                                {
                                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::he1dbb0e10648cc84(&v1, v120, v119);
                                    v121 = v4;
                                }
                                memcpy(v121 + v3, &v6, v119);
                                v4 = &v4[v119];
                                if (v90 == v91)
                                    goto LABEL_484490;
                            }
                        }
                    }
                    v86 = (v104 & -8) + 8;
                    v106 = v4;
                    if (!(v86 > a4) || !(v106))
                    {
LABEL_48432f:
                        v94 = v107;
                        v18 = v94;
                        v108 = v36;
LABEL_48433c:
                        v85 = v108;
                        v118 = v4;
                        if (v118 == v1)
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::ha45b62adcfc3245e(&v1);
                        *((char *)(v3 + v118)) = (char)v95;
                        v4 = v118 + 1;
                        if (v90 == v91)
                            goto LABEL_484490;
                        continue;
                    }
                    if (!v16)
                    {
LABEL_4842ae:
                        v15 = v3;
                        v16 = v110;
                        v25 = &v15;
                        v26 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d580db3d38e7ba9;
                        v6 = &g_4e3f10;
                        v10 = 2;
                        v14 = 0;
                        v12 = &v25;
                        v13 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&v6, v106, v105);
                        alloc::string::String::replace_range::h062a5da02cd3d5fc(&v1, v16, 1, 0);
                        v107 = v4;
                        goto LABEL_48432f;
                    }
                    else
                    {
                        if (v16 < v106)
                        {
                            if (!(*((char *)(v15 + v16)) <= 191))
                                goto LABEL_4842ae;
                        }
                        else
                        {
                            if (v16 == v106)
                                goto LABEL_4842ae;
                        }
                        v27 = &g_4e3f48;
LABEL_484793:
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                }
LABEL_484490:
                v4 = v4;
LABEL_484527:
                v4 = v4;
                v84 = &v23;
                if (v4)
                {
                    v15 = &v1;
                    v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v6 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                    v10 = 1;
                    v14 = 0;
                    v12 = &v15;
                    v13 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v6, v125, v122);
                    v4 = 0;
                    v84 = &v23;
                }
            }
            if (v1)
                __rust_dealloc(v3);
            if (v21)
                __rust_dealloc(v22);
            if (v30)
                __rust_dealloc(v29);
            if (!(char)v19)
                close(v5);
            v38 = v24;
            if (v38 == v35)
                return v17;
        }
    }
    else
    {
        v17 = 0;
        v40 = v38->field_8;
        v24 = v38;
        v41 = v38->field_10;
        if (v41 != 1 || *(v40) != 45)
        {
            v6 = 0x1b600000000;
            v11 = 0;
            v10 = 0;
            v10 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v1, &v6, v40, v41);
            if ((int)v1)
            {
                *((double *)&v17) = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h55a74ce188d55c7c(v3, v40, v41);
                return v17;
            }
            v5 = *((int *)&v2);
            v0 = v5 | -0x100 | 1;
            *((int *)&v18) = 0;
            v42 = &g_4e3e20;
            v43 = &v5;
        }
        else
        {
            v28 = std::io::stdio::stdin::h7215cc131abb55d8();
            v18 = v28 | -0x100 | 1;
            v0 = 0;
            v42 = &g_4e3e78;
            v43 = &v28;
        }
        v44 = __rust_alloc(0x2000, 1);
        if (!v44)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v24 += 1;
        v29 = v44;
        v30 = 0x2000;
        v45 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        *((int128_t *)&v31) = 0;
        v32 = 0;
        v33 = v43;
        v34 = v42;
        v1 = 0;
        v3 = 1;
        continue;
    }
LABEL_4846f0:
    close(v5);
    return v17;
}
