long long uu_printf::uumain::uumain::h9016f06e4b183cbb(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [sp-0x4a8], Other Possible Types: unsigned int
    char v1;  // [sp-0x4a4]
    int v2;  // [bp-0x4a3]
    int v3;  // [bp-0x498], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x490]
    void* v5;  // [bp-0x480], Other Possible Types: char
    unsigned long v6;  // [sp-0x478], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x470], Other Possible Types: unsigned long
    unsigned long v8;  // [sp-0x468]
    unsigned long long v9;  // [sp-0x460]
    char v10;  // [bp-0x458]
    char v11;  // [bp-0x454]
    char v12;  // [bp-0x453]
    int v13;  // [bp-0x448]
    unsigned long long v14;  // [sp-0x438]
    unsigned long long v15;  // [sp-0x430]
    void* v16;  // [sp-0x428]
    unsigned long v17;  // [sp-0x418]
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
    unsigned long long v41[3];  // rbx
    void* v42;  // rbx
    int v43;  // xmm0
    int v44;  // ymm0
    int v45;  // ymm0
    int v46;  // xmm1
    int v47;  // ymm1
    int v48;  // ymm1
    unsigned long long v49;  // rax
    void* v50;  // rcx
    unsigned long long v51;  // rbp
    unsigned long long v52;  // rax
    int v53;  // xmm0
    int v54;  // xmm1
    int v55;  // xmm0
    int v56;  // xmm1
    unsigned int v57;  // ecx
    char v58;  // al
    int v59;  // xmm0
    unsigned long long v60;  // rax
    int v61;  // xmm0
    char v62;  // al
    int v63;  // xmm0
    int v64;  // xmm1
    int v65;  // xmm0
    int v66;  // xmm1
    unsigned int v67;  // ecx
    char v68;  // al
    int v69;  // xmm0

    uu_printf::uu_app::hb517307267528c04(&v34);
    clap_builder::builder::command::Command::get_matches_from::hc523ca07f4ae8a1e(&v29, &v34, a0, a1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h64277d1efa4af222(&v34, &v29, "FORMATmissing operand", 6);
    v41 = clap_builder::parser::error::MatchesError::unwrap::hcd264dadb36566b8("FORMATmissing operand", 6, &v34);
    if (!v41)
    {
        ::0x46b740::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h161932b779d78935(&v19, "missing operand", 15);
        v36 = *((long long *)&v20);
        *((int128_t *)&v34) = *((int128_t *)&v19);
        v38 = 1;
        v42 = alloc::boxed::Box$LT$T$GT$::new::ha4d9c65e78341d16(&v34);
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
            v49 = 8;
            v50 = 0;
        }
        else
        {
            v43 = *((int128_t *)&v19);
            v45 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
            v46 = *((int128_t *)&v20);
            v48 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
            *((int128_t *)&v33) = *((int128_t *)&v22);
            *((int128_t *)&v32) = *((int128_t *)&v21);
            v31 = v46;
            v30 = v43;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h828b818258ab71c4(&v5, &v30);
            v49 = v6;
            v50 = v7;
        }
        v17 = v49;
        v18 = v50 * 32 + v49;
        v16 = 0;
        v15 = v41[1];
        v8 = v15;
        v14 = v41[2];
        v9 = v14;
        v51 = 0;
        while (true)
        {
            uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::hfb4855f1f81f1823(&v19, &v8);
            v52 = v19;
            if ((char)v52 == 9)
            {
                if (!((char)v51 & 1))
                    goto LABEL_46cc5f;
                if (!*((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::h93334ed55f16e7bb(&v16, &v17)))
                    goto LABEL_46cd98;
                break;
            }
            else
            {
                v28 = *((long long *)&v21);
                v53 = *((int128_t *)&(&v19)[1]);
                v54 = *((int128_t *)&(&v20)[1]);
                v27 = v54;
                v26 = v53;
                if ((v52 - 7 & 255) >= 2)
                {
                    v51 = v51 & 0xffffffffffffff00 | 1;
                }
                else if ((char)v52 == 8)
                {
                    v61 = (int128_t)(&v26)[7];
                    *((int128_t *)&v3) = (int128_t)(&v27)[7];
                    v0 = v61;
                    v60 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&v0);
                    goto LABEL_46cdd4;
                }
                v39 = *((long long *)&v21);
                v55 = *((int128_t *)&(&v19)[1]);
                v45 = (v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
                v56 = *((int128_t *)&(&v20)[1]);
                v48 = (v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
                v37 = v56;
                v35 = v55;
                v34 = v52;
                uucore::features::format::FormatItem$LT$C$GT$::write::h356a71bb3f6c3126(&v10, &v34, std::io::stdio::stdout::h077da66234850927(), &v16);
                v57 = *((int *)&v10);
                v58 = v11;
                if (v0 != 14)
                {
                    v59 = *((int128_t *)&v12);
                    *((int128_t *)&v3) = (int128_t)v13;
                    v2 = v59;
                    v0 = v57;
                    v1 = v58;
                    v60 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&v0);
                    goto LABEL_46cdd4;
                }
                else if (v1)
                {
                    goto LABEL_46cc5f;
                }
            }
        }
        while (true)
        {
            v8 = v15;
            v9 = v14;
            while (true)
            {
                uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::hfb4855f1f81f1823(&v19, &v8);
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
                    v60 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&v0);
                    goto LABEL_46cdd4;
                }
                v39 = *((long long *)&v21);
                v65 = *((int128_t *)&(&v19)[1]);
                v45 = (v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                v66 = *((int128_t *)&(&v20)[1]);
                v48 = (v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
                v37 = v66;
                v35 = v65;
                v34 = v62;
                uucore::features::format::FormatItem$LT$C$GT$::write::h356a71bb3f6c3126(&v10, &v34, std::io::stdio::stdout::h077da66234850927(), &v16);
                v67 = *((int *)&v10);
                v68 = v11;
                if (v0 != 14)
                {
                    v69 = *((int128_t *)&v12);
                    *((int128_t *)&v3) = (int128_t)v13;
                    v2 = v69;
                    v0 = v67;
                    v1 = v68;
                    v60 = alloc::boxed::Box$LT$T$GT$::new::hb8b287ff2a6d6842(&v0);
LABEL_46cdd4:
                    v42 = v60;
                    goto LABEL_46cdd7;
                }
                else if (v1)
                {
LABEL_46cc5f:
                    v42 = 0;
                    goto LABEL_46cdd7;
                }
            }
            if (!*((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::h93334ed55f16e7bb(&v16, &v17)))
            {
LABEL_46cd98:
                ::0x46b600::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::hbed4fbba92283cef(&v5);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h271a8476cc6e7a4e(&v29);
                return 0;
            }
        }
LABEL_46cdd7:
        ::0x46b600::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::hbed4fbba92283cef(&v5);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h271a8476cc6e7a4e(&v29);
    return v42;
}
