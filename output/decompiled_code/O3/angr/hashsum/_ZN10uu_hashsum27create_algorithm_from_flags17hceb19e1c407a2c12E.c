long long uu_hashsum::create_algorithm_from_flags::hceb19e1c407a2c12(struct_0 *a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4)
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
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "md5md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 3))
    {
        uucore::features::checksum::detect_algo::hd92a9c93b700a840(&v0, "md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 6, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "sha1callz", 4))
    {
        uucore::features::checksum::detect_algo::hd92a9c93b700a840(&v0, "sha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 7, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "sha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 6))
    {
        uucore::features::checksum::detect_algo::hd92a9c93b700a840(&v0, "sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 9, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "sha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 6))
    {
        uucore::features::checksum::detect_algo::hd92a9c93b700a840(&v0, "sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 9, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "sha384sha384sumsha512sha512sumb2sumb3sum", 6))
    {
        uucore::features::checksum::detect_algo::hd92a9c93b700a840(&v0, "sha384sumsha512sha512sumb2sumb3sum", 9, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "sha512sha512sumb2sumb3sum", 6))
    {
        uucore::features::checksum::detect_algo::hd92a9c93b700a840(&v0, "sha512sumb2sumb3sum", 9, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "b2sumb3sum", 5))
    {
        uucore::features::checksum::detect_algo::hd92a9c93b700a840(&v0, "b2sumb3sum", 5, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "b3sum", 5))
    {
        uucore::features::checksum::detect_algo::hd92a9c93b700a840(&v0, "b3sum", 5, 0, v13);
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "sha3[", 4))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haf3101d0720c07a0(&v0, a1, "bits", 4);
        v17 = clap_builder::parser::error::MatchesError::unwrap::hb21c41f3353ea83e("bits", 4, &v0);
        if (v17)
            v19 = 1;
        else
            v19 = 0;
        uucore::features::checksum::create_sha3::he99242b3384a45c1(&v0, v19, *(v17));
        v14 = v1;
        v15 = v2;
        if (!v5)
        {
            a0->field_8 = v14;
            *((unsigned long long *)&a0->padding_10[0]) = v15;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v5 = v0;
        v6 = v14;
        v7 = v15;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v5);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "sha3-224", 8))
    {
        v0 = "SHA3-224SHA3-256";
        v1 = 8;
        v2 = alloc::boxed::Box$LT$T$GT$::new::h3168efbc1f8994e8();
        v3 = &g_73f890;
        v4 = 224;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v0);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "sha3-256shake128", 8))
    {
        v0 = "SHA3-256";
        v1 = 8;
        v2 = alloc::boxed::Box$LT$T$GT$::new::hb48c155f3d7ccd43();
        v3 = &g_73f8c0;
        v4 = 0x100;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v0);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "sha3-384SHA3_224", 8))
    {
        v0 = &g_469200;
        v1 = 8;
        v2 = alloc::boxed::Box$LT$T$GT$::new::h704a6aa4165cd79a();
        v3 = &g_73f8f0;
        v4 = 384;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v0);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, &g_4694a0, 8))
    {
        v0 = "SHA3-512shake256S";
        v1 = 8;
        v2 = alloc::boxed::Box$LT$T$GT$::new::h00a79a37c232a393();
        v3 = &g_73f920;
        v4 = 0x200;
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v0);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "shake128", 8))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haf3101d0720c07a0(&v0, a1, "bits", 4);
        v20 = clap_builder::parser::error::MatchesError::unwrap::hb21c41f3353ea83e("bits", 4, &v0);
        if (!v20)
        {
            v16 = alloc::boxed::Box$LT$T$GT$::new::h9a06c5d7c2b05828(6);
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
        v0 = &g_469aa0;
        v1 = 8;
        v2 = alloc::boxed::Box$LT$T$GT$::new::h1d933fa0ff7db8e3();
        v3 = &g_73f9e0;
        v4 = *(v20);
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v0);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "shake256S", 8))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haf3101d0720c07a0(&v0, a1, "bits", 4);
        v21 = clap_builder::parser::error::MatchesError::unwrap::hb21c41f3353ea83e("bits", 4, &v0);
        if (!v21)
        {
            v16 = alloc::boxed::Box$LT$T$GT$::new::h9a06c5d7c2b05828(7);
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
            return a0;
        }
        v0 = "SHAKE256stride: xidstart( ";
        v1 = 8;
        v2 = alloc::boxed::Box$LT$T$GT$::new::h05aa164d0e047241();
        v3 = &g_73fa10;
        v4 = *(v21);
        v16 = uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6f2e04dc40b87467(&v9, &v0);
        if (v16)
        {
            a0->field_8 = v16;
            *((char **)&a0->padding_10[0]) = &g_73f970;
            a0->field_0 = 0;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
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
    v16 = alloc::boxed::Box$LT$T$GT$::new::h9a06c5d7c2b05828(14);
    a0->field_8 = v16;
    *((char **)&a0->padding_10[0]) = &g_73f970;
    a0->field_0 = 0;
    core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..checksum..HashAlgorithm$GT$$GT$::h4f6a9054e8480971(&v9);
    return a0;
}
