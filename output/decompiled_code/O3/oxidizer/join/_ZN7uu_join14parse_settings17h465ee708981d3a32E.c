fn uu_join::parse_settings(a0: u32, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x178], Other Possible Types: struct24, Result<struct16, struct11>
    let v1: i64;  // [sp-0x170]
    let v2: i192;  // [bp-0x168]
    let v3: i192;  // [bp-0x160]
    let v4: i64;  // [sp-0x158]
    let v5: i64;  // [sp-0x150]
    let v6: i64;  // [sp-0x148]
    let v7: i64;  // [sp-0x140]
    let v8: i64;  // [sp-0x138]
    let v9: i128;  // [bp-0x130]
    let v10: i64;  // [sp-0x128]
    let v11: i8;  // [sp-0x120]
    let v12: i8;  // [sp-0x11f]
    let v13: i8;  // [sp-0x11e]
    let v14: i32;  // [bp-0x11d]
    let v15: i8;  // [sp-0x11c]
    let v16: i8;  // [sp-0x11b]
    let v17: i8;  // [sp-0x11a]
    let v18: i8;  // [sp-0x119]
    let v19: i128;  // [sp-0x118], Other Possible Types: Result<struct40, struct16>, struct16, Option<Result<struct1, struct16>>, struct12, struct24
    let v20: i64;  // [bp-0x110]
    let v21: i128;  // [bp-0x108]
    let v22: i128;  // [sp-0xf8]
    let v23: i128;  // [sp-0xe8]
    let v24: i64;  // [sp-0xd8]
    let v25: i16;  // [sp-0xd0]
    let v26: i64;  // [sp-0xc8], Other Possible Types: struct16
    let v27: i64;  // [sp-0xc0]
    let v28: i64;  // [sp-0xb8]
    let v29: i64;  // [sp-0xb0]
    let v30: i64;  // [sp-0xa8]
    let v31: i64;  // [sp-0xa0]
    let v32: i64;  // [sp-0x98]
    let v33: struct16;  // [bp-0x90]
    let v35: i192;  // [sp-0x80], Other Possible Types: struct24
    let v36: struct52;  // [sp-0x68], Other Possible Types: i416
    let v38: i64;  // r15
    let v39: i64;  // r12
    let v40: i64;  // rax
    let v41: i8;  // al
    let v42: i32;  // ecx
    let v43: i64;  // rcx
    let v44: i64;  // rax
    let v45: i64;  // rax
    let v46: i64;  // rbp
    let v47: i64;  // r15
    let v48: i64;  // r12
    let v49: i64;  // rax
    let v50: i64;  // r15
    let v51: i64;  // r12
    let v52: i128;  // xmm1
    let v53: i128;  // xmm2
    let v54: i64;  // rsi
    let v55: i64;  // rdx
    let v56: struct8;  // rax
    let v59: i64;  // rax
    let v61: i128;  // xmm0
    let v62: i128;  // xmm1
    let v63: i128;  // xmm2

    v0 = uu_join::get_and_parse_field_number(a1, &g_4149f6);
    if !v0 {
        v38 = v0.field_8;
        v39 = v0.field_16;
        v0 = uu_join::get_and_parse_field_number(a1, &g_4149f7);
        if !v0 {
            v0 = uu_join::get_and_parse_field_number(a1, &g_4149f8);
            if v0 {
                *((a0 + 8) as &i128) = *((&v0 as &char + 8) as &i128);
            } else {
                v31 = v0.field_16;
                v32 = v0.field_8;
                v0 = uu_join::parse_print_settings(a1);
                v40 = v0;
                if v40 {
                    *((a0 + 8) as &i64) = v40;
                    *((a0 + 16) as &i64) = v1;
                } else {
                    v30 = v0.field_16;
                    v29 = v1;
                    v41 = *((&v0 as &char + 10) as &i8);
                    v42 = *((&v0 as &char + 8) as &i16);
                    v9 = 0;
                    v14 = 0;
                    v18 = 10;
                    v6 = 9223372036854775811;
                    v0 = 0;
                    v1 = 8;
                    v2 = 0;
                    v4 = 1;
                    v5 = 0;
                    v13 = v42 & 1;
                    v11 = v42 >> 8 & 1;
                    v12 = v41 & 1;
                    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "i") as i8;
                    v19 = uu_join::get_field_number(v38, v39, v32, v31);
                    v43 = v19;
                    v44 = *((&v19 as &char + 8) as &i64);
                    if !v43 {
                        v9 = v44;
                        v19 = uu_join::get_field_number(v38, v39, v29, v30);
                        v43 = v19;
                        v44 = *((&v19 as &char + 8) as &i64);
                        if !v43 {
                            v10 = v44;
                            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "t");
                            v45 = clap_builder::parser::error::MatchesError::unwrap("t", &v19);
                            if v45 {
                                v19 = uu_join::parse_separator(*((v45 + 8) as &i64), *((v45 + 16) as &i64));
                                v46 = v19;
                                v47 = *((&v19 as &char + 8) as &i64);
                                v48 = *((&v19 as &char + 16) as &i64);
                                if v46 == 9223372036854775812 {
                                    return struct24 {
                                        field_0: 0x8000000000000000
                                        field_8: v47
                                        field_16: v48
                                    };
                                }
                                v6 = v46;
                                v7 = v47;
                                v8 = v48;
                            }
                            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "o");
                            v49 = clap_builder::parser::error::MatchesError::unwrap("o", &v19);
                            if v49 {
                                v50 = *((v49 + 8) as &i64);
                                v51 = *((v49 + 16) as &i64);
                                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v50, v51, "auto") as i8 {
                                    v15 = 1;
                                } else {
                                    v26 = 0;
                                    v27 = 8;
                                    v28 = 0;
                                    v19 = struct12 {
                                        field_0: 188978561056
                                        field_8: 9
                                    };
                                    v36 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(&v19, v50, v51);
                                    v19 = 0;
                                    v20 = v51;
                                    v52 = *((&v36 as &char + 16) as &i128);
                                    v53 = *((&v36 as &char + 32) as &i128);
                                    v21 = v36;
                                    v22 = v52;
                                    v23 = v53;
                                    v24 = v36;
                                    v25 = 1;
                                    loop {
                                        v56 = core::str::iter::SplitInternal<P>::next(v54, v55);
                                        if !v56 {
                                            break;
                                        }
                                        v35 = uu_join::Spec::parse(v56, v55);
                                        if v35 {
                                            return struct24 {
                                                field_0: 0x8000000000000000
                                                field_8: v33
                                                field_16: v34
                                            };
                                        }
                                        v33 = struct16 {
                                            field_0: v57
                                            field_8: v58
                                        };
                                        v26 = alloc::vec::Vec<T,A>::push(&v33, v55);
                                    }
                                    v21 = v28;
                                    v19 = v26;
                                    v0.field_16 = (stack_base)[264] as i64;
                                    v0 = v19;
                                }
                            }
                            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "e");
                            v59 = clap_builder::parser::error::MatchesError::unwrap("e", &v19);
                            if v59 {
                                v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((v59 + 8) as &i64), *((v59 + 16) as &i64));
                                v3 = v19;
                            }
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "nocheck-order") as i8 {
                                v17 = 1;
                            }
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "check-order") as i8 {
                                v17 = 2;
                            }
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "header") as i8 {
                                v16 = 1;
                            }
                            v18 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "z") as i8 ? 0 : 10);
                            v61 = v0;
                            v62 = v2;
                            v63 = *((&v2 as &char + 16) as &i128);
                            return struct24 {
                                field_0: 0x8000000000000000
                                field_8: v33
                                field_16: v34
                            };
                        }
                    }
                    return struct24 {
                        field_0: 0x8000000000000000
                        field_8: v43
                        field_16: v44
                    };
                }
            }
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v33
                field_16: v34
            };
        }
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v33
        field_16: v34
    };
}
