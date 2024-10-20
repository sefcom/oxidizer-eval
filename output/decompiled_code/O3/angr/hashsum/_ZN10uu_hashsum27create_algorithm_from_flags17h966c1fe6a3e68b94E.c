long long uu_hashsum::create_algorithm_from_flags::h966c1fe6a3e68b94(struct_2 *a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    char v0;  // [bp-0xa0], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v1;  // [sp-0x98], Other Possible Types: unsigned long
    unsigned long long v2;  // [sp-0x90], Other Possible Types: unsigned long
    struct_1 *v3;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long v4;  // [sp-0x80], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x78], Other Possible Types: unsigned long
    unsigned long v6;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x68]
    struct_1 *v8;  // [sp-0x60]
    unsigned long long v9;  // [sp-0x58]
    unsigned long v10;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x48]
    unsigned long long v12;  // [sp-0x40]
    int v13;  // [sp-0x38]
    unsigned long long v15;  // r8
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rax
    unsigned long long v18;  // r15
    struct_1 *v19;  // r12
    unsigned long long *v20;  // rax
    struct struct_0 **v21;  // rax
    unsigned long long v22;  // rcx
    struct struct_0 **v23;  // rax
    unsigned long long v24;  // rcx
    struct struct_0 **v25;  // rax
    unsigned long long v26;  // rcx
    struct struct_0 **v27;  // rax
    unsigned long long v28;  // rcx
    struct struct_0 **v29;  // rax
    unsigned long long v30;  // rcx
    struct struct_0 **v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long v33;  // rcx
    unsigned long long *v34;  // rax
    unsigned long long *v35;  // rax
    unsigned long long v37;  // rsi
    unsigned long long *v38;  // rax
    unsigned long long v39;  // r13
    unsigned long long *v40;  // rax
    unsigned long long v41;  // rax
    int v42;  // xmm0
    unsigned long long v43;  // r14
    struct_1 *v44;  // r15
    struct struct_0 **v45;  // rax

    v5 = 0;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "md5md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 3))
    {
        uucore::features::checksum::detect_algo::h0ddc2b0db45fbba2(&v0, "md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 6, 0, v15);
        v16 = v0;
        v17 = v1;
        v18 = v2;
        if (!v16)
            goto LABEL_55cd89;
        v19 = v3;
        if (!v5)
        {
            v5 = v16;
            v6 = v17;
            v7 = v18;
            v8 = v19;
            v9 = v4;
            goto LABEL_55c9d6;
        }
        else
        {
            v20 = __rust_alloc(24, 8);
            if (!v20)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            *(v20) = 9223372036854775821;
            v21 = v19->field_0;
            if (v21)
                v21(v18);
        }
    }
    else
    {
LABEL_55c9d6:
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "sha1callz", 4))
        {
            uucore::features::checksum::detect_algo::h0ddc2b0db45fbba2(&v0, "sha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 7, 0, v15);
            v22 = v0;
            v17 = v1;
            v18 = v2;
            if (!v22)
                goto LABEL_55cd89;
            v19 = v3;
            if (!v5)
            {
                v5 = v22;
                v6 = v17;
                v7 = v18;
                v8 = v19;
                v9 = v4;
                goto LABEL_55ca93;
            }
            else
            {
                v20 = __rust_alloc(24, 8);
                if (!v20)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                *(v20) = 9223372036854775821;
                v23 = v19->field_0;
                if (v23)
                    v23(v18);
            }
        }
        else
        {
LABEL_55ca93:
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "sha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 6))
            {
                uucore::features::checksum::detect_algo::h0ddc2b0db45fbba2(&v0, "sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 9, 0, v15);
                v24 = v0;
                v17 = v1;
                v18 = v2;
                if (!v24)
                    goto LABEL_55cd89;
                v19 = v3;
                if (!v5)
                {
                    v5 = v24;
                    v6 = v17;
                    v7 = v18;
                    v8 = v19;
                    v9 = v4;
                    goto LABEL_55cb50;
                }
                else
                {
                    v20 = __rust_alloc(24, 8);
                    if (!v20)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    *(v20) = 9223372036854775821;
                    v25 = v19->field_0;
                    if (v25)
                        v25(v18);
                }
            }
            else
            {
LABEL_55cb50:
                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "sha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 6))
                {
                    uucore::features::checksum::detect_algo::h0ddc2b0db45fbba2(&v0, "sha256sumsha384sha384sumsha512sha512sumb2sumb3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 9, 0, v15);
                    v26 = v0;
                    v17 = v1;
                    v18 = v2;
                    if (!v26)
                        goto LABEL_55cd89;
                    v19 = v3;
                    if (!v5)
                    {
                        v5 = v26;
                        v6 = v17;
                        v7 = v18;
                        v8 = v19;
                        v9 = v4;
                        goto LABEL_55cc0d;
                    }
                    else
                    {
                        v20 = __rust_alloc(24, 8);
                        if (!v20)
                            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                        *(v20) = 9223372036854775821;
                        v27 = v19->field_0;
                        if (v27)
                            v27(v18);
                    }
                }
                else
                {
LABEL_55cc0d:
                    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "sha384sha384sumsha512sha512sumb2sumb3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 6))
                    {
                        uucore::features::checksum::detect_algo::h0ddc2b0db45fbba2(&v0, "sha384sumsha512sha512sumb2sumb3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 9, 0, v15);
                        v28 = v0;
                        v17 = v1;
                        v18 = v2;
                        if (!v28)
                            goto LABEL_55cd89;
                        v19 = v3;
                        if (!v5)
                        {
                            v5 = v28;
                            v6 = v17;
                            v7 = v18;
                            v8 = v19;
                            v9 = v4;
                            goto LABEL_55ccca;
                        }
                        else
                        {
                            v20 = __rust_alloc(24, 8);
                            if (!v20)
                                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                            *(v20) = 9223372036854775821;
                            v29 = v19->field_0;
                            if (v29)
                                v29(v18);
                        }
                    }
                    else
                    {
LABEL_55ccca:
                        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "sha512sha512sumb2sumb3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 6))
                        {
                            uucore::features::checksum::detect_algo::h0ddc2b0db45fbba2(&v0, "sha512sumb2sumb3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 9, 0, v15);
                            v30 = v0;
                            v17 = v1;
                            v18 = v2;
                            if (!v30)
                            {
LABEL_55cd89:
                                a0->field_8 = v17;
                                *((unsigned long long *)&a0->padding_10[0]) = v18;
                                goto LABEL_55cd91;
                            }
                            v19 = v3;
                            if (!v5)
                            {
                                v5 = v30;
                                v6 = v17;
                                v7 = v18;
                                v8 = v19;
                                v9 = v4;
                                goto LABEL_55cdff;
                            }
                            else
                            {
                                v20 = __rust_alloc(24, 8);
                                if (!v20)
                                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                                *(v20) = 9223372036854775821;
                                v31 = v19->field_0;
                                if (v31)
                                    v31(v18);
                            }
                        }
                        else
                        {
LABEL_55cdff:
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "b2sumb3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 5))
                            {
                                uucore::features::checksum::detect_algo::h0ddc2b0db45fbba2(&v0, "b2sumb3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 5, 0, v15);
                                v32 = v1;
                                v33 = v2;
                                if (!v10)
                                    goto LABEL_55d290;
                                *((int128_t *)&v13) = *((int128_t *)&v3);
                                v10 = v0;
                                v11 = v32;
                                v12 = v33;
                                v34 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6821a51a28c90d4b(&v5, &v10);
                                if (!(!v34))
                                    goto LABEL_55d2bf;
                            }
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "b3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 5))
                            {
                                uucore::features::checksum::detect_algo::h0ddc2b0db45fbba2(&v0, "b3sum0.0.27Compute and check message digests.{} [OPTIONS] [FILE]...binary", 5, 0, v15);
                                v32 = v1;
                                v33 = v2;
                                if (!v10)
                                    goto LABEL_55d290;
                                *((int128_t *)&v13) = *((int128_t *)&v3);
                                v10 = v0;
                                v11 = v32;
                                v12 = v33;
                                v34 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6821a51a28c90d4b(&v5, &v10);
                                if (!(!v34))
                                    goto LABEL_55d2bf;
                            }
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "sha3[", 4))
                            {
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h67c18bb3c8b29aee(&v0, a1, "bits", 4);
                                v35 = clap_builder::parser::error::MatchesError::unwrap::hce1f90cad6e727da("bits", 4, &v0);
                                if (v35)
                                    v37 = 1;
                                else
                                    v37 = 0;
                                uucore::features::checksum::create_sha3::h28b98dab255cbed4(&v0, v37, *(v35));
                                v32 = v1;
                                v33 = v2;
                                if (!v10)
                                {
LABEL_55d290:
                                    a0->field_8 = v32;
                                    *((unsigned long long *)&a0->padding_10[0]) = v33;
                                    goto LABEL_55cd91;
                                }
                                *((int128_t *)&v13) = *((int128_t *)&v3);
                                v10 = v0;
                                v11 = v32;
                                v12 = v33;
                                v34 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6821a51a28c90d4b(&v5, &v10);
                                if (!(!v34))
                                    goto LABEL_55d2bf;
                            }
                            if (!(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, &g_45d920, 8)) && !((v0 = (unsigned long long)"SHA3-224SHA3-256", v1 = (unsigned long long)8, v2 = (unsigned long long)1, v3 = (unsigned long long)&g_6c1a18, v4 = (unsigned long long)224, v34 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6821a51a28c90d4b(&v5, &v0), !v34)) || !(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "sha3-256shake128", 8)) && !((v0 = (unsigned long long)"SHA3-256", v1 = (unsigned long long)8, v2 = (unsigned long long)1, v3 = (unsigned long long)&g_6c1a48, v4 = (unsigned long long)0x100, v34 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6821a51a28c90d4b(&v5, &v0), !v34)) || !(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "sha3-384SHA3_224", 8)) && !((v0 = (unsigned long long)&g_45d558, v1 = (unsigned long long)8, v2 = (unsigned long long)1, v3 = (unsigned long long)&g_6c1a78, v4 = (unsigned long long)384, v34 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6821a51a28c90d4b(&v5, &v0), !v34)) || !(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, &g_45d7c8, 8)) && !(!((v0 = (unsigned long long)"SHA3-512shake256S", v1 = (unsigned long long)8, v2 = (unsigned long long)1, v3 = (unsigned long long)&g_6c1aa8, v4 = (unsigned long long)0x200, v34 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6821a51a28c90d4b(&v5, &v0), v34))))
                                goto LABEL_55d2bf;
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "shake128", 8))
                            {
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h67c18bb3c8b29aee(&v0, a1, "bits", 4);
                                v38 = clap_builder::parser::error::MatchesError::unwrap::hce1f90cad6e727da("bits", 4, &v0);
                                if (!v38)
                                {
                                    v34 = ::0x55bf60::alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                                    v39 = 9223372036854775814;
                                    goto LABEL_55d2bc;
                                }
                                v0 = &g_45dd70;
                                v1 = 8;
                                v2 = 1;
                                v3 = &g_6c1b80;
                                v4 = *(v38);
                                v34 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6821a51a28c90d4b(&v5, &v0);
                                if (v34)
                                {
LABEL_55d2bf:
                                    a0->field_8 = v34;
                                    goto LABEL_55cd7c;
                                }
                            }
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "shake256S", 8))
                            {
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h67c18bb3c8b29aee(&v0, a1, "bits", 4);
                                v40 = clap_builder::parser::error::MatchesError::unwrap::hce1f90cad6e727da("bits", 4, &v0);
                                if (!v40)
                                {
                                    v34 = ::0x55bf60::alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                                    v39 = 9223372036854775815;
                                    goto LABEL_55d2bc;
                                }
                                v0 = "SHAKE256stride: xidstart( ";
                                v1 = 8;
                                v2 = 1;
                                v3 = &g_6c1bb0;
                                v4 = *(v40);
                                v34 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6821a51a28c90d4b(&v5, &v0);
                                if (!(!v34))
                                    goto LABEL_55d2bf;
                            }
                            v41 = v5;
                            if (v41)
                            {
                                v42 = *((int128_t *)&v6);
                                *((int128_t *)&(&a0->padding_10)[1]) = *((int128_t *)&v8);
                                *((void*)&a0->field_8) = v42;
                                a0->field_0 = v41;
                                return a0;
                            }
                            v34 = ::0x55bf60::alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                            v39 = 9223372036854775822;
LABEL_55d2bc:
                            *(v34) = v39;
                            goto LABEL_55d2bf;
                        }
                    }
                }
            }
        }
    }
    if (v19->field_8)
        __rust_dealloc(v18);
    a0->field_8 = v20;
LABEL_55cd7c:
    *((char **)&a0->padding_10[0]) = &g_6c1b10;
LABEL_55cd91:
    a0->field_0 = 0;
    if (!v5)
        return a0;
    v43 = v7;
    v44 = v8;
    if (v44->field_0)
        v45(v43);
    if (!v44->field_8)
        return a0;
    __rust_dealloc(v43);
}
