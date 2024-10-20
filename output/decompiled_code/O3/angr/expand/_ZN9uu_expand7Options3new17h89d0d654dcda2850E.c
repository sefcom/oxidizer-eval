long long uu_expand::Options::new::h89d0d654dcda2850(struct_0 *a0, unsigned long long a1)
{
    char v0[4];  // [sp-0x210], Other Possible Types: unsigned long long *
    unsigned long v1;  // [bp-0x208], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v2;  // [sp-0x200]
    unsigned long long v3;  // [sp-0x1f8]
    char v4[4];  // [sp-0x1f0], Other Possible Types: unsigned long long
    char v5[4];  // [sp-0x1e8]
    int v6;  // [sp-0x1d8], Other Possible Types: void*, unsigned long, unsigned long long
    unsigned long long *v7;  // [sp-0x1d0], Other Possible Types: unsigned long long
    int v8;  // [sp-0x1c8], Other Possible Types: unsigned long long *, unsigned long long
    unsigned long long v9;  // [sp-0x1c0]
    void* v10;  // [sp-0x1b8], Other Possible Types: unsigned long long
    int v11;  // [sp-0x1a8], Other Possible Types: char, unsigned long, unsigned long long
    char v12;  // [bp-0x1a7]
    unsigned long v13;  // [sp-0x1a0], Other Possible Types: unsigned long long
    unsigned long v14;  // [sp-0x198], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x190]
    char v16[4];  // [bp-0x188], Other Possible Types: char
    char v17[4];  // [bp-0x180], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long long v18[3];  // [bp-0x178], Other Possible Types: char [4], char, unsigned long
    char v19[4];  // [bp-0x170], Other Possible Types: char, unsigned long, unsigned long long
    char v20;  // [bp-0x168]
    char v21;  // [bp-0x160]
    char v22;  // [bp-0x158]
    char v23;  // [bp-0x150]
    char v24;  // [bp-0x140]
    int v25;  // [bp-0x138], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v26;  // [sp-0x130]
    int v27;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v28;  // [sp-0x120]
    void* v29;  // [bp-0x118], Other Possible Types: int
    unsigned long long v30;  // [sp-0x108]
    int v31;  // [bp-0xf8], Other Possible Types: unsigned long long, unsigned long
    unsigned long v32;  // [sp-0xf0], Other Possible Types: unsigned long long
    int v33;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v34;  // [sp-0xe0]
    unsigned long long v35;  // [sp-0xd8]
    unsigned long v36;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v37;  // [sp-0xc8]
    unsigned long long v38;  // [sp-0xb8]
    unsigned long v39;  // [sp-0xb0], Other Possible Types: unsigned long long
    int v40;  // [sp-0xa8]
    int v41;  // [sp-0x98]
    int v42;  // [sp-0x88]
    unsigned long long v43;  // [sp-0x78]
    unsigned long v44;  // [sp-0x70], Other Possible Types: unsigned long long
    int v45;  // [sp-0x68]
    int v46;  // [sp-0x58]
    int v47;  // [sp-0x48]
    unsigned long long v48;  // [sp-0x38]
    int v50;  // xmm0
    unsigned long long *v51;  // rax
    unsigned long long v52;  // r14
    char v53[4];  // r12
    unsigned long long v54;  // r9
    char v55[4];  // r15
    void* v57;  // r13
    char v58[4];  // r12
    unsigned long long v60;  // r13
    char v61[4];  // rax
    unsigned long long v62;  // rsi
    char v63[4];  // rdx
    unsigned int v64;  // ecx
    unsigned int v65;  // ecx
    unsigned int v66;  // r8d
    unsigned int v67;  // edi
    unsigned long long v68;  // r13
    char v69[4];  // r13
    unsigned long long *v70;  // rax
    unsigned long long *v71;  // rbx
    unsigned int v72;  // r9d
    char v73[4];  // r14
    char v74[4];  // r12
    unsigned long long *v75;  // rax
    char v76[4];  // rsi
    char v77[4];  // rbp
    char v78[4];  // rdx
    unsigned int v79;  // ecx
    unsigned int v80;  // r8d
    unsigned int v81;  // edi
    unsigned long long v82;  // rdx
    unsigned long long v83;  // rdx
    char *v84;  // rsi
    unsigned long long v85;  // rdx
    unsigned int v86;  // ecx
    unsigned long long v88;  // rax
    unsigned int v89;  // ecx
    unsigned long long *v90;  // rcx
    unsigned long long *v91;  // rcx
    char v92[4];  // r15
    char v93;  // bl
    char v94[4];  // r12
    unsigned long long *v95;  // rax
    char v96[4];  // r13
    char v97[4];  // rbp
    char v98[4];  // r12
    char v99[4];  // r14
    char v100[4];  // r13
    char v101[4];  // rbx
    char v102[4];  // r12
    char v105[4];  // rbx
    char v106[4];  // r12
    unsigned long long v107;  // rcx
    char v108[4];  // r13
    unsigned int v109;  // edi
    unsigned int v110;  // edx
    unsigned int v111;  // eax
    unsigned long long v112;  // rdi
    char v113[4];  // r12
    char v114[4];  // rsi
    char v115[4];  // rbp
    char v116[4];  // r13
    char v117[4];  // rax
    unsigned long long v119;  // rsi
    unsigned long long *v120;  // rax
    unsigned long long *v121;  // rdx
    unsigned long long v122;  // rsi
    unsigned long long v123;  // rdi
    unsigned long long v124;  // r8
    unsigned long long v125;  // rcx
    int v127;  // xmm0
    unsigned long long v128[3];  // rax
    unsigned long long v129[3];  // rbp
    char *v130;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he8cd7be6d2b043fd(&v17, a1, "tabsAuto", 4);
    v36 = "tabsAuto";
    v37 = 4;
    if (v17)
    {
        v35 = *((long long *)&v22);
        v50 = *((int128_t *)&v18);
        *((int128_t *)&v33) = *((int128_t *)&v20);
        v31 = v50;
        v11 = &v36;
        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde6efb36308096d4;
        v14 = &v31;
        v15 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v6 = &anon.c2780e5a99e14a30c5165ca0ecc2a4bf.4.llvm.7244247611968800107;
        v7 = 2;
        v10 = 0;
        v8 = &v11;
        v9 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v6); /* do not return */
    }
    *((int128_t *)&v25) = *((int128_t *)&v19);
    *((int128_t *)&v27) = *((int128_t *)&v21);
    *((int128_t *)&v29) = *((int128_t *)&v23);
    v30 = *((long long *)&v24);
    if (!v39)
    {
        v51 = __rust_alloc(8, 8);
        if (!v51)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v51) = 8;
        v1 = 1;
        v0 = 1;
LABEL_482743:
        v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "initialno-utf8FILES", 7);
        v119 = *(v51);
        v120 = v0;
        if (v120 != 1)
        {
            v121 = 8;
            do
            {
                v123 = *((long long *)(v51 + v121));
                v124 = v123 - v122;
            } while ((v121 += 8, v120 << 3 != v121));
        }
        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v11, " --tabs=", 1, v125);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he8cd7be6d2b043fd(&v17, a1, "FILES", 5);
        v36 = "FILES";
        v37 = 5;
        if (v17)
        {
            v10 = *((long long *)&(&v21)[8]);
            v127 = *((int128_t *)&v18);
            *((int128_t *)&v8) = *((int128_t *)&(&v19)[8]);
            v6 = v127;
            v31 = &v36;
            v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde6efb36308096d4;
            v33 = &v6;
            v34 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
            v25 = &anon.c2780e5a99e14a30c5165ca0ecc2a4bf.4.llvm.7244247611968800107;
            v26 = 2;
            v29 = 0;
            v27 = &v31;
            v28 = 2;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v25); /* do not return */
        }
        *((int128_t *)&v25) = *((int128_t *)&v19);
        *((int128_t *)&v27) = *((int128_t *)&v21);
        *((int128_t *)&v29) = *((int128_t *)&v23);
        v30 = *((long long *)&v24);
        if (v44)
        {
            v44 = v18;
            *((int128_t *)&v45) = (int128_t)v25;
            *((int128_t *)&v46) = (int128_t)v27;
            *((int128_t *)&v47) = (int128_t)v29;
            v48 = v30;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h4570b9b0ad48516e(&v17, &v44);
        }
        else
        {
            v128 = __rust_alloc(24, 8);
            if (!v128)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v129 = v128;
            v130 = __rust_alloc(1, 1);
            if (!v130)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            *(v130) = 45;
            v129[0] = 1;
            v129[1] = v130;
            v129[2] = 1;
            v17 = 1;
            v18[0] = v129;
            v19 = 1;
        }
        a0->field_10 = v19;
        a0->field_0 = v17;
        *((unsigned long long *[3])&a0->field_8) = v18;
        a0->field_40 = v14;
        *((int128_t *)&a0->field_30) = (int128_t)v11;
        a0->field_18 = v1;
        a0->field_20 = v51;
        a0->field_28 = v0;
        a0->field_48 = v16;
        a0->field_49 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "no-utf8FILES", 7) ^ 1;
        a0->field_4a = 0;
        return a0;
    }
    v39 = v18;
    *((int128_t *)&v40) = (int128_t)v25;
    *((int128_t *)&v41) = (int128_t)v27;
    *((int128_t *)&v42) = (int128_t)v29;
    v43 = v30;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he6bdf5e1cfe511e6(&v31, &v39);
    v52 = v32;
    alloc::str::join_generic_copy::hb0d4bbe63f2478f2(&v17, v52, v33, ", --tabs=", 1);
    v53 = v18;
    v54 = v19;
    v55 = &v53[v54];
    if (v54)
    {
        v57 = 0;
        do
        {
            v61 = v58;
            v62 = v61[0];
            if ((char)v62 >= 0)
            {
                v63 = &v61[1];
                v64 = v62;
                if (v64 == 44)
                    goto LABEL_482349;
                goto LABEL_482340;
            }
            v65 = (unsigned int)v62 & 31;
            v66 = v61[1] & 63;
            if ((v62 & 255) <= 223)
            {
                v63 = &v61[2];
                v64 = v65 * 64 | v66;
                if (v64 == 44)
                    goto LABEL_482349;
                goto LABEL_482340;
            }
            v67 = v61[2] & 63 | v66 * 64;
            if ((v62 & 255) < 240)
            {
                v63 = &v61[3];
                v64 = v65 * 0x1000 | v67;
                if (v64 == 44)
                    goto LABEL_482349;
            }
            else
            {
                v63 = v61 + 1;
                v64 = (v65 & 7) * 0x40000 | v61[3] & 63 | v67 * 64;
                if (v64 == 44)
                    goto LABEL_482349;
            }
LABEL_482340:
            if (v64 != 32)
                goto LABEL_482419;
LABEL_482349:
            v57 = v57 - v61 + (char *)v63;
        } while (v63 != v55);
    }
LABEL_482419:
    v68 = v60;
    if (v54 == v68)
    {
        v75 = __rust_alloc(8, 8);
        if (!v75)
        {
            v3 = v3;
            *(&v5) = v53;
            v2 = v52;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        v51 = v75;
        *(v75) = 8;
        v0 = 1;
        v93 = 0;
        v1 = 1;
        a0 = a0;
        if (!v3)
        {
LABEL_48271c:
            if (v31)
                __rust_dealloc(v52);
            goto LABEL_482743;
        }
    }
    else
    {
        v38 = v54 - v68;
        v3 = v17;
        v2 = v52;
        *(&v5) = v53;
        v69 = &v53[v68];
        v6 = 0;
        v7 = 8;
        v8 = 0;
        v70 = 0;
        v0 = 0;
        v71 = 0;
        v72 = 0;
        v73 = 0;
        *(&v16) = v69;
        v74 = 0;
        do
        {
            v76 = v73;
            do
            {
                v77 = v69;
                v78 = v74;
                if (v77 == v55)
                {
                    v74 = v78;
                    v69 = v55;
                    v73 = v76;
                    v82 = v38;
                    v83 = v82 - (char *)v76;
                    if (v82 == v76)
                        goto LABEL_482487;
                }
                v70 = v77[0];
                if ((char)v70 >= 0)
                {
                    v69 = &v77[1];
                }
                else
                {
                    v79 = (unsigned int)v70 & 31;
                    v80 = v77[1] & 63;
                    if ((v70 & 255) <= 223)
                    {
                        v69 = &v77[2];
                        v70 = v79 * 64 | v80;
                    }
                    else
                    {
                        v81 = v77[2] & 63 | v80 * 64;
                        if ((v70 & 255) >= 240)
                        {
                            v69 = v77 + 1;
                            v70 = v77[3] & 63 | v81 * 64 | (v79 & 7) * 0x40000;
                        }
                        else
                        {
                            v69 = &v77[3];
                            v70 = v81 | v79 * 0x1000;
                        }
                    }
                }
                v74 = v69 - v77 + (char *)v78;
                v73 = v74;
            } while ((unsigned int)v70 != 44 && (unsigned int)v70 != 32);
            v83 = v78 - v76;
            if (v78 == v76)
                goto LABEL_482487;
            v1 = v72;
            v84 = v76 + v16;
LABEL_48258e:
            v85 = v83;
            v70 = v70 | -0x100 | 2;
            switch (v86)
            {
            case 43:
                v84 += 1;
                v71 = v70 & 4294967295;
                if (!v85 - 1)
                    goto LABEL_482480;
                else
                    goto LABEL_48258e;
                goto LABEL_48258e;
            case 47:
                v70 = v70 | -0x100 | 1;
            default:
                core::str::converts::from_utf8::ha1effb4cca6d9901(&v17, v84, v85);
                if (v17)
                {
                    *((int128_t *)&v11) = *((int128_t *)&v18);
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                }
                *(&v4) = v18;
                *(&v0) = v19;
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v11, v18, v0);
                if (!v11)
                {
                    v4 = v13;
                    if (!v4)
                    {
                        v92 = 9223372036854775811;
                        goto LABEL_482af2;
                    }
                    else if (!(v0) || !(*((long long *)(-8 + (char *)v7 + 0x8 * v0)) >= v4))
                    {
                        v0 = v8;
                        v88 = v1;
                        if (((char)v88 & 1))
                        {
                            v74 = 1;
                            v99 = __rust_alloc(1, 1);
                            v77 = 1;
                            if ((char)v71 != 1)
                            {
                                if (v99)
                                    v99[0] = 43;
                                else
                                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                            }
                            else
                            {
                                if (v99)
                                    v99[0] = 47;
                                else
                                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                            }
                            v92 = 9223372036854775810;
                            *((long long *)&v0) = 1;
                            v69 = v69 | -0x100 | 1;
                            v71 = 0;
                            break;
                        }
                        else
                        {
                            v89 = ((v71 & 255 & 255) ? (unsigned int)v88 : 1);
                            v1 = v89;
                            if (v0 == v6)
                                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h23f2cd992ffa5b2c(&v6);
                            v70 = v7;
                            v90 = v0;
                            *((unsigned long long *)((char *)v70 + 0x8 * v90)) = v4;
                            v0 = (char *)v90 + 1;
                            v8 = v0;
                            v72 = v1;
                            goto LABEL_482487;
                        }
                    }
                    else
                    {
                        v92 = 9223372036854775813;
LABEL_482af2:
                        break;
                    }
                }
                if (v12 == 2)
                {
                    v96 = v0;
                    if (!v96)
                    {
                        v99 = 1;
                    }
                    else
                    {
                        if (v96 < 0)
                            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                        v77 = 1;
                        v99 = __rust_alloc(v0, 1);
                        if (!v99)
                            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                        *(&v100) = v0;
                    }
                    v69 = v100;
                    memcpy(v99, v4, v69);
                    v71 = v69 >> 8;
                    v92 = 9223372036854775812;
                    break;
                }
                v97 = v0;
                v98 = v4;
                if (v97)
                {
                    v101 = 0;
                    do
                    {
                        v106 = v102;
                        v107 = v106[0];
                        if ((char)v107 >= 0)
                        {
                            v108 = &v106[1];
                            goto LABEL_482b40;
                        }
                        v109 = (unsigned int)v107 & 31;
                        v110 = v106[1] & 63;
                        if ((v107 & 255) <= 223)
                        {
                            v108 = &v106[2];
                            v112 = v109 * 64 | v110;
                        }
                        else
                        {
                            v111 = v106[2] & 63 | v110 * 64;
                            if ((v107 & 255) < 240)
                            {
                                v108 = &v106[3];
                                v112 = v111 | v109 * 0x1000;
                            }
                            else
                            {
                                v108 = v106 + 1;
                                v107 = v106[3] & 63 | v111 * 64 | (v109 & 7) * 0x40000;
LABEL_482b40:
                                v112 = v107 & 4294967295;
                            }
                        }
                        if (!((unsigned int)(v112 - 48) < 10) && (!((unsigned int)v112 >= 128) || !((char)core::unicode::unicode_data::n::lookup::hbd99f7e092eb3e7c(v112))))
                            goto LABEL_482cce;
                        v101 = v101 - v106 + (char *)v108;
                        v113 = v108;
                    } while (v113 != v98 + v97);
                }
LABEL_482cce:
                v114 = v4 + v105;
                v115 = v97 - v105;
                if (v97 == v105 || (v114[0] | 4) != 47)
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1715d011bf0f16e2(&v17, v114, v115);
                    v69 = v17;
                    v71 = v69 >> 8;
                    *(&v0) = v19;
                    v92 = 0x8000000000000000;
                    *(&v99) = v18;
                    break;
                }
                else
                {
                    v92 = v115;
                    if (v115 != 1 && v114[1] <= 191)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    v116 = v114;
                    v117 = __rust_alloc(1, 1);
                    if (!v117)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v99 = v117;
                    v99[0] = v116[0];
                    if (v92 < 0)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v74 = __rust_alloc(v92, 1);
                    if (v74)
                    {
                        memcpy(v74, v116, v92);
                        v69 = v116 | -0x100 | 1;
                        v71 = 0;
                        *((long long *)&v0) = 1;
                        if (v6)
                            __rust_dealloc(v7);
                        a0 = a0;
                        a0->field_8 = (char)v69;
                        *((unsigned int *)&a0->padding_9[0]) = (unsigned int)v71;
                        a0->padding_9[6] = v71 >> 48;
                        *((unsigned short *)&a0->padding_9[4]) = v71 >> 32;
                        a0->field_10 = v99;
                        a0->field_18 = v0;
                        a0->field_20 = v92;
                        a0->field_28 = v74;
                        a0->field_30 = v77;
                        a0->field_0 = 0x8000000000000000;
                        if (v3)
                            __rust_dealloc(v5);
                        if (v31)
                        {
                            __rust_dealloc(v2);
                            return a0;
                        }
                        return a0;
                    }
                }
            }
LABEL_482480:
            v71 = v70 & 4294967295;
LABEL_482487:
        } while (v77 != v55);
        v91 = v0;
        if (!v91)
        {
            v95 = __rust_alloc(8, 8);
            a0 = a0;
            v52 = v2;
            if (!v95)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v51 = v95;
            *(v95) = 8;
            if (v6)
                __rust_dealloc(v7);
            v0 = 1;
            v93 = 0;
            v1 = 1;
            *(&v94) = v5;
            if (!v3)
                goto LABEL_48271c;
        }
        else
        {
            v93 = (v91 == 1 ? (char)(v71 & 4294967295 & 4294967295) : 0);
            v1 = v6;
            v51 = v7;
            a0 = a0;
            v52 = v2;
            *(&v94) = v5;
            if (!v3)
                goto LABEL_48271c;
        }
    }
    __rust_dealloc(v94);
    goto LABEL_48271c;
}
