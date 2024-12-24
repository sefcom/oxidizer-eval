fn uu_split::Settings::from(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x378]
    let v1: i32;  // [sp-0x24c]
    let v2: i192;  // [sp-0x248], Other Possible Types: struct24, struct40, Result<struct40, struct16>
    let v3: i64;  // [bp-0x238]
    let v4: i128;  // [sp-0x228]
    let v5: i64;  // [sp-0x200]
    let v6: i128;  // [bp-0x1f8], Other Possible Types: struct24, Result<struct40, struct16>
    let v7: i128;  // [sp-0x1e8]
    let v8: i64;  // [sp-0x1d8]
    let v9: i64;  // [sp-0x1c8], Other Possible Types: struct56, Result<struct40, struct16>, Option<Result<struct32, struct16>>, struct40, struct42
    let v10: i64;  // [sp-0x1c0]
    let v11: i128;  // [sp-0x1b8]
    let v12: i64;  // [sp-0x1a8]
    let v13: i192;  // [bp-0x1a0]
    let v14: i128;  // [sp-0x188]
    let v15: i128;  // [sp-0x178]
    let v16: i128;  // [sp-0x168]
    let v17: i192;  // [bp-0x158]
    let v18: i128;  // [sp-0x140]
    let v19: i64;  // [sp-0x130]
    let v20: i8;  // [sp-0x128]
    let v21: i8;  // [sp-0x127]
    let v22: i8;  // [sp-0x126]
    let v23: i64;  // [bp-0x118]
    let v24: i64;  // [sp-0x108]
    let v25: i128;  // [bp-0xf8]
    let v26: i128;  // [bp-0xf0]
    let v27: i64;  // [sp-0xe8]
    let v28: i128;  // [sp-0xe0]
    let v29: i64;  // [sp-0xd0]
    let v30: i128;  // [sp-0xc8]
    let v31: i64;  // [sp-0xb8]
    let v32: i192;  // [sp-0xa8], Other Possible Types: struct24
    let v33: struct24;  // [sp-0x90], Other Possible Types: i192
    let v34: i192;  // [bp-0x78]
    let v35: i320;  // [sp-0x58], Other Possible Types: struct40
    let v37: i64;  // rax
    let v38: i128;  // xmm0
    let v39: i64;  // rcx
    let v41: i64;  // rsi
    let v42: i64;  // rdx
    let v43: i64;  // rax
    let v44: i32;  // eax
    let v45: i64;  // rcx
    let v46: i64;  // rax
    let v47: i64;  // r15
    let v48: i64;  // r12
    let v49: i64;  // r15
    let v50: i64;  // r15
    let v51: i64;  // rax
    let v52: i128;  // xmm0
    let v53: i64;  // rax
    let v54: i64;  // rax
    let v55: i64;  // rax
    let v56: i64;  // cc_ndep

    v35 = uu_split::strategy::Strategy::from(a1, a2);
    if v35 == 4 {
        v3 = *((&v35 as &char + 24) as &i64);
        v2 = *((&v35 as &char + 8) as &i128);
    } else {
        v9 = core::ops::function::FnOnce::call_once(&v35);
        v37 = v9;
        v2 = *((&v9 as &char + 8) as &i128);
        v3 = *((&v9 as &char + 24) as &i64);
        if v37 != 9 {
            v27 = v3;
            v38 = v2;
            v25 = v38;
            return struct48 {
                field_0: 2
                field_8: v37
                field_16: v38
                field_32: v27
                field_40: v9.field_32
            };
        }
    }
    v30 = v2;
    v31 = v3;
    v34 = v30;
    v9 = uu_split::filenames::Suffix::from(a1, &v34);
    if v25 == 0x8000000000000000 {
        v2 = core::ops::function::FnOnce::call_once(&v9);
        v6 = v2;
        *((a0 + 40) as &i64) = v8;
        *((a0 + 24) as &i128) = v7;
        *((a0 + 8) as &i128) = v6;
        *(a0 as &i64) = 2;
        return struct48 {
            field_0: 2
            field_8: v37
            field_16: v38
            field_32: v27
            field_40: v9.field_32
        };
    }
    v39 = v13;
    v7 = *((&v9 as &char + 24) as &i128);
    v26 = *((&v9 as &char + 8) as &i128);
    v28 = v7;
    v29 = v39;
    v25 = v9;
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "separator");
    if !v2 {
        v44 = (clap_builder::parser::error::MatchesError::unwrap("separator", &v9) | -0x100 | 10) as u32;
        goto LABEL_4cb6c1;
    }
    v9 = v2;
    v43 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v9, v41, v42);
    if !v43 {
        core::option::unwrap_failed(); /* do not return */
    }
    v5 = v43;
    v45 = 6;
    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v9, &v5, v42) as i32) {
        v46 = v5;
        v47 = *((v46 + 8) as &i64);
        v48 = *((v46 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v47, v48, "\\0") as i8 {
            v1 = 0;
            goto LABEL_4cb6c5;
        } else if v48 != 1 {
            v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(v47, v48);
            *((a0 + 32) as &i64) = *((&v6 as &char + 16) as &i64);
            *((a0 + 16) as &i128) = v6;
            v45 = 5;
        } else {
            v44 = *(v47 as &i8);
LABEL_4cb6c1:
            v1 = v44;
LABEL_4cb6c5:
            v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "-io-blksize");
            v49 = clap_builder::parser::error::MatchesError::unwrap("-io-blksize", &v9);
            if !v49 {
                v50 = 0;
                goto LABEL_4cb767;
            } else {
                v9 = uucore::parser::parse_size::parse_size_u64(*((v49 + 8) as &i64), *((v49 + 16) as &i64));
                if v9 == 3 {
                    v48 = v10;
                    if !v48 {
                        v2 = <alloc::string::String as core::clone::Clone>::clone(v49);
                        *((a0 + 32) as &i64) = *((&v2 as &char + 16) as &i64);
                        *((a0 + 16) as &i128) = v2;
                        *((a0 + 8) as &i64) = 8;
                        *(a0 as &i64) = 2;
                        return struct48 {
                            field_0: 2
                            field_8: v37
                            field_16: v38
                            field_32: v27
                            field_40: v9.field_32
                        };
                    }
                    if v48 < 536870913 {
                        v50 = 1;
LABEL_4cb767:
                        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
                        v51 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v2);
                        if !v51 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v32 = <alloc::string::String as core::clone::Clone>::clone(v51);
                        v52 = v25;
                        v4 = *((&v28 as &char + 8) as &i128);
                        v3 = *((&v26 as &char + 8) as &i128);
                        v2 = v52;
                        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "input");
                        v53 = clap_builder::parser::error::MatchesError::unwrap("input", &v6);
                        if !v53 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v33 = <alloc::string::String as core::clone::Clone>::clone(v53);
                        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "filter");
                        v54 = clap_builder::parser::error::MatchesError::unwrap("filter", &v6);
                        if !v54 {
                            v23 = 0x8000000000000000;
                        } else {
                            v6 = <alloc::string::String as core::clone::Clone>::clone(v54);
                            v23 = v6;
                        }
                        v13 = v32;
                        v14 = v2;
                        v15 = v3;
                        v16 = v4;
                        v17 = v33;
                        v18 = v23;
                        v19 = v24;
                        v12 = v31;
                        v11 = v30;
                        v20 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "verbose") as i32 == 2;
                        v22 = v1;
                        v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "elide-empty-files") as i8;
                        v9 = v50;
                        v10 = v48;
                        v55 = v11;
                        if v55 <= 5 && amd64g_calculate_condition(6, 8, v55, 5, v56) as char {
                            v0 = 42;
                            if (*((&v0 as &u8 + ((v55 & 63) >> 3)) as &i8) >> (v55 & 63 & 7) & 1) && v18 != 0x8000000000000000 {
                                return struct48 {
                                    field_0: 2
                                    field_8: v37
                                    field_16: v38
                                    field_32: v27
                                    field_40: v9.field_32
                                };
                            }
                        }
                        memcpy(a0, &v9, 168);
                        return struct48 {
                            field_0: 2
                            field_8: v37
                            field_16: v38
                            field_32: v27
                            field_40: v9.field_32
                        };
                    }
                }
                v2 = <alloc::string::String as core::clone::Clone>::clone(v49);
                return struct40 {
                    field_0: 2
                    field_8: 8
                    field_16: v2
                    field_32: *((&v2 as &char + 16) as &i64)
                };
            }
        }
    }
    return struct16 {
        field_0: 2
        field_8: v45
    };
}
