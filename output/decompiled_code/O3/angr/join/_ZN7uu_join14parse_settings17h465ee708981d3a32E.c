long long uu_join::parse_settings::h465ee708981d3a32(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [bp-0x178], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long long v1;  // [sp-0x170], Other Possible Types: unsigned long
    char v2;  // [bp-0x16e]
    unsigned long v3;  // [sp-0x168], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x160]
    unsigned long long v5;  // [sp-0x158]
    void* v6;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long v7;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x140]
    unsigned long v9;  // [sp-0x138], Other Possible Types: unsigned long long
    int v10;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x128]
    char v12;  // [sp-0x120]
    char v13;  // [sp-0x11f]
    char v14;  // [sp-0x11e]
    char v15;  // [bp-0x11d], Other Possible Types: unsigned int
    char v16;  // [sp-0x11c]
    char v17;  // [sp-0x11b]
    char v18;  // [sp-0x11a]
    char v19;  // [sp-0x119]
    void* v20;  // [bp-0x118], Other Possible Types: int, char, unsigned long long, unsigned long
    char v21;  // [bp-0x110], Other Possible Types: unsigned int, unsigned long
    int v22;  // [bp-0x108], Other Possible Types: char, unsigned long
    int v23;  // [sp-0xf8]
    int v24;  // [sp-0xe8]
    unsigned long long v25;  // [sp-0xd8]
    unsigned short v26;  // [sp-0xd0]
    void* v27;  // [sp-0xc8]
    unsigned long long v28;  // [sp-0xc0]
    void* v29;  // [sp-0xb8]
    unsigned long long v30;  // [sp-0xb0]
    unsigned long long v31;  // [sp-0xa8]
    unsigned long long v32;  // [sp-0xa0]
    unsigned long long v33;  // [sp-0x98]
    unsigned long v34;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v35;  // [sp-0x88]
    char v36;  // [bp-0x80]
    char v37;  // [bp-0x78]
    char v38;  // [bp-0x70]
    char v39;  // [bp-0x68]
    char v40;  // [bp-0x58]
    char v41;  // [bp-0x48]
    char v42;  // [bp-0x38]
    unsigned long long v44;  // r15
    unsigned long long v45;  // r12
    unsigned long long v46;  // rax
    char v47;  // al
    unsigned int v48;  // ecx
    unsigned long long v49;  // rcx
    unsigned long long v50;  // rax
    struct_1 *v51;  // rax
    unsigned long long v52;  // rbp
    unsigned long long v53;  // r15
    unsigned long long v54;  // r12
    unsigned long long v55[3];  // rax
    unsigned long long v56;  // r15
    unsigned long long v57;  // r12
    int v58;  // xmm1
    int v59;  // xmm2
    unsigned long long v60;  // rsi
    unsigned long v61;  // rdx
    unsigned long v62;  // rax
    unsigned long long v65[3];  // rax
    int v67;  // xmm0
    int v68;  // xmm1
    int v69;  // xmm2

    uu_join::get_and_parse_field_number::hc6b46fd6f7691137(&v0, a1, "j");
    if (!v0)
    {
        v44 = v1;
        v45 = v3;
        uu_join::get_and_parse_field_number::hc6b46fd6f7691137(&v0, a1, "1");
        if (!v0)
        {
            uu_join::get_and_parse_field_number::hc6b46fd6f7691137(&v0, a1, "2");
            if (v0)
            {
                *((int128_t *)&a0->field_8) = *((int128_t *)&v1);
            }
            else
            {
                v32 = v3;
                v33 = v1;
                uu_join::parse_print_settings::h5834fb8087a0dc88(&v0, a1);
                v46 = v0;
                if (v46)
                {
                    a0->field_8 = v46;
                    *((unsigned long *)&a0->padding_10[0]) = v1;
                }
                else
                {
                    v31 = v3;
                    v30 = v1;
                    v47 = v2;
                    v48 = (unsigned short)v1;
                    *((int128_t *)&v10) = 0;
                    v15 = 0;
                    v19 = 10;
                    v7 = 9223372036854775811;
                    v0 = 0;
                    v1 = 8;
                    *((int128_t *)&v3) = 0;
                    v5 = 1;
                    v6 = 0;
                    v14 = (char)v48 & 1;
                    v12 = (char)(v48 >> 8) & 1;
                    v13 = v47 & 1;
                    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "i", 1);
                    uu_join::get_field_number::hb005de35c76fcfae(&v20, v44, v45, v33, v32);
                    v49 = v20;
                    v50 = *((long long *)&v21);
                    if (!v49)
                    {
                        v10 = v50;
                        uu_join::get_field_number::hb005de35c76fcfae(&v20, v44, v45, v30, v31);
                        v49 = v20;
                        v50 = *((long long *)&v21);
                        if (!v49)
                        {
                            v11 = v50;
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hfd34d2945ebc7832(&v20, a1, "t", 1);
                            v51 = clap_builder::parser::error::MatchesError::unwrap::hee69b88ee2ef8d17("t", 1, &v20);
                            if (v51)
                            {
                                uu_join::parse_separator::h21f29c7b6734d4a1(&v20, v51->field_8, v51->field_10);
                                v52 = v20;
                                v53 = *((long long *)&v21);
                                v54 = *((long long *)&v22);
                                if (v52 == 9223372036854775812)
                                {
                                    a0->field_8 = v53;
                                    *((unsigned long long *)&a0->padding_10[0]) = v54;
                                    a0->field_0 = 0x8000000000000000;
                                    core::ptr::drop_in_place$LT$uu_join..Settings$GT$::h9e09df7f3bbef332(&v0);
                                    return a0;
                                }
                                core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h4103bcb7f77cc38e(&v7);
                                v7 = v52;
                                v8 = v53;
                                v9 = v54;
                            }
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1915dae6bb9020a5(&v20, a1, "o", 1);
                            v55 = clap_builder::parser::error::MatchesError::unwrap::h41070b8ae1e28aad("o", 1, &v20);
                            if (v55)
                            {
                                v56 = v55[1];
                                v57 = v55[2];
                                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he3c4ae2851c65488(v56, v57, "auto", 4))
                                {
                                    v16 = 1;
                                }
                                else
                                {
                                    v27 = 0;
                                    v28 = 8;
                                    v29 = 0;
                                    v20 = 188978561056;
                                    v21 = 9;
                                    _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h5a7dfbe84de81cca(&v39, &v20, v56, v57);
                                    v20 = 0;
                                    v21 = v57;
                                    v58 = *((int128_t *)&v40);
                                    v59 = *((int128_t *)&v41);
                                    *((int128_t *)&v22) = *((int128_t *)&v39);
                                    v23 = v58;
                                    v24 = v59;
                                    v25 = *((long long *)&v42);
                                    v26 = 1;
                                    while (true)
                                    {
                                        v62 = core::str::iter::SplitInternal$LT$P$GT$::next::h14937ebe1974c5ed(&v20, v60, v61);
                                        if (!v62)
                                            break;
                                        uu_join::Spec::parse::h60408c57d2f8b4bc(&v36, v62, v61);
                                        if (*((long long *)&v36))
                                        {
                                            a0->field_8 = v34;
                                            *((unsigned long long *)&a0->padding_10[0]) = v35;
                                            a0->field_0 = 0x8000000000000000;
                                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hd612daa069ed93d2(&v27);
                                            core::ptr::drop_in_place$LT$uu_join..Settings$GT$::h9e09df7f3bbef332(&v0);
                                            return a0;
                                        }
                                        v34 = *((long long *)&v37);
                                        v35 = *((long long *)&v38);
                                        alloc::vec::Vec$LT$T$C$A$GT$::push::hdc928ca777a22913(&v27, &v34, v61);
                                    }
                                    v22 = v29;
                                    *((int128_t *)&v20) = *((int128_t *)&v27);
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hd612daa069ed93d2(&v0);
                                    v3 = v22;
                                    *((int128_t *)&v0) = (int128_t)v20;
                                }
                            }
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1915dae6bb9020a5(&v20, a1, "e", 1);
                            v65 = clap_builder::parser::error::MatchesError::unwrap::h41070b8ae1e28aad("e", 1, &v20);
                            if (v65)
                            {
                                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8d41f9f90a8440d9(&v20, v65[1], v65[2]);
                                ::0x4c1c30::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hca11d5be712be005(&v3);
                                v6 = v22;
                                *((int128_t *)&v4) = (int128_t)v20;
                            }
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "nocheck-order", 13))
                                v18 = 1;
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "check-order", 11))
                                v18 = 2;
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "header", 6))
                                v17 = 1;
                            *((int *)&v19) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "z", 1) ? 0 : 10);
                            a0->field_40 = *((int128_t *)&v9);
                            v67 = *((int128_t *)&v0);
                            v68 = *((int128_t *)&v3);
                            v69 = *((int128_t *)&(&v4)[1]);
                            a0->field_30 = *((int128_t *)&v7);
                            *((void*)&a0->field_20) = v69;
                            *((void*)&a0->padding_10[0]) = v68;
                            *((void*)&a0->field_0) = v67;
                            a0->field_50 = v11;
                            a0->field_58 = *((int *)&v12);
                            a0->field_5c = *((short *)((char *)&v15 + 1));
                            a0->field_5e = v18;
                            a0->field_5f = v19;
                            return a0;
                        }
                    }
                    a0->field_8 = v49;
                    *((unsigned long long *)&a0->padding_10[0]) = v50;
                    a0->field_0 = 0x8000000000000000;
                    core::ptr::drop_in_place$LT$uu_join..Settings$GT$::h9e09df7f3bbef332(&v0);
                    return a0;
                }
            }
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
    }
    *((int128_t *)&a0->field_8) = *((int128_t *)&v1);
    a0->field_0 = 0x8000000000000000;
    return a0;
}
