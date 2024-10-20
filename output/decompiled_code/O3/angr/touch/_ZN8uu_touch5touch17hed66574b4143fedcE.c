int uu_touch::touch::hed66574b4143fedc()
{
    char v0;  // [sp-0x1f1]
    unsigned int v1;  // [sp-0x1f0]
    char v2;  // [sp-0x1ea]
    char v3;  // [sp-0x1e9]
    unsigned long long v4;  // [sp-0x1e8]
    void* v5;  // [sp-0x1e0], Other Possible Types: unsigned long long, unsigned int
    unsigned int v6;  // [sp-0x1dc]
    unsigned long long v7;  // [bp-0x1d8], Other Possible Types: unsigned int, unsigned long
    void* v8;  // [bp-0x1d0], Other Possible Types: unsigned int
    unsigned long long v9;  // [sp-0x1c0]
    unsigned long long v10;  // [sp-0x1b8]
    char v11;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long v12;  // [bp-0x1a0], Other Possible Types: char
    unsigned long long v13;  // [sp-0x198]
    void* v14;  // [sp-0x188]
    unsigned int v15;  // [sp-0x170]
    unsigned int v16;  // [sp-0x16c]
    unsigned long v17;  // [sp-0x168], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x160]
    int v19;  // [sp-0x158], Other Possible Types: unsigned long long
    char *v20;  // [sp-0x150]
    unsigned long long v21;  // [sp-0x148]
    char v22;  // [bp-0x130], Other Possible Types: unsigned long long, unsigned long
    char v23;  // [bp-0x12c]
    unsigned long long v24;  // [sp-0x128], Other Possible Types: unsigned long
    void* v25;  // [bp-0x120], Other Possible Types: char, unsigned int
    char v26;  // [bp-0x11c]
    char v27;  // [bp-0x118]
    char v28;  // [bp-0x110], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v29;  // [sp-0x108]
    unsigned long long v30;  // [sp-0x100]
    char v31;  // [sp-0xf8]
    unsigned long long v32;  // [sp-0x80]
    struct_0 *v33;  // [sp-0x78]
    unsigned long long *v34;  // [sp-0x70]
    unsigned long v35;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned int v36;  // [sp-0x60]
    unsigned int v37;  // [sp-0x5c]
    unsigned long v38;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned int v39;  // [sp-0x50]
    unsigned int v40;  // [sp-0x4c]
    struct_4 *v42;  // rcx
    unsigned long long v43;  // rbp
    void* v44;  // rcx
    unsigned long long v45;  // cc_ndep
    void* v46;  // r13
    unsigned long v47;  // r12
    unsigned long long v48;  // rsi
    unsigned int v49;  // edx
    unsigned long long v50;  // rsi
    unsigned int v51;  // eax
    unsigned long v52;  // rsi
    unsigned long long v53;  // rdx
    void* v54;  // rcx
    unsigned long long v55;  // rbx
    unsigned long long v56;  // rcx
    unsigned int v57;  // ecx
    unsigned long long v58;  // r14
    unsigned long long v59;  // cc_ndep
    unsigned long long v60;  // r12
    unsigned long long v61;  // rsi
    unsigned long v62;  // rdx
    unsigned long v63;  // rdx
    unsigned int v64;  // ebx
    unsigned long long v65;  // rdx
    unsigned long long v66;  // rax
    unsigned long long v67;  // rcx
    unsigned long long v68;  // rdi
    unsigned int v69;  // r13d
    struct_1 *v70;  // rdi
    struct_1 *v71;  // rax
    unsigned int v72;  // eax
    unsigned long long v74;  // rcx
    unsigned long long v75;  // r13
    unsigned long long v76;  // r8
    unsigned long long v77;  // r9
    struct_3 *v79;  // rax
    unsigned long long v80;  // rcx
    unsigned long long v81;  // rsi
    unsigned long long v82;  // rdx
    unsigned long long v83;  // rax
    unsigned long long v84;  // rcx
    unsigned long long v85;  // rdi
    int v87;  // xmm0
    struct_2 *v89;  // rax
    unsigned long long v90;  // rcx
    unsigned long long v91;  // rsi
    unsigned int v92;  // eax
    unsigned long long v94;  // rcx
    struct_3 *v96;  // rax
    unsigned long long v97;  // rcx
    unsigned int v98;  // esi
    unsigned long long v99;  // rbx
    int v100;  // xmm0
    struct_2 *v102;  // rax
    struct_0 *v103;  // r14
    void* v105;  // rbp
    unsigned long long v106;  // r15
    int v107;  // ymm0
    unsigned long long v108;  // rbx
    unsigned long long v109;  // r13
    unsigned long long v110;  // r12
    unsigned long long v111;  // rcx
    unsigned long long v113;  // r12
    int v114;  // xmm0
    char *v115;  // rax
    void* v116;  // rax
    unsigned long long v118;  // rax
    unsigned int v119;  // ecx
    unsigned long long v120;  // rdx
    unsigned int v121;  // esi
    unsigned long long v122;  // rax
    unsigned long long v123;  // rsi
    unsigned long long v124;  // rcx
    void* v127;  // rbx
    unsigned long long v128;  // rdx
    unsigned long v130;  // rbx
    unsigned long long v132[6];  // rax

    v43 = v42->field_18;
    v44 = v43 + 9223372036854775809;
    if (v43 >= 9223372036854775810)
        v44 = 0;
    if (v44)
    {
        if (v44 == 1)
        {
            v48 = v42->field_20;
            v49 = v42->field_28;
        }
        else
        {
            chrono::offset::local::Local::now::h9676919418f603da(&v22, v50, 0x8000000000000000);
            v51 = v22;
            v52 = v51 >> 13;
            v53 = v52 - 1 & 4294967295;
            v54 = 0;
            if ((unsigned int)v52 <= 0)
            {
                v56 = (1 - v52 & 4294967295) * 1374389535;
                v45 = amd64g_calculate_rflags_c(36, v56 >> 39, v56 >> 38, v45);
                v57 = (unsigned int)(v56 >> 39) + 1;
                v53 = v53 + v57 * 400 & 4294967295;
                v54 = v57 * -146097;
            }
            v49 = v24;
            v48 = -62135683200 + *((int *)&v23) + (((((v51 >> 4 & 511) + v54 & 4294967295) - (((v53 & 4294967295) * 1374389535 >> 37) + ((v53 & 4294967295) * 1374389535 >> 63) & 4294967295) & 4294967295) + ((unsigned int)v53 * 1461 >> 2) & 4294967295) + ((((v53 & 4294967295) * 1374389535 >> 37) + ((v53 & 4294967295) * 1374389535 >> 63) & 4294967295 & 4294967295) >> 2 & 4294967295) & 4294967295 & 4294967295) * 86400;
        }
        v9 = v48;
        v1 = v49;
        v9 = v9;
    }
    else
    {
        v46 = v42->field_20;
        v47 = *((long long *)&v42->field_28);
        uu_touch::stat::hdc2acdb09f226761(&v22, v46, v47, -0x100 | !v42->field_31);
        if (!v22)
        {
            v49 = *((int *)&v25);
            v9 = *((long long *)&v27);
            v1 = *((int *)&v28);
        }
        else
        {
            v55 = v24;
            if (!v47)
            {
                v58 = 1;
            }
            else if (v47 < 0)
            {
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            }
            else
            {
                v58 = __rust_alloc(v47, 1);
                if (!v58)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            }
            memcpy(v58, v46, v47);
            v71 = v70;
            v71->field_0 = 9223372036854775810;
            v71->field_8 = v47;
            v71->field_10 = v58;
            v71->field_14 = v58 >> 32;
            v71->field_18 = v47;
            v71->field_20 = v55;
            v71->field_24 = v55 >> 32;
            return;
        }
    }
    v9 = v9;
    v60 = v42->field_0;
    if (v60 == 0x8000000000000000)
    {
        v9 = v9;
        v1 = v1;
        if (!(!v62))
            goto LABEL_53e43c;
    }
    else
    {
        v12 = v63;
        v64 = v49;
        v65 = (v9 * 1749024623285053783 >> 77) + (v9 * 1749024623285053783 >> 127);
        v66 = v65 * 86400;
        v67 = v9 - v66;
        v68 = v67 >> 63;
        v13 = v9;
        v69 = ((char)amd64g_calculate_condition(9, 20, v67, 0, v59) ? (unsigned int)(v9 + -(v66) + 86400) : (unsigned int)v67);
        if (v68 + v65 - 2146764485 < -0x100000000)
        {
            v79 = v70;
            v79->field_0 = 9223372036854775809;
            v79->field_8 = v13;
            v79->field_10 = v64;
            return;
        }
        v72 = chrono::naive::date::NaiveDate::from_num_days_from_ce_opt::h0d2138c4bf763992((unsigned int)(v68 + v65) + 719163);
        if (!v72)
        {
            vvar_1332{reg 16} = v70;
            v79->field_0 = 9223372036854775809;
            v79->field_8 = v13;
            v79->field_10 = v64;
            return;
        }
        if (v64 > 1999999999)
        {
            vvar_1353{reg 16} = v70;
            v79->field_0 = 9223372036854775809;
            v79->field_8 = v13;
            v79->field_10 = v64;
            return;
        }
        if (v64 >= 0x3b9aca00 && v69 - (unsigned int)(v69 / 60) * 60 != 59)
        {
            vvar_1359{reg 16} = v70;
            v79->field_0 = 9223372036854775809;
            v79->field_8 = v13;
            v79->field_10 = v64;
            return;
        }
        v5 = v72;
        v6 = v69;
        v7 = v64;
        v74 = *((long long *)&v5);
        if (!(unsigned int)v35)
        {
            vvar_1356{reg 16} = v70;
            v79->field_0 = 9223372036854775809;
            v79->field_8 = v13;
            v79->field_10 = v64;
            return;
        }
        v35 = v74;
        v36 = v7;
        v37 = _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_utc_datetime::ha2255ab3e282bcce(1, &v5);
        v75 = v42->field_8;
        v4 = v42->field_10;
        uu_touch::parse_date::hc545ac3f28e5e52c(&v22, &v35, v75, v42->field_10, v76, v77);
        v80 = v22;
        v64 = *((int *)&v25);
        if (v80 != 9223372036854775812)
        {
            v87 = *((int128_t *)&v26);
            v89 = v70;
            v89->field_14 = *((int128_t *)&v28);
            *((void*)&(&v89->field_10)[1]) = v87;
            v89->field_0 = v80;
            v89->field_8 = v13;
            v89->field_10 = v64;
            return;
        }
        v11 = 9223372036854775812;
        v10 = v75;
        v13 = v24;
        v81 = v9;
        v82 = (v81 * 1749024623285053783 >> 77) + (v81 * 1749024623285053783 >> 127);
        v83 = v82 * 86400;
        v84 = v81 - v83;
        v85 = v84 >> 63;
        if (v85 + v82 - 2146764485 < -0x100000000)
        {
            v96 = v70;
            v96->field_0 = 9223372036854775809;
            v96->field_8 = v91;
            v96->field_10 = v1;
            return;
        }
        v92 = chrono::naive::date::NaiveDate::from_num_days_from_ce_opt::h0d2138c4bf763992((unsigned int)(v85 + v82) + 719163);
        v91 = v9;
        if (!v92)
        {
            vvar_1336{reg 16} = v70;
            v96->field_0 = 9223372036854775809;
            v96->field_8 = v91;
            v96->field_10 = v1;
            return;
        }
        v91 = v9;
        if (v1 > 1999999999)
        {
            vvar_1363{reg 16} = v70;
            v96->field_0 = 9223372036854775809;
            v96->field_8 = v91;
            v96->field_10 = v1;
            return;
        }
        if (v1 >= 0x3b9aca00)
        {
            v9 = v9;
            if ((unsigned int)((v90 & 4294967295) - (unsigned int)((v90 & 4294967295) / 60) * 60) != 59)
            {
                vvar_1371{reg 16} = v70;
                v96->field_0 = 9223372036854775809;
                v96->field_8 = v91;
                v96->field_10 = v1;
                return;
            }
        }
        v5 = v92;
        v6 = v90;
        v7 = v1;
        v94 = *((long long *)&v5);
        v9 = v9;
        if (!(unsigned int)v38)
        {
            vvar_1367{reg 16} = v70;
            v96->field_0 = 9223372036854775809;
            v96->field_8 = v91;
            v96->field_10 = v1;
            return;
        }
        v38 = v94;
        v39 = v7;
        v40 = _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_utc_datetime::ha2255ab3e282bcce(1, &v5);
        uu_touch::parse_date::hc545ac3f28e5e52c(&v22, &v38, v10, v4, v76, v77);
        v97 = v22;
        v98 = *((int *)&v25);
        if (v97 != v11)
        {
            v100 = *((int128_t *)&v26);
            v102 = v70;
            v102->field_14 = *((int128_t *)&v28);
            *((void*)&(&v102->field_10)[1]) = v100;
            v102->field_0 = v97;
            v102->field_8 = v9;
            v102->field_10 = v1;
            return;
        }
        v1 = v98;
        v9 = v24;
        v99 = v12;
        v9 = v9;
        v1 = v1;
        v61 = v13;
        if (v99)
        {
LABEL_53e43c:
            v3 = v42->field_30;
            v11 = v42->field_31;
            v0 = v42->field_32;
            v2 = !(v43 ^ 9223372036854775809) && !(v60 ^ 0x8000000000000000);
            v16 = v42->field_33;
            v103 = v50 + 16;
            v105 = 0;
            v13 = v61;
            v15 = v64;
            do
            {
                v106 = v99 * 24;
                v108 = v103->field_0;
                if (v108 == 0x8000000000000000)
                {
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v24, "/dev/stdoutMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 11);
                    v109 = v25;
                    v111 = *((long long *)&v27);
                    v10 = v24;
                    v12 = v10 == 0x8000000000000000;
                    v14 = v109;
                    v32 = v111;
                    v34 = v109 + 8;
                    v33 = v109 + 16;
                    if (v10 != 0x8000000000000000)
                        v113 = v32;
                    else
                        v109 = *(v34);
                    v110 = v113;
                    v115 = __rust_alloc(1, 1);
                    if (!v115)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    *(v115) = 45;
                    v19 = 1;
                    v20 = v115;
                    v21 = 1;
                    if (!(!v11))
                        goto LABEL_53e690;
                    goto LABEL_53e62a;
                }
                else
                {
                    v109 = v103->field_-8;
                    v110 = v103->field_-10;
                    v17 = v109;
                    v18 = v110;
                    v5 = 0;
                    v7 = 1;
                    v8 = 0;
                    v30 = 32;
                    v31 = 3;
                    v22 = 0;
                    v25 = 0;
                    v28 = &v5;
                    v29 = &g_691a38;
                    if ((char)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76(&v17, &v22))
                        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                    v14 = &v103->field_0;
                    v34 = &v103->field_-8;
                    v114 = *((int128_t *)&v5);
                    v107 = v107 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v114;
                    v19 = v114;
                    v21 = v8;
                    v12 = 1;
                    v33 = v103;
                    v10 = 0x8000000000000000;
                    if (!v11)
                    {
LABEL_53e62a:
                        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v22, v109, v110);
                        goto LABEL_53e6a4;
                    }
                    else
                    {
LABEL_53e690:
                        std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v22, v109, v110);
LABEL_53e6a4:
                        v4 = v24;
                        if ((unsigned int)v22 == 2)
                            goto *((int *)(4631676 + 4 * ((int)(long long)(stack_base)[488] & 3))) + 4631676;
                        v1 = v1;
                        v13 = v13;
                        v15 = v15;
                        v9 = v9;
                        if (v16 != 2)
                        {
                            if (v16 == 1)
                            {
                                uu_touch::stat::hdc2acdb09f226761(&v22, v109, v110, -0x100 | !v11);
                                if (v22)
                                {
                                    v116 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h9defb2398e4d1a5e(v24, v109, v110);
                                    goto LABEL_53ec69;
                                }
                                else
                                {
                                    v1 = v1;
                                    v13 = v24;
                                    v9 = v9;
                                }
                            }
                            else
                            {
                                uu_touch::stat::hdc2acdb09f226761(&v22, v109, v110, -0x100 | !v11);
                                if (v22)
                                {
                                    v116 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::ha810a98895c55c97(v24, v109, v110);
                                    goto LABEL_53ec69;
                                }
                                v118 = *((long long *)&v27);
                                v119 = v28;
                                v120 = v13;
                                v121 = v15;
                                if (!v11)
                                    goto LABEL_53ec0e;
                                goto LABEL_53eb90;
                            }
                        }
                        v118 = v9;
                        v121 = v15;
                        v120 = v13;
                        v119 = v1;
                        if (!v11)
                            goto LABEL_53ec0e;
LABEL_53eb90:
                        if (v108 != 0x8000000000000000)
                        {
                            v7 = v120;
                            v8 = v121;
                            v5 = 1;
                            v24 = v118;
                            v25 = v119;
                            v22 = 1;
                            v122 = _ZN8filetime3imp5linux9set_times17h2b0efcb4bbf15890E.llvm.4881640005072607065(v109, v110, &v5, &v22, 1, v77);
                            goto LABEL_53ec56;
                        }
LABEL_53ec0e:
                        v7 = v120;
                        v8 = v121;
                        v5 = 1;
                        v24 = v118;
                        v25 = v119;
                        v22 = 1;
                        v122 = _ZN8filetime3imp5linux9set_times17h2b0efcb4bbf15890E.llvm.4881640005072607065(v109, v110, &v5, &v22, 0, v77);
LABEL_53ec56:
                        if (v122)
                        {
                            v116 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h805a79e51753ddf7(v122, v109, v110);
                        }
                        else
                        {
                            v116 = 0;
                            continue;
                        }
LABEL_53ec69:
                    }
                }
                if (v19)
                    __rust_dealloc(v20);
                if (!v116)
                {
                    v123 = v10;
                    v12 |= !v123;
                    if (!vvar_1275 && v123)
                        __rust_dealloc(v14);
                }
                else if (v12)
                {
                    v127 = *(v34);
                    v128 = v33->field_-10;
                    if (!v128)
                    {
                        v14 = 1;
                        v130 = v128;
                        memcpy(v14, v127, v130);
                        v124 = v130;
                        v32 = v124;
                        v132 = v70;
                        v132[0] = v124;
                        v132[1] = v14;
                        v132[2] = v32;
                        v132[3] = v116;
                        v132[4] = &anon.a8009f0f96d850c1c46a2cf3287456a4.4.llvm.17503802422331354604;
                        v132[5] = v105;
                        return;
                    }
                    if (!(v128 >= 0 && __rust_alloc(v128, 1)))
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    vvar_1341{stack -392} = 1;
                    memcpy(v14, v127, v128);
                    vvar_1344{stack -128} = v130;
                    vvar_1345{stack -128} = v124;
                    vvar_1350{reg 16} = v70;
                    v132[0] = v124;
                    v132[1] = v14;
                    v132[2] = v32;
                    v132[3] = v116;
                    v132[4] = &anon.a8009f0f96d850c1c46a2cf3287456a4.4.llvm.17503802422331354604;
                    v132[5] = v105;
                    return;
                }
                else
                {
                    v124 = v10;
                    if (v124 != 9223372036854775812)
                    {
                        vvar_1329{reg 16} = v70;
                        v132[0] = v124;
                        v132[1] = v14;
                        v132[2] = v32;
                        v132[3] = v116;
                        v132[4] = &anon.a8009f0f96d850c1c46a2cf3287456a4.4.llvm.17503802422331354604;
                        v132[5] = v105;
                        return;
                    }
                }
                v103 += 1;
                v105 += 1;
            } while (v106 != 24);
        }
    }
    v70->field_0 = 9223372036854775812;
    return;
}
