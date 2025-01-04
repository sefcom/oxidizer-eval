long long uu_join::parse_settings::h8cf47cd535767909(struct_1 *a0, unsigned long long a1)
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
    unsigned int v47;  // ecx
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rax
    struct_0 *v50;  // rax
    unsigned long long v51;  // rbp
    unsigned long long v52;  // r15
    unsigned long long v53;  // r12
    unsigned long long v54[3];  // rax
    unsigned long long v55;  // r15
    unsigned long long v56;  // r12
    int v57;  // xmm1
    int v58;  // xmm2
    unsigned long long v59;  // rsi
    unsigned long v60;  // rdx
    unsigned long v61;  // rax
    unsigned long long v64[3];  // rax
    int v66;  // xmm0
    int v67;  // xmm1
    int v68;  // xmm2

    uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(&v0, a1, "j");
    if (!v0)
    {
        v44 = v1;
        v45 = v3;
        uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(&v0, a1, "1");
        if (!v0)
        {
            uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(&v0, a1, "2");
            if (v0)
            {
                *((int128_t *)&a0->field_8) = *((int128_t *)&v1);
            }
            else
            {
                v32 = v3;
                v33 = v1;
                uu_join::parse_print_settings::h7df2ac24ec40344e(&v0, a1);
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
                    v47 = (unsigned short)v1 | (unsigned int)(v2 * 0x10000);
                    *((int128_t *)&v10) = 0;
                    v15 = 0;
                    v19 = 10;
                    v7 = 9223372036854775811;
                    v0 = 0;
                    v1 = 8;
                    *((int128_t *)&v3) = 0;
                    v5 = 1;
                    v6 = 0;
                    v14 = (char)v47 & 1;
                    v12 = (char)(v47 >> 8) & 1;
                    v13 = (char)(v47 >> 16) & 1;
                    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "i", 1);
                    uu_join::get_field_number::h8241ec84504e8cda(&v20, v44, v45, v33, v32);
                    v48 = v20;
                    v49 = *((long long *)&v21);
                    if (!v48)
                    {
                        v10 = v49;
                        uu_join::get_field_number::h8241ec84504e8cda(&v20, v44, v45, v30, v31);
                        v48 = v20;
                        v49 = *((long long *)&v21);
                        if (!v48)
                        {
                            v11 = v49;
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1e79e7d5d116e3d9(&v20, a1, "t", 1);
                            v50 = clap_builder::parser::error::MatchesError::unwrap::h295fad333db21f31("t", 1, &v20);
                            if (v50)
                            {
                                uu_join::parse_separator::h5b003db6eeb89267(&v20, v50->field_8, v50->field_10);
                                v51 = v20;
                                v52 = *((long long *)&v21);
                                v53 = *((long long *)&v22);
                                if (v51 == 9223372036854775812)
                                {
                                    a0->field_8 = v52;
                                    *((unsigned long long *)&a0->padding_10[0]) = v53;
                                    a0->field_0 = 0x8000000000000000;
                                    core::ptr::drop_in_place$LT$uu_join..Settings$GT$::ha475b1587517e294(&v0);
                                    return a0;
                                }
                                core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hb29d894c63f79bf0(&v7);
                                v7 = v51;
                                v8 = v52;
                                v9 = v53;
                            }
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc8975813854a9a38(&v20, a1, "o", 1);
                            v54 = clap_builder::parser::error::MatchesError::unwrap::he70031129adfbfcb("o", 1, &v20);
                            if (v54)
                            {
                                v55 = v54[1];
                                v56 = v54[2];
                                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hab9f309aad09d5a2(v55, v56, "auto", 4))
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
                                    _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h05090d30728fe751(&v39, &v20, v55, v56);
                                    v20 = 0;
                                    v21 = v56;
                                    v57 = *((int128_t *)&v40);
                                    v58 = *((int128_t *)&v41);
                                    *((int128_t *)&v22) = *((int128_t *)&v39);
                                    v23 = v57;
                                    v24 = v58;
                                    v25 = *((long long *)&v42);
                                    v26 = 1;
                                    while (true)
                                    {
                                        v61 = core::str::iter::SplitInternal$LT$P$GT$::next::hade5ac386c66a7dc(&v20, v59, v60);
                                        if (!v61)
                                            break;
                                        uu_join::Spec::parse::hd0c421fb4c424f36(&v36, v61, v60);
                                        if (*((long long *)&v36))
                                        {
                                            a0->field_8 = v34;
                                            *((unsigned long long *)&a0->padding_10[0]) = v35;
                                            a0->field_0 = 0x8000000000000000;
                                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hd1ac6ea959952ee2(&v27);
                                            core::ptr::drop_in_place$LT$uu_join..Settings$GT$::ha475b1587517e294(&v0);
                                            return a0;
                                        }
                                        v34 = *((long long *)&v37);
                                        v35 = *((long long *)&v38);
                                        alloc::vec::Vec$LT$T$C$A$GT$::push::h0b8ef9bbd439741b(&v27, &v34, v60);
                                    }
                                    v22 = v29;
                                    *((int128_t *)&v20) = *((int128_t *)&v27);
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hd1ac6ea959952ee2(&v0);
                                    v3 = v22;
                                    *((int128_t *)&v0) = (int128_t)v20;
                                }
                            }
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc8975813854a9a38(&v20, a1, "e", 1);
                            v64 = clap_builder::parser::error::MatchesError::unwrap::he70031129adfbfcb("e", 1, &v20);
                            if (v64)
                            {
                                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h2c5bde50ee02e8d6(&v20, v64[1], v64[2]);
                                ::0x4c1bd0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h649c80b2f7427144(&v3);
                                v6 = v22;
                                *((int128_t *)&v4) = (int128_t)v20;
                            }
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "nocheck-order", 13))
                                v18 = 1;
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "check-order", 11))
                                v18 = 2;
                            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "header", 6))
                                v17 = 1;
                            *((int *)&v19) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "z", 1) ? 0 : 10);
                            a0->field_40 = *((int128_t *)&v9);
                            v66 = *((int128_t *)&v0);
                            v67 = *((int128_t *)&v3);
                            v68 = *((int128_t *)&(&v3)[2]);
                            a0->field_30 = *((int128_t *)&v7);
                            *((void*)&a0->field_20) = v68;
                            *((void*)&a0->padding_10[0]) = v67;
                            *((void*)&a0->field_0) = v66;
                            a0->field_50 = v11;
                            a0->field_58 = *((int *)&v12);
                            a0->field_5c = *((short *)((char *)&v15 + 1));
                            a0->field_5e = v18;
                            a0->field_5f = v19;
                            return a0;
                        }
                    }
                    a0->field_8 = v48;
                    *((unsigned long long *)&a0->padding_10[0]) = v49;
                    a0->field_0 = 0x8000000000000000;
                    core::ptr::drop_in_place$LT$uu_join..Settings$GT$::ha475b1587517e294(&v0);
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
