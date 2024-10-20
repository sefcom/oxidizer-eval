long long uu_hostname::display_hostname::h1a2587dc25b231b7(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    void* v1;  // [sp-0x150]
    char *v2;  // [sp-0x148]
    void* v3;  // [sp-0x140], Other Possible Types: char *
    void* v4;  // [bp-0x138], Other Possible Types: int, char, unsigned long, unsigned long long
    struct_6 *v5;  // [sp-0x130], Other Possible Types: unsigned short *, unsigned long, unsigned long long
    int v6;  // [sp-0x128], Other Possible Types: void*, struct struct_1 **, struct struct_3 **, struct struct_7 **, unsigned short *, unsigned long long
    unsigned long v7;  // [sp-0x120], Other Possible Types: unsigned long long
    void* v8;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x110]
    unsigned long long v10;  // [sp-0x108]
    char v11;  // [sp-0x100]
    char *v12;  // [sp-0xf0], Other Possible Types: struct struct_2 **, void*, unsigned long long
    char *v13;  // [sp-0xe8], Other Possible Types: struct_8 *, unsigned long long
    void* v14;  // [sp-0xe0]
    char v15[4];  // [bp-0xd8], Other Possible Types: struct struct_0 **, uint128_t *, int, char, unsigned long long, unsigned long
    char v16[4];  // [sp-0xd0], Other Possible Types: uint128_t *, void*, unsigned long, unsigned long long
    int v17;  // [bp-0xc8], Other Possible Types: unsigned long, char
    int v18;  // [sp-0xb8]
    int v19;  // [bp-0xa8], Other Possible Types: unsigned short *
    char v20[4];  // [sp-0xa0]
    unsigned short *v21;  // [sp-0x98]
    unsigned short *v22;  // [sp-0x90]
    void* v23;  // [bp-0x88], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v24;  // [sp-0x80]
    uint128_t *v25;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned short v26;  // [sp-0x70]
    int v27;  // [sp-0x6e]
    unsigned long v28;  // [sp-0x5e], Other Possible Types: unsigned long long
    unsigned int v29;  // [sp-0x56]
    unsigned short v30;  // [sp-0x52]
    unsigned long long v31;  // [sp-0x50]
    struct struct_4 **v32;  // [sp-0x48]
    unsigned long long v33;  // [sp-0x40]
    struct_6 *v34;  // [sp-0x38]
    unsigned long long v36;  // r15
    unsigned long long v37;  // r12
    unsigned long long v38;  // r13
    void* v39;  // rax
    unsigned short *v40;  // rbx
    int v41;  // xmm0
    int v42;  // ymm0
    char v44[4];  // r14
    unsigned long long v45;  // cc_ndep
    char v46;  // bl
    int v47;  // xmm0
    unsigned long long v48;  // rdx
    int v49;  // xmm0
    unsigned long long v50;  // rcx
    unsigned long long v51;  // r8
    unsigned long long v52;  // r14
    struct_6 *v53;  // r12
    unsigned long long v54;  // rdx
    char v55[4];  // r12
    unsigned short *v56;  // r13
    char v57[4];  // rsi
    char v58[4];  // r12
    char v59[4];  // rcx
    char v60[4];  // rbp
    char v61[4];  // rdi
    unsigned int v62;  // esi
    unsigned int v63;  // r9d
    unsigned int v64;  // r8d
    unsigned long long v65;  // rdx
    char v66;  // al
    unsigned long long *v67;  // rax
    char v68[4];  // rbp
    int v69;  // xmm0
    int v70;  // ymm0
    int v71;  // xmm1
    int v72;  // xmm1
    int v73;  // ymm1
    int v74;  // ymm1
    uint128_t *v75;  // rdx
    int v76;  // ymm2
    unsigned short v77;  // ax
    int v78;  // xmm0
    unsigned long long v79;  // rax
    uint128_t *v80;  // rsi
    int v81;  // xmm0
    int v82;  // xmm0
    int v83;  // xmm0
    int v84;  // xmm0
    unsigned short v85;  // di
    unsigned long long v86;  // r8
    unsigned long long v87;  // r9
    unsigned short v88;  // r10w
    unsigned int v89;  // r11d
    unsigned long long v92;  // r14
    int v93;  // xmm1
    int v94;  // xmm2
    unsigned long long v96;  // rbp
    unsigned long long v97;  // rbp
    struct_5 *v99;  // rax
    unsigned long long v100;  // rax
    struct_8 *v104;  // r13
    unsigned long v105;  // rbx
    unsigned long long v106;  // rax
    unsigned long long v107;  // rax
    unsigned long long v109;  // rsi
    unsigned long long v110;  // rsi
    int v111;  // xmm0
    int v112;  // xmm1
    unsigned long long v113;  // rsi
    unsigned long long v114;  // rdx
    unsigned long long v115;  // rsi
    unsigned long long v116;  // rdx
    uint128_t *v117;  // rdx
    unsigned long long v118;  // rcx
    char v119[4];  // r12
    unsigned long long v120;  // rsi
    unsigned long long v121;  // rax

    v36 = a0;
    hostname::get::he11c0450a33727b4(&v4);
    v37 = v4;
    v38 = v5;
    if (v37 == 0x8000000000000000)
    {
        v39 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h450e66ab63e49101(v38);
        return v39;
    }
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v15, v38, v6);
    if (v15 != 0x8000000000000000)
    {
        v21 = *((long long *)&v17);
        v41 = *((int128_t *)&v15);
        v19 = v41;
        if (!(!v37))
            goto LABEL_482f7f;
    }
    else
    {
        v25 = a0;
        v40 = *((long long *)&v17);
        if (!v40)
        {
            v44 = 1;
        }
        else if (v40 < 0)
        {
            v23 = 0;
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        else
        {
            v23 = 1;
            v44 = __rust_alloc(v40, 1);
            if (!v44)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        memcpy(v20, v16, v40);
        v19 = v40;
        *(&v20) = v44;
        v21 = v40;
        v36 = v25;
        if (v37)
        {
LABEL_482f7f:
            __rust_dealloc(v38);
        }
    }
    v46 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(v36, "ip-addressshort0.0.27Display or set the system's host name.{} [OPTION]... [HOSTNAME]", 10);
    if (v46)
    {
        v47 = *((int128_t *)&v19);
        v4 = v47;
        v6 = v21;
        v6 = v6;
        if (v4 - (char *)v6 < 2)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h034efc24d351d81d(&v4, v6, 2);
            v6 = v6;
        }
        *((short *)(v5 + v6)) = 12602;
        v17 = v6 + 1;
        v49 = (int128_t)v4;
        v15 = v49;
        _$LT$alloc..string..String$u20$as$u20$std..net..socket_addr..ToSocketAddrs$GT$::to_socket_addrs::h05be57e59cc2cc3b(&v4, &v15, v48, v50, v51);
        v52 = v4;
        v53 = v5;
        if (!v52)
        {
            v39 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h909f617c234b5c5a(v53);
            if (v15)
            {
                __rust_dealloc(v16);
                return v39;
            }
            return v39;
        }
        else
        {
            v31 = v7;
            if (v15)
                __rust_dealloc(v16);
            v67 = _ZN4core3ops8function6FnOnce9call_once17h371fccada80c4503E.llvm.11052658419777295833(0);
            v22 = v6;
            v24 = v52;
            v46 = v46;
            if (!v67)
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            v69 = *((int128_t *)&v67);
            v70 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
            *(v67) = *(v67) + 1;
            v71 = g_4e2008;
            v17 = v71;
            v72 = anon.637b7dc9a87915f3e8bfc94ee1ffa713.2.llvm.11052658419777295833;
            v74 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
            v15 = v72;
            v18 = v69;
            v1 = 0;
            v2 = 1;
            for (v3 = 0; v53 != v31 && (v77 = v53->field_0, v26 != 2); v53 = &v34->field_12)
            {
                v26 = v77;
                v78 = *((int128_t *)&(&v53->field_0)[1]);
                v70 = v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
                v34 = v53;
                v30 = *((short *)((char *)&v53->field_2 + 14));
                v29 = *((int *)((char *)&v53->field_2 + 10));
                v28 = *((long long *)((char *)&v53->field_2 + 2));
                v27 = v78;
                if ((long long)(&v17)[8])
                {
                    v79 = core::hash::BuildHasher::hash_one::h433639299c67ae07(&v18, &v26);
                    v75 = v16;
                    v80 = v75 & v79;
                    v81 = v79 >> 57;
                    v82 = InterleaveLOV(v81, v81);
                    v83 = (unsigned long long)(v82 >> 64) CONCAT (unsigned short)v82 CONCAT (unsigned short)v82 CONCAT (unsigned short)v82 CONCAT (unsigned short)v82;
                    v84 = (unsigned int)v83 CONCAT (unsigned int)v83 CONCAT (unsigned int)v83 CONCAT (unsigned int)v83;
                    v70 = v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84;
                    v25 = v15;
                    v85 = v26;
                    v86 = (long long)(&v27)[10];
                    v87 = (long long)(&v27)[2];
                    v88 = *((short *)((char *)&v29 + 2));
                    v89 = *((int *)((char *)&v28 + 2));
                    v23 = *((int *)((char *)&v28 + 6));
                    while (true)
                    {
                        v92 = 0;
                        v93 = *((int128_t *)(v25 + v80));
                        v74 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
                        v94 = v93;
                        v76 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v94, v84);
                        v96 = UnaryOp GetMSBs;
                        if ((unsigned int)v96)
                        {
                            do
                            {
                                v97 = v96;
                                v99 = (char *)&v25[-2 * ((!(v97 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + (char *)v80 & v75)] + 2;
                                if (v85 == v99->field_0)
                                {
                                    if (!v85)
                                    {
                                        if ((int)v27 == *((int *)&(&v99->field_0)[1]) && *((short *)((char *)&v99->field_2 + 2)) == (unsigned short)((v87 & 4294967295 & 4294967295) >> 16 & 4294967295))
                                            goto LABEL_4830e0;
                                    }
                                    else
                                    {
                                        if (!(!(*((long long *)((char *)&v99->field_4 + 4)) ^ v86)) || !(!(*((long long *)&v99->field_2) ^ v87)) || !(v88 == (short)v99->field_18) || !(v89 == *((int *)((char *)&v99->field_c + 4))) || !(v23 == v99->field_14))
                                            continue;
                                    }
                                }
                            } while ((v100 = v97 - 1 & 4294967295, ((unsigned short)v100 & (unsigned short)v97)));
                        }
                        v74 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v93, 340282366920938463463374607431768211455);
                        if (UnaryOp GetMSBs)
                            break;
                        v80 = 16 + (char *)v80 + v92 & v75;
                    }
                    goto LABEL_4830e0;
                }
                v12 = 0;
                v13 = 1;
                v14 = 0;
                v10 = 32;
                v11 = 3;
                v4 = 0;
                v6 = 0;
                v8 = &v12;
                v9 = &g_4e1d90;
                if ((char)_$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::h5e88c1dfe65d449d(&v26, &v4))
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                v104 = v13;
                v105 = v14;
                if (v105 >= 2 && *((short *)&v104->padding_0[2 + v105]) == 12602)
                {
                    v106 = v105;
                    v107 = v106 - 2;
                    if (v106 != 2 && v104->padding_0[v107] <= 191)
                        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
                }
                v109 = v3;
                if (v1 - v109 < v105)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h034efc24d351d81d(&v1, v109, v105);
                    v110 = v3;
                }
                memcpy(&v2[v110], v104, v105);
                v3 = v105 + (char *)v3;
                if (v3 == v1)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h3f1436c667776e42(&v1);
                *((char *)(v2 + v3)) = 32;
                v3 += 1;
                v111 = *((int128_t *)&v26);
                v70 = v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111;
                v112 = (int128_t)(&v27)[14];
                v74 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112;
                v6 = v112;
                v4 = v111;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hfae6ada4d89db48a(&v15, &v4);
                if (v12)
                    __rust_dealloc(v104);
LABEL_4830e0:
            }
            if (v22)
                __rust_dealloc(v24);
            if (v50)
            {
                v50 = v3;
                if (v118 != 1 && *((char *)(v12 + v13)) <= 191)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                v12 = v2;
                v13 = v118 - 1;
                v32 = &v12;
                v33 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0e18d444b687d1e9;
                v4 = &g_4e1e38;
                v5 = 2;
                v8 = 0;
                v6 = &v32;
                v7 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v4, v50, v117);
            }
            if (v1)
                __rust_dealloc(v2);
            v120 = v16;
            if (v120)
            {
                v121 = v120 * 32;
                if (v120 + v121 + 49)
                    __rust_dealloc(v15 - v121 - 32);
            }
        }
        goto LABEL_483657;
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(v36, "short0.0.27Display or set the system's host name.{} [OPTION]... [HOSTNAME]", 5) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(v36, "domainip-addressshort0.0.27Display or set the system's host name.{} [OPTION]... [HOSTNAME]", 6))
    {
        v55 = v20;
        v56 = v21;
        v57 = 0;
        while (true)
        {
            v59 = v58;
            if (v59 == v55 + v56)
                break;
            v60 = v57;
            v54 = v59[0];
            if ((char)v54 >= 0)
            {
                v61 = &v59[1];
            }
            else
            {
                v62 = (unsigned int)v54 & 31;
                v63 = v59[1] & 63;
                if ((v54 & 255) <= 223)
                {
                    v61 = &v59[2];
                    v54 = v62 * 64 | v63;
                }
                else
                {
                    v64 = v59[2] & 63 | v63 * 64;
                    if ((v54 & 255) < 240)
                    {
                        v61 = &v59[3];
                        v54 = v64 | v62 * 0x1000;
                    }
                    else
                    {
                        v61 = v59 + 1;
                        v54 = v59[3] & 63 | v64 * 64 | (v62 & 7) * 0x40000;
                    }
                }
            }
            v57 = v60 - v59 + (char *)v61;
            if ((unsigned int)v54 == 46)
            {
                v66 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(v36, "short0.0.27Display or set the system's host name.{} [OPTION]... [HOSTNAME]", 5);
                if (v66)
                {
                    if (!v60)
                    {
LABEL_48376e:
                        *(&v15) = v55;
                        *(&v16) = v60;
                        v12 = &v15;
                        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0e18d444b687d1e9;
                        v4 = &g_4e1e38;
                        v5 = 2;
                        v8 = 0;
                        v6 = &v12;
                        v7 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&v4, v113, v114);
                        goto LABEL_483832;
                    }
                    else
                    {
                        if (v60 < v56)
                        {
                            if (!(*((char *)(v55 + v60)) <= 191))
                                goto LABEL_48376e;
                        }
                        else
                        {
                            if (v60 == v56)
                                goto LABEL_48376e;
                        }
                        goto LABEL_483750;
                    }
                }
                v68 = &v60[1];
                if (!((char)amd64g_calculate_condition(4, 24, v60 + 1, 0, amd64g_calculate_rflags_c(17, (unsigned long long)v66, 0, v45))))
                {
                    if (v56 > v68)
                    {
                        if (!(*((char *)(v55 + v68)) <= 191))
                            goto LABEL_4837cf;
                    }
                    else
                    {
                        if (v56 == v68)
                            goto LABEL_4837cf;
                    }
LABEL_483750:
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
LABEL_4837cf:
                v15 = v68 + v55;
                v16 = v56 - v68;
                v12 = &v15;
                v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0e18d444b687d1e9;
                v4 = &g_4e1e38;
                v5 = 2;
                v8 = 0;
                v6 = &v12;
                v7 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v4, v115, v116);
LABEL_483832:
                if (!v19)
                    return 0;
LABEL_48383f:
                __rust_dealloc(v119);
            }
        }
    }
    v15 = &v19;
    v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v4 = &g_4e1e38;
    v5 = 2;
    v8 = 0;
    v6 = &v15;
    v7 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v4, v60, v65);
LABEL_483657:
    if (v46)
        return 0;
    if (!v19)
        return 0;
    *(&v119) = v20;
    goto LABEL_48383f;
    goto LABEL_48383f;
}
