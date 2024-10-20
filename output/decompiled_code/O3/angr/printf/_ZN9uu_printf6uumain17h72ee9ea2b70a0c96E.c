long long uu_printf::uumain::h72ee9ea2b70a0c96(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [sp-0x4b8], Other Possible Types: unsigned int
    char v1;  // [sp-0x4b4]
    int v2;  // [bp-0x4b3]
    int v3;  // [bp-0x4a8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x4a0]
    void* v5;  // [bp-0x490], Other Possible Types: char
    unsigned long long v6;  // [sp-0x488]
    void* v7;  // [sp-0x480]
    int v8;  // [bp-0x478], Other Possible Types: uint128_t [2]
    struct_1 *v9;  // [sp-0x470]
    int v10;  // [bp-0x468]
    unsigned long long v11;  // [sp-0x459]
    void* v12;  // [sp-0x450], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x448]
    unsigned long long v14;  // [sp-0x440]
    unsigned long long v15;  // [sp-0x438]
    unsigned long v16;  // [sp-0x430], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x428]
    char v18;  // [bp-0x420]
    char v19;  // [bp-0x41c]
    char v20;  // [bp-0x41b]
    int v21;  // [bp-0x410]
    char v22;  // [bp-0x400], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x3f8]
    char v24;  // [bp-0x3c8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v25;  // [sp-0x3c0]
    char v26;  // [bp-0x3b8]
    char v27;  // [bp-0x3a8]
    char v28;  // [bp-0x398]
    unsigned long long v29;  // [sp-0x388]
    unsigned long long v30;  // [sp-0x380]
    int v31;  // [bp-0x378], Other Possible Types: struct struct_2 **
    unsigned long long v32;  // [sp-0x370]
    int v33;  // [bp-0x368], Other Possible Types: unsigned long long
    int v34;  // [sp-0x358]
    int v35;  // [sp-0x348]
    int v36;  // [sp-0x338]
    int v37;  // [bp-0x328]
    unsigned long long v38;  // [sp-0x319]
    char v39;  // [bp-0x310]
    char v40;  // [bp-0x300]
    char v41;  // [bp-0x2f8], Other Possible Types: unsigned long
    int v42;  // [bp-0x2f7]
    unsigned long long *v43;  // [sp-0x2f0], Other Possible Types: unsigned long, unsigned long long
    struct struct_3 **v44;  // [bp-0x2e8], Other Possible Types: char, unsigned long long, unsigned long
    int v45;  // [bp-0x2e7]
    unsigned int v46;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v47;  // [sp-0x2d8], Other Possible Types: unsigned long long
    unsigned long long v49;  // r12
    unsigned long long v50[3];  // rbx
    unsigned long long *v51;  // rax
    uint128_t v52[2];  // rax
    int v53;  // xmm0
    int v54;  // ymm0
    int v55;  // ymm0
    int v56;  // xmm1
    int v57;  // ymm1
    int v58;  // ymm1
    int v61;  // xmm0
    void* v62;  // r13
    unsigned long long v64;  // rax
    int v65;  // xmm0
    int v66;  // xmm1
    int v67;  // xmm0
    int v68;  // xmm1
    unsigned int v69;  // ecx
    char v70;  // al
    int v71;  // xmm0
    int v72;  // xmm0
    void* v73;  // rax
    char v74;  // al
    int v75;  // xmm0
    int v76;  // xmm1
    int v77;  // xmm0
    int v78;  // xmm1
    unsigned int v79;  // ecx
    char v80;  // al
    int v81;  // xmm0
    int v82;  // xmm0
    int v83;  // xmm0
    unsigned int v84;  // eax
    unsigned long long v85;  // rsi
    unsigned long long v86;  // rdx
    unsigned long long v87;  // rsi
    uint128_t v88[2];  // r14
    struct_1 *v89;  // r15
    struct struct_0 **v90;  // rax

    uu_printf::uu_app::heb478900f088080c(&v41);
    v49 = &v22;
    clap_builder::builder::command::Command::get_matches_from::h2d0d4de066752b1d(&v22, &v41, a0, a1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4767f1c2c1b1121e(&v41, &v22, "FORMATSTRING", 12);
    v50 = clap_builder::parser::error::MatchesError::unwrap::h52ce1b05aa9f1781("FORMATSTRING", 12, &v41);
    if (!v50)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hb7803b40a0b95536(&v41, 15, 0);
        if (*((long long *)&v41))
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v51 = *((long long *)&v44);
        *((long long *)((char *)v51 + 7)) = 7236828795186999072;
        *(v51) = 2334956331002456429;
        v46 = 1;
        v41 = v43;
        v43 = v51;
        v44 = 15;
        v52 = __rust_alloc(32, 8);
        if (!v52)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v61 = *((int128_t *)&v41);
        v52[1] = *((int128_t *)&v44);
        *((void*)&v52[0]) = v61;
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hde5982684508aab6(&v22);
        *((uint128_t *[2])&v8[0]) = v52;
        v9 = &g_4e9c40.field_0;
        v31 = &v8[0];
        v32 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hff96b5ddd8ed804d;
        v41 = &g_410be0;
        v43 = 1;
        v47 = 0;
        v44 = &v31;
        v46 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v39, &v41);
        *((int128_t *)&v31) = *((int128_t *)&v39);
        v85 = *((long long *)&v40);
        v33 = *((long long *)&v40);
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4a50c619a681ef89(v32, v85, 1, 0))
        {
            v24 = uucore::util_name::h359eff083fe53467();
            v25 = v86;
            v22 = &v24;
            v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7741d98a75117809;
            v41 = &g_4e9ba8;
            v43 = 2;
            v47 = 0;
            v44 = v49;
            v46 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v41, v87, v86);
            v24 = &v31;
            v25 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v41 = &g_4e9bc8;
            v43 = 2;
            v47 = 0;
            v44 = &v24;
            v46 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v41, v87, v86);
        }
        if ((char)v9->field_68(v8))
        {
            v24 = uucore::execution_phrase::hded5ccd87df1fcab();
            v25 = v86;
            v22 = &v24;
            v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7741d98a75117809;
            v41 = &g_4e9be8;
            v43 = 2;
            v47 = 0;
            v44 = v49;
            v46 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v41, v87, v86);
        }
        v84 = v9->field_60(v8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h83c512494aa41555();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h96dd887c604714d0(&v31);
        v88 = v8;
        v89 = v9;
        if (v89->field_0)
            v90(v88);
        if (v89->field_8)
        {
            __rust_dealloc(v88);
            return v84;
        }
        return v84;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h35a76d30bdf9fc46(&v41, &v22, "ARGUMENT", 8);
    clap_builder::parser::error::MatchesError::unwrap::he60fb3d762135ef6(&v24, "ARGUMENT", 8, &v41);
    if (!v24)
    {
        v5 = 0;
        v6 = 8;
        v7 = 0;
    }
    else
    {
        v53 = *((int128_t *)&v24);
        v55 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
        v56 = *((int128_t *)&v26);
        v58 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
        *((int128_t *)&v35) = *((int128_t *)&v28);
        *((int128_t *)&v34) = *((int128_t *)&v27);
        v33 = v56;
        v31 = v53;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hf278f2bfb8b2964c(&v5, &v31);
    }
    v14 = 8;
    v15 = 0 * 32 + v14;
    v12 = 0;
    v30 = v50[1];
    v16 = v30;
    v29 = v50[2];
    v17 = v29;
    v62 = 0;
    while (true)
    {
        uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::he837a155ca70426f(&v24, &v16);
        v64 = v24;
        if ((char)v64 == 9)
            break;
        v38 = *((long long *)&v27);
        v65 = *((int128_t *)&(&v24)[1]);
        v66 = *((int128_t *)&(&v26)[1]);
        v37 = v66;
        v36 = v65;
        if ((v64 - 7 & 255) >= 2)
        {
            v62 = v62 | -0x100 | 1;
            goto LABEL_43fbc3;
        }
        if ((char)v64 == 8)
        {
            v72 = (int128_t)(&v36)[7];
            *((int128_t *)&v3) = (int128_t)(&v37)[7];
            v0 = v72;
            v52 = __rust_alloc(32, 8);
            if (!v52)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            goto LABEL_43fcc1;
        }
LABEL_43fbc3:
        v47 = *((long long *)&v27);
        v67 = *((int128_t *)&(&v24)[1]);
        v55 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
        v68 = *((int128_t *)&(&v26)[1]);
        v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
        v45 = v68;
        v42 = v67;
        v41 = v64;
        uucore::features::format::FormatItem$LT$C$GT$::write::h6979f7b6eb74738b(&v18, &v41, std::io::stdio::stdout::h077da66234850927(), &v12);
        v69 = *((int *)&v18);
        v70 = v19;
        if (v0 != 14)
        {
            v71 = *((int128_t *)&v20);
            *((int128_t *)&v3) = (int128_t)v21;
            v2 = v71;
            v0 = v69;
            v1 = v70;
            v52 = __rust_alloc(32, 8);
            v49 = &v22;
            if (!v52)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            continue;
            goto LABEL_43fcc1;
        }
        else if (v1)
        {
            goto LABEL_43fc24;
        }
    }
    if (!((char)v62 & 1))
        v52 = 0;
    do
    {
LABEL_43fcc1:
        if (!v12)
        {
            v73 = v14;
            if (v73 == v15)
                v73 = 0;
            else
                v14 = v73 + 32;
            v12 = 1;
            v13 = v73;
            if (!v13)
            {
LABEL_44018f:
                ::0x43f4e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::h527563f2c17779c2(&v5);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hde5982684508aab6(&v22);
            }
        }
        else if (!v13)
        {
            goto LABEL_44018f;
        }
    } while ((v16 = v30, v17 = v29, uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::he837a155ca70426f(&v24, &v16), v74 = v24, v74 == 9));
    v11 = *((long long *)&v27);
    v75 = *((int128_t *)&(&v24)[1]);
    v76 = *((int128_t *)&(&v26)[1]);
    v10 = v76;
    v8 = v75;
    if (v74 == 8)
    {
        v3 = (long long)(&v10)[7];
        v4 = v11;
        *((int128_t *)&v0) = (int128_t)(&v8)[7];
        v52 = __rust_alloc(32, 8);
        if (!v52)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v82 = (int128_t)v0;
        v52[1] = *((int128_t *)&v3);
        *((void*)&v52[0]) = v82;
    }
    else
    {
        v47 = *((long long *)&v27);
        v77 = *((int128_t *)&(&v24)[1]);
        v55 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
        v78 = *((int128_t *)&(&v26)[1]);
        v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
        v45 = v78;
        v42 = v77;
        v41 = v74;
        uucore::features::format::FormatItem$LT$C$GT$::write::h6979f7b6eb74738b(&v18, &v41, std::io::stdio::stdout::h077da66234850927(), &v12);
        v79 = *((int *)&v18);
        v80 = v19;
        if (v0 != 14)
        {
            v81 = *((int128_t *)&v20);
            *((int128_t *)&v3) = (int128_t)v21;
            v2 = v81;
            v0 = v79;
            v1 = v80;
            v52 = __rust_alloc(32, 8);
            v49 = &v22;
            if (!v52)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v83 = *((int128_t *)&v0);
            v52[1] = (int128_t)(&v2)[11];
            *((void*)&v52[0]) = v83;
        }
        else if (v1)
        {
LABEL_43fc24:
            v49 = &v22;
            v52 = 0;
        }
    }
}
