long long uu_printf::uumain::uumain::h9016f06e4b183cbb(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [sp-0x4a8], Other Possible Types: unsigned int
    char v1;  // [sp-0x4a4]
    int v2;  // [bp-0x4a3]
    int v3;  // [bp-0x498], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x490]
    void* v5;  // [bp-0x480], Other Possible Types: char
    unsigned long long v6;  // [sp-0x478]
    void* v7;  // [sp-0x470]
    unsigned long v8;  // [sp-0x468], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x460]
    char v10;  // [bp-0x458]
    char v11;  // [bp-0x454]
    char v12;  // [bp-0x453]
    int v13;  // [bp-0x448]
    unsigned long long v14;  // [sp-0x438]
    unsigned long long v15;  // [sp-0x430]
    void* v16;  // [sp-0x428]
    unsigned long v17;  // [sp-0x418], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x410]
    char v19;  // [bp-0x408]
    char v20;  // [bp-0x3f8]
    char v21;  // [bp-0x3e8]
    char v22;  // [bp-0x3d8]
    int v23;  // [sp-0x3c8]
    int v24;  // [bp-0x3b8]
    unsigned long long v25;  // [sp-0x3a9]
    int v26;  // [sp-0x398]
    int v27;  // [bp-0x388]
    unsigned long long v28;  // [sp-0x379]
    char v29;  // [bp-0x370]
    int v30;  // [sp-0x338]
    int v31;  // [sp-0x328]
    int v32;  // [sp-0x318]
    int v33;  // [sp-0x308]
    int v34;  // [bp-0x2f8], Other Possible Types: char
    int v35;  // [bp-0x2f7]
    unsigned long long v36;  // [bp-0x2e8]
    int v37;  // [bp-0x2e7]
    unsigned int v38;  // [sp-0x2e0]
    unsigned long long v39;  // [sp-0x2d8]
    unsigned long long v41;  // r8
    unsigned long long v42;  // r9
    unsigned long long v43[3];  // rbx
    void* v44;  // rax
    int v45;  // xmm0
    int v46;  // ymm0
    int v47;  // ymm0
    int v48;  // xmm1
    int v49;  // ymm1
    int v50;  // ymm1
    unsigned long long v51;  // rdx
    unsigned long long v54;  // rbp
    unsigned long long v55;  // rax
    int v56;  // xmm0
    int v57;  // xmm1
    int v58;  // xmm0
    int v59;  // xmm1
    unsigned int v60;  // ecx
    char v61;  // al
    int v62;  // xmm0
    int v63;  // xmm0
    char v64;  // al
    int v65;  // xmm0
    int v66;  // xmm1
    int v67;  // xmm0
    int v68;  // xmm1
    unsigned int v69;  // ecx
    char v70;  // al
    int v71;  // xmm0

    uu_printf::uu_app::hb517307267528c04(&v34, a1, a2);
    clap_builder::builder::command::Command::get_matches_from::hc523ca07f4ae8a1e(&v29, &v34, a0, a1, v41, v42);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h64277d1efa4af222(&v34, &v29, "FORMATmissing operand", 6);
    v43 = clap_builder::parser::error::MatchesError::unwrap::hcd264dadb36566b8("FORMATmissing operand", 6, &v34);
    if (!v43)
    {
        ::0x46b740::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h161932b779d78935(&v19, "missing operand", 15);
        v36 = *((long long *)&v20);
        *((int128_t *)&v34) = *((int128_t *)&v19);
        v38 = 1;
        v44 = alloc::boxed::Box$LT$T$GT$::new::ha4d9c65e78341d16(&v34);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h88f0b841722b5820(&v34, &v29, "ARGUMENT", 8);
        clap_builder::parser::error::MatchesError::unwrap::h53b6517dce077e4e(&v19, "ARGUMENT", 8, &v34);
        if (!*((long long *)&v19))
        {
            v5 = 0;
            v6 = 8;
            v7 = 0;
        }
        else
        {
            v45 = *((int128_t *)&v19);
            v47 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
            v48 = *((int128_t *)&v20);
            v50 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
            *((int128_t *)&v33) = *((int128_t *)&v22);
            *((int128_t *)&v32) = *((int128_t *)&v21);
            v31 = v48;
            v30 = v45;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h828b818258ab71c4(&v5, &v30, v51);
        }
        v17 = 8;
        v18 = 0 * 32 + v17;
        v16 = 0;
        v15 = v43[1];
        v8 = v15;
        v14 = v43[2];
        v9 = v14;
        v54 = 0;
        while (true)
        {
            uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::hfb4855f1f81f1823(&v19, &v8);
            v55 = v19;
            if ((char)v55 == 9)
            {
                if (!((char)v54 & 1))
                    goto LABEL_46cc5f;
                if (!*((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::h93334ed55f16e7bb(&v16, &v17)))
                {
                    ::0x46b600::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::hbed4fbba92283cef(&v5);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h271a8476cc6e7a4e(&v29);
                    return 0;
                }
                goto LABEL_46ccca;
            }
            v28 = *((long long *)&v21);
            v56 = *((int128_t *)&(&v19)[1]);
            v57 = *((int128_t *)&(&v20)[1]);
            v27 = v57;
            v26 = v56;
            if ((v55 - 7 & 255) >= 2)
            {
                v54 = v54 | -0x100 | 1;
                goto LABEL_46cc03;
            }
            if ((char)v55 == 8)
            {
                v63 = (int128_t)(&v26)[7];
                *((int128_t *)&v3) = (int128_t)(&v27)[7];
                v0 = v63;
                v44 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&v0);
                goto LABEL_46ccca;
            }
LABEL_46cc03:
            v39 = *((long long *)&v21);
            v58 = *((int128_t *)&(&v19)[1]);
            v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
            v59 = *((int128_t *)&(&v20)[1]);
            v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
            v37 = v59;
            v35 = v58;
            v34 = v55;
            uucore::features::format::FormatItem$LT$C$GT$::write::h356a71bb3f6c3126(&v10, &v34, std::io::stdio::stdout::h077da66234850927(), &v16);
            v60 = *((int *)&v10);
            v61 = v11;
            if (v0 != 14)
            {
                v62 = *((int128_t *)&v12);
                *((int128_t *)&v3) = (int128_t)v13;
                v2 = v62;
                v0 = v60;
                v1 = v61;
                v44 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&v0);
                continue;
                while (true)
                {
LABEL_46ccca:
                    v8 = v15;
                    v9 = v14;
                    while (true)
                    {
                        uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::hfb4855f1f81f1823(&v19, &v8);
                        v64 = v19;
                        if (v64 == 9)
                            break;
                        v25 = *((long long *)&v21);
                        v65 = *((int128_t *)&(&v19)[1]);
                        v66 = *((int128_t *)&(&v20)[1]);
                        v24 = v66;
                        v23 = v65;
                        if (v64 == 8)
                        {
                            v3 = (long long)(&v24)[7];
                            v4 = v25;
                            *((int128_t *)&v0) = (int128_t)(&v23)[7];
                            v44 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&v0);
                            goto LABEL_46cdd4;
                        }
                        v39 = *((long long *)&v21);
                        v67 = *((int128_t *)&(&v19)[1]);
                        v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
                        v68 = *((int128_t *)&(&v20)[1]);
                        v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
                        v37 = v68;
                        v35 = v67;
                        v34 = v64;
                        uucore::features::format::FormatItem$LT$C$GT$::write::h356a71bb3f6c3126(&v10, &v34, std::io::stdio::stdout::h077da66234850927(), &v16);
                        v69 = *((int *)&v10);
                        v70 = v11;
                        if (v0 != 14)
                        {
                            v71 = *((int128_t *)&v12);
                            *((int128_t *)&v3) = (int128_t)v13;
                            v2 = v71;
                            v0 = v69;
                            v1 = v70;
                            v44 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&v0);
LABEL_46cdd4:
                            goto LABEL_46cdd7;
                        }
                        else
                        {
                            if (v1)
                            {
LABEL_46cc5f:
                                v44 = 0;
                                goto LABEL_46cdd7;
                            }
                        }
                    }
                    if (!*((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::h93334ed55f16e7bb(&v16, &v17)))
                    {
                        ::0x46b600::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::hbed4fbba92283cef(&v5);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h271a8476cc6e7a4e(&v29);
                        return 0;
                    }
                }
LABEL_46cdd7:
                ::0x46b600::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::hbed4fbba92283cef(&v5);
                break;
            }
            else if (v1)
            {
                goto LABEL_46cc5f;
            }
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h271a8476cc6e7a4e(&v29);
    return v44;
}
