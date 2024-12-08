long long uu_printf::uumain::uumain::he179439d6c871b25(unsigned long long a0, unsigned long long a1)
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
    unsigned long long v41;  // rdx
    unsigned long long v42[3];  // rbx
    void* v43;  // rax
    int v44;  // xmm0
    int v45;  // ymm0
    int v46;  // ymm0
    int v47;  // xmm1
    int v48;  // ymm1
    int v49;  // ymm1
    void* v52;  // rbp
    unsigned long long v53;  // rax
    int v54;  // xmm0
    int v55;  // xmm1
    int v56;  // xmm0
    int v57;  // xmm1
    unsigned int v58;  // ecx
    char v59;  // al
    int v60;  // xmm0
    int v61;  // xmm0
    char v62;  // al
    int v63;  // xmm0
    int v64;  // xmm1
    int v65;  // xmm0
    int v66;  // xmm1
    unsigned int v67;  // ecx
    char v68;  // al
    int v69;  // xmm0

    uu_printf::uu_app::h3312da031e5ff129(&v34, a1, v41);
    clap_builder::builder::command::Command::get_matches_from::hc3109c44c7191e82(&v29, &v34, a0, a1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h842c3f2ed3b437d2(&v34, &v29, "FORMATmissing operand", 6);
    v42 = clap_builder::parser::error::MatchesError::unwrap::h501618fbf69d7674("FORMATmissing operand", 6, &v34);
    if (!v42)
    {
        ::0x46a2b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7382427f62707aff(&v19, "missing operand", 15);
        v36 = *((long long *)&v20);
        *((int128_t *)&v34) = *((int128_t *)&v19);
        v38 = 1;
        v43 = alloc::boxed::Box$LT$T$GT$::new::hc706eb3841edf6bb(&v34);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h31e96e451d643917(&v34, &v29, "ARGUMENTEL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRREQEPROTO", 8);
        clap_builder::parser::error::MatchesError::unwrap::h96b6551963dfe18b(&v19, "ARGUMENTEL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRREQEPROTO", 8, &v34);
        if (!*((long long *)&v19))
        {
            v5 = 0;
            v6 = 8;
            v7 = 0;
        }
        else
        {
            v44 = *((int128_t *)&v19);
            v46 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
            v47 = *((int128_t *)&v20);
            v49 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
            *((int128_t *)&v33) = *((int128_t *)&v22);
            *((int128_t *)&v32) = *((int128_t *)&v21);
            v31 = v47;
            v30 = v44;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h5954bd228cd8503e(&v5, &v30, v41);
        }
        v17 = 8;
        v18 = 0 * 32 + v17;
        v16 = 0;
        v15 = v42[1];
        v8 = v15;
        v14 = v42[2];
        v9 = v14;
        v52 = 0;
        while (true)
        {
            uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::h0e8f2415352c01d1(&v19, &v8);
            v53 = v19;
            if ((char)v53 == 9)
            {
                if (!((char)v52 & 1))
                    goto LABEL_46b7cf;
                if (!*((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::hee3cf773ab1d64ab(&v16, &v17)))
                {
                    ::0x46a170::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::h8846bc8a749fb794(&v5);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h48dd9578c0cd0518(&v29);
                    return 0;
                }
                goto LABEL_46b83a;
            }
            v28 = *((long long *)&v21);
            v54 = *((int128_t *)&(&v19)[1]);
            v55 = *((int128_t *)&(&v20)[1]);
            v27 = v55;
            v26 = v54;
            if ((v53 - 7 & 255) < 2)
            {
                if (!((char)v53 == 8))
                    goto LABEL_46b773;
                v61 = (int128_t)(&v26)[7];
                *((int128_t *)&v3) = (int128_t)(&v27)[7];
                v0 = v61;
                v43 = alloc::boxed::Box$LT$T$GT$::new::he16afabcd45d09f6(&v0);
                goto LABEL_46b83a;
            }
            v52 = v52 | -0x100 | 1;
LABEL_46b773:
            v39 = *((long long *)&v21);
            v56 = *((int128_t *)&(&v19)[1]);
            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
            v57 = *((int128_t *)&(&v20)[1]);
            v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
            v37 = v57;
            v35 = v56;
            v34 = v53;
            uucore::features::format::FormatItem$LT$C$GT$::write::he166d899167a799d(&v10, &v34, std::io::stdio::stdout::h077da66234850927(), &v16);
            v58 = *((int *)&v10);
            v59 = v11;
            if (v0 != 14)
            {
                v60 = *((int128_t *)&v12);
                *((int128_t *)&v3) = (int128_t)v13;
                v2 = v60;
                v0 = v58;
                v1 = v59;
                v43 = alloc::boxed::Box$LT$T$GT$::new::he16afabcd45d09f6(&v0);
                continue;
                while (true)
                {
LABEL_46b83a:
                    v8 = v15;
                    v9 = v14;
                    while (true)
                    {
                        uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::h0e8f2415352c01d1(&v19, &v8);
                        v62 = v19;
                        if (v62 == 9)
                            break;
                        v25 = *((long long *)&v21);
                        v63 = *((int128_t *)&(&v19)[1]);
                        v64 = *((int128_t *)&(&v20)[1]);
                        v24 = v64;
                        v23 = v63;
                        if (v62 == 8)
                        {
                            v3 = (long long)(&v24)[7];
                            v4 = v25;
                            *((int128_t *)&v0) = (int128_t)(&v23)[7];
                            v43 = alloc::boxed::Box$LT$T$GT$::new::he16afabcd45d09f6(&v0);
                            goto LABEL_46b944;
                        }
                        v39 = *((long long *)&v21);
                        v65 = *((int128_t *)&(&v19)[1]);
                        v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                        v66 = *((int128_t *)&(&v20)[1]);
                        v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
                        v37 = v66;
                        v35 = v65;
                        v34 = v62;
                        uucore::features::format::FormatItem$LT$C$GT$::write::he166d899167a799d(&v10, &v34, std::io::stdio::stdout::h077da66234850927(), &v16);
                        v67 = *((int *)&v10);
                        v68 = v11;
                        if (v0 != 14)
                        {
                            v69 = *((int128_t *)&v12);
                            *((int128_t *)&v3) = (int128_t)v13;
                            v2 = v69;
                            v0 = v67;
                            v1 = v68;
                            v43 = alloc::boxed::Box$LT$T$GT$::new::he16afabcd45d09f6(&v0);
LABEL_46b944:
                            goto LABEL_46b947;
                        }
                        else
                        {
                            if (v1)
                            {
LABEL_46b7cf:
                                v43 = 0;
                                goto LABEL_46b947;
                            }
                        }
                    }
                    if (!*((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::hee3cf773ab1d64ab(&v16, &v17)))
                    {
                        ::0x46a170::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::h8846bc8a749fb794(&v5);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h48dd9578c0cd0518(&v29);
                        return 0;
                    }
                }
LABEL_46b947:
                ::0x46a170::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::h8846bc8a749fb794(&v5);
                break;
            }
            else if (v1)
            {
                goto LABEL_46b7cf;
            }
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h48dd9578c0cd0518(&v29);
    return v43;
}
