long long uu_hashsum::create_algorithm_from_flags::h44fb2b955b3a7236(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [sp-0x90], Other Possible Types: unsigned long
    unsigned long v1;  // [sp-0x90]
    unsigned long long v2;  // [sp-0x88], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0x80], Other Possible Types: unsigned long
    char v4;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x70]
    unsigned long v6;  // [sp-0x68]
    unsigned long long v7;  // [sp-0x60]
    unsigned long long v8;  // [sp-0x58]
    int v9;  // [sp-0x50]
    void* v10;  // [sp-0x40]
    char v11;  // [bp-0x38]
    char v12;  // [bp-0x28]
    unsigned long long v14;  // r8
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rax
    unsigned long long *v18;  // rax
    unsigned long long v20;  // rsi
    unsigned long long *v21;  // rax
    unsigned long long *v22;  // rax
    unsigned long long v23;  // rax
    int v24;  // xmm0

    v10 = 0;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "md5md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 3))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 6, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v6)
        {
            a0->field_8 = v15;
            *((unsigned long long *)&a0->padding_10[0]) = v16;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
        *((int128_t *)&v9) = *((int128_t *)&v4);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v6);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha1callz", 4))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "sha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 7, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v6)
        {
            a0->field_8 = v15;
            *((unsigned long long *)&a0->padding_10[0]) = v16;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
        *((int128_t *)&v9) = *((int128_t *)&v4);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v6);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 6))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 9, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v6)
        {
            a0->field_8 = v15;
            *((unsigned long long *)&a0->padding_10[0]) = v16;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
        *((int128_t *)&v9) = *((int128_t *)&v4);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v6);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 6))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 9, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v6)
        {
            a0->field_8 = v15;
            *((unsigned long long *)&a0->padding_10[0]) = v16;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
        *((int128_t *)&v9) = *((int128_t *)&v4);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v6);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha384sha384sumsha512sha512sumb2sumb3sum", 6))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "sha384sumsha512sha512sumb2sumb3sum", 9, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v6)
        {
            a0->field_8 = v15;
            *((unsigned long long *)&a0->padding_10[0]) = v16;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
        *((int128_t *)&v9) = *((int128_t *)&v4);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v6);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha512sha512sumb2sumb3sum", 6))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "sha512sumb2sumb3sum", 9, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v6)
        {
            a0->field_8 = v15;
            *((unsigned long long *)&a0->padding_10[0]) = v16;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
        *((int128_t *)&v9) = *((int128_t *)&v4);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v6);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "b2sumb3sum", 5))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "b2sumb3sum", 5, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v6)
        {
            a0->field_8 = v15;
            *((unsigned long long *)&a0->padding_10[0]) = v16;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
        *((int128_t *)&v9) = *((int128_t *)&v4);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v6);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "b3sum", 5))
    {
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v0, "b3sum", 5, 0, v14);
        v15 = v2;
        v16 = v3;
        if (!v6)
        {
            a0->field_8 = v15;
            *((unsigned long long *)&a0->padding_10[0]) = v16;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
        *((int128_t *)&v9) = *((int128_t *)&v4);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v6);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha3[", 4))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4357859c597eaa3f(&v0, a1, "bits", 4);
        v18 = clap_builder::parser::error::MatchesError::unwrap::h5d44f088bdacce08("bits", 4, &v0);
        if (v18)
            v20 = 1;
        else
            v20 = 0;
        uucore::features::checksum::create_sha3::hcd73b2e9e9c5f640(&v0, v20, *(v18));
        v15 = v2;
        v16 = v3;
        if (!v6)
        {
            a0->field_8 = v15;
            *((unsigned long long *)&a0->padding_10[0]) = v16;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
        *((int128_t *)&v9) = *((int128_t *)&v4);
        v6 = v1;
        v7 = v15;
        v8 = v16;
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v6);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha3-224", 8))
    {
        v0 = "SHA3-224SHA3-256";
        v2 = 8;
        v3 = alloc::boxed::Box$LT$T$GT$::new::h56ceb8bc84fcc09c();
        v4 = &g_73e920;
        v5 = 224;
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v0);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha3-256shake128", 8))
    {
        v0 = "SHA3-256";
        v2 = 8;
        v3 = alloc::boxed::Box$LT$T$GT$::new::h96109929ce1ae329();
        v4 = &g_73e950;
        v5 = 0x100;
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v0);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sha3-384SHA3_224", 8))
    {
        v0 = &g_469088;
        v2 = 8;
        v3 = alloc::boxed::Box$LT$T$GT$::new::h8957ed870d0d589d();
        v4 = &g_73e980;
        v5 = 384;
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v0);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, &g_469328, 8))
    {
        v0 = "SHA3-512shake256S";
        v2 = 8;
        v3 = alloc::boxed::Box$LT$T$GT$::new::h9e00f0c13a1acd4d();
        v4 = &g_73e9b0;
        v5 = 0x200;
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v0);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "shake128", 8))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4357859c597eaa3f(&v0, a1, "bits", 4);
        v21 = clap_builder::parser::error::MatchesError::unwrap::h5d44f088bdacce08("bits", 4, &v0);
        if (!v21)
        {
            v17 = alloc::boxed::Box$LT$T$GT$::new::h5da6a9570b8b523b(6);
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
        v0 = &g_469928;
        v2 = 8;
        v3 = alloc::boxed::Box$LT$T$GT$::new::h8cbd87c202e90656();
        v4 = &g_73ea70;
        v5 = *(v21);
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v0);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "shake256S", 8))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4357859c597eaa3f(&v0, a1, "bits", 4);
        v22 = clap_builder::parser::error::MatchesError::unwrap::h5d44f088bdacce08("bits", 4, &v0);
        if (!v22)
        {
            v17 = alloc::boxed::Box$LT$T$GT$::new::h5da6a9570b8b523b(7);
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
        v1 = "SHAKE256stride: xidstart( ";
        v2 = 8;
        v3 = alloc::boxed::Box$LT$T$GT$::new::h2a30d9bd725b68e7();
        v4 = &g_73eaa0;
        v5 = *(v22);
        v17 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h1bc583d45d3e50be(&v10, &v0);
        if (v17)
        {
            a0->field_8 = v17;
            *((char **)&a0->padding_10[0]) = &g_73ea00;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
            return a0;
        }
    }
    v23 = v10;
    if (v23)
    {
        v24 = *((int128_t *)&v11);
        *((int128_t *)&(&a0->padding_10)[1]) = *((int128_t *)&v12);
        *((void*)&a0->field_8) = v24;
        a0->field_0 = v23;
        return a0;
    }
    v17 = alloc::boxed::Box$LT$T$GT$::new::h5da6a9570b8b523b(14);
    a0->field_8 = v17;
    *((char **)&a0->padding_10[0]) = &g_73ea00;
    a0->field_0 = 0;
    core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::hc31e744318080425(&v10);
    return a0;
}
