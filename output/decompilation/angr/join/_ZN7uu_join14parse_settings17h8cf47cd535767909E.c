long long uu_join::parse_settings::h8cf47cd535767909(struct_1 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x178], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x178]
    unsigned long v2;  // [sp-0x170]
    char v3;  // [bp-0x16e]
    unsigned long v4;  // [sp-0x168]
    unsigned long long v5;  // [bp-0x168]
    void* v6;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long v7;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x140]
    unsigned long v9;  // [sp-0x138]
    int v10;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x128]
    char v12;  // [sp-0x120]
    char v13;  // [sp-0x11f]
    char v14;  // [sp-0x11e]
    char v15;  // [bp-0x11d]
    char v16;  // [bp-0x11d], Other Possible Types: unsigned int
    char v17;  // [sp-0x11c]
    char v18;  // [sp-0x11a]
    char v19;  // [sp-0x119]
    int v20;  // [bp-0x118], Other Possible Types: char
    void* v21;  // [sp-0x118], Other Possible Types: unsigned long long, unsigned long
    unsigned int v22;  // [bp-0x110], Other Possible Types: unsigned long
    char v23;  // [bp-0x108], Other Possible Types: unsigned long
    int v24;  // [bp-0x108]
    int v25;  // [sp-0xf8]
    int v26;  // [sp-0xe8]
    unsigned long long v27;  // [sp-0xd8]
    unsigned short v28;  // [sp-0xd0]
    void* v29;  // [sp-0xc8]
    unsigned long long v30;  // [sp-0xc0]
    void* v31;  // [sp-0xb8]
    unsigned long long v32;  // [sp-0xb0]
    unsigned long long v33;  // [sp-0xa8]
    unsigned long long v34;  // [sp-0xa0]
    unsigned long long v35;  // [sp-0x98]
    unsigned long v36;  // [sp-0x90]
    unsigned long long v37;  // [sp-0x88]
    char v38;  // [bp-0x80]
    char v39;  // [bp-0x78]
    char v40;  // [bp-0x70]
    char v41;  // [bp-0x68]
    char v42;  // [bp-0x58]
    char v43;  // [bp-0x48]
    char v44;  // [bp-0x38]
    unsigned long long v46;  // r15
    unsigned long long v47;  // r12
    unsigned long long v48;  // rax
    unsigned int v49;  // ecx
    unsigned long long v50;  // rcx
    unsigned long long v51;  // rax
    struct_0 *v52;  // rax
    unsigned long long v53;  // rbp
    unsigned long long v54;  // r15
    unsigned long long v55;  // r12
    unsigned long long v56[3];  // rax
    unsigned long long v57;  // r15
    unsigned long long v58;  // r12
    int v59;  // xmm1
    int v60;  // xmm2
    unsigned long long v61;  // rax
    unsigned long long v62;  // rdx
    unsigned long long v65[3];  // rax
    int v67;  // xmm0
    int v68;  // xmm1
    int v69;  // xmm2

    uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(&v0, a1, "j");
    if (!v0)
    {
        v46 = v2;
        v47 = v4;
        uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(&v0, a1, "1");
        if (!v0)
        {
            uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(&v0, a1, "2");
            if (v0)
            {
                *((int128_t *)&a0->field_8) = *((int128_t *)&v2);
            }
            else
            {
                v34 = v4;
                v35 = v2;
                uu_join::parse_print_settings::h7df2ac24ec40344e(&v0, a1);
                v48 = v0;
                if (v48)
                {
                    a0->field_8 = v48;
                    *((unsigned long *)&a0->padding_10[0]) = v2;
                }
                else
                {
                    v33 = v4;
                    v32 = v2;
                    v49 = (unsigned short)v2 | (unsigned int)(v3 * 0x10000);
                    *((uint128_t *)&v10) = 0;
                    v16 = 0;
                    v19 = 10;
                    v7 = 9223372036854775811;
                    v1 = 0;
                    v1 = 8;
                    *((uint128_t *)&v5) = 0;
                    v5 = 1;
                    v6 = 0;
                    v14 = (char)v49 & 1;
                    v12 = (char)(v49 >> 8) & 1;
                    v13 = (char)(v49 >> 16) & 1;
                    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "i", 1);
                    uu_join::get_field_number::h8241ec84504e8cda(&v20, v46, v47, v35, v34);
                    v50 = v21;
                    v51 = *((long long *)&v20);
                    if (!v50)
                    {
                        v10 = v51;
                        uu_join::get_field_number::h8241ec84504e8cda(&v20, v46, v47, v32, v33);
                        v50 = v21;
                        v51 = *((long long *)&v20);
                        if (!v50)
                        {
                            v11 = v51;
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1e79e7d5d116e3d9(&v20, a1, "t", 1);
                            v52 = clap_builder::parser::error::MatchesError::unwrap::h295fad333db21f31("t", 1, &v20);
                            if (v52)
                            {
                                uu_join::parse_separator::h5b003db6eeb89267(&v20, v52->field_8, v52->field_10);
                                v53 = v21;
                                v54 = *((long long *)&v20);
                                v55 = *((long long *)&v23);
                                if (v53 == 9223372036854775812)
                                {
                                    a0->field_8 = v54;
                                    *((unsigned long long *)&a0->padding_10[0]) = v55;
                                    a0->field_0 = 0x8000000000000000;
                                    core::ptr::drop_in_place$LT$uu_join..Settings$GT$::ha475b1587517e294(&v0);
                                    return a0;
                                }
                                core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hb29d894c63f79bf0(&v7);
                                v7 = v53;
                                v8 = v54;
                                v9 = v55;
                            }
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc8975813854a9a38(&v20, a1, "o", 1);
                            v56 = clap_builder::parser::error::MatchesError::unwrap::he70031129adfbfcb("o", 1, &v20);
                            if (v56)
                            {
                                v57 = v56[1];
                                v58 = v56[2];
                                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hab9f309aad09d5a2(v57, v58, "auto", 4))
                                {
                                    v17 = 1;
                                }
                                else
                                {
                                    v29 = 0;
                                    v30 = 8;
                                    v31 = 0;
                                    v21 = 188978561056;
                                    v22 = 9;
                                    _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h05090d30728fe751(&v41, &v20, v57, v58);
                                    v21 = 0;
                                    v22 = v58;
                                    v59 = *((int128_t *)&v42);
                                    v60 = *((int128_t *)&v43);
                                    *((int128_t *)&v24) = *((int128_t *)&v41);
                                    v25 = v59;
                                    v26 = v60;
                                    v27 = *((long long *)&v44);
                                    v28 = 1;
                                    while (true)
                                    {
                                        v61 = core::str::iter::SplitInternal$LT$P$GT$::next::hade5ac386c66a7dc(&v20);
                                        if (!v61)
                                            break;
                                        uu_join::Spec::parse::hd0c421fb4c424f36(&v38, v61, v62);
                                        if (*((long long *)&v38))
                                        {
                                            a0->field_8 = v36;
                                            *((unsigned long long *)&a0->padding_10[0]) = v37;
                                            a0->field_0 = 0x8000000000000000;
                                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hd1ac6ea959952ee2(&v29);
                                            core::ptr::drop_in_place$LT$uu_join..Settings$GT$::ha475b1587517e294(&v0);
                                            return a0;
                                        }
                                        v36 = *((long long *)&v39);
                                        v37 = *((long long *)&v40);
                                        alloc::vec::Vec$LT$T$C$A$GT$::push::h0b8ef9bbd439741b(&v29, &v36);
                                    }
                                    v23 = v31;
                                    *((int128_t *)&v20) = *((int128_t *)&v29);
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hd1ac6ea959952ee2(&v0);
                                    v5 = v23;
                                    *((int128_t *)&v1) = (int128_t)v20;
                                }
                            }
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc8975813854a9a38(&v20, a1, "e", 1);
                            v65 = clap_builder::parser::error::MatchesError::unwrap::he70031129adfbfcb("e", 1, &v20);
                            if (v65)
                            {
                                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h2c5bde50ee02e8d6(&v20, v65[1], v65[2]);
                                ::0x4c1bd0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h649c80b2f7427144(&v5);
                                v6 = v23;
                                *((int128_t *)&v5) = (int128_t)v20;
                            }
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "nocheck-order", 13))
                                v18 = 1;
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "check-order", 11))
                                v18 = 2;
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "header", 6))
                                v16 = 1;
                            *((int *)&v19) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "z", 1) ? 0 : 10);
                            a0->field_40 = *((int128_t *)&v9);
                            v67 = *((int128_t *)&v1);
                            v68 = *((int128_t *)&v5);
                            v69 = *((int128_t *)&(&v5)[2]);
                            a0->field_30 = *((int128_t *)&v7);
                            *((void*)&a0->field_20) = v69;
                            *((void*)&a0->padding_10[0]) = v68;
                            *((void*)&a0->field_0) = v67;
                            a0->field_50 = v11;
                            a0->field_58 = *((int *)&v12);
                            a0->field_5c = *((short *)((char *)&v16 + 1));
                            a0->field_5e = v18;
                            a0->field_5f = v19;
                            return a0;
                        }
                    }
                    a0->field_8 = v50;
                    *((unsigned long long *)&a0->padding_10[0]) = v51;
                    a0->field_0 = 0x8000000000000000;
                    core::ptr::drop_in_place$LT$uu_join..Settings$GT$::ha475b1587517e294(&v0);
                    return a0;
                }
            }
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
    }
    *((int128_t *)&a0->field_8) = *((int128_t *)&v2);
    a0->field_0 = 0x8000000000000000;
    return a0;
}
