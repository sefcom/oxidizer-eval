long long uu_wc::Settings::new::h02713cb8e33fdb45(struct_2 *a0, unsigned long long a1)
{
    unsigned int v0;  // [sp-0x104]
    unsigned long long v1;  // [sp-0x100]
    char *v2;  // [sp-0xf8]
    unsigned long v3;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xe8]
    unsigned long v5;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xd8]
    unsigned long long v7;  // [sp-0xd0]
    int v8;  // [sp-0xc8], Other Possible Types: unsigned long long
    void* v9;  // [sp-0xc0]
    unsigned long v10;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0xa8]
    unsigned long long v12;  // [sp-0xa0]
    unsigned long long v13;  // [sp-0x98]
    char v14;  // [bp-0x90]
    char v15;  // [bp-0x88]
    char v16;  // [bp-0x80]
    char v17;  // [bp-0x70]
    unsigned long long v18;  // [sp-0x68]
    unsigned long long v19;  // [sp-0x60]
    int v20;  // [sp-0x58]
    int v21;  // [sp-0x48]
    unsigned long long v22;  // [sp-0x38]
    unsigned long long v24;  // r12
    struct_3 *v25;  // rax
    char *v26;  // rcx
    char v28;  // cc_dep1
    struct_1 *v29;  // rcx
    struct_0 *v30;  // rax
    unsigned long long v31;  // rcx
    unsigned int v32;  // ecx
    unsigned int v33;  // eax
    unsigned long v34;  // rdx
    unsigned int v35;  // edx
    unsigned long v36;  // rdx
    unsigned long v37;  // rdx
    void* v38;  // r12
    unsigned long long v39;  // r13
    unsigned long long v40;  // rbp
    void* v41;  // rax
    unsigned long long v42;  // rdi

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h26e9aca82c93c7a6(&v14, a1, "files0-fromlinesmax-line-lengthtotalwordsFilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidxFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/in", 11);
    v3 = "files0-fromlinesmax-line-lengthtotalwordsFilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidxFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/in";
    v4 = 11;
    if (*((int *)&v14) != 2)
    {
        v22 = *((long long *)&v17);
        *((int128_t *)&v21) = *((int128_t *)&v16);
        *((int128_t *)&v20) = *((int128_t *)&v14);
        v10 = &v3;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd79818c3b7a55764;
        v12 = &v20;
        v13 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v5 = &anon.44bf7aff6ac5828708c3812483f5a592.3.llvm.11061933974019956137;
        v6 = 2;
        v9 = 0;
        v7 = &v10;
        v8 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v5); /* do not return */
    }
    v24 = 0x8000000000000000;
    v25 = *((long long *)&v15);
    if (!v25)
    {
        v24 = 9223372036854775810;
    }
    else
    {
        v26 = v25->field_8;
        if (v1 != 1)
        {
            v1 = v25->field_10;
            v2 = v26;
        }
        else
        {
            v28 = *(v26);
            if (*(v26) == 45)
                v26 = 0;
            v2 = v26;
            v24 = 9223372036854775809;
            if (v28 != 45)
                v24 = 0x8000000000000000;
            v1 = 1;
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h71df50f34bc6cac2(&v14, a1, "totalwordsFilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidxFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/", 5);
    v3 = "totalwordsFilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidxFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/";
    v4 = 5;
    if (*((int *)&v14) == 2)
    {
        v29 = *((long long *)&v15);
        v19 = v24;
        if (!v29)
        {
            v0 = 0;
            goto LABEL_48453e;
        }
        v30 = v29->field_8;
        v31 = v29->field_10;
        if (v31 == 6)
        {
            v32 = 1635216481 ^ v30->field_0;
            v33 = *((short *)&v30->field_4) ^ 29561;
            v35 = v34 | -0x100 | 1;
            goto LABEL_484532;
        }
        if (v31 == 5)
        {
            v32 = 1702258030 ^ v30->field_0;
            v33 = v30->field_4 ^ 114;
            v35 = v36 | -0x100 | 3;
LABEL_484532:
            if (!(!v33 && !v32))
            {
LABEL_4846cb:
                v5 = &g_4f3270;
                v6 = 1;
                v7 = &v20;
                *((int128_t *)&v8) = 0;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v5); /* do not return */
            }
LABEL_48453a:
            v0 = v35;
LABEL_48453e:
            v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "bytescharsfiles0-fromlinesmax-line-lengthtotalwordsFilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidxFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/regis", 5);
            v38 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "charsfiles0-fromlinesmax-line-lengthtotalwordsFilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidxFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/s", 5);
            v39 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "linesmax-line-lengthtotalwordsFilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidxFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.", 5);
            v40 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "wordsFilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidxFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_", 5);
            v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "max-line-lengthtotalwordsFilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidxFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f", 15);
            v42 = v18;
            if ((char)((v41 + v39 & 4294967295) + (v38 + v42 & 4294967295)) != !((char)(v40 & 4294967295)))
            {
                a0->field_0 = v19;
                a0->field_8 = v2;
                a0->field_10 = v1;
                a0->field_18 = v42;
                a0->field_19 = (char)v38;
                a0->field_1a = v39;
                a0->field_1b = v40;
                a0->field_1c = (char)v41;
                a0->field_1d = v0;
                return a0;
            }
            v42 = v42 | -0x100 | 1;
            v38 = 0;
            v39 = v39 | -0x100 | 1;
            v40 = v40 | -0x100 | 1;
            v41 = 0;
        }
        if (!(v31 == 4))
            goto LABEL_4846cb;
        switch (v30->field_0)
        {
        case 1869903201:
            v35 = 0;
            break;
        case 2037149295:
            v35 = v37 | -0x100 | 2;
            break;
        default:
            v35 = v37 | -0x100 | 2;
            break;
        }
        goto LABEL_48453a;
    }
}
