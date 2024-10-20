long long uu_join::parse_settings::hf734c75a77e0b641(struct_5 *a0, struct_2 *a1)
{
    unsigned long long v0;  // [sp-0x308]
    char *v2;  // [sp-0x1e0]
    uint128_t v3[2];  // [bp-0x1d8], Other Possible Types: unsigned long long *, unsigned long, unsigned long long
    struct_2 *v4;  // [sp-0x1d0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long *v5;  // [bp-0x1c8], Other Possible Types: unsigned long, unsigned long long
    unsigned int v6;  // [bp-0x1c0], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x1b8], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x1a8], Other Possible Types: unsigned long long *, char
    char *v9;  // [sp-0x1a0], Other Possible Types: unsigned long long [3]
    unsigned long long *v10;  // [bp-0x198], Other Possible Types: char, unsigned long long
    char v11;  // [bp-0x190], Other Possible Types: unsigned int
    unsigned long v12;  // [sp-0x188], Other Possible Types: unsigned long long
    void* v13;  // [sp-0x180], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14[3];  // [sp-0x178], Other Possible Types: char [4], unsigned long long
    struct struct_0 **v15;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned long v16;  // [bp-0x168], Other Possible Types: char
    char v17;  // [bp-0x160]
    char *v18;  // [bp-0x158], Other Possible Types: unsigned long long
    void* v19;  // [sp-0x150], Other Possible Types: char *
    void* v20;  // [sp-0x148], Other Possible Types: unsigned long, unsigned long long
    unsigned long long *v21;  // [sp-0x140], Other Possible Types: unsigned long long
    struct struct_0 **v22;  // [sp-0x138], Other Possible Types: unsigned long long *
    unsigned long long v23;  // [sp-0x130]
    struct struct_1 **v24;  // [sp-0x120]
    struct_2 *v25;  // [sp-0x118]
    unsigned long long v26;  // [sp-0x110]
    void* v27;  // [bp-0x108], Other Possible Types: unsigned long long *, unsigned long long, unsigned long
    struct struct_1 **v28;  // [sp-0x100], Other Possible Types: unsigned long long, unsigned long
    unsigned long long *v29;  // [sp-0xf8], Other Possible Types: unsigned long long
    struct_2 *v30;  // [sp-0xf0], Other Possible Types: unsigned long long *, unsigned long long
    void* v31;  // [sp-0xe8], Other Possible Types: unsigned long long
    void* v32;  // [sp-0xe0], Other Possible Types: unsigned long, unsigned long long
    char *v33;  // [sp-0xd8], Other Possible Types: unsigned long, unsigned long long
    struct_2 *v34;  // [sp-0xd0], Other Possible Types: unsigned long
    unsigned long v35;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long *v36;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v37;  // [sp-0xb8]
    char v38;  // [sp-0xb0]
    char v39;  // [sp-0xaf]
    char v40;  // [sp-0xae]
    char v41;  // [bp-0xad], Other Possible Types: unsigned int
    char v42;  // [sp-0xac]
    char v43;  // [sp-0xab]
    char v44;  // [sp-0xaa]
    char v45;  // [sp-0xa9]
    void* v46;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long v47;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v48;  // [sp-0x98]
    unsigned long long v49;  // [sp-0x88]
    unsigned long long v50;  // [sp-0x80]
    void* v51;  // [sp-0x78]
    struct_2 *v52;  // [sp-0x70]
    unsigned long long v53;  // [sp-0x68]
    unsigned long long v54;  // [sp-0x60]
    unsigned long long v55;  // [sp-0x58]
    struct struct_1 **v56;  // [sp-0x50]
    unsigned long long v57;  // [sp-0x48]
    unsigned long long v58;  // [sp-0x40]
    unsigned long long v59;  // [sp-0x38]
    unsigned long long v61[3];  // rax
    unsigned long long v62;  // r13
    unsigned long long v63;  // rax
    unsigned long long v64[3];  // rax
    unsigned long long v65;  // rbp
    unsigned long long v66[3];  // rax
    unsigned long long *v67;  // xmm0
    struct struct_1 **v68;  // r15
    unsigned long long *v69;  // xmm0
    struct_2 *v70;  // r13
    char *v71;  // r12
    unsigned long long *v72;  // xmm0
    struct_2 *v73;  // rbp
    void* v74;  // r14
    struct_2 *v76;  // rbp
    char *v77;  // r12
    unsigned long long v78;  // rdx
    struct_2 *v79;  // rbp
    unsigned long long v80;  // r14
    char *v82;  // r12
    struct_2 *v83;  // rax
    unsigned long long v85;  // rdx
    char *v86;  // rcx
    unsigned long long v87;  // rax
    uint128_t v88[2];  // rax
    unsigned long long v89;  // rbx
    unsigned long long v90;  // rcx
    unsigned long long v91;  // rax
    unsigned long long *v92;  // xmm0
    struct_4 *v93;  // rax
    unsigned long long *v94;  // xmm0
    unsigned long long v95;  // r12
    struct_2 *v96;  // r13
    unsigned long long v97;  // rbx
    unsigned long long v98;  // rsi
    struct_2 *v99;  // rax
    char *v100;  // rcx
    unsigned long long *v101;  // r13
    void* v103;  // r14
    char *v104;  // rcx
    unsigned long long v105;  // rsi
    char *v106;  // rbx
    unsigned long long v107;  // rdx
    unsigned long long v108;  // rax
    char *v109;  // r12
    unsigned int v111;  // ecx
    unsigned int v112;  // r8d
    unsigned int v113;  // edi
    unsigned long long v117;  // rdx
    char v118[4];  // rcx
    unsigned long long v119;  // rax
    unsigned long long v120;  // rax
    unsigned long long v121;  // rdi
    char v122[4];  // rsi
    unsigned int v123;  // r8d
    unsigned int v124;  // r10d
    unsigned int v125;  // r9d
    unsigned long long v126;  // rdx
    unsigned long long v127;  // r13
    unsigned long long *v128;  // r13
    unsigned long long v129;  // rdi
    unsigned long long v130;  // rsi
    unsigned int v131;  // r8d
    unsigned int v132;  // r10d
    unsigned int v133;  // r9d
    uint128_t v134[2];  // rax
    unsigned long long *v135;  // rax
    unsigned long long *v136;  // rcx
    char *v137;  // rcx
    unsigned long long v138[3];  // rax
    unsigned long long *v139;  // xmm0
    unsigned long long v140;  // rcx
    unsigned long long *v141;  // xmm0
    unsigned long long *v143;  // xmm0
    unsigned long long *v144;  // xmm1
    unsigned long long *v145;  // xmm2

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h767362a08d57f3a7(&v8, a1, "j12itoenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.", 1);
    v20 = "j12itoenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.";
    v21 = 1;
    if (*((int *)&v8) != 2)
    {
        v7 = v12;
        v67 = *((int128_t *)&v8);
        *((int128_t *)&v5) = *((int128_t *)&v10);
        v3 = v67;
        v13 = &v20;
        v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he7746ce7cb90bda8;
        v15 = &v3;
        v16 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v27 = &anon.861e3987badf62490c15922556b0ca7c.5.llvm.7725655707499526892;
        v28 = 2;
        v31 = 0;
        v29 = &v13;
        v30 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v27); /* do not return */
    }
    v61 = v9;
    if (!v61)
    {
        v62 = 0;
        goto LABEL_493eba;
    }
    uu_join::parse_field_number::haedd8e141fe1d087(&v27, v61[1], v61[2]);
    v63 = v27;
    if (!v63)
    {
        v50 = v28;
        v62 = 1;
LABEL_493eba:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h767362a08d57f3a7(&v8, a1, "12itoenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{", 1);
        v20 = "12itoenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{";
        v21 = 1;
        if (*((int *)&v8) != 2)
        {
            vvar_1963{stack -440} = v12;
            vvar_1964{reg 224} = *((int128_t *)&v8);
            *((int128_t *)&v5) = *((int128_t *)&v10);
            v3 = v67;
            vvar_1965{stack -384} = &v20;
            vvar_1966{stack -376} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he7746ce7cb90bda8;
            vvar_1967{stack -368} = &v3;
            v16 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
            vvar_1968{stack -264} = &anon.861e3987badf62490c15922556b0ca7c.5.llvm.7725655707499526892;
            vvar_1969{stack -256} = 2;
            vvar_1970{stack -232} = 0;
            vvar_1971{stack -248} = &v13;
            vvar_1972{stack -240} = 2;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v27); /* do not return */
        }
        v64 = v9;
        if (!v64)
        {
            v65 = 0;
            goto LABEL_493f3e;
        }
        uu_join::parse_field_number::haedd8e141fe1d087(&v27, v64[1], v64[2]);
        v63 = v27;
        if (!v63)
        {
            v54 = v28;
            v65 = 1;
LABEL_493f3e:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h767362a08d57f3a7(&v8, a1, "2itoenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{}", 1);
            v20 = "2itoenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{}";
            v21 = 1;
            if (*((int *)&v8) != 2)
            {
                vvar_1974{stack -440} = v12;
                vvar_1975{reg 224} = *((int128_t *)&v8);
                *((int128_t *)&v5) = *((int128_t *)&v10);
                v3 = v67;
                vvar_1976{stack -384} = &v20;
                vvar_1977{stack -376} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he7746ce7cb90bda8;
                vvar_1978{stack -368} = &v3;
                v16 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                vvar_1979{stack -264} = &anon.861e3987badf62490c15922556b0ca7c.5.llvm.7725655707499526892;
                vvar_1980{stack -256} = 2;
                vvar_1981{stack -232} = 0;
                vvar_1982{stack -248} = &v13;
                vvar_1983{stack -240} = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v27); /* do not return */
            }
            v66 = v9;
            if (!v66)
            {
                v49 = 0;
                goto LABEL_493fe6;
            }
            else
            {
                uu_join::parse_field_number::haedd8e141fe1d087(&v27, v66[1], v66[2]);
                v63 = v27;
                if (!v63)
                {
                    v53 = v28;
                    v49 = 1;
LABEL_493fe6:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd050b4e4129f46b1(&v27, a1, "vaj12itoenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard inpu", 1);
                    v20 = "vaj12itoenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard inpu";
                    v21 = 1;
                    if (v27)
                    {
                        v12 = v32;
                        v69 = *((int128_t *)&v28);
                        *((int128_t *)&v10) = *((int128_t *)&v30);
                        v8 = v69;
                        v13 = &v20;
                        v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he7746ce7cb90bda8;
                        v15 = &v8;
                    }
                    else
                    {
                        v57 = v62;
                        v68 = v28;
                        v55 = v65;
                        v56 = v68;
                        if (!v56)
                        {
                            v68 = core::ops::function::FnOnce::call_once::hdf71e22aca42c400;
                            v70 = "&";
                            v2 = 0;
                            v71 = 0;
                            v25 = &"&";
                        }
                        else
                        {
                            v25 = v30;
                            v2 = v33;
                        }
                        v59 = v34;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd050b4e4129f46b1(&v27, a1, "aj12itoenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input", 1);
                        v20 = "aj12itoenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input";
                        v21 = 1;
                        if (v27)
                        {
                            v12 = v32;
                            v72 = *((int128_t *)&v28);
                            *((int128_t *)&v10) = *((int128_t *)&v30);
                            v8 = v72;
                            v13 = &v20;
                            v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he7746ce7cb90bda8;
                            v15 = &v8;
                        }
                        else
                        {
                            v24 = v28;
                            if (!v24)
                            {
                                v24 = &core::ops::function::FnOnce::call_once::hdf71e22aca42c400;
                                v73 = "&";
                                v74 = 0;
                                v52 = &"&";
                            }
                            else
                            {
                                v52 = v30;
                            }
                            v26 = 0;
                            v58 = v34;
                            v51 = 0;
                            v19 = 0;
                            while (true)
                            {
                                v78 = v19 & 4294967295 & 4294967295;
                                do
                                {
                                    v19 = v78 & 4294967295;
                                    if (v68)
                                    {
                                        if (!(v77) || !(v77 != v32))
                                        {
                                            do
                                            {
                                                v70 = v70;
                                                if (!(v70) || !(v70 != v25))
                                                {
                                                    if (!v2 || v2 == v59)
                                                    {
                                                        v77 = 0;
                                                        v2 = 0;
                                                        goto LABEL_494270;
                                                    }
                                                    else
                                                    {
                                                        v2 += 32;
                                                        v77 = 0;
                                                        goto LABEL_494230;
                                                    }
                                                }
                                            } while ((v78 = v85 | -0x100 | 1, *(v9) == 49));
                                        }
                                        else
                                        {
                                            v77 += 32;
                                            v2 = v2;
LABEL_494230:
                                            v83 = v68(v82, v68);
                                            goto LABEL_494332;
                                        }
                                    }
LABEL_494270:
                                    v2 = v2;
                                    if (!(v80) || !(v80 != v32))
                                    {
                                        do
                                        {
                                            v76 = v79;
                                            if (!(v76) || !(v76 != v52))
                                            {
                                                v80 = v26;
                                                if (v80 && v80 != v58)
                                                {
                                                    v18 = v80 + 32;
                                                    v46 = 0;
                                                    goto LABEL_49430e;
                                                }
                                                *((int128_t *)&v36) = 0;
                                                v41 = 0;
                                                v45 = 10;
                                                v33 = 9223372036854775811;
                                                v27 = 0;
                                                v28 = 8;
                                                *((int128_t *)&v29) = 0;
                                                v31 = 1;
                                                v32 = 0;
                                                v40 = !vvar_1810;
                                                v38 = (char)v19;
                                                v39 = (char)v51;
                                                a0 = a0;
                                                v89 = v57;
                                                v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "itoenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} ", 1);
                                                uu_join::get_field_number::h7f856b6d62549a04(&v3, v89, v50, v55, v54);
                                                v90 = v3;
                                                v91 = v4;
                                                if (v90 || (v36 = v91, uu_join::get_field_number::h7f856b6d62549a04(&v3, v89, v50, v49, v53), v90 = v3, v91 = v4, v90))
                                                {
                                                    *((unsigned long long *)&a0->padding_8[0]) = v90;
                                                    a0->field_10 = v91;
                                                }
                                                else
                                                {
                                                    v37 = v91;
                                                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1c0b55d8b6ef6c3a(&v13, a1, "toenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [", 1);
                                                    v47 = "toenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [";
                                                    v48 = 1;
                                                    if ((int)v13 != 2)
                                                    {
                                                        v12 = *((long long *)&v17);
                                                        v94 = *((int128_t *)&v13);
                                                        *((int128_t *)&v10) = *((int128_t *)&v15);
                                                        v8 = v94;
                                                        v20 = &v47;
                                                        v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he7746ce7cb90bda8;
                                                        v22 = &v8;
                                                        v23 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                                                        v3 = &anon.861e3987badf62490c15922556b0ca7c.5.llvm.7725655707499526892;
                                                        v4 = 2;
                                                        v7 = 0;
                                                        v5 = &v20;
                                                        v6 = 2;
                                                        core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
                                                    }
                                                    v93 = v14;
                                                    if (!v93)
                                                    {
                                                        v95 = 9223372036854775811;
                                                        goto LABEL_49468b;
                                                    }
                                                    else
                                                    {
                                                        uu_join::parse_separator::h71277080ae359d07(&v3, v93->field_8, v93->field_10);
                                                        v95 = v3;
                                                        v96 = v4;
                                                        v97 = v5;
                                                        if (v95 == 9223372036854775812)
                                                        {
                                                            *((struct_2 **)&a0->padding_8[0]) = v96;
                                                            a0->field_10 = v97;
                                                        }
                                                        else
                                                        {
                                                            core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h026f4795acc2da00(&v33);
                                                            v33 = v95;
                                                            v34 = v96;
                                                            v35 = v97;
LABEL_49468b:
                                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h767362a08d57f3a7(&v3, a1, "oenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [O", 1);
                                                            v99 = clap_builder::parser::error::MatchesError::unwrap::hfa5485072ccb0341("oenocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [O", 1, &v3);
                                                            if (!v99)
                                                            {
LABEL_494c17:
                                                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h767362a08d57f3a7(&v3, a1, "enocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [OP", 1);
                                                                v138 = clap_builder::parser::error::MatchesError::unwrap::hfa5485072ccb0341("enocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [OP", 1, &v3);
                                                                if (v138)
                                                                {
                                                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::haa83fba73ebde40d(&v3, v138[1], v138[2]);
                                                                    v32 = v5;
                                                                    *((int128_t *)&v30) = *((int128_t *)&v3);
                                                                }
                                                                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "nocheck-ordercheck-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [OPT", 13))
                                                                    v44 = 1;
                                                                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "check-orderheaderz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [OPTION]... FILE1", 11))
                                                                    v44 = 2;
                                                                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "headerz0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [OPTION]... FILE1 FILE2FILEN", 6))
                                                                    v43 = 1;
                                                                *((int *)&v45) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "z0.0.27For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [OPTION]... FILE1 FILE2FILENUM", 1) ? 10 : 0);
                                                                a0->field_40 = *((int128_t *)&v35);
                                                                v143 = *((int128_t *)&v27);
                                                                v144 = *((int128_t *)&v29);
                                                                v145 = *((int128_t *)&(&v30)[1]);
                                                                a0->field_30 = *((int128_t *)&v33);
                                                                *((unsigned long long **)&a0->field_20) = v145;
                                                                a0->field_10 = v144;
                                                                a0->field_0 = v143;
                                                                a0->field_50 = v37;
                                                                a0->field_58 = *((int *)&v38);
                                                                a0->field_5c = *((short *)((char *)&v41 + 1));
                                                                a0->field_5e = v44;
                                                                a0->field_5f = v45;
                                                                return a0;
                                                            }
                                                            v100 = v99->field_8;
                                                            v46 = v99->field_10;
                                                            if (v46 != 4 || *((int *)&v100) != 1869903201)
                                                            {
                                                                a1 = v96;
                                                                v98 = v95;
                                                                v20 = 0;
                                                                v21 = 8;
                                                                v22 = 0;
                                                                v101 = 0;
                                                                v18 = v100;
                                                                v103 = 0;
                                                                v19 = &v100[v46];
                                                                v19 = v19;
                                                            }
                                                            else
                                                            {
                                                                v42 = 1;
                                                                goto LABEL_494c17;
                                                            }
                                                            while (true)
                                                            {
                                                                v105 = 0;
                                                                do
                                                                {
                                                                    v106 = v100;
                                                                    v107 = v103;
                                                                    if (v106 == v104)
                                                                    {
                                                                        v117 = v46;
                                                                        break;
                                                                    }
                                                                    v108 = *(v106);
                                                                    if ((char)v108 >= 0)
                                                                    {
                                                                        v109 = v106 + 1;
                                                                    }
                                                                    else
                                                                    {
                                                                        v111 = (unsigned int)v108 & 31;
                                                                        v112 = v106[1] & 63;
                                                                        if ((v108 & 255) <= 223)
                                                                        {
                                                                            v109 = v106 + 2;
                                                                            v108 = v111 * 64 | v112;
                                                                        }
                                                                        else
                                                                        {
                                                                            v113 = v106[2] & 63 | v112 * 64;
                                                                            if ((v108 & 255) < 240)
                                                                            {
                                                                                v109 = v106 + 3;
                                                                                v108 = v113 | v111 * 0x1000;
                                                                            }
                                                                            else
                                                                            {
                                                                                v109 = v106 + 4;
                                                                                v108 = v106[3] & 63 | v113 * 64 | (v111 & 7) * 0x40000;
                                                                            }
                                                                        }
                                                                        v19 = v19;
                                                                    }
                                                                    v103 = v109 - v106 + v107;
                                                                } while (!((unsigned int)v108 <= 44) || !((v0 = (unsigned long long)0x100100000200, ((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((v108 & 4294967295 & 63) >> 3))) >> (unsigned long long)(char)(v108 & 4294967295 & 63 & 7)) & 1))));
                                                                v118 = &v18[v105];
                                                                v119 = v117;
                                                                v120 = v119 - v105;
                                                                if (v119 == v105)
                                                                {
                                                                    v13 = 0;
                                                                    *(&v14) = v118;
                                                                    v15 = v120;
                                                                    v16 = 1;
                                                                    v47 = &v13;
                                                                    v48 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                                                                    v3 = &g_4fdbf8;
                                                                    v4 = 1;
                                                                    v7 = 0;
                                                                    v5 = &v47;
                                                                    v6 = 1;
                                                                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v8, &v3);
                                                                    v11 = 1;
                                                                    v134 = __rust_alloc(32, 8);
                                                                    if (!v134)
                                                                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                                                                    goto LABEL_494b8e;
                                                                }
                                                                v121 = v118[0];
                                                                if ((char)v121 >= 0)
                                                                {
                                                                    v122 = &v118[1];
                                                                }
                                                                else
                                                                {
                                                                    v123 = (unsigned int)v121 & 31;
                                                                    v124 = v118[1] & 63;
                                                                    if ((v121 & 255) <= 223)
                                                                    {
                                                                        v122 = &v118[2];
                                                                        v121 = v123 * 64 | v124;
                                                                    }
                                                                    else
                                                                    {
                                                                        v125 = v118[2] & 63 | v124 * 64;
                                                                        if ((v121 & 255) < 240)
                                                                        {
                                                                            v122 = &v118[3];
                                                                            v121 = v125 | v123 * 0x1000;
                                                                        }
                                                                        else
                                                                        {
                                                                            v122 = v118 + 1;
                                                                            v121 = v118[3] & 63 | v125 * 64 | (v123 & 7) * 0x40000;
                                                                        }
                                                                    }
                                                                }
                                                                v126 = &v18[v119];
                                                                if ((unsigned int)v121 == 48)
                                                                    break;
                                                                if ((unsigned int)v121 != 49 && (unsigned int)v121 == 50)
                                                                {
                                                                    v127 = 0x100;
                                                                    goto LABEL_4948fa;
                                                                }
                                                                v127 = 0;
LABEL_4948fa:
                                                                if (v122 == v126)
                                                                {
LABEL_494ad0:
                                                                    v13 = 0;
                                                                    *(&v14) = v118;
                                                                    v15 = v120;
                                                                    v16 = 1;
                                                                    v47 = &v13;
                                                                    v48 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                                                                    v3 = &g_4fdb40;
                                                                    v4 = 1;
                                                                    v7 = 0;
                                                                    v5 = &v47;
                                                                    v6 = 1;
                                                                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v8, &v3);
                                                                    v11 = 1;
                                                                    v134 = __rust_alloc(32, 8);
                                                                    if (!v134)
                                                                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
LABEL_494b8e:
                                                                    v139 = *((int128_t *)&v8);
                                                                    v134[1] = *((int128_t *)&v10);
                                                                    *((unsigned long long **)&v134[0]) = v139;
                                                                    v140 = &g_4fdb88;
                                                                    goto LABEL_494ba6;
                                                                }
                                                                v129 = v122[0];
                                                                if ((char)v129 >= 0)
                                                                {
                                                                    v130 = &v122[1];
                                                                }
                                                                else
                                                                {
                                                                    v131 = (unsigned int)v129 & 31;
                                                                    v132 = v122[1] & 63;
                                                                    if ((v129 & 255) <= 223)
                                                                    {
                                                                        v130 = &v122[2];
                                                                        v129 = v131 * 64 | v132;
                                                                    }
                                                                    else
                                                                    {
                                                                        v133 = v122[2] & 63 | v132 * 64;
                                                                        if ((v129 & 255) < 240)
                                                                        {
                                                                            v130 = &v122[3];
                                                                            v129 = v133 | v131 * 0x1000;
                                                                        }
                                                                        else
                                                                        {
                                                                            v130 = v122 + 1;
                                                                            v129 = v122[3] & 63 | v133 * 64 | (v131 & 7) * 0x40000;
                                                                        }
                                                                    }
                                                                }
                                                                if (!((unsigned int)v129 == 46))
                                                                    goto LABEL_494ad0;
                                                                uu_join::parse_field_number::haedd8e141fe1d087(&v3, v130, v126 - v130);
                                                                v134 = v3;
                                                                v26 = v4;
                                                                if (v134)
                                                                {
                                                                    goto LABEL_494ba6;
                                                                }
                                                                else
                                                                {
                                                                    v2 = (v2 & -0x10000) + v127 + 1;
                                                                    v128 = v22;
                                                                }
LABEL_4949e2:
                                                                if (v128 == v20)
                                                                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf52f4047aaefea38(&v20);
                                                                v135 = v128 * 16;
                                                                v136 = v21;
                                                                *((char **)(v136 + v135)) = v2;
                                                                *((unsigned long long *)(v136 + v135 + 8)) = v26;
                                                                v101 = (char *)v128 + 1;
                                                                v22 = v101;
                                                                v137 = v19;
                                                                if (v106 == v137)
                                                                {
                                                                    v29 = v22;
                                                                    *((int128_t *)&v27) = *((int128_t *)&v20);
                                                                    goto LABEL_494c17;
                                                                }
                                                            }
                                                            if (v122 == v126)
                                                            {
                                                                v2 &= -0x100;
                                                                goto LABEL_4949e2;
                                                            }
                                                            else
                                                            {
                                                                v13 = 0;
                                                                *(&v14) = v118;
                                                                v15 = v120;
                                                                v16 = 1;
                                                                v47 = &v13;
                                                                v48 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                                                                v3 = &g_4fdb40;
                                                                v4 = 1;
                                                                v7 = 0;
                                                                v5 = &v47;
                                                                v6 = 1;
                                                                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v8, &v3);
                                                                v11 = 1;
                                                                v134 = __rust_alloc(32, 8);
                                                                if (!v134)
                                                                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                                                                v141 = *((int128_t *)&v8);
                                                                v134[1] = *((int128_t *)&v10);
                                                                *((unsigned long long **)&v134[0]) = v141;
                                                                v140 = &g_4fdb88;
LABEL_494ba6:
                                                                *((uint128_t *[2])&a0->padding_8[0]) = v134;
                                                                a0->field_10 = v140;
                                                                a0->field_0 = 0x8000000000000000;
                                                                if (v20)
                                                                    __rust_dealloc(v21);
                                                            }
LABEL_4945a7:
                                                            if (((0x8000000000000000 ^ v98) != 1 & (0x8000000000000000 ^ v98) < 4))
                                                            {
                                                                return a0;
                                                            }
                                                            else if (!v98)
                                                            {
                                                                return a0;
                                                            }
                                                            else
                                                            {
                                                                __rust_dealloc(a1);
                                                                return a0;
                                                            }
                                                        }
                                                    }
                                                }
                                                a0->field_0 = 0x8000000000000000;
                                                v98 = 9223372036854775811;
                                                goto LABEL_4945a7;
                                            }
                                        } while ((v78 = v85 | -0x100 | 1, *(v9) == 49));
                                    }
                                    else
                                    {
                                        v46 = v80 + 32;
                                        v18 = v26;
                                    }
LABEL_49430e:
                                    v83 = v24(v80);
                                    v68 = 0;
                                    v26 = v18;
LABEL_494332:
                                    v2 = v2;
                                    v86 = v83->field_8;
                                    v87 = v83->field_10;
                                    if (v10 != 1)
                                    {
                                        v8 = 0;
                                        v9 = v86;
                                        v10 = v87;
                                        v11 = 1;
                                        v13 = &v8;
                                        v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                                        v27 = &g_4fdda0;
                                        v28 = 1;
                                        v31 = 0;
                                        v29 = &v13;
                                        v30 = 1;
                                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v3, &v27);
                                        v6 = 1;
                                        v88 = __rust_alloc(32, 8);
                                        if (v88)
                                        {
                                            v92 = *((int128_t *)&v3);
                                            v88[1] = *((int128_t *)&v5);
                                            *((unsigned long long **)&v88[0]) = v92;
                                            a0 = a0;
                                            *((uint128_t *[2])&a0->padding_8[0]) = v88;
                                            a0->field_10 = &g_4fdb88;
                                            a0->field_0 = 0x8000000000000000;
                                            return a0;
                                        }
                                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                                    }
                                } while ((v78 = v85 | -0x100 | 1, *(v9) == 49));
                                v51 = v78 | -0x100 | 1;
                            }
                        }
                    }
                    v16 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                    v3 = &anon.861e3987badf62490c15922556b0ca7c.5.llvm.7725655707499526892;
                    v4 = 2;
                    v7 = 0;
                    v5 = &v13;
                    v6 = 2;
                    core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
                }
            }
        }
    }
    *((unsigned long long *)&a0->padding_8[0]) = v63;
    a0->field_10 = v28;
    a0->field_0 = 0x8000000000000000;
    return a0;
}
