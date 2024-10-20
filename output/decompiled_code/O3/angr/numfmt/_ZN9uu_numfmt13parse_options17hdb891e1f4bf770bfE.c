long long uu_numfmt::parse_options::hdb891e1f4bf770bf(struct_1 *a0, struct_6 *a1)
{
    char v0;  // [bp-0x1f8]
    char v1;  // [sp-0x1e9]
    int v2;  // [bp-0x1e8], Other Possible Types: char
    char v3;  // [bp-0x1e0]
    int v4;  // [bp-0x1d8], Other Possible Types: char, unsigned long
    char v5;  // [bp-0x1d0]
    unsigned long long v6;  // [sp-0x1c8], Other Possible Types: unsigned long
    unsigned int v7;  // [sp-0x1bc]
    int v8;  // [bp-0x1b8], Other Possible Types: void*, unsigned long long (64 bits)[3], unsigned long long, unsigned long
    char v9;  // [bp-0x1b0], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v10[2];  // [sp-0x1a8], Other Possible Types: unsigned long, unsigned long long
    int v11;  // [sp-0x1a0], Other Possible Types: unsigned long, unsigned long long
    void* v12;  // [sp-0x198]
    char v13;  // [bp-0x188]
    char v14;  // [bp-0x178]
    char v15;  // [bp-0x168]
    unsigned long v16;  // [sp-0x160], Other Possible Types: unsigned long long
    unsigned long long v17[3];  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long v18;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x148]
    char v20;  // [bp-0x140]
    char v21;  // [bp-0x138]
    char v22;  // [bp-0x130], Other Possible Types: unsigned long, unsigned long long
    char v23;  // [bp-0x128], Other Possible Types: unsigned long long
    char v24;  // [bp-0x127]
    unsigned long long v25;  // [sp-0x120], Other Possible Types: unsigned long
    unsigned long long v26;  // [sp-0x118]
    unsigned long long v27;  // [sp-0x110]
    unsigned long long v28;  // [sp-0x108]
    unsigned long long v29[2];  // [sp-0x100]
    void* v30;  // [bp-0xf8], Other Possible Types: int, unsigned long, unsigned long long
    void* v31;  // [bp-0xf0]
    void* v32;  // [bp-0xe8], Other Possible Types: int
    unsigned long long v33;  // [sp-0xe0]
    void* v34;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v35;  // [sp-0xd0]
    int v36;  // [sp-0xc8]
    unsigned long long v37;  // [sp-0xb8]
    void* v38;  // [sp-0xb0]
    unsigned short v39;  // [bp-0xa8]
    unsigned long v40;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v41;  // [sp-0x90]
    unsigned long long v42;  // [sp-0x88]
    unsigned long long v43;  // [sp-0x80]
    unsigned long long v44;  // [sp-0x78]
    unsigned long long v45;  // [sp-0x70]
    unsigned long long v46;  // [sp-0x68]
    unsigned long long v47;  // [sp-0x60]
    int v48;  // [sp-0x58]
    int v49;  // [sp-0x48]
    unsigned long long v51[3];  // rax
    unsigned long long v52;  // rax
    char v53;  // bpl
    unsigned long long v54;  // rcx
    unsigned long long v55[3];  // rax
    unsigned long long v56;  // rax
    unsigned long long v57;  // rax
    unsigned long long v59;  // rcx
    struct_8 *v60;  // rax
    unsigned long long v61;  // rax
    struct_8 *v63;  // rax
    unsigned long long v65[3];  // r15
    void* v66;  // rax
    unsigned long long v67;  // rax
    unsigned long long v68;  // rcx
    struct struct_5 **v69;  // rdx
    char *v70;  // rax
    struct struct_5 **v71;  // r8
    void* v72;  // rdi
    struct_5 *v73;  // r9
    unsigned long long v75[3];  // r15
    struct_2 *v76;  // rax
    char v77[4];  // rsi
    unsigned long long v78;  // rdx
    char v79[4];  // r11
    char v80[4];  // rsi
    char v81[4];  // r9
    char v82[4];  // rcx
    char v83[4];  // r9
    char v84[4];  // r8
    char v85[4];  // r11
    char v86[4];  // rdi
    unsigned long long v87;  // r11
    char v88[4];  // r9
    unsigned int v89;  // r10d
    unsigned int v90;  // r10d
    unsigned int v91;  // r13d
    unsigned int v92;  // r15d
    unsigned long long v93[2];  // rax
    unsigned long long v94;  // r13
    unsigned long long v95[3];  // rax
    int v96;  // xmm0
    unsigned long long v97;  // rcx
    int v98;  // xmm0
    int v99;  // xmm1
    unsigned long long v100;  // rax
    unsigned long long v101;  // rcx
    unsigned long long v102;  // r15
    struct_4 *v103;  // rax
    unsigned int *v104;  // rcx
    struct_0 *v105;  // rax
    unsigned long long v106;  // rcx
    unsigned long long v107;  // rcx
    unsigned long long v108;  // rax
    unsigned int v109;  // edx
    unsigned long long v110;  // rax
    unsigned long long v111[3];  // rax
    int v112;  // xmm0
    int v113;  // xmm1
    int v114;  // xmm2

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2cc69edf4c39eb3d(&v2, a1, "fromAuto", 4);
    v40 = "fromAuto";
    v41 = 4;
    if (*((int *)&v2) == 2)
    {
        v51 = *((long long *)&v3);
        if (!v51)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        uu_numfmt::parse_unit::hfba421c70d8c64fd(&v22, v51[1], v51[2]);
        v52 = v22;
        v53 = v23;
        if (v52 != 0x8000000000000000)
        {
            v54 = *((long long *)&v24);
            *((unsigned long *)&a0->padding_11[7]) = v25;
            *((unsigned long long *)&a0->padding_11[0]) = v54;
            a0->field_8 = v52;
            a0->field_10 = v53;
            a0->field_0 = 2;
            return a0;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2cc69edf4c39eb3d(&v2, a1, "tofrom-unitto-unitpaddingheaderfieldformatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 2);
        v40 = "tofrom-unitto-unitpaddingheaderfieldformatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
        v41 = 2;
        if (*((int *)&v2) == 2)
        {
            v55 = *((long long *)&v3);
            if (!v55)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            uu_numfmt::parse_unit::hfba421c70d8c64fd(&v22, v55[1], v55[2]);
            v57 = v22;
            if (v57 != 0x8000000000000000)
            {
                v59 = *((long long *)&v24);
                *((unsigned long *)&a0->padding_11[7]) = v25;
                *((unsigned long long *)&a0->padding_11[0]) = v59;
                a0->field_8 = v57;
                a0->field_10 = v1;
                a0->field_0 = 2;
                return a0;
            }
            v1 = v23;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2cc69edf4c39eb3d(&v2, a1, "from-unitto-unitpaddingheaderfieldformatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 9);
            v22 = "from-unitto-unitpaddingheaderfieldformatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
            v23 = 9;
            if (*((int *)&v2) != 2)
            {
LABEL_48e367:
                v34 = v6;
                *((int128_t *)&v32) = *((int128_t *)&v4);
                v30 = v2;
                v56 = &v22;
                v16 = v56;
                v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbc669ae056f15bdd;
                v18 = &v30;
                v19 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                v8 = &anon.854137e25e713167cd68e57a0f0c4bd3.3.llvm.6350023382392239960;
                v9 = 2;
                v12 = 0;
                v10 = &v16;
                v11 = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v8); /* do not return */
            }
            v60 = *((long long *)&v3);
            if (!v60)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            uu_numfmt::parse_unit_size::h369016a9fd0e2f2a(&v8, v60->field_8, *((long long *)&v60->field_10));
            v61 = v8;
            if (v61 == 0x8000000000000000)
            {
                *((int128_t *)&v49) = *((int128_t *)&v9);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2cc69edf4c39eb3d(&v2, a1, "to-unitpaddingheaderfieldformatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 7);
                v22 = "to-unitpaddingheaderfieldformatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
                v23 = 7;
                if (*((int *)&v2) != 2)
                {
                    vvar_1316{stack -216} = v6;
                    *((int128_t *)&v32) = *((int128_t *)&v4);
                    v30 = v2;
                    vvar_1320{stack -352} = v56;
                    vvar_1321{stack -344} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbc669ae056f15bdd;
                    vvar_1322{stack -336} = &v30;
                    vvar_1323{stack -328} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                    vvar_1324{stack -440} = &anon.854137e25e713167cd68e57a0f0c4bd3.3.llvm.6350023382392239960;
                    vvar_1325{stack -432} = 2;
                    vvar_1326{stack -408} = 0;
                    vvar_1327{stack -424} = &v16;
                    vvar_1328{stack -416} = 2;
                    core::panicking::panic_fmt::he12d0d7468628bb4(&v8); /* do not return */
                }
                v63 = *((long long *)&v3);
                if (!v63)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                uu_numfmt::parse_unit_size::h369016a9fd0e2f2a(&v8, v63->field_8, *((long long *)&v63->field_10));
                v61 = v8;
                if (v61 == 0x8000000000000000)
                {
                    *((int128_t *)&v48) = *((int128_t *)&v9);
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2cc69edf4c39eb3d(&v2, a1, "paddingheaderfieldformatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 7);
                    v22 = "paddingheaderfieldformatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
                    v23 = 7;
                    if (*((int *)&v2) != 2)
                    {
                        vvar_1330{stack -216} = v6;
                        *((int128_t *)&v32) = *((int128_t *)&v4);
                        v30 = v2;
                        vvar_1334{stack -352} = v56;
                        vvar_1335{stack -344} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbc669ae056f15bdd;
                        vvar_1336{stack -336} = &v30;
                        vvar_1337{stack -328} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                        vvar_1338{stack -440} = &anon.854137e25e713167cd68e57a0f0c4bd3.3.llvm.6350023382392239960;
                        vvar_1339{stack -432} = 2;
                        vvar_1340{stack -408} = 0;
                        vvar_1341{stack -424} = &v16;
                        vvar_1342{stack -416} = 2;
                        core::panicking::panic_fmt::he12d0d7468628bb4(&v8); /* do not return */
                    }
                    v65 = *((long long *)&v3);
                    if (!v65)
                        goto LABEL_48daad;
                    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$isize$GT$::from_str::h4967ea1478f9fe2a(&v8, v65[1], v65[2]);
                    if (!(!(char)v8[0]) || !((v67 = v9, v67)))
                    {
                        uu_numfmt::parse_options::_$u7b$$u7b$closure$u7d$$u7d$::h3e3d28a7dee72109(&v8, v65[1], v65[2]);
                        v61 = v8;
                        if (!(v61 == 0x8000000000000000))
                            goto LABEL_48de4b;
                        v66 = v9;
                    }
LABEL_48daad:
                    v47 = 0;
                    v68 = a1->field_10;
                    if (!v68)
                    {
LABEL_48dbd1:
                        v27 = 0;
LABEL_48dbdb:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2cc69edf4c39eb3d(&v2, a1, "fieldformatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 5);
                        v22 = "fieldformatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
                        v23 = 5;
                        if (*((int *)&v2) == 2)
                        {
                            v76 = *((long long *)&v3);
                            if (!v76)
                                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                            v77 = v76->field_8;
                            v78 = v76->field_10;
                            v79 = 0;
                            while (true)
                            {
                                v81 = v80;
                                v82 = v79;
                                do
                                {
                                    v84 = v83;
                                    if (v84 == &v77[v78])
                                    {
                                        if (!(v78 - (char *)v82 != 1) && !(*((char *)(v77 + v82)) != 45))
                                            goto LABEL_48dd17;
                                        uucore::features::ranges::Range::from_list::h99d021a951e62274(&v8, v77, v78, v82, v84, v81, *((long long *)&v0));
                                        v94 = v9;
                                        if (v8)
                                        {
                                            a0->field_8 = v94;
                                            *((unsigned long long *[2])&a0->field_10) = v29;
                                            *((unsigned long long *)&a0->padding_11[7]) = v45;
                                            a0->field_0 = 2;
                                            return a0;
                                        }
                                        v45 = v11;
                                        v29[0] = v10;
                                        goto LABEL_48dda9;
                                    }
                                    v86 = v85;
                                    v87 = v84[0];
                                    if ((char)v87 >= 0)
                                    {
                                        v88 = &v84[1];
                                        v89 = v87;
                                    }
                                    else
                                    {
                                        v90 = (unsigned int)v87 & 31;
                                        v91 = v84[1] & 63;
                                        if ((v87 & 255) <= 223)
                                        {
                                            v88 = &v84[2];
                                            v89 = v90 * 64 | v91;
                                        }
                                        else
                                        {
                                            v92 = v84[2] & 63 | v91 * 64;
                                            if ((v87 & 255) < 240)
                                            {
                                                v88 = &v84[3];
                                                v89 = v90 * 0x1000 | v92;
                                            }
                                            else
                                            {
                                                v88 = v84 + 1;
                                                v89 = (v90 & 7) * 0x40000 | v84[3] & 63 | (unsigned int)(v92 * 64);
                                            }
                                        }
                                    }
                                    v79 = v88 - v84 + (char *)v86;
                                } while (v89 != 44 && v89 != 32);
                                if (!(v86 - v82 == 1) || !(*((char *)(v77 + v82)) == 45))
                                    continue;
LABEL_48dd17:
                                v93 = __rust_alloc(16, 8);
                                if (!v93)
                                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                                v93[0] = 1;
                                v29[0] = v93;
                                v93[1] = -1;
                                v45 = 1;
                                v94 = 1;
LABEL_48dda9:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2cc69edf4c39eb3d(&v16, a1, "formatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 6);
                                v40 = "formatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
                                v41 = 6;
                                if ((int)v16 != 2)
                                {
                                    v6 = *((long long *)&v20);
                                    v96 = *((int128_t *)&v16);
                                    *((int128_t *)&v4) = *((int128_t *)&v18);
                                    v2 = v96;
                                    v22 = &v40;
                                    v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbc669ae056f15bdd;
                                    v25 = &v2;
                                    v26 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                                    v8 = &anon.854137e25e713167cd68e57a0f0c4bd3.3.llvm.6350023382392239960;
                                    v9 = 2;
                                    v12 = 0;
                                    v10 = &v22;
                                    v11 = 2;
                                    core::panicking::panic_fmt::he12d0d7468628bb4(&v8); /* do not return */
                                }
                                v95 = v17;
                                if (!v95)
                                {
                                    v39 = 0;
                                    v30 = 0;
                                    v32 = 0;
                                    v34 = 0;
                                    v35 = 1;
                                    *((int128_t *)&v36) = 0;
                                    v37 = 1;
                                    v38 = 0;
                                    goto LABEL_48ded1;
                                }
                                _$LT$uu_numfmt..options..FormatOptions$u20$as$u20$core..str..traits..FromStr$GT$::from_str::he75770e9de1554a6(&v8, v95[1], v95[2]);
                                *((int128_t *)&v2) = *((int128_t *)&v9);
                                v4 = v11;
                                if (v30 == 2)
                                {
                                    *((unsigned long *)&a0->padding_11[7]) = v4;
                                    *((void*)&a0->field_8) = v2;
                                    a0->field_0 = 2;
                                    goto LABEL_48dfeb;
                                }
                                v97 = *((long long *)&v15);
                                *((unsigned long long *)&v39) = v97;
                                v98 = *((int128_t *)&v12);
                                v99 = *((int128_t *)&v13);
                                *((int128_t *)&v37) = *((int128_t *)&v14);
                                v36 = v99;
                                *((void*)&v34) = v98;
                                *((void*)&v31) = v2;
                                v33 = v4;
                                v30 = v8;
                                if (v1 != 5 && (char)v97)
                                {
                                    ::0x48cf60::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hdd8c835f46a65306(&v8);
                                    *((unsigned long *)&a0->padding_11[7]) = v10;
                                    *((int128_t *)&a0->field_8) = *((int128_t *)&v8);
LABEL_48dfd7:
                                    a0->field_0 = 2;
                                    ::0x48c5f0::core::ptr::drop_in_place$LT$uu_numfmt..options..FormatOptions$GT$::h4ffb54bcb92b2834(&v30);
LABEL_48dfeb:
                                    if (v94)
                                    {
                                        __rust_dealloc(v29);
                                        return a0;
                                    }
                                    return a0;
                                }
LABEL_48ded1:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2cc69edf4c39eb3d(&v8, a1, "delimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 9);
                                v9 = 0x8000000000000000;
                                v8 = 0;
                                core::option::Option$LT$T$GT$::map_or::hf0eec930b78c5edc(&v2, clap_builder::parser::error::MatchesError::unwrap::hc336d874b91d7996("delimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 9, &v8), &v8);
                                v100 = (long long)(&v2)[8];
                                v101 = v4;
                                v102 = *((long long *)&v5);
                                if ((long long)v2)
                                {
                                    a0->field_8 = v42;
                                    *((unsigned long long *)&a0->field_10) = v44;
                                    *((unsigned long long *)&a0->padding_11[7]) = v102;
                                    goto LABEL_48dfd7;
                                }
                                v44 = v101;
                                v42 = v100;
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2cc69edf4c39eb3d(&v8, a1, "roundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 5);
                                v103 = clap_builder::parser::error::MatchesError::unwrap::hc336d874b91d7996("roundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 5, &v8);
                                if (!v103)
                                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                                v104 = v103->field_10 - 2;
                                switch (v104)
                                {
                                case 0:
                                    if (!(v105->field_0 == 28789))
                                        goto LABEL_48e0c7;
                                    v7 = 0;
                                    break;
                                case 2:
                                    v7 = v106 | -0x100 | 1;
                                    if (*((int *)&v105->field_0) == 1853321060)
                                        goto LABEL_48e128;
                                    else
                                        goto LABEL_48e0c7;
                                case 5:
                                    v7 = v105 | -0x100 | 4;
                                    if (!(1953719666 ^ *((int *)&v105->padding_2[1])) && !(1918985582 ^ *((int *)&v105->field_0)))
                                        goto LABEL_48e128;
                                    else
                                        goto LABEL_48e0c7;
                                case 7:
                                    v107 = 8243129028499698278 ^ *((long long *)&v105->field_0);
                                    v108 = v105->field_8 ^ 111;
                                    v109 = -26;
                                    goto LABEL_48e11f;
                                case 10:
                                    v107 = 3275071796452749172 ^ *((long long *)&v105->field_0);
                                    v108 = *((int *)&v105->field_8) ^ 1869768058;
                                    v109 = -25;
LABEL_48e11f:
                                    v7 = v109;
                                    if (!v108 && !v107)
                                        goto LABEL_48e128;
                                    else
                                        goto LABEL_48e0c7;
                                default:
LABEL_48e0c7:
                                    v8 = &g_4faf38;
                                    v9 = 1;
                                    v10 = &v21;
                                    *((int128_t *)&v11) = 0;
                                    core::panicking::panic_fmt::he12d0d7468628bb4(&v8); /* do not return */
                                }
LABEL_48e128:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2cc69edf4c39eb3d(&v8, a1, "suffixinvalid", 6);
                                v110 = clap_builder::parser::error::MatchesError::unwrap::hc336d874b91d7996("suffixinvalid", 6, &v8);
                                if (!v110)
                                {
                                    v28 = 0x8000000000000000;
                                }
                                else
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v8, v110);
                                    v28 = v8;
                                    v43 = v9;
                                    v46 = v10;
                                }
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2cc69edf4c39eb3d(&v8, a1, "invalid", 7);
                                v111 = clap_builder::parser::error::MatchesError::unwrap::hc336d874b91d7996("invalid", 7, &v8);
                                if (!v111)
                                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                                _$LT$uu_numfmt..options..InvalidModes$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h35628cc9914f2b97(&v2, v111[1], v111[2]);
                                if ((long long)v2 == 0x8000000000000000)
                                {
                                    a0->field_50 = *((long long *)&v39);
                                    a0->field_40 = *((int128_t *)&v37);
                                    v112 = *((int128_t *)&v30);
                                    v113 = *((int128_t *)&(&v31)[1]);
                                    v114 = *((int128_t *)&v34);
                                    *((void*)&a0->field_30) = v36;
                                    *((void*)&a0->field_20) = v114;
                                    *((void*)&a0->field_10) = v113;
                                    *((void*)&a0->field_0) = v112;
                                    a0->field_58 = v94;
                                    a0->field_60 = v29;
                                    a0->field_68 = v45;
                                    a0->field_70 = v42;
                                    a0->field_78 = v44;
                                    a0->field_80 = v102;
                                    a0->field_88 = v28;
                                    a0->field_90 = v43;
                                    a0->field_98 = v46;
                                    *((unsigned long long *)&a0->field_a0) = (unsigned long long)v48 CONCAT (unsigned long long)v49;
                                    a0->field_b0 = v53;
                                    a0->field_b1 = v1;
                                    a0->field_b8 = v47;
                                    a0->field_c0 = v27;
                                    a0->field_c8 = (char)(&v2)[8];
                                    a0->field_c9 = v7;
                                    return a0;
                                }
                                v10 = v4;
                                v8 = v2;
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                        }
                        goto LABEL_48e367;
                    }
                    else
                    {
                        v69 = a1->field_8;
                        v70 = 97;
                        v71 = 0;
                        v72 = 0;
                        while (!(*((long long *)(v69 + v71 + 8)) == 6) || !(!(v73->field_4 ^ 29285)) || !(!(v73->field_0 ^ 1684104552)))
                        {
                            v71 += 2;
                            v70 += 104;
                            v72 += 1;
                            if (v68 << 4 == v71)
                                goto LABEL_48dbd1;
                        }
                        if (v72 >= a1->field_28)
                            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                        if (!(v70[a1->field_20] == 2))
                            goto LABEL_48dbd1;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2cc69edf4c39eb3d(&v2, a1, "headerfieldformatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 6);
                        v22 = "headerfieldformatdelimiterroundupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
                        v23 = 6;
                        if (*((int *)&v2) != 2)
                        {
                            vvar_1344{stack -216} = v6;
                            *((int128_t *)&v32) = *((int128_t *)&v4);
                            v30 = v2;
                            vvar_1348{stack -352} = v56;
                            vvar_1349{stack -344} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbc669ae056f15bdd;
                            vvar_1350{stack -336} = &v30;
                            vvar_1351{stack -328} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                            vvar_1352{stack -440} = &anon.854137e25e713167cd68e57a0f0c4bd3.3.llvm.6350023382392239960;
                            vvar_1353{stack -432} = 2;
                            vvar_1354{stack -408} = 0;
                            vvar_1355{stack -424} = &v16;
                            vvar_1356{stack -416} = 2;
                            core::panicking::panic_fmt::he12d0d7468628bb4(&v8); /* do not return */
                        }
                        v75 = *((long long *)&v3);
                        if (!v75)
                            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v8, v75[1], v75[2]);
                        if (!(char)v8[0] && (v27 = (unsigned long long)v9, v27))
                            goto LABEL_48dbdb;
                        uu_numfmt::parse_options::_$u7b$$u7b$closure$u7d$$u7d$::h5f607d7802206ad6(&v8, v75[1], v75[2]);
                        v61 = v8;
                        if (v61 == 0x8000000000000000)
                            goto LABEL_48dbd1;
LABEL_48de4b:
                    }
                }
            }
            a0->field_8 = v61;
            *((void*)&a0->field_10) = v49;
            a0->field_0 = 2;
            return a0;
        }
    }
    v34 = v6;
    *((int128_t *)&v32) = *((int128_t *)&v4);
    v30 = v2;
    vvar_1298{stack -352} = v56;
    vvar_1299{stack -344} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbc669ae056f15bdd;
    vvar_1300{stack -336} = &v30;
    vvar_1301{stack -328} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
    vvar_1302{stack -440} = &anon.854137e25e713167cd68e57a0f0c4bd3.3.llvm.6350023382392239960;
    vvar_1303{stack -432} = 2;
    vvar_1304{stack -408} = 0;
    vvar_1305{stack -424} = &v16;
    vvar_1306{stack -416} = 2;
    core::panicking::panic_fmt::he12d0d7468628bb4(&v8); /* do not return */
}
