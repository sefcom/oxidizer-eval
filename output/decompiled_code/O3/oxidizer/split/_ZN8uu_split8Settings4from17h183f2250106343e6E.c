fn uu_split::Settings::from(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x378]
    let v1: i32;  // [sp-0x24c]
    let v2: i128;  // [sp-0x248], Other Possible Types: struct24, struct40, Result<struct40, struct16>
    let v3: i64;  // [bp-0x238]
    let v4: i128;  // [sp-0x228]
    let v6: i64;  // [sp-0x200]
    let v7: i192;  // [sp-0x1f8], Other Possible Types: Result<struct40, struct16>, struct24
    let v8: i128;  // [sp-0x1e8]
    let v9: i64;  // [sp-0x1d8]
    let v10: i448;  // [sp-0x1c8], Other Possible Types: Option<Result<struct32, struct16>>, struct56, struct64, Result<struct40, struct16>, struct40, struct42
    let v11: i64;  // [sp-0x1c0]
    let v12: i128;  // [sp-0x1b8]
    let v13: i64;  // [sp-0x1a8]
    let v14: i128;  // [bp-0x1a0]
    let v15: i64;  // [sp-0x190]
    let v16: i128;  // [sp-0x188]
    let v17: i128;  // [sp-0x178]
    let v18: i128;  // [sp-0x168]
    let v19: i128;  // [sp-0x158]
    let v20: i64;  // [sp-0x148]
    let v21: i128;  // [sp-0x140]
    let v22: i64;  // [sp-0x130]
    let v23: i8;  // [sp-0x128]
    let v24: i8;  // [sp-0x127]
    let v25: i8;  // [sp-0x126]
    let v26: i128;  // [bp-0x118]
    let v27: i64;  // [sp-0x108]
    let v28: i64;  // [bp-0xf8]
    let v29: i128;  // [bp-0xf0]
    let v30: i64;  // [sp-0xe8]
    let v31: i128;  // [sp-0xe0]
    let v32: i64;  // [sp-0xd0]
    let v33: i128;  // [sp-0xc8]
    let v34: i64;  // [sp-0xb8]
    let v35: struct24;  // [sp-0xa8], Other Possible Types: i192
    let v36: struct24;  // [sp-0x90], Other Possible Types: i192
    let v37: struct24;  // [bp-0x78]
    let v38: struct40;  // [sp-0x58], Other Possible Types: i320
    let v40: i64;  // rax
    let v41: i128;  // xmm0
    let v42: i64;  // rcx
    let v45: i64;  // rsi
    let v46: i64;  // rdx
    let v47: i64;  // rax
    let v48: i32;  // eax
    let v49: i64;  // rcx
    let v50: i64;  // rax
    let v51: i64;  // r15
    let v52: i64;  // r12
    let v53: i64;  // r15
    let v54: i64;  // r15
    let v55: i64;  // rax
    let v56: i128;  // xmm0
    let v57: i64;  // rax
    let v58: i64;  // rax
    let v59: i64;  // rax
    let v60: i64;  // cc_ndep

    v38 = uu_split::strategy::Strategy::from(a1, a2);
    if v38 == 4 {
        v3 = *((&v38 as &char + 24) as &i64);
        v2 = *((&v38 as &char + 8) as &i128);
    } else {
        v10 = core::ops::function::FnOnce::call_once(&v38);
        v40 = v10;
        v2 = *((&v10 as &char + 8) as &i128);
        v3 = *((&v10 as &char + 24) as &i64);
        if v40 != 9 {
            v30 = v3;
            v41 = v2;
            v28 = v41;
            return struct48 {
                field_0: 2
                field_8: v40
                field_16: v41
                field_32: v30
                field_40: v10.field_32
            };
        }
    }
    v33 = v2;
    v34 = v3;
    *(&v37.field_0 as &struct24) = struct24 {
        field_0: v33
        field_16: v34
    };
    v10 = uu_split::filenames::Suffix::from(a1, &v37);
    if v28 == 0x8000000000000000 {
        v2 = core::ops::function::FnOnce::call_once(&v10);
        v9 = *((&v2 as &char + 32) as &i64);
        v8 = *((&v2 as &char + 16) as &i128);
        v7 = v2;
        *((a0 + 40) as &i64) = v9;
        *((a0 + 24) as &i128) = v8;
        *((a0 + 8) as &i128) = v7;
        *(a0 as &i64) = 2;
        return struct48 {
            field_0: 2
            field_8: v40
            field_16: v41
            field_32: v30
            field_40: v10.field_32
        };
    }
    v42 = v14;
    v8 = *((&v10 as &char + 24) as &i128);
    v29 = *((&v10 as &char + 8) as &i128);
    v31 = v8;
    v32 = v42;
    v28 = v10;
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "separator");
    if !v2 {
        v48 = (clap_builder::parser::error::MatchesError::unwrap("separator", &v10) | -0x100 | 10) as u32;
        goto LABEL_4cb6c1;
    }
    v10 = struct64 {
        field_0: v2
        field_16: v44
        field_32: v4
        field_48: v5
    };
    v47 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v10, v45, v46);
    if !v47 {
        core::option::unwrap_failed(); /* do not return */
    }
    v6 = v47;
    v49 = 6;
    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v10, &v6, v46) as i32) {
        v50 = v6;
        v51 = *((v50 + 8) as &i64);
        v52 = *((v50 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v51, v52, "\\0") as i8 {
            v1 = 0;
            goto LABEL_4cb6c5;
        } else if v52 != 1 {
            v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(v51, v52);
            *((a0 + 32) as &i64) = *((&v7 as &char + 16) as &i64);
            *((a0 + 16) as &i128) = v7;
            v49 = 5;
        } else {
            v48 = *(v51 as &i8);
LABEL_4cb6c1:
            v1 = v48;
LABEL_4cb6c5:
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "-io-blksize");
            v53 = clap_builder::parser::error::MatchesError::unwrap("-io-blksize", &v10);
            if !v53 {
                v54 = 0;
                goto LABEL_4cb767;
            } else {
                v10 = uucore::parser::parse_size::parse_size_u64(*((v53 + 8) as &i64), *((v53 + 16) as &i64));
                if v10 == 3 {
                    v52 = v11;
                    if !v52 {
                        v2 = <alloc::string::String as core::clone::Clone>::clone(v53);
                        *((a0 + 32) as &i64) = *((&v2 as &char + 16) as &i64);
                        *((a0 + 16) as &i128) = v2;
                        *((a0 + 8) as &i64) = 8;
                        *(a0 as &i64) = 2;
                        return struct48 {
                            field_0: 2
                            field_8: v40
                            field_16: v41
                            field_32: v30
                            field_40: v10.field_32
                        };
                    }
                    if v52 < 536870913 {
                        v54 = 1;
LABEL_4cb767:
                        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
                        v55 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v2);
                        if !v55 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v35 = <alloc::string::String as core::clone::Clone>::clone(v55);
                        v56 = v28;
                        v4 = *((&v31 as &char + 8) as &i128);
                        v3 = *((&v29 as &char + 8) as &i128);
                        v2 = v56;
                        v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "input");
                        v57 = clap_builder::parser::error::MatchesError::unwrap("input", &v7);
                        if !v57 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v36 = <alloc::string::String as core::clone::Clone>::clone(v57);
                        v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "filter");
                        v58 = clap_builder::parser::error::MatchesError::unwrap("filter", &v7);
                        if !v58 {
                            v26 = 0x8000000000000000;
                        } else {
                            v7 = <alloc::string::String as core::clone::Clone>::clone(v58);
                            v27 = *((&v7 as &char + 16) as &i64);
                            v26 = v7;
                        }
                        v15 = *((&v35 as &char + 16) as &i64);
                        v14 = v35;
                        v16 = v2;
                        v17 = v3;
                        v18 = v4;
                        v19 = v36;
                        v20 = *((&v36 as &char + 16) as &i64);
                        v21 = v26;
                        v22 = v27;
                        v13 = v34;
                        v12 = v33;
                        v23 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "verbose") as i32 == 2;
                        v25 = v1;
                        v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "elide-empty-files") as i8;
                        v10 = v54;
                        v11 = v52;
                        v59 = v12;
                        if v59 <= 5 && amd64g_calculate_condition(6, 8, v59, 5, v60) as char {
                            v0 = 42;
                            if (*((&v0 as &u8 + ((v59 & 63) >> 3)) as &i8) >> (v59 & 63 & 7) & 1) && v21 != 0x8000000000000000 {
                                return struct48 {
                                    field_0: 2
                                    field_8: v40
                                    field_16: v41
                                    field_32: v30
                                    field_40: v10.field_32
                                };
                            }
                        }
                        memcpy(a0, &v10, 168);
                        return struct48 {
                            field_0: 2
                            field_8: v40
                            field_16: v41
                            field_32: v30
                            field_40: v10.field_32
                        };
                    }
                }
                v2 = <alloc::string::String as core::clone::Clone>::clone(v53);
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
        field_8: v49
    };
}
