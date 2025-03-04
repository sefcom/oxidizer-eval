fn uu_split::Settings::from(a0: &Result<struct40, struct40>, a1: &struct56, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x378]
    let v1: i32;  // [sp-0x24c]
    let v2: struct24;  // [sp-0x248], Other Possible Types: int, Result<struct40, struct8>, struct40
    let v3: iNone;  // [bp-0x238]
    let v4: i64;  // [bp-0x238]
    let v5: iNone;  // [sp-0x228]
    let v6: i64;  // [sp-0x200]
    let v7: struct24;  // [sp-0x1f8], Other Possible Types: Result<struct40, struct8>, struct40, int
    let v8: iNone;  // [sp-0x1e8]
    let v10: i64;  // [sp-0x1c8], Other Possible Types: struct56, Option<Result<struct32, struct8>>, int, Result<struct40, struct8>, struct42, struct40
    let v11: i64;  // [sp-0x1c0]
    let v12: iNone;  // [sp-0x1b8]
    let v13: i64;  // [sp-0x1a8]
    let v14: struct24;  // [bp-0x1a0], Other Possible Types: unsigned long
    let v15: iNone;  // [sp-0x188]
    let v16: iNone;  // [sp-0x178]
    let v17: iNone;  // [sp-0x168]
    let v18: struct24;  // [sp-0x158]
    let v19: iNone;  // [sp-0x140]
    let v20: i64;  // [sp-0x130]
    let v21: i8;  // [sp-0x128]
    let v22: i8;  // [sp-0x127]
    let v23: i8;  // [sp-0x126]
    let v24: i64;  // [bp-0x118], Other Possible Types: int
    let v25: i64;  // [sp-0x108]
    let v26: iNone;  // [bp-0xf8], Other Possible Types: unsigned long
    let v27: iNone;  // [bp-0xf0]
    let v28: i64;  // [sp-0xe8]
    let v29: iNone;  // [sp-0xe0]
    let v30: i64;  // [sp-0xd0]
    let v31: iNone;  // [sp-0xc8]
    let v32: i64;  // [sp-0xb8]
    let v33: struct24;  // [sp-0xa8]
    let v34: struct24;  // [sp-0x90]
    let v35: iNone;  // [sp-0x78]
    let v36: struct40;  // [sp-0x58]
    let v40: i64;  // rcx
    let v43: i64;  // rax
    let v44: i32;  // eax
    let v47: i64;  // rax
    let v48: i64;  // r15
    let v49: i64;  // r12
    let v50: i64;  // r15
    let v51: i64;  // r15
    let v52: i64;  // rax
    let v53: iNone;  // xmm0
    let v54: i64;  // rax
    let v55: i64;  // rax
    let v56: i64;  // rax
    let v57: i64;  // cc_ndep

    v36 = uu_split::strategy::Strategy::from(a1, a2);
    if v36.field_0 as i32 == 4 {
        *(&v4 as &i64) = *((&v36.field_16 as &char + 8) as &i64);
        v2 = *(&v36.field_8 as &i128);
    } else {
        v10 = core::ops::function::FnOnce::call_once(&v36);
        v2 = *(&v10.field_8 as &i128);
        *(&v4 as &i64) = *((&v10.field_16 as &char + 8) as &i64);
        if v10 != 9 {
            v28 = v4;
            v26 = v2;
            return Ok(struct32 {
                field_0: v39
                field_16: v28
                field_24: v13
            });
        }
    }
    v31 = v2;
    v32 = v4;
    v35 = v31 as i192;
    v10 = uu_split::filenames::Suffix::from(a1, &v35);
    if v26 == 0x8000000000000000 {
        v2 = core::ops::function::FnOnce::call_once(&v10);
        v7 = v2;
        return Ok(struct24 {
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
        });
    }
    v40 = v14;
    v8 = *(&v10.field_24 as &i128);
    *(&v27 as &i128) = *((&v10.field_0 as &char + 8) as &i128);
    v29 = v8;
    v30 = v40;
    v26 = v10;
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "separator");
    if !v2 as i64 {
        v44 = (clap_builder::parser::error::MatchesError::unwrap("separator", &v10) & -0x100 | 10) as u32;
        goto LABEL_4cb5f1;
    } else {
        v10 = *(&v2 as &i512);
        v43 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v10);
        if !v43 {
            core::option::unwrap_failed("src/uu/split/src/split.rs"); /* do not return */
        }
        v6 = v43;
        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v10, &v6)) {
            return struct16 {
                field_0: 2
                field_8: v46
            };
        }
        v47 = v6;
        v48 = *((v47 + 8) as &i64);
        v49 = *((v47 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v48, v49, "\0") as i8 {
            v1 = 0;
        } else {
            if v49 != 1 {
                v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(v48, v49);
                *((a0 + 32) as &u64) = v7.field_16;
                *((a0 + 16) as void*) = v7;
                return struct16 {
                    field_0: 2
                    field_8: v46
                };
            }
            v44 = *(v48 as &i8);
LABEL_4cb5f1:
            v1 = v44;
        }
        v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "-io-blksize");
        v50 = clap_builder::parser::error::MatchesError::unwrap("-io-blksize", &v10);
        if !v50 {
            v51 = 0;
            goto LABEL_4cb697;
        } else {
            v10 = uucore::parser::parse_size::parse_size_u64(*((v50 + 8) as &i64), *((v50 + 16) as &i64));
            if v10 as i32 == 3 {
                v49 = v11;
                if !v49 {
                    v2 = <alloc::string::String as core::clone::Clone>::clone(v50);
                }
                if v49 < 536870913 {
                    v51 = 1;
LABEL_4cb697:
                    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
                    v52 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v2);
                    if !v52 {
                        core::option::unwrap_failed("src/uu/split/src/split.rs"); /* do not return */
                    }
                    v33 = <alloc::string::String as core::clone::Clone>::clone(v52);
                    v53 = *(&v26 as &i128);
                    v5 = (&v29)[8] as i128;
                    *(&v3 as &i128) = (&v27)[8] as i128;
                    v2 = v53;
                    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "input");
                    v54 = clap_builder::parser::error::MatchesError::unwrap("input", &v7);
                    if !v54 {
                        core::option::unwrap_failed("src/uu/split/src/split.rs"); /* do not return */
                    }
                    v34 = <alloc::string::String as core::clone::Clone>::clone(v54);
                    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "filter");
                    v55 = clap_builder::parser::error::MatchesError::unwrap("filter", &v7);
                    if !v55 {
                        *(&v24 as &i64) = 0x8000000000000000;
                    } else {
                        v7 = <alloc::string::String as core::clone::Clone>::clone(v55);
                    }
                    v14 = v33;
                    v15 = v2;
                    v16 = v3 as i128;
                    v17 = v5;
                    v18 = v34;
                    v19 = v24 as i128;
                    v20 = v25;
                    v13 = v32;
                    v12 = v31;
                    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "verbose") as i32 == 2;
                    v23 = v1 as u8;
                    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "elide-empty-files") as i8;
                    v10 = v51;
                    v11 = v49;
                    v56 = v12 as i64;
                    if v56 <= 5 && amd64g_calculate_condition(6, 8, v56, 5, v57) as char {
                        v0 = 42;
                    }
                    memcpy(a0, &v10, 168);
                }
            }
            v2 = <alloc::string::String as core::clone::Clone>::clone(v50);
        }
    }
}
