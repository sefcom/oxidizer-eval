long long uu_od::OdOptions::new::hcc0635d94ad6dd53(struct_8 *a0, struct_6 *a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [sp-0x1a9]
    struct struct_0 **v1;  // [sp-0x1a8], Other Possible Types: unsigned long, unsigned long long
    struct_0 *v2;  // [sp-0x1a0], Other Possible Types: unsigned long, unsigned long long
    struct struct_11 **v3;  // [sp-0x198], Other Possible Types: struct struct_7 **, struct_1 *, unsigned long, unsigned long long
    struct struct_0 **v4;  // [sp-0x190], Other Possible Types: unsigned long, unsigned long long
    void* v5;  // [sp-0x188]
    struct_1 *v6;  // [sp-0x170]
    int v7;  // [sp-0x168], Other Possible Types: unsigned long, unsigned long long
    struct_4 *v8;  // [sp-0x160], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x158]
    unsigned long long v10;  // [sp-0x150]
    unsigned int v11;  // [sp-0x144]
    struct struct_2 **v12;  // [bp-0x140], Other Possible Types: char, unsigned long long, unsigned long
    struct_2 *v13;  // [sp-0x138], Other Possible Types: struct_4 *, unsigned long long [3], unsigned long, unsigned long long
    char v14;  // [bp-0x130]
    char v15;  // [bp-0x120]
    struct struct_0 **v16;  // [bp-0x118], Other Possible Types: int, char, unsigned long
    unsigned long long v17[3];  // [sp-0x110], Other Possible Types: unsigned long long
    struct struct_0 **v18;  // [bp-0x108], Other Possible Types: int, char, unsigned long
    unsigned int v19;  // [bp-0x100], Other Possible Types: unsigned long
    unsigned long v20;  // [sp-0xf8], Other Possible Types: unsigned long long
    char v21;  // [bp-0xf0]
    unsigned long v22;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v23[3];  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0xd0]
    struct_0 *v25;  // [sp-0xc8]
    unsigned long long v26;  // [sp-0xc0]
    unsigned long v27;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v28;  // [sp-0xb0]
    unsigned long long v29;  // [sp-0xa8]
    struct_0 *v30;  // [sp-0xa0]
    void* v31;  // [sp-0x98]
    unsigned long long v32;  // [sp-0x90]
    unsigned long long v33;  // [sp-0x88]
    struct_2 *v34;  // [sp-0x80]
    char v35;  // [bp-0x78]
    char v36;  // [bp-0x70]
    char v37;  // [bp-0x68]
    char v38;  // [bp-0x60]
    char v39;  // [bp-0x58]
    char v40;  // [bp-0x50]
    char v41;  // [bp-0x48]
    char v42;  // [bp-0x40]
    char v43;  // [bp-0x38]
    struct_2 *v46;  // rcx
    unsigned short v47[3];  // rax
    unsigned long long v48;  // rcx
    unsigned int v49;  // eax
    unsigned short v50;  // cx
    unsigned long long v51;  // rax
    uint128_t v52[2];  // rax
    int v53;  // xmm0
    unsigned long long v54[3];  // rax
    int v55;  // xmm0
    unsigned long long v56;  // r12
    unsigned long long v57;  // rbp
    void* v58;  // rax
    unsigned long long v60;  // r12
    unsigned long long v61;  // rbx
    struct_1 *v62;  // rax
    unsigned long long v63;  // rax
    unsigned long long v64;  // rbp
    unsigned long long v65[3];  // r12
    unsigned long long v66;  // rbx
    unsigned long long v67;  // rbx
    struct_1 *v68;  // rax
    unsigned long long v69[3];  // r12
    unsigned long long v70[3];  // rax
    struct_1 *v71;  // rax
    struct struct_0 **v72;  // r14
    struct_8 *v73;  // 4096
    unsigned long long v74;  // r15
    struct_8 *v76;  // rbx
    unsigned long long v77[3];  // rax
    unsigned long long v78;  // rcx
    struct struct_0 **v79;  // rsi
    struct struct_0 **v80;  // rdx
    struct struct_0 **v81;  // r8
    void* v82;  // rdi
    struct_0 *v83;  // r10
    unsigned long long v84;  // r12
    unsigned long long v85;  // rbp
    struct_0 *v86;  // rax
    unsigned long long v88;  // r13
    unsigned long long v89;  // rbx
    struct_1 *v90;  // rax
    unsigned long long v91;  // r9
    struct_0 *v92;  // rcx
    struct_10 *v93;  // rdi
    struct_8 *v94;  // rcx
    struct_0 *v95;  // r8
    struct_0 *v97;  // r8
    struct_0 *v99;  // r8
    struct_0 *v101;  // r8
    struct_0 *v102;  // rdi
    struct struct_0 **v103;  // rsi
    unsigned long long v104;  // rsi
    unsigned long long v105;  // rdx
    struct_4 *v106;  // rax
    char *v107;  // r12
    unsigned long long v108;  // rbp
    unsigned long long v109;  // rbp
    unsigned long long v111;  // r13
    unsigned long long v112;  // rbx
    struct_1 *v113;  // rax
    struct_4 *v114;  // rcx
    int v115;  // xmm0
    unsigned long long v116;  // rdi
    struct_8 *v117;  // rcx
    unsigned long long v118;  // rcx
    struct_1 *v119;  // rax
    unsigned long long v120;  // r15
    unsigned long long v121;  // r12
    struct struct_7 **v122;  // rbx
    struct_8 *v123;  // rcx
    unsigned long long v124[3];  // r14
    unsigned long long v125;  // rbx
    struct_9 *v126;  // r15
    unsigned long long v127;  // rbx

    v22 = "endianlittlebigInvalid argument --endian=";
    v23 = 6;
    if (*((int *)&v12) != 2)
    {
        v20 = *((long long *)&v15);
        v55 = *((int128_t *)&v12);
        *((int128_t *)&v18) = *((int128_t *)&v14);
        v16 = v55;
        v7 = &v22;
        v8 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
        v9 = &v16;
        v10 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v1 = &anon.0c8efe92bd74d1b14d1df612c2b85283.2.llvm.268371529257089270;
        v2 = 2;
        v5 = 0;
        v3 = &v7;
        v4 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v1); /* do not return */
    }
    v46 = v13;
    if (!v46)
    {
        v49 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h855253ea17add525(&v12, a1, "endianlittlebigInvalid argument --endian=", 6) | -0x100 | 2;
        goto LABEL_49045d;
    }
    v34 = v46;
    v47 = v46->field_8;
    switch (v48)
    {
    case 3:
        v50 = v47[0] ^ 26978;
        v51 = (char)v47[1] ^ 103;
        if (!(!(unsigned short)v51) || !(!v50))
            goto LABEL_4905a6;
        v49 = v51 | -0x10000 | (unsigned short)v51 | v50 | -0x100 | 1;
LABEL_49045d:
        v11 = v49;
        break;
    case 6:
        if (!(!(v47[2] ^ 25964)) || !(!(1953786220 ^ *((int *)&v47[0]))))
            goto LABEL_4905a6;
        v11 = 0;
        break;
    default:
LABEL_4905a6:
        v12 = &v34;
        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a54842648f6c7af;
        v1 = &g_503108;
        v2 = 1;
        v5 = 0;
        v3 = &v12;
        v4 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v16, &v1);
        v19 = 1;
        v52 = __rust_alloc(32, 8);
        if (v52)
        {
            v53 = *((int128_t *)&v16);
            v52[1] = *((int128_t *)&v18);
            *((void*)&v52[0]) = v53;
            a0->field_8 = v52;
            a0->field_10 = &g_503150;
            a0->field_0 = 2;
            return a0;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h855253ea17add525(&v12, a1, "skip-byteswidthsrc/uu/od/src/od.rs: warning: invalid width  instead\n", 10);
    v22 = "skip-byteswidthsrc/uu/od/src/od.rs: warning: invalid width  instead\n";
    v23 = 10;
    if (*((int *)&v12) != 2)
    {
        vvar_1441{stack -248} = *((long long *)&v15);
        vvar_1442{reg 224} = *((int128_t *)&v12);
        *((int128_t *)&v18) = *((int128_t *)&v14);
        v16 = v55;
        vvar_1443{stack -360} = &v22;
        vvar_1444{stack -352} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
        vvar_1445{stack -344} = &v16;
        vvar_1446{stack -336} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        vvar_1447{stack -424} = &anon.0c8efe92bd74d1b14d1df612c2b85283.2.llvm.268371529257089270;
        vvar_1448{stack -416} = 2;
        vvar_1449{stack -392} = 0;
        vvar_1450{stack -408} = &v7;
        vvar_1451{stack -400} = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v1); /* do not return */
    }
    v54 = v13;
    if (!v54)
    {
        v58 = 0;
    }
    else
    {
        v56 = v54[1];
        v57 = v54[2];
        uu_od::parse_nrofbytes::parse_number_of_bytes::h9a1f3a988ebae4e7(&v1, v56, v57);
        v58 = v2;
        if (v1 != 3)
        {
            uu_od::format_error_message::h2d99d3e6860d4a6d(&v35, v1, v56, v57, "skip-byteswidthsrc/uu/od/src/od.rs: warning: invalid width  instead\n", 10);
            v60 = *((long long *)&v36);
            v61 = *((long long *)&v37);
            v62 = __rust_alloc(32, 8);
            if (!v62)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v62->field_0 = *((long long *)&v35);
            v62->field_8 = v60;
            v62->field_10 = v61;
            v62->field_18 = 1;
            a0 = a0;
            a0->field_8 = v62;
            a0->field_10 = &g_503150;
            a0->field_0 = 2;
            if (v58)
            {
                __rust_dealloc(v3);
                return a0;
            }
            return a0;
        }
    }
    v29 = v58;
    uu_od::parse_inputs::parse_inputs::hebff3277c624567d(&v16, a1, &g_5031c0);
    v63 = v20;
    if (v63 == 3)
    {
        v9 = v18;
        *((int128_t *)&v7) = (int128_t)v16;
        v22 = &v7;
        v23 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_503238;
        v2 = 1;
        v5 = 0;
        v3 = &v22;
        v4 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v12, &v1);
        v67 = *((long long *)&v14);
        v68 = __rust_alloc(32, 8);
        if (!v68)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v68->field_0 = v12;
        v68->field_8 = v13;
        v68->field_10 = v67;
        v68->field_18 = 1;
        if (v7)
            __rust_dealloc(v8);
        a0 = a0;
        a0->field_8 = v68;
        a0->field_10 = &g_503150;
        a0->field_0 = 2;
        return a0;
    }
    else
    {
        v64 = v16;
        v65 = v17;
        v66 = v18;
        v33 = *((long long *)&v21);
        if ((unsigned int)v63 == 2)
        {
            v31 = 0;
        }
        else
        {
            v31 = v63;
            v29 = *((long long *)&v19);
            v70 = __rust_alloc(24, 8);
            if (!v70)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v70[0] = v64;
            v70[1] = v65;
            v70[2] = v66;
            v64 = 1;
            v66 = 1;
        }
        v22 = v64;
        v23[0] = v69;
        v24 = v66;
        v32 = &v1;
        uu_od::parse_formats::parse_format_flags::h44feb7232227cd4f(&v1, a2, a3);
        v6 = v3;
        if (vvar_1339)
        {
            v71 = __rust_alloc(32, 8);
            if (!v71)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v71->field_0 = v26;
            v71->field_8 = v6;
            v71->field_10 = v4;
            v71->field_18 = 1;
            v72 = &g_503150;
LABEL_4908da:
            v73->field_8 = v6;
            v73->field_10 = v72;
            v73->field_0 = 2;
            goto LABEL_4908e9;
        }
        v72 = v4;
        v26 = v2;
        if (v26 == 0x8000000000000000)
        {
            v6 = v6;
            goto LABEL_4908da;
        }
        v74 = "widthsrc/uu/od/src/od.rs: warning: invalid width  instead\n";
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h855253ea17add525(&v12, a1, "widthsrc/uu/od/src/od.rs: warning: invalid width  instead\n", 5);
        v76 = a0;
        v27 = "widthsrc/uu/od/src/od.rs: warning: invalid width  instead\n";
        v28 = 5;
        if (*((int *)&v12) != 2)
        {
            v20 = *((long long *)&v15);
            v115 = *((int128_t *)&v12);
            *((int128_t *)&v18) = *((int128_t *)&v14);
            v16 = v115;
            v7 = &v27;
            v8 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
            v9 = &v16;
            v10 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
            v1 = &anon.0c8efe92bd74d1b14d1df612c2b85283.2.llvm.268371529257089270;
            v116 = v32;
            v2 = 2;
            v5 = 0;
            v3 = &v7;
            v4 = 2;
            core::panicking::panic_fmt::he12d0d7468628bb4(v116); /* do not return */
        }
        v77 = v13;
        if (!(v77) || !((v78 = a1->field_10, v78)))
        {
LABEL_490a6d:
            v25 = 16;
            v86 = 16;
LABEL_490a7e:
            if (!v72)
            {
                v30 = 1;
                v92 = 1;
            }
            else
            {
                v91 = (unsigned int)v72 & 3;
                if (v72 < 4)
                {
                    v92 = 1;
                    v80 = 0;
                }
                else
                {
                    v79 = v72 & -4;
                    v93 = &v6[4].field_18;
                    v92 = 1;
                    v80 = 0;
                    do
                    {
                        v95 = v93->field_0;
                        v97 = v93->field_-28;
                        v99 = v93->field_-50;
                        v101 = v93->field_-78;
                        v80 = (char *)v80 + 4;
                        v93 = &v93[1].padding_-70[24];
                    } while (v79 != v80);
                }
                if (v91)
                {
                    v80 = 16 + (char *)v6 + 0x28 * v80;
                    v79 = 0;
                    do
                    {
                        v102 = *((long long *)(v80 + v79));
                    } while ((v79 += 40, ((v91 & 4294967295) << 3 & 4294967295) + (((v91 & 4294967295) << 3 & 4294967295) << 2) != v79));
                }
                v30 = v92;
            }
            if (!v86 || (v80 = (!(v86 | v92) >> 32 ? (0 CONCAT (unsigned int)v86) /m (unsigned int)v92 >> 32 & 4294967295 : (unsigned long long)((0 CONCAT v86) /m v92 >> 64)), v80))
            {
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                *((uint128_t *)&v16) = g_509808;
                v12 = &v16;
                v13 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
                v1 = &g_5031e8;
                v2 = 2;
                v5 = 0;
                v3 = &v12;
                v4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v103, v80);
                v16 = &v25;
                v17 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v18 = &v30;
                v19 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v1 = &g_503208;
                v2 = 3;
                v5 = 0;
                v3 = &v16;
                v4 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v104, v105);
                v25 = v30;
            }
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "output-duplicatesread-bytesaddress-radixRadix must be one of [o, d, x, n]Radix cannot be empty, and must be one of [o, d, x, n]0.0.27Dump files in octal and other formats{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[", 17);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h855253ea17add525(&v12, a1, "read-bytesaddress-radixRadix must be one of [o, d, x, n]Radix cannot be empty, and must be one of [o, d, x, n]0.0.27Dump files in octal and other formats{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --tradi", 10);
            v27 = "read-bytesaddress-radixRadix must be one of [o, d, x, n]Radix cannot be empty, and must be one of [o, d, x, n]0.0.27Dump files in octal and other formats{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --tradi";
            v28 = 10;
            if (*((int *)&v12) != 2)
            {
                vvar_1453{stack -248} = *((long long *)&v15);
                vvar_1454{reg 224} = *((int128_t *)&v12);
                *((int128_t *)&v18) = *((int128_t *)&v14);
                v16 = v115;
                vvar_1455{stack -360} = &v27;
                vvar_1456{stack -352} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
                vvar_1457{stack -344} = &v16;
                vvar_1458{stack -336} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                vvar_1459{stack -424} = &anon.0c8efe92bd74d1b14d1df612c2b85283.2.llvm.268371529257089270;
                vvar_1460{reg 72} = v32;
                v2 = 2;
                v5 = 0;
                v3 = &v7;
                v4 = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(v116); /* do not return */
            }
            v106 = v13;
            if (!v106)
            {
                v109 = 0;
                goto LABEL_490d21;
            }
            v107 = v106->field_8;
            v108 = v106->field_10;
            uu_od::parse_nrofbytes::parse_number_of_bytes::h9a1f3a988ebae4e7(&v1, v107, v108);
            v74 = v2;
            if (v1 != 3)
            {
                uu_od::format_error_message::h2d99d3e6860d4a6d(&v41, v1, v107, v108, "read-bytesaddress-radixRadix must be one of [o, d, x, n]Radix cannot be empty, and must be one of [o, d, x, n]0.0.27Dump files in octal and other formats{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --tradi", 10);
                v111 = *((long long *)&v42);
                v112 = *((long long *)&v43);
                v113 = __rust_alloc(32, 8);
                if (!v113)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v113->field_0 = *((long long *)&v41);
                v113->field_8 = v111;
                v113->field_10 = v112;
                v113->field_18 = 1;
                v117 = a0;
                v117->field_8 = v113;
                v117->field_10 = &g_503150;
                v117->field_0 = 2;
                if (v74)
                    goto LABEL_490e45;
            }
            else
            {
                v109 = 1;
LABEL_490d21:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h855253ea17add525(&v12, a1, "address-radixRadix must be one of [o, d, x, n]Radix cannot be empty, and must be one of [o, d, x, n]0.0.27Dump files in octal and other formats{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --traditional [OP", 13);
                v27 = "address-radixRadix must be one of [o, d, x, n]Radix cannot be empty, and must be one of [o, d, x, n]0.0.27Dump files in octal and other formats{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --traditional [OP";
                v28 = 13;
                if ((int)v12 == 2)
                {
                    v114 = v13;
                    if (!v114)
                        goto LABEL_490e85;
                    if (!v114->field_10)
                    {
                        ::0x4900a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd5d1e77b91dce17a(&v1, "Radix cannot be empty, and must be one of [o, d, x, n]0.0.27Dump files in octal and other formats{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --traditional [OPTION]... [FILENAME] [[+][0x]OFFSET[.][b] [[+][", 54);
                        v119 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                    }
                    else
                    {
                        v118 = v114->field_8->field_0 - 100;
                        switch ((unsigned int)v118)
                        {
                        case 10:
                            break;
                        case 20:
                            break;
                        case 11:
LABEL_490e85:
                            v76->field_30 = v24;
                            v76->field_20 = *((int128_t *)&v22);
                            v76->field_38 = v26;
                            v76->field_40 = v6;
                            v76->field_48 = v72;
                            v76->field_0 = v109;
                            v76->field_8 = v74;
                            v76->field_10 = v31;
                            v76->field_18 = v33;
                            v76->field_50 = v29;
                            v76->field_58 = v25;
                            v76->field_60 = v0;
                            v76->field_61 = v11;
                            v76->field_62 = 2;
                            return a0;
                        default:
                            ::0x4900a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd5d1e77b91dce17a(&v1, "Radix must be one of [o, d, x, n]Radix cannot be empty, and must be one of [o, d, x, n]0.0.27Dump files in octal and other formats{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --traditional [OPTION]... [FIL", 33);
                            v119 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                        }
                    }
                    v119->field_0 = v121;
                    v119->field_8 = v120;
                    v119->field_10 = v122;
                    v119->field_18 = 1;
                    v123 = a0;
                    v123->field_8 = v119;
                    v123->field_10 = &g_503150;
                    v123->field_0 = 2;
                    goto LABEL_490f5b;
                }
            }
        }
        else
        {
            v79 = a1->field_8;
            v80 = 97;
            v81 = 0;
            v82 = 0;
            while (!(*((long long *)(v79 + v81 + 8)) == 5) || !(!(v83->field_4 ^ 104)) || !(!(v83->field_0 ^ 1952737655)))
            {
                v81 += 2;
                v80 += 13;
                v82 += 1;
                if (v78 << 4 == v81)
                    goto LABEL_490a6d;
            }
            v79 = a1->field_28;
            if (v82 >= v79)
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            if (!(*(a1->field_20 + (char *)v80) == 2))
                goto LABEL_490a6d;
            v84 = v77[1];
            v85 = v77[2];
            uu_od::parse_nrofbytes::parse_number_of_bytes::h9a1f3a988ebae4e7(&v1, v84, v85);
            v79 = v1;
            v86 = v2;
            if (v79 == 3)
            {
                v25 = v86;
                goto LABEL_490a7e;
            }
            uu_od::format_error_message::h2d99d3e6860d4a6d(&v38, v79, v84, v85, "widthsrc/uu/od/src/od.rs: warning: invalid width  instead\n", 5);
            v88 = *((long long *)&v39);
            v89 = *((long long *)&v40);
            v90 = __rust_alloc(32, 8);
            if (!v90)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v90->field_0 = *((long long *)&v38);
            v90->field_8 = v88;
            v90->field_10 = v89;
            v90->field_18 = 1;
            v94 = a0;
            v94->field_8 = v90;
            v94->field_10 = &g_503150;
            v94->field_0 = 2;
            if (v25)
            {
LABEL_490e45:
                __rust_dealloc(v3);
            }
LABEL_490f5b:
            if (v26)
                __rust_dealloc(v6);
LABEL_4908e9:
            v124 = v23;
            v125 = v24;
            if (v125)
            {
                v126 = &v124[1];
                do
                {
                    v127 = v125;
                    if (v126->field_0)
                        __rust_dealloc(v126->field_-8);
                } while ((v79 += 40, ((v91 & 4294967295) << 3 & 4294967295) + (((v91 & 4294967295) << 3 & 4294967295) << 2) != v79));
            }
            if (!v22)
                return a0;
            __rust_dealloc(v124);
        }
    }
}
