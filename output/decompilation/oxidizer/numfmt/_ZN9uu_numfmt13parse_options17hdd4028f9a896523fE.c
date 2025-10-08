fn uu_numfmt::parse_options(a1: &struct56) -> : struct197 {
    let a0: void*;  // rdi
    let v0: i8;  // [bp-0x185]
    let v1: u32;  // [bp-0x184]
    let v2: alloc::string::String;  // [bp-0x178], Other Possible Types: struct32, Result<struct40, struct16>
    let v3: Result<struct40, struct16>;  // [bp-0x178], Other Possible Types: u640
    let v4: struct48;  // [bp-0x178], Other Possible Types: u64
    let v5: Result<struct88, struct32>;  // [bp-0x178]
    let v6: void*;  // [bp-0x170]
    let v7: void*;  // [bp-0x170]
    let v8: i64;  // [bp-0x168]
    let v9: iNone;  // [bp-0x158]
    let v10: void*;  // [bp-0x148]
    let v11: u64;  // [bp-0x140]
    let v12: u16;  // [bp-0x138]
    let v13: u64;  // [bp-0x128]
    let v14: u64;  // [bp-0x120]
    let v15: u128;  // [bp-0x118]
    let v16: struct32;  // [bp-0x118]
    let v17: u64;  // [bp-0x118]
    let v18: u128;  // [bp-0x110]
    let v19: i64;  // [bp-0x108]
    let v20: u64;  // [bp-0x100]
    let v21: u64;  // [bp-0xf8]
    let v22: Result<struct24, struct9>;  // [bp-0xf0], Other Possible Types: u64
    let v23: Result<struct24, struct9>;  // [bp-0xf0], Other Possible Types: u64
    let v24: u128;  // [bp-0xe8]
    let v25: u64;  // [bp-0xe0]
    let v26: i64;  // [bp-0xd8]
    let v27: iNone;  // [bp-0xd0]
    let v30: u128;  // [bp-0xc0]
    let v31: u128;  // [bp-0xb0]
    let v34: u64;  // [bp-0xa0]
    let v36: iNone;  // [bp-0x98]
    let v37: u64;  // [bp-0x88]
    let v38: void*;  // [bp-0x78]
    let v39: void*;  // [bp-0x70]
    let v40: void*;  // [bp-0x68]
    let v41: void*;  // [bp-0x60]
    let v42: iNone;  // [bp-0x58]
    let v43: u64;  // [bp-0x48]
    let v44: i8;  // [bp-0x40]
    let v46: core::fmt::rt::Argument;  // rax
    let v47: core::fmt::rt::Argument;  // bpl
    let v48: i64;  // rax
    let v49: i8;  // r13b
    let v50: i64;  // rax
    let v51: i64;  // rax
    let v52: i64;  // rax
    let v54: i64;  // rax
    let v56: i64;  // rax
    let v57: i64;  // rax
    let v58: core::option::Option<&str>;  // r12b
    let v59: i64;  // r15
    let v60: u64;  // r13
    let v61: i64;  // rax
    let v62: iNone;  // xmm1
    let v63: iNone;  // xmm0
    let v64: u128;  // xmm0
    let v65: u64;  // rax
    let v66: iNone;  // xmm0
    let v67: void*;  // rax
    let v68: void*;  // r13
    let v69: u64;  // r12
    let v70: u32;  // ecx
    let v71: u64;  // rax
    let v72: i64;  // rax
    let v73: u8;  // al
    let v74: u8;  // al
    let v75: iNone;  // xmm0
    let v76: iNone;  // xmm2
    let v77: core::fmt::rt::Argument;  // xmm0
    let v78: core::fmt::rt::Argument;  // rcx
    let v79: core::fmt::rt::Argument;  // rcx
    let v80: core::result::Result<isize, core::num::error::ParseIntError>;  // rax:rdx
    let v81: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "from");
    v46 = clap_builder::parser::error::MatchesError::unwrap("from", &v2);
    core::option::unwrap(v46);
    v22 = uu_numfmt::parse_unit(*((v46 + 8) as &i64), *((v46 + 16) as &i64));
    v47 = *((&v22 as &char + 8) as &i8);
    if !((((0 ^ v22 as i64) & (0 ^ -(v23))) >> 63) as char) {
        v79 = *((&v22 as &char + 9) as &i64);
        *(&a0[24] as &u64) = v25;
        *(&a0[17] as &core::fmt::rt::Argument) = v79;
        *(&a0[8] as &i64) = v22 as i64;
        *(&a0[16] as &core::fmt::rt::Argument) = v47;
    }
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "to");
    v48 = clap_builder::parser::error::MatchesError::unwrap("to", &v2);
    core::option::unwrap(v48);
    v23 = uu_numfmt::parse_unit(*((v48 + 8) as &i64), *((v48 + 16) as &i64));
    v49 = *((&v23 as &char + 8) as &i8);
    match v23 {
        Ok(_) => {
            v78 = *((&v23 as &char + 9) as &i64);
            *(&a0[24] as &u64) = v25;
            *(&a0[17] as &core::fmt::rt::Argument) = v78;
            *(&a0[8] as &i64) = v23 as i64;
            *(&a0[16] as &char) = v49;
        },
        Err(_) => {
            v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "from-unit");
            v50 = clap_builder::parser::error::MatchesError::unwrap("from-unit", &v2);
            core::option::unwrap(v50);
            v3 = uu_numfmt::parse_unit_size(*((v50 + 8) as &i64), *((v50 + 16) as &i64));
            if let Err(_) = v3 {
                v41 = v7;
                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "to-unit");
                v51 = clap_builder::parser::error::MatchesError::unwrap("to-unit", &v2);
                core::option::unwrap(v51);
                v3 = uu_numfmt::parse_unit_size(*((v51 + 8) as &i64), *((v51 + 16) as &i64));
                if let Err(_) = v3 {
                    v40 = v7;
                    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "padding");
                    v52 = clap_builder::parser::error::MatchesError::unwrap("padding", &v3);
                    if v52 {
                        v80 = core::num::<impl isize>::from_ascii_radix(&v3, *((v52 + 8) as &i64), *((v52 + 16) as &i64) as i32);
                        v6 = v7;
                        if ((!v6) as u8 as u8 | v3 as i8) != 1 {
                            goto LABEL_46cb2a;
                        }
                        uu_numfmt::parse_options::{{closure}}(&v3, *((v52 + 8) as &i64), *((v52 + 16) as &i64));
                        if v3 as i64 == 0x8000000000000000 {
                            v6 = v7;
LABEL_46cb2a:
                            v39 = v6;
                            if clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "header") as u8 == 2 {
                                v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "header");
                                v54 = clap_builder::parser::error::MatchesError::unwrap("header", &v3);
                                core::option::unwrap(v54);
                                v81 = core::num::<impl usize>::from_ascii_radix(&v3, *((v54 + 8) as &i64), *((v54 + 16) as &i64) as i32);
                                v6 = v7;
                                if !!v6 && !v3 as i8 {
                                    goto LABEL_46cc06;
                                }
                                uu_numfmt::parse_options::{{closure}}(&v3, *((v54 + 8) as &i64), *((v54 + 16) as &i64));
                                if v3 as i64 == 0x8000000000000000 {
                                    v6 = v7;
                                    goto LABEL_46cc06;
                                }
                            } else {
                                v6 = 0;
LABEL_46cc06:
                                v38 = v6;
                                v0 = v49;
                                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "field");
                                v56 = clap_builder::parser::error::MatchesError::unwrap("field", &v2);
                                core::option::unwrap(v56);
                                v4 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(*((v56 + 8) as &i64), *((v56 + 16) as &i64));
                                v10 = 0;
                                v11 = *((v56 + 16) as &i64);
                                v12 = 1;
                                if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v4) as i32 as u32 as u64, a1) as u8 {
                                    v57 = alloc::alloc::Global::alloc_impl(8, 16);
                                    v58 = v0;
                                    v59 = v57;
                                    *(v57 as &i64) = 1;
                                    *((v57 + 8) as &i64) = -1;
                                    v21 = 1;
                                    v60 = 1;
                                } else {
                                    uucore::features::ranges::Range::from_list(&v4, *((v56 + 8) as &i64), v11);
                                    v60 = v7;
                                    v59 = v8;
                                    v58 = v0;
                                    if (v4.field_0 as i8 & 1) {
                                        return struct32 {
                                            field_0: 2
                                            field_8: v7
                                            field_16: v8
                                            field_24: v21
                                        };
                                    }
                                    v21 = v4.field_24;
                                }
                                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "format");
                                v61 = clap_builder::parser::error::MatchesError::unwrap("format", &v2);
                                if v61 {
                                    v5 = <uu_numfmt::options::FormatOptions as core::str::traits::FromStr>::from_str(*((v61 + 8) as &i64), *((v61 + 16) as &i64));
                                    v15 = *(&v7 as &i128) as u128;
                                    v19 = *((&v5 as &char + 24) as &i64);
                                    match v5 {
                                        Err(_) => {
                                            return struct32 {
                                                field_0: 2
                                                field_8: v15
                                                field_24: v19
                                            };
                                        },
                                        Ok(_) => {
                                            v34 = v13;
                                            v62 = *((&v5 as &char + 48) as &i128);
                                            v31 = *((&v5 as &char + 64) as &i128) as u128;
                                            v30 = v62;
                                            v27 = v9;
                                            v24 = v15;
                                            v26 = v19;
                                            v22 = v5 as i64;
                                            if (v13 as u8 & 1) && v58 != 5 {
                                                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v5, "grouping cannot be combined with --to");
                                                v63 = v5 as i128;
                                                return struct32 {
                                                    field_0: 2
                                                    field_8: v64
                                                    field_24: v8
                                                };
                                            }
                                        },
                                    }
                                }
                                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "delimiter");
                                v65 = clap_builder::parser::error::MatchesError::unwrap("delimiter", &v2);
                                v2 = struct32 {
                                    field_0: 0
                                    field_8: 0x8000000000000000
                                    field_16: *(&v44 as &i128)
                                };
                                v16 = core::option::Option<T>::map_or(v65, &v2);
                                v36 = *(&v16.field_8 as &i128);
                                v37 = v20;
                                if v16.field_0 as i32 == 1 {
                                    *(&a0[24] as &u64) = v37;
                                    v66 = v36;
                                }
                                v14 = v60;
                                v43 = v37;
                                v42 = v36;
                                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "round");
                                v67 = clap_builder::parser::error::MatchesError::unwrap("round", &v2);
                                core::option::unwrap(v67);
                                v68 = v67[8] as i64;
                                v69 = v67[16] as i64;
                                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v68, v69, "up") as u8 {
                                    v1 = v70 & -0x100 | 1;
                                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v68, v69, "down") as u8 {
                                        v1 = v70 & -0x100 | 2;
                                        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v68, v69, "from-zero") as u8 {
                                            v1 = v70 & -0x100 | 3;
                                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v68, v69, "towards-zero") as u8 {
                                                v1 = v70 & -0x100 | 4;
                                                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v68, v69, "nearest") as u8 {
                                                    panic!("internal error: entered unreachable code: Should be restricted by clap");
                                                }
                                            }
                                        }
                                    }
                                }
                                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix");
                                v71 = clap_builder::parser::error::MatchesError::unwrap("suffix", &v2);
                                if v71 {
                                    v2 = <alloc::string::String as core::clone::Clone>::clone(v71);
                                    v19 = v8;
                                    v15 = *(&v2.vec.buf.inner.cap as &i128) as u128;
                                } else {
                                    v17 = 0x8000000000000000;
                                    v18 = *(&v44 as &i128) as u128;
                                }
                                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "invalid");
                                v72 = clap_builder::parser::error::MatchesError::unwrap("invalid", &v2);
                                core::option::unwrap(v72);
                                v2 = <uu_numfmt::options::InvalidModes as core::str::traits::FromStr>::from_str(*((v72 + 8) as &i64), *((v72 + 16) as &i64));
                                v73 = core::result::Result<T,E>::unwrap(&v2) as u32 as u8;
                                v74 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "zero-terminated") as u8;
                                v75 = v23 as i128;
                                v76 = v27 as i128;
                                return struct208 {
                                    field_0: v75
                                    field_16: *((&v23 as &char + 16) as &i128)
                                    field_32: v76
                                    field_48: v30
                                    field_64: v31
                                    field_80: v34
                                    field_88: v14
                                    field_96: v59
                                    field_104: v21
                                    field_112: v42
                                    field_128: v43
                                    field_136: v15
                                    field_152: v19
                                    field_160: v41
                                    field_168: v40
                                    field_176: v47
                                    field_177: v0
                                    field_184: v39
                                    field_192: v38
                                    field_200: v74
                                    field_201: v73
                                    field_202: v1 as u8
                                };
                            }
                        }
                    } else {
                        v6 = 0;
                        goto LABEL_46cb2a;
                    }
                }
            }
            v77 = *((&v3 as &char + 8) as &i128);
            *(&a0[8] as &u64) = v4;
            *(&a0[16] as &core::fmt::rt::Argument) = v77;
        },
    }
}
