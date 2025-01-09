long long uu_hashsum::create_algorithm_from_flags::h44fb2b955b3a7236(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x90], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v1;  // [sp-0x88], Other Possible Types: unsigned long
    unsigned long long v2;  // [sp-0x80], Other Possible Types: unsigned long
    char v3;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x70]
    unsigned long v5;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x60]
    unsigned long long v7;  // [sp-0x58]
    int v8;  // [sp-0x50]
    void* v9;  // [sp-0x40]
    char v10;  // [bp-0x38]
    char v11;  // [bp-0x28]
    unsigned long long v13;  // r8
    unsigned long long v14;  // rax
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rax
    unsigned long long *v17;  // rax
    unsigned long long v19;  // rsi
    unsigned long long *v20;  // rax
    unsigned long long *v21;  // rax
    unsigned long long v22;  // rax
    int v23;  // xmm0

    v9 = 0;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "md5md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 3))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 6, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha1callz", 4))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "sha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 7, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 6))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 9, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 6))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 9, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha384sha384sumsha512sha512sumb2sumb3sum", 6))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "sha384sumsha512sha512sumb2sumb3sum", 9, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha512sha512sumb2sumb3sum", 6))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "sha512sumb2sumb3sum", 9, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "b2sumb3sum", 5))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "b2sumb3sum", 5, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "b3sum", 5))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "b3sum", 5, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha3[", 4))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4357859c597eaa3f(&v0, a1, "bits", 4);
        v17 = clap_builder::parser::error::MatchesError::unwrap::h5d44f088bdacce08("bits", 4, &v0);
        if (v17)
            v19 = 1;
        else
            v19 = 0;
        uucore::features::checksum::create_sha3::hcd73b2e9e9c5f640(&v0, v19, *(v17));
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha3-224", 8))
    {
        v0 = "SHA3-224SHA3-256";
        v1 = 8;
        v2 = alloc::boxed::Box$LT$T$GT$::new::h56ceb8bc84fcc09c();
        v3 = &g_73e920;
        v4 = 224;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v0);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha3-256shake128", 8))
    {
        v0 = "SHA3-256";
        v1 = 8;
        v2 = alloc::boxed::Box$LT$T$GT$::new::h96109929ce1ae329();
        v3 = &g_73e950;
        v4 = 0x100;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v0);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha3-384SHA3_224", 8))
    {
        v0 = &g_469088;
        v1 = 8;
        v2 = alloc::boxed::Box$LT$T$GT$::new::h8957ed870d0d589d();
        v3 = &g_73e980;
        v4 = 384;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v0);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, &g_469328, 8))
    {
        v0 = "SHA3-512shake256S";
        v1 = 8;
        v2 = alloc::boxed::Box$LT$T$GT$::new::h9e00f0c13a1acd4d();
        v3 = &g_73e9b0;
        v4 = 0x200;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v0);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "shake128", 8))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4357859c597eaa3f(&v0, a1, "bits", 4);
        v20 = clap_builder::parser::error::MatchesError::unwrap::h5d44f088bdacce08("bits", 4, &v0);
        if (!v20)
        {
            v16 = alloc::boxed::Box$LT$T$GT$::new::h5da6a9570b8b523b(6);
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
        v0 = &g_469928;
        v1 = 8;
        v2 = alloc::boxed::Box$LT$T$GT$::new::h8cbd87c202e90656();
        v3 = &g_73ea70;
        v4 = *(v20);
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v0);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "shake256S", 8))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4357859c597eaa3f(&v0, a1, "bits", 4);
        v21 = clap_builder::parser::error::MatchesError::unwrap::h5d44f088bdacce08("bits", 4, &v0);
        if (!v21)
        {
            v16 = alloc::boxed::Box$LT$T$GT$::new::h5da6a9570b8b523b(7);
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
        v0 = "SHAKE256stride: xidstart( ";
        v1 = 8;
        v2 = alloc::boxed::Box$LT$T$GT$::new::h2a30d9bd725b68e7();
        v3 = &g_73eaa0;
        v4 = *(v21);
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v9, &v0);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
            return a0;
        }
    }
    v22 = v9;
    if (v22)
    {
        v23 = *((int128_t *)&v10);
        *((int128_t *)&(&a0->padding_10)[1]) = *((int128_t *)&v11);
        *((void*)&a0->field_8) = v23;
        a0->field_0 = v22;
        return a0;
    }
    v16 = alloc::boxed::Box$LT$T$GT$::new::h5da6a9570b8b523b(14);
    a0->field_8 = v16;
    *((char **)&a0->padding_10[0]) = &g_73ea00;
    a0->field_0 = 0;
    core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v9);
    return a0;
}
