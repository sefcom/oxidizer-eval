fn uu_join::parse_settings(a0: &struct96, a1: &struct56) -> u64 {
    let v0: i64;  // [sp-0x178], Other Possible Types: struct24, Result<struct16, struct3>
    let v1: i64;  // [sp-0x170]
    let v2: i64;  // [sp-0x168]
    let v3: struct24;  // [sp-0x160]
    let v4: i64;  // [sp-0x158]
    let v5: i64;  // [sp-0x150]
    let v6: i64;  // [sp-0x148], Other Possible Types: Option<Result<struct1, struct16>>
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
    let v19: i64;  // [sp-0x118], Other Possible Types: Result<struct40, struct8>, struct16, struct12, struct24, Option<Result<struct1, struct16>>
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
    let v34: struct24;  // [sp-0x80], Other Possible Types: i192
    let v35: struct52;  // [sp-0x68], Other Possible Types: i416
    let v37: i64;  // r15
    let v38: i64;  // r12
    let v39: i64;  // rax
    let v40: i32;  // ecx
    let v41: i64;  // rcx
    let v42: i64;  // rax
    let v43: i64;  // rax
    let v46: i64;  // rax
    let v47: i64;  // r15
    let v48: i64;  // r12
    let v49: i128;  // xmm1
    let v50: i128;  // xmm2
    let v51: struct8;  // rax
    let v52: i64;  // rdx
    let v55: i64;  // rax

    v0 = uu_join::get_and_parse_field_number(a1, &g_4149f6);
    if v0 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: *((&v0 as &char + 8) as &i128)
        };
    }
    v37 = v1;
    v38 = v2;
    v0 = uu_join::get_and_parse_field_number(a1, &g_4149f7);
    if !v0 {
        v0 = uu_join::get_and_parse_field_number(a1, &g_4149f8);
        if v0 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: *((&v0 as &char + 8) as &i128)
            };
        }
        v31 = v2;
        v32 = v1;
        v0 = uu_join::parse_print_settings(a1);
        v39 = v0;
        if v39 {
            *((a0 + 8) as &i64) = v39;
            *((a0 + 16) as &i64) = v1;
        }
        v30 = v2;
        v29 = v1;
        v40 = *((&v0 as &char + 8) as &i16) | *((&v0 as &char + 10) as &i8) * 0x10000;
        v9 = 0;
        v14 = 0;
        v18 = 10;
        v6 = 9223372036854775811;
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v4 = 1;
        v5 = 0;
        v13 = v40 & 1;
        v11 = v40 >> 8 & 1;
        v12 = v40 >> 16 & 1;
        v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "i") as i8;
        v19 = uu_join::get_field_number(v37, v38, v32, v31);
        v41 = v19;
        v42 = *((&v19 as &char + 8) as &i64);
        if !v41 {
            v9 = v42;
            v19 = uu_join::get_field_number(v37, v38, v29, v30);
            v41 = v19;
            v42 = *((&v19 as &char + 8) as &i64);
            if !v41 {
                v10 = v42;
                v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "t");
                v43 = clap_builder::parser::error::MatchesError::unwrap("t", &v19);
                if v43 {
                    v19 = uu_join::parse_separator(*((v43 + 8) as &i64), *((v43 + 16) as &i64));
                    if v6 == 9223372036854775812 {
                        *((a0 + 8) as &i64) = v7;
                        *((a0 + 16) as &i64) = v8;
                        return struct8 {
                            field_0: 0x8000000000000000
                        };
                    }
                    v6 = v19;
                }
                v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "o");
                v46 = clap_builder::parser::error::MatchesError::unwrap("o", &v19);
                if v46 {
                    v47 = *((v46 + 8) as &i64);
                    v48 = *((v46 + 16) as &i64);
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v47, v48, "auto") as i8 {
                        v15 = 1;
                    } else {
                        v26 = 0;
                        v27 = 8;
                        v28 = 0;
                        v19 = struct12 {
                            field_0: 188978561056
                            field_8: 9
                        };
                        v35 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(&v19, v47, v48);
                        v19 = 0;
                        v20 = v48;
                        v49 = *((&v35 as &char + 16) as &i128);
                        v50 = *((&v35 as &char + 32) as &i128);
                        v21 = v35;
                        v22 = v49;
                        v23 = v50;
                        v24 = v35;
                        v25 = 1;
                        loop {
                            v51 = core::str::iter::SplitInternal<P>::next();
                            if !v51 {
                                break;
                            }
                            v34 = uu_join::Spec::parse(v51, v52);
                            if !v34 {
                                v33 = struct16 {
                                    field_0: v53
                                    field_8: v54
                                };
                                v26 = alloc::vec::Vec<T,A>::push(&v33);
                            }
                        }
                        v2 = v21;
                        v0 = v19;
                    }
                }
                v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "e");
                v55 = clap_builder::parser::error::MatchesError::unwrap("e", &v19);
                if v55 {
                    v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((v55 + 8) as &i64), *((v55 + 16) as &i64));
                    v3 = v19;
                }
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "nocheck-order") as i8 {
                    v17 = 1;
                }
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "check-order") as i8 {
                    v17 = 2;
                }
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "header") as i8 {
                    v18 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "z") as i8 ? 0 : 10);
                    return struct96 {
                        field_0: v57
                        field_16: v58
                        field_32: v59
                        field_48: v6
                        field_64: *((&v6 as &char + 16) as &i128)
                        field_80: v10
                        field_88: v11
                        field_92: *((&v14 as &char + 1) as &i16)
                        field_94: v17
                        field_95: v18
                    };
                }
                v16 = 1;
            }
        }
        *((a0 + 8) as &i64) = v41;
        *((a0 + 16) as &i64) = v42;
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
