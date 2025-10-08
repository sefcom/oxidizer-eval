fn uu_od::OdOptions::new(a0: i64, a1: u64, a2: &u64, a3: u32) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x178], Other Possible Types: u128
    let v1: struct40;  // [bp-0x178], Other Possible Types: u128
    let v2: struct24;  // [bp-0x178], Other Possible Types: u128
    let v4: void*;  // [bp-0x168], Other Possible Types: u64
    let v5: u32;  // [bp-0x160]
    let v6: void*;  // [bp-0x158]
    let v7: u64;  // [bp-0x150]
    let v8: struct32;  // [bp-0x148], Other Possible Types: struct24, u64
    let v9: u64;  // [bp-0x140]
    let v10: u64;  // [bp-0x140]
    let v11: void*;  // [bp-0x138]
    let v12: u64;  // [bp-0x130]
    let v13: u64;  // [bp-0x120]
    let v14: u64;  // [bp-0x118]
    let v15: void*;  // [bp-0x110]
    let v16: u64;  // [bp-0x108]
    let v17: u32;  // [bp-0xfc]
    let v18: alloc::string::String;  // [bp-0xf8], Other Possible Types: u128
    let v19: struct32;  // [bp-0xf8]
    let v21: u128;  // [bp-0xe8]
    let v22: u32;  // [bp-0xe0]
    let v23: void*;  // [bp-0xd8]
    let v24: u64;  // [bp-0xd0]
    let v25: u128;  // [bp-0xc8]
    let v26: u64;  // [bp-0xc8]
    let v27: i64;  // [bp-0xc0]
    let v28: u64;  // [bp-0xb8]
    let v29: void*;  // [bp-0xb0]
    let v30: u64;  // [bp-0xa8]
    let v31: u64;  // [bp-0xa0]
    let v32: u64;  // [bp-0x98]
    let v33: i64;  // [bp-0x90]
    let v34: u8;  // [bp-0x78]
    let v35: u64;  // [bp-0x68]
    let v36: u8;  // [bp-0x60]
    let v37: u64;  // [bp-0x50]
    let v38: u8;  // [bp-0x48]
    let v39: i8;  // [bp-0x38]
    let v41: i64;  // rax
    let v42: u32;  // ecx
    let v44: u64;  // rax
    let v47: i64;  // rax
    let v49: u128;  // xmm0
    let v50: i64;  // rax
    let v51: u128;  // xmm0
    let v52: void*;  // r14
    let v53: u64;  // r15
    let v54: i64;  // rbp
    let v55: u64;  // rbp
    let v56: u64;  // rax
    let v57: u64;  // rdx
    let v58: u8;  // al
    let v59: i64;  // r13
    let v60: u64;  // r13
    let v61: i64;  // rax
    let v62: u8;  // cl
    let v63: u64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "endian");
    v41 = clap_builder::parser::error::MatchesError::unwrap("endian", &v0);
    if v41 {
        v33 = v41;
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v41 + 8) as &i64), *((v41 + 16) as &i64), "little") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v41 + 8) as &i64), *((v41 + 16) as &i64), "big") {
            goto LABEL_46b9d0;
        }
        v18 = format!("Invalid argument --endian={}", &v33);
        v22 = 1;
        alloc::boxed::Box<T>::new(&v18);
    } else {
LABEL_46b9d0:
        v17 = v42;
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "skip-bytes");
        v47 = clap_builder::parser::error::MatchesError::unwrap("skip-bytes", &v0);
        if v47 {
            v19 = uu_od::parse_nrofbytes::parse_number_of_bytes(*((v47 + 8) as &i64), *((v47 + 16) as &i64));
            if v19.field_0 as i32 != 4 {
                uu_od::format_error_message(&v34, v19.field_0 as i64, *((v47 + 8) as &i64), *((v47 + 16) as &i64), "skip-bytes");
                v5 = 1;
                v0 = v34;
                v4 = v35;
                return struct24 {
                    field_0: 2
                    field_8: alloc::boxed::Box<T>::new(&v0 as u640) as u64
                    field_16: &g_503990
                };
            }
        }
        v0 = uu_od::parse_inputs::parse_inputs(a1);
        if v6 == 3 {
            v8 = v2;
            uu_od::OdOptions::new::{{closure}}(&v8);
        } else {
            v49 = v1.field_0;
            v21 = *(&v1.field_16 as &i128);
            v18 = v49;
            v23 = v6;
            v32 = v7;
            v24 = v32;
            v15 = v23;
            if v23 == 2 {
                v28 = v21;
                v25 = v18;
                v29 = 0;
            } else {
                v16 = *((&v21 as &char + 8) as &i64);
                v50 = alloc::alloc::Global::alloc_impl(8, 24);
                v51 = v18;
                *((v50 + 16) as &i64) = v21;
                *(v50 as &u128) = v51;
                v26 = 1;
                v27 = v50;
                v28 = 1;
                v29 = v15;
            }
            v8 = uu_od::parse_formats::parse_format_flags(a2, a3);
            if v8.field_0 as i32 == 1 {
                v4 = v12;
                v0 = *((&v8.field_0 as &char + 8) as &i128);
                v5 = 1;
                alloc::boxed::Box<T>::new(&v0);
            } else {
                v14 = v9;
                if !((((0 ^ v9) & (0 ^ -(v9))) >> 63) as char) {
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "width");
                    v54 = clap_builder::parser::error::MatchesError::unwrap("width", &v0);
                    if v54 && clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "width") == 2 {
                        v8 = uu_od::parse_nrofbytes::parse_number_of_bytes(*((v54 + 8) as &i64), *((v54 + 16) as &i64));
                        if v8.field_0 as i32 != 4 {
                            uu_od::format_error_message(&v36, v8.field_0 as i64, *((v54 + 8) as &i64), *((v54 + 16) as &i64), "width");
                            v5 = 1;
                            v1 = v36;
                            v4 = v37;
                            alloc::boxed::Box<T>::new(&v0);
                            return struct24 {
                                field_0: 2
                                field_8: v56
                                field_16: &g_503990
                            };
                        }
                        v55 = v9;
                        v13 = v55;
                    }
                    v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v52, v52 + v53 * 40);
                    if v55 {
                        if (v30 | v55) >> 32 {
                            if !((0 CONCAT v55) % v30 CONCAT (0 CONCAT v55) / v30) >> 64 {
                                goto LABEL_46be9a;
                            }
                        } else {
                            if !((0 CONCAT v55) % (v30 & 4294967295) CONCAT (0 CONCAT v55) / (v30 & 4294967295)) >> 32 {
                                goto LABEL_46be9a;
                            }
                        }
                    }
                    v8 = uucore::util_name();
                    v10 = v57;
                    eprint!("{}: warning: ", &v8);
                    eprintln!("invalid width {}; using {} instead", &v13, &v30);
                    v13 = v30;
LABEL_46be9a:
                    v58 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "output-duplicates");
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "read-bytes");
                    v59 = clap_builder::parser::error::MatchesError::unwrap("read-bytes", &v0);
                    if v59 {
                        v8 = uu_od::parse_nrofbytes::parse_number_of_bytes(*((v59 + 8) as &i64), *((v59 + 16) as &i64));
                        if v8.field_0 as i32 != 4 {
                            uu_od::format_error_message(&v38, v8.field_0 as i64, *((v59 + 8) as &i64), *((v59 + 16) as &i64), "read-bytes");
                            v5 = 1;
                            v1 = v38;
                            v4 = *(&v39 as &i64);
                            alloc::boxed::Box<T>::new(&v0);
                            return struct24 {
                                field_0: 2
                                field_8: v56
                                field_16: &g_503990
                            };
                        }
                        v31 = v9;
                    }
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "address-radix");
                    v61 = clap_builder::parser::error::MatchesError::unwrap("address-radix", &v0);
                    if !v61 {
                        goto LABEL_46c08f;
                    }
                    if *((v61 + 16) as &i64) {
                        match (*(*((v61 + 8) as &i64) as &i8)) {
                            100 => {
                                break;
                            }
                            111 => {
LABEL_46c08f:
                                return struct104 {
                                    field_0: v60
                                    field_8: v31
                                    field_16: v29
                                    field_24: v32
                                    field_32: v25
                                    field_48: v28
                                    field_56: v14
                                    field_64: v52
                                    field_72: v53
                                    field_80: v16
                                    field_88: v13
                                    field_96: v58
                                    field_97: v17 as u8
                                    field_98: v62
                                };
                            }
                            _ => {
                                v8 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Radix must be one of [o, d, x, n]");
                                v4 = v11;
                                v1 = v8.field_0;
                                v5 = 1;
                                alloc::boxed::Box<T>::new(&v0);
                            }
                        }
                    } else {
                        v8 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Radix cannot be empty, and must be one of [o, d, x, n]");
                        v4 = v11;
                        v2 = v8.field_0;
                        v5 = 1;
                        alloc::boxed::Box<T>::new(&v0);
                    }
                    return struct24 {
                        field_0: 2
                        field_8: v63
                        field_16: &g_503990
                    };
                }
            }
            return struct24 {
                field_0: 2
                field_8: v11
                field_16: v12
            };
        }
    }
    return struct24 {
        field_0: 2
        field_8: v44
        field_16: &g_503990
    };
}
