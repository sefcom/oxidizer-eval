fn uu_numfmt::parse_options(a1: i64) -> : struct160 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x202]
    let v1: u8;  // [bp-0x201]
    let v2: u128;  // [bp-0x1f8]
    let v3: struct32;  // [bp-0x1f8]
    let v4: u128;  // [bp-0x1f0]
    let v5: u64;  // [bp-0x1e8]
    let v6: u64;  // [bp-0x1e0]
    let v7: alloc::string::String;  // [bp-0x1d8], Other Possible Types: struct32, struct48, Result<struct40, struct16>, u128
    let v8: Result<struct40, struct16>;  // [bp-0x1d8]
    let v9: Result<struct40, struct16>;  // [bp-0x1d8]
    let v10: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0x1d8]
    let v11: u64;  // [bp-0x1d8]
    let v12: Option<struct24>;  // [bp-0x1d8]
    let v13: Result<struct88, struct32>;  // [bp-0x1d8]
    let v15: Result<struct40, struct16>;  // [bp-0x1d8]
    let v16: void*;  // [bp-0x1d0], Other Possible Types: u64
    let v17: u64;  // [bp-0x1c8]
    let v18: u128;  // [bp-0x1b8]
    let v19: void*;  // [bp-0x1a8], Other Possible Types: u128
    let v20: u64;  // [bp-0x1a0]
    let v21: u128;  // [bp-0x198]
    let v22: u128;  // [bp-0x198]
    let v23: void*;  // [bp-0x188], Other Possible Types: u64
    let v24: u128;  // [bp-0x180]
    let v25: u64;  // [bp-0x170]
    let v26: u128;  // [bp-0x168]
    let v27: u64;  // [bp-0x158]
    let v28: u128;  // [bp-0x150]
    let v29: u64;  // [bp-0x140]
    let v30: u64;  // [bp-0x138]
    let v31: u128;  // [bp-0x130]
    let v32: i8;  // [bp-0x12f]
    let v33: u64;  // [bp-0x128]
    let v34: u64;  // [bp-0x120]
    let v35: u128;  // [bp-0x118]
    let v37: u128;  // [bp-0x108]
    let v38: u128;  // [bp-0xf8]
    let v40: u64;  // [bp-0xe8]
    let v42: struct24;  // [bp-0xd8], Other Possible Types: u128
    let v43: u64;  // [bp-0xc8]
    let v44: u128;  // [bp-0xb8]
    let v45: u64;  // [bp-0xa8]
    let v46: u64;  // [bp-0x98]
    let v47: u64;  // [bp-0x90]
    let v48: u128;  // [bp-0x88]
    let v49: u64;  // [bp-0x78]
    let v50: u128;  // [bp-0x68]
    let v51: u128;  // [bp-0x58]
    let v52: i8;  // [bp-0x40]
    let v54: i64;  // rax
    let v55: u64;  // rcx
    let v56: u8;  // r13b
    let v58: i64;  // rax
    let v59: u64;  // rcx
    let v60: core::fmt::Arguments;  // rax
    let v61: u128;  // xmm0
    let v62: i64;  // rax
    let v63: i64;  // rax
    let v64: void*;  // rax
    let v65: i64;  // rax
    let v66: i64;  // rax
    let v67: u64;  // rdx
    let v68: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v69: u8;  // r15b
    let v70: i64;  // rax
    let v71: u128;  // xmm1
    let v72: u64;  // rax
    let v73: u128;  // xmm0
    let v74: u128;  // xmm0
    let v75: u128;  // xmm0
    let v76: i64;  // rax
    let v77: void*;  // r15
    let v78: u32;  // r12d
    let v79: u8;  // r13b
    let v80: u64;  // rax
    let v81: i64;  // rax
    let v82: u8;  // al
    let v83: u128;  // xmm1
    let v84: u128;  // xmm2
    let v85: core::result::Result<isize, core::num::error::ParseIntError>;  // rax:rdx

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "from");
    v54 = clap_builder::parser::error::MatchesError::unwrap("from", &v7);
    if !v54 {
        core::option::unwrap_failed(); /* do not return */
    }
    uu_numfmt::parse_unit(*((v54 + 8) as &i64), *((v54 + 16) as &i64), v55);
    v56 = v31;
    if v30 != 0x8000000000000000 {
        return struct40 {
            field_0: 2
            field_8: v30
            field_16: v56
            field_17: v33
            field_24: <UNKNOWN>
        };
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "to");
    v58 = clap_builder::parser::error::MatchesError::unwrap("to", &v7);
    if !v58 {
        core::option::unwrap_failed(); /* do not return */
    }
    uu_numfmt::parse_unit(*((v58 + 8) as &i64), *((v58 + 16) as &i64), v55);
    if v30 != 0x8000000000000000 {
        v59 = *(&v32 as &i64);
        *((a0 + 24) as &u64) = v33;
        *((a0 + 17) as &u64) = v59;
        *((a0 + 8) as &u64) = v30;
        *((a0 + 16) as &u8) = v0;
    }
    v0 = v31;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "from-unit");
    v60 = clap_builder::parser::error::MatchesError::unwrap("from-unit", &v15);
    if !v60 {
        core::option::unwrap_failed(); /* do not return */
    }
    uu_numfmt::parse_unit_size(*((v60 + 8) as &i64), *((v60 + 16) as &i64), v55);
    v61 = *((&v15 as &char + 8) as &i128);
    if v15 as i64 == 0x8000000000000000 {
        v51 = *((&v15 as &char + 8) as &i128);
        v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "to-unit");
        v62 = clap_builder::parser::error::MatchesError::unwrap("to-unit", &v8);
        if !v62 {
            core::option::unwrap_failed(); /* do not return */
        }
        uu_numfmt::parse_unit_size(*((v62 + 8) as &i64), *((v62 + 16) as &i64), v55);
        v61 = *((&v8 as &char + 8) as &i128);
        if v8 as i64 == 0x8000000000000000 {
            v50 = *((&v8 as &char + 8) as &i128);
            v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "padding");
            v63 = clap_builder::parser::error::MatchesError::unwrap("padding", &v9);
            if v63 && (v85 = core::num::<impl core::str::traits::FromStr for isize>::from_str(&v9, *((v63 + 8) as &i64)), v9 as i8 || !((v16 = v64, v16))) {
                uu_numfmt::parse_options::{{closure}}(&v9, *((v63 + 8) as &i64), *((v63 + 16) as &i64));
                if v9 as i64 == 0x8000000000000000 {
                    v16 = v64;
                    goto LABEL_4c070c;
                }
            } else {
LABEL_4c070c:
                v47 = v64;
                if clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "header") as i8 == 2 {
                    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "header");
                    v65 = clap_builder::parser::error::MatchesError::unwrap("header", &v9);
                    if !v65 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v10 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v65 + 8) as &i64), *((v65 + 16) as &i64));
                    if !((v10 as i8 || !v16) && (uu_numfmt::parse_options::{{closure}}(&v10, *((v65 + 8) as &i64), *((v65 + 16) as &i64)), v10 as i64 != 0x8000000000000000)) {
                        goto LABEL_4c07b9;
                    }
                } else {
LABEL_4c07b9:
                    v46 = v16;
                    v1 = v56;
                    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "field");
                    v66 = clap_builder::parser::error::MatchesError::unwrap("field", &v7);
                    if !v66 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v7 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(*((v66 + 8) as &i64), *((v66 + 16) as &i64));
                    v19 = 0;
                    v20 = *((v66 + 16) as &i64);
                    v21 = 1;
                    v21 = v22 & 0xffffffffffffffffffffffffffff0000 | 1;
                    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v7), a1) {
                        v68 = alloc::alloc::Global::alloc_impl(0x10, a1, v67) as u64;
                        v69 = v0;
                        *(v68 as &i64) = 1;
                        *((v68 + 8) as &i64) = -1;
                        v42 = alloc::slice::hack::into_vec(v68, 1);
                    } else {
                        v12 = uucore::features::ranges::Range::from_list(*((v66 + 8) as &i64), v20);
                        v30 = *((&v12 as &char + 8) as &i128);
                        v33 = *((&v12 as &char + 24) as &i64);
                        v69 = v0;
                        match v12 {
                            Some(_) => {
                                *((a0 + 24) as &u64) = v33;
                                *((a0 + 8) as &u128) = v30;
                            },
                            None => {
                                v43 = v33;
                                v42 = v30;
                            },
                        }
                    }
                    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "format");
                    v70 = clap_builder::parser::error::MatchesError::unwrap("format", &v7);
                    if v70 {
                        v13 = <uu_numfmt::options::FormatOptions as core::str::traits::FromStr>::from_str(*((v70 + 8) as &i64), *((v70 + 16) as &i64));
                        v2 = *((&v13 as &char + 8) as &i128);
                        v5 = *((&v13 as &char + 24) as &i64);
                        match v13 {
                            Err(_) => {
                                return struct32 {
                                    field_0: 2
                                    field_8: v2
                                    field_24: v5
                                };
                            },
                            Ok(_) => {
                                v40 = v23;
                                v71 = *((&v13 as &char + 48) as &i128);
                                v38 = v21;
                                v37 = v71;
                                v35 = v18;
                                v31 = v2;
                                v34 = v5;
                                v30 = v13 as i64;
                                if v69 != 5 && v23 as u8 {
                                    <T as alloc::slice::hack::ConvertVec>::to_vec("grouping cannot be combined with --to", v23);
                                    *((a0 + 24) as &u64) = v17;
                                    v73 = v13 as i128;
                                }
                            },
                        }
                    }
                    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "delimiter");
                    v72 = clap_builder::parser::error::MatchesError::unwrap("delimiter", &v7);
                    v7 = struct32 {
                        field_0: 0
                        field_8: 0x8000000000000000
                        field_16: *(&v52 as &i128)
                    };
                    v3 = core::option::Option<T>::map_or(v72, &v7);
                    v44 = *(&v3.field_8 as &i128);
                    v45 = v6;
                    if v3.field_0 {
                        v74 = v44;
                        return struct32 {
                            field_0: 2
                            field_8: v75
                            field_24: v45
                        };
                    }
                    v49 = v45;
                    v48 = v44;
                    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "round");
                    v76 = clap_builder::parser::error::MatchesError::unwrap("round", &v7);
                    if !v76 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v77 = *((v76 + 8) as &i64);
                    v78 = *((v76 + 16) as &i64);
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v77, v78, "up") as i8 {
                        v79 = 1;
                        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v77, v78, "down") as i8 {
                            v79 = 2;
                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v77, v78, "from-zero") as i8 {
                                v79 = 3;
                                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v77, v78, "towards-zero") as i8 {
                                    v79 = 4;
                                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v77, v78, "nearest") as i8 {
                                        panic!("internal error: entered unreachable code: Should be restricted by clap");
                                    }
                                }
                            }
                        }
                    }
                    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix");
                    v80 = clap_builder::parser::error::MatchesError::unwrap("suffix", &v7);
                    if v80 {
                        v7 = <alloc::string::String as core::clone::Clone>::clone(v80);
                        v5 = v17;
                        v2 = *(&v7.vec.buf.cap as &i128);
                    } else {
                        v2 = 0x8000000000000000;
                        v4 = *(&v52 as &i128);
                    }
                    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "invalid");
                    v81 = clap_builder::parser::error::MatchesError::unwrap("invalid", &v7);
                    if !v81 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v7 = <uu_numfmt::options::InvalidModes as core::str::traits::FromStr>::from_str(*((v81 + 8) as &i64), *((v81 + 16) as &i64));
                    v82 = core::result::Result<T,E>::unwrap(&v7) as i32;
                    v25 = v43;
                    v24 = v42;
                    v26 = v48;
                    v27 = v49;
                    v28 = v2;
                    v29 = v5;
                    v83 = *(&v33 as &i128);
                    v84 = v35;
                    v7 = v30;
                    v17 = v83;
                    v18 = v84;
                    v19 = v37;
                    v21 = v38;
                    v23 = v40;
                    memcpy(a0, &v7, 160);
                    *((a0 + 160) as &u64) = v50 CONCAT v51;
                    *((a0 + 176) as &u8) = v1;
                    *((a0 + 177) as &u8) = v0;
                    *((a0 + 184) as &u64) = v47;
                    *((a0 + 192) as &u64) = v46;
                    *((a0 + 200) as &u8) = v82;
                    *((a0 + 201) as &u8) = v79;
                    return a0;
                }
            }
        }
    }
    *((a0 + 8) as &u64) = v11;
    *((a0 + 16) as &u128) = v61;
}
