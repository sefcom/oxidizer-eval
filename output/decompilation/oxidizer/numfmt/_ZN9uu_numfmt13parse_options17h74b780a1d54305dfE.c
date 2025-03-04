fn uu_numfmt::parse_options(a0: &struct196, a1: &struct56) -> u64 {
    let v0: i8;  // [sp-0x202]
    let v1: i8;  // [sp-0x201]
    let v2: iNone;  // [sp-0x1f8], Other Possible Types: struct24, unsigned long
    let v3: Option<struct32>;  // [bp-0x1f8], Other Possible Types: unsigned long, int
    let v4: i64;  // [sp-0x1e8]
    let v5: Result<struct24, struct1>;  // [sp-0x1d8], Other Possible Types: unsigned long, struct24, struct8, struct48, int
    let v6: i64;  // [sp-0x1d0]
    let v7: iNone;  // [bp-0x1c8], Other Possible Types: unsigned long
    let v8: iNone;  // [sp-0x1b8]
    let v9: iNone;  // [bp-0x1a8], Other Possible Types: unsigned long
    let v10: i64;  // [sp-0x1a0]
    let v11: iNone;  // [bp-0x198], Other Possible Types: unsigned short
    let v12: i64;  // [sp-0x188]
    let v13: iNone;  // [sp-0x180]
    let v14: i64;  // [sp-0x170]
    let v15: iNone;  // [sp-0x168]
    let v16: i64;  // [sp-0x158]
    let v17: iNone;  // [sp-0x150]
    let v18: i64;  // [sp-0x140]
    let v19: i64;  // [sp-0x138], Other Possible Types: struct8, Result<struct24, struct1>
    let v20: iNone;  // [bp-0x138], Other Possible Types: unsigned long, Result<struct24, struct1>
    let v21: i64;  // [sp-0x128]
    let v22: i64;  // [sp-0x120]
    let v23: i64;  // [sp-0x118], Other Possible Types: int
    let v24: iNone;  // [sp-0x108]
    let v25: iNone;  // [sp-0xf8], Other Possible Types: unsigned long
    let v27: i64;  // [bp-0xe8], Other Possible Types: unsigned short
    let v28: struct24;  // [sp-0xd8], Other Possible Types: int, Result<struct24, struct1>
    let v29: i64;  // [sp-0xc8]
    let v30: iNone;  // [sp-0xb8]
    let v31: i64;  // [sp-0xa8]
    let v32: i64;  // [sp-0x98]
    let v33: i64;  // [sp-0x90]
    let v34: iNone;  // [sp-0x88]
    let v35: i64;  // [sp-0x78]
    let v36: iNone;  // [sp-0x68]
    let v37: iNone;  // [sp-0x58]
    let v38: i8;  // [bp-0x40]
    let v40: i64;  // rax
    let v41: i64;  // rax
    let v42: i8;  // r13b
    let v43: i64;  // rcx
    let v44: i64;  // rax
    let v48: i64;  // rax
    let v49: i64;  // rax
    let v51: i64;  // rax
    let v53: i64;  // rax
    let v54: i64;  // rax
    let v55: i64;  // rax
    let v56: i64;  // rax
    let v57: i64;  // rax
    let v58: i64;  // r15
    let v60: i64;  // rax
    let v61: i8;  // r15b
    let v62: struct8;  // 4098
    let v63: i64;  // rax
    let v64: i64;  // rcx
    let v65: iNone;  // xmm1
    let v66: i64;  // 4098
    let v67: i64;  // rax
    let v68: i64;  // r15
    let v69: i64;  // r12
    let v70: i64;  // r13
    let v71: i64;  // rax
    let v72: i64;  // rax
    let v74: iNone;  // xmm1
    let v75: iNone;  // xmm2

    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "from");
    v40 = clap_builder::parser::error::MatchesError::unwrap("from", &v5);
    if !v40 {
        core::option::unwrap_failed("src/uu/numfmt/src/numfmt.rs"); /* do not return */
    }
    v19 = uu_numfmt::parse_unit(*((v40 + 8) as &i64), *((v40 + 16) as &i64));
    v41 = v19;
    v42 = *((&v19 as &char + 8) as &i8);
    if v41 != 0x8000000000000000 {
        v43 = *((&v19 as &char + 9) as &i64);
        *((a0 + 24) as &unsigned long) = v21;
        *((a0 + 17) as &unsigned long) = v43;
        *((a0 + 8) as &unsigned long) = v41;
        *((a0 + 16) as &char) = v42;
    }
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "to");
    v44 = clap_builder::parser::error::MatchesError::unwrap("to", &v5);
    if !v44 {
        core::option::unwrap_failed("src/uu/numfmt/src/numfmt.rs"); /* do not return */
    }
    v20 = uu_numfmt::parse_unit(*((v44 + 8) as &i64), *((v44 + 16) as &i64));
    if v19 != 0x8000000000000000 {
        return struct33 {
            field_0: 2
            field_8: v45
            field_16: v0
            field_17: v47
            field_24: <UNKNOWN>
        };
    }
    v0 = *((&v20 as &char + 8) as &i8);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "from-unit");
    v48 = clap_builder::parser::error::MatchesError::unwrap("from-unit", &v5);
    if !v48 {
        core::option::unwrap_failed("src/uu/numfmt/src/numfmt.rs"); /* do not return */
    }
    v5 = uu_numfmt::parse_unit_size(*((v48 + 8) as &i64), *((v48 + 16) as &i64));
    v49 = v5;
    if v49 != 0x8000000000000000 {
        *((a0 + 8) as &unsigned long) = v49;
        *((a0 + 16) as void*) = v37;
    }
    v37 = *((&v5 as &char + 8) as &i128);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "to-unit");
    v51 = clap_builder::parser::error::MatchesError::unwrap("to-unit", &v5);
    if !v51 {
        core::option::unwrap_failed("src/uu/numfmt/src/numfmt.rs"); /* do not return */
    }
    v5 = uu_numfmt::parse_unit_size(*((v51 + 8) as &i64), *((v51 + 16) as &i64));
    v49 = v5;
    if v49 == 0x8000000000000000 {
        v36 = *((&v5 as &char + 8) as &i128);
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "padding");
        v53 = clap_builder::parser::error::MatchesError::unwrap("padding", &v5);
        if !v53 {
            v54 = 0;
        } else {
            v5 = core::num::<impl core::str::traits::FromStr for isize>::from_str(*((v53 + 8) as &i64), *((v53 + 16) as &i64));
            if v5 as i8 || (v54 = v6, !v54) {
                v5 = uu_numfmt::parse_options::{{closure}}(*((v53 + 8) as &i64), *((v53 + 16) as &i64));
                if v5 != 0x8000000000000000 {
                    *((a0 + 8) as &unsigned long) = v49;
                    *((a0 + 16) as void*) = v37;
                }
                v54 = v6;
            }
        }
        v33 = v54;
        if clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "header") as i8 != 2 {
            v55 = 0;
        } else {
            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "header");
            v56 = clap_builder::parser::error::MatchesError::unwrap("header", &v5);
            if !v56 {
                core::option::unwrap_failed("src/uu/numfmt/src/numfmt.rs"); /* do not return */
            }
            v5 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v56 + 8) as &i64), *((v56 + 16) as &i64));
            if v5 as i8 || (v55 = v6, !v55) {
                v5 = uu_numfmt::parse_options::{{closure}}(*((v56 + 8) as &i64), *((v56 + 16) as &i64));
                v49 = v5;
                if v49 != 0x8000000000000000 {
                    *((a0 + 8) as &unsigned long) = v49;
                    *((a0 + 16) as void*) = v37;
                }
                v55 = v6;
            }
        }
        v32 = v55;
        v1 = v42;
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "field");
        v57 = clap_builder::parser::error::MatchesError::unwrap("field", &v5);
        v58 = core::option::unwrap(v57);
        v5 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v58, v10);
        v9 = 0;
        v10 = *((v57 + 16) as &i64);
        *(&v11 as &i16) = 1;
        if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v5)) {
            v60 = alloc::alloc::Global::alloc_impl(16);
            v61 = v0;
            *(v60 as &i64) = 1;
            *((v60 + 8) as &i64) = -1;
            v28 = alloc::slice::hack::into_vec(v60, 1);
        } else {
            v5 = uucore::features::ranges::Range::from_list(v58, v10);
            v62 = v5;
            *(&v20 as &i128) = *(&v5.field_8 as &i128);
            v20 = v5.field_24;
            v61 = v0;
            if v62 {
                *((a0 + 24) as &unsigned long) = v20;
                *((a0 + 8) as &i128) = v20 as i128;
            }
            v28 = v20;
        }
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "format");
        v63 = clap_builder::parser::error::MatchesError::unwrap("format", &v5);
        if !v63 {
            *(&v27 as &i16) = 0;
            v19 = 0;
            v20 = 0;
            v23 = 0;
            v23 = 1;
            v24 = 0;
            v25 = 1;
            v25 = 0;
        } else {
            v5 = <uu_numfmt::options::FormatOptions as core::str::traits::FromStr>::from_str(*((v63 + 8) as &i64), *((v63 + 16) as &i64));
            *(&v3 as &i128) = *((&v5 as &char + 8) as &i128);
            v4 = *((&v5 as &char + 24) as &i64);
            if v19 == 2 {
                return struct32 {
                    field_0: 2
                    field_8: v3 as i128
                    field_24: v4
                };
            }
            v64 = v12;
            v27 = v64;
            v65 = *(&v9 as &i128);
            *(&v25 as &i128) = *(&v11 as &i128);
            v24 = v65;
            v23 = v8;
            *(&v20 as &i128) = v3 as i128;
            v22 = v4;
            v19 = v5;
            if v61 != 5 && v64 as u8 {
                v5 = <T as alloc::slice::hack::ConvertVec>::to_vec("grouping cannot be combined with --to");
                *((a0 + 24) as &unsigned long) = v7;
            }
        }
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "delimiter");
        v6 = 0x8000000000000000;
        *(&v7 as &i128) = *(&v38 as &i128);
        v5 = 0;
        v3 = core::option::Option<T>::map_or(clap_builder::parser::error::MatchesError::unwrap(&g_422557, 9, &v5), &v5);
        v66 = v3;
        v30 = *((&v3 as &char + 8) as &i128);
        v31 = *((&v3 as &char + 24) as &i64);
        if v66 {
            *((a0 + 24) as &unsigned long) = v31;
        }
        v35 = v31;
        v34 = v30;
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "round");
        v67 = clap_builder::parser::error::MatchesError::unwrap("round", &v5);
        v68 = core::option::unwrap(v67);
        v69 = *((v67 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v68, v69, "up") as i8 {
            v70 = 0;
        } else {
            v70 = &v5 & -0x100 | 1;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v68, v69, "down") as i8 {
                v70 = v70 & -0x100 | 2;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v68, v69, "from-zero") as i8 {
                    v70 = v70 & -0x100 | 3;
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v68, v69, "towards-zero") as i8 {
                        v70 = v70 & -0x100 | 4;
                        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v68, v69, "nearest") as i8 {
                            panic!("internal error: entered unreachable code: Should be restricted by clap");
                        }
                    }
                }
            }
        }
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix");
        v71 = clap_builder::parser::error::MatchesError::unwrap("suffix", &v5);
        if !v71 {
            v2 = 0x8000000000000000;
            *(&v2 as &i128) = *(&v38 as &i128);
        } else {
            v5 = <alloc::string::String as core::clone::Clone>::clone(v71);
            v2 = v5;
        }
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "invalid");
        v72 = clap_builder::parser::error::MatchesError::unwrap("invalid", &v5);
        if v72 {
            v5 = <uu_numfmt::options::InvalidModes as core::str::traits::FromStr>::from_str(*((v72 + 8) as &i64), *((v72 + 16) as &i64));
            v14 = v29;
            v13 = v28;
            v15 = v34;
            v16 = v35;
            v17 = v2 as i128;
            v18 = v4;
            v74 = (&v20)[16] as i128;
            v75 = v23 as i128;
            *(&v5 as &i128) = v20 as i128;
            v7 = v74;
            v8 = v75;
            v9 = v24;
            *(&v11 as &i128) = v25 as i128;
            v12 = v27;
            memcpy(a0, &v5, 160);
            *((a0 + 160) as &u64) = v36 as u64 CONCAT v37 as u64;
            *((a0 + 176) as &char) = v1;
            *((a0 + 177) as &char) = v0;
            *((a0 + 184) as &unsigned long) = v33;
            *((a0 + 192) as &unsigned long) = v32;
            *((a0 + 200) as &u8) = core::result::Result<T,E>::unwrap(&v5);
            *((a0 + 201) as &u8) = v70 as u8;
        }
        core::option::unwrap_failed("src/uu/numfmt/src/numfmt.rs"); /* do not return */
    }
}
