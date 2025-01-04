fn uu_od::OdOptions::new(a0: &Result<struct99, struct24>, a1: &struct56, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [sp-0x168], Other Possible Types: Result<struct40, struct16>, struct40
    let v1: i64;  // [sp-0x158]
    let v2: i32;  // [bp-0x150]
    let v3: i64;  // [sp-0x148]
    let v4: i8;  // [bp-0x140]
    let v5: i64;  // [sp-0x138], Other Possible Types: struct24, Result<struct24, struct32>
    let v6: i64;  // [sp-0x130]
    let v7: i64;  // [sp-0x128]
    let v8: i32;  // [bp-0x120]
    let v9: i64;  // [sp-0x110]
    let v10: struct32;  // [sp-0x108], Other Possible Types: i256
    let v11: i64;  // [sp-0x100]
    let v12: i32;  // [sp-0xe4]
    let v13: i64;  // [sp-0xe0]
    let v14: i64;  // [sp-0xd8]
    let v15: i64;  // [sp-0xd0]
    let v16: i64;  // [sp-0xc8]
    let v17: i64;  // [sp-0xc0]
    let v18: i128;  // [sp-0xb8], Other Possible Types: struct24
    let v19: i64;  // [sp-0xa8]
    let v20: i64;  // [sp-0x98]
    let v21: i64;  // [sp-0x90]
    let v22: i128;  // [sp-0x88]
    let v23: struct24;  // [sp-0x78], Other Possible Types: i192
    let v24: struct24;  // [sp-0x60], Other Possible Types: i192
    let v25: i192;  // [sp-0x48], Other Possible Types: struct24
    let v27: i64;  // rax
    let v28: i64;  // r15
    let v29: i64;  // rbp
    let v30: i64;  // rcx
    let v31: i32;  // ecx
    let v32: i64;  // rcx
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // r15
    let v36: i64;  // rbp
    let v37: i64;  // r15
    let v38: i64;  // rax
    let v39: i64;  // rax
    let v40: i64;  // rcx
    let v41: i64;  // r13
    let v42: i64;  // r12
    let v43: i64;  // r12
    let v44: i64;  // rdx
    let v45: i64;  // rdx
    let v47: i64;  // rax
    let v48: i64;  // r13
    let v49: i64;  // r12
    let v50: i64;  // r12
    let v51: i64;  // r13
    let v52: i64;  // rax
    let v53: i64;  // rax
    let v54: i64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "endian");
    v27 = clap_builder::parser::error::MatchesError::unwrap("endian", &v0);
    if !v27 {
        v31 = v30 | -0x100 | 2;
        goto LABEL_4c60d0;
    }
    v21 = v27;
    v28 = *((v27 + 8) as &i64);
    v29 = *((v27 + 16) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v28, v29, "little") as i8 {
        v31 = 0;
        goto LABEL_4c60d0;
    } else {
        v31 = v32 | -0x100 | 1;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v28, v29, "big") as i8 {
            v5 = format!("Invalid argument --endian={:?}", &v21);
            v8 = 1;
            v34 = alloc::boxed::Box<T>::new(&v5);
        } else {
LABEL_4c60d0:
            v12 = v31;
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "skip-bytes");
            v33 = clap_builder::parser::error::MatchesError::unwrap("skip-bytes", &v0);
            if !v33 {
                v37 = 0;
            } else {
                v35 = *((v33 + 8) as &i64);
                v36 = *((v33 + 16) as &i64);
                v10 = uu_od::parse_nrofbytes::parse_number_of_bytes(v35, v36);
                if v10 != 3 {
                    v5 = v10;
                    v23 = uu_od::format_error_message(v5, v35, v36, "skip-bytes");
                    v2 = 1;
                    v0 = v23;
                    v1 = *((&v23 as &char + 16) as &i64);
                    *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
                    *((a0 + 16) as &&i64) = &g_5416d8;
                    *(a0 as &i64) = 2;
                    return struct99 {
                        field_0: v50
                        field_8: v51
                        field_16: v13
                        field_24: v20
                        field_32: v18
                        field_48: v19
                        field_56: v14
                        field_72: v16
                        field_80: v37
                        field_88: v9
                        field_96: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "output-duplicates") as u8
                        field_97: v12 as i8
                        field_98: 2
                    };
                }
            }
            v0 = uu_od::parse_inputs::parse_inputs(a1, &g_541748);
            if v13 == 3 {
                v5 = v0;
                v34 = uu_od::OdOptions::new::{{closure}}(&v5);
            } else {
                v20 = v4;
                v13 = v3;
                if v13 == 2 {
                    v18 = v22;
                    v19 = v1;
                    v13 = 0;
                } else {
                    v37 = *((&v0 as &char + 24) as &i64);
                    v22 = v18;
                    v0 = v18;
                    v1 = v19;
                    v38 = alloc::alloc::Global::alloc_impl(24);
                    *(v38 as &i128) = v22;
                    *((v38 + 16) as &i64) = v19;
                    v18 = alloc::slice::hack::into_vec(v38, 1);
                }
                v5 = uu_od::parse_formats::parse_format_flags(a2, a3);
                if v5 {
                    v1 = *((&v5 as &char + 24) as &i64);
                    v0 = *((&v5 as &char + 8) as &i128);
                    v2 = 1;
                    v39 = alloc::boxed::Box<T>::new(&v0);
                    v40 = &g_5416d8;
                } else {
                    v39 = v7;
                    v40 = *((&v5 as &char + 24) as &i64);
                    if v14 != 0x8000000000000000 {
                        v14 = v6;
                        v15 = v39;
                        v16 = v40;
                        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "width");
                        v41 = clap_builder::parser::error::MatchesError::unwrap("width", &v0);
                        if !v41 || clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "width") as i8 != 2 {
                            v9 = 16;
                            v43 = 16;
                        } else {
                            v42 = *((v41 + 8) as &i64);
                            v41 = *((v41 + 16) as &i64);
                            v10 = uu_od::parse_nrofbytes::parse_number_of_bytes(v42, v41);
                            if v10 != 3 {
                                v5 = v10;
                                v24 = uu_od::format_error_message(v5, v42, v41, "width");
                                v2 = 1;
                                v0 = v24;
                                v1 = *((&v24 as &char + 16) as &i64);
                                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
                                *((a0 + 16) as &&i64) = &g_5416d8;
                                *(a0 as &i64) = 2;
                                return a0;
                            }
                            v43 = v11;
                            v9 = v43;
                        }
                        v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v15, v15 + v16 * 40);
                        if v43 {
                            if !v17 {
                                core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
                            }
                            v44 = (!(v17 | v43) >> 32 ? ((0 CONCAT v43) % (v17 & 4294967295) CONCAT (0 CONCAT v43) / (v17 & 4294967295)) >> 32 & 4294967295 : ((0 CONCAT v43) % v17 CONCAT (0 CONCAT v43) / v17) >> 64);
                            if !v44 {
LABEL_4c656c:
                                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "read-bytes");
                                v47 = clap_builder::parser::error::MatchesError::unwrap("read-bytes", &v0);
                                if !v47 {
                                    v50 = 0;
                                    goto LABEL_4c65e2;
                                } else {
                                    v48 = *((v47 + 8) as &i64);
                                    v49 = *((v47 + 16) as &i64);
                                    v10 = uu_od::parse_nrofbytes::parse_number_of_bytes(v48, v49);
                                    if v10 != 3 {
                                        v5 = v10;
                                        v25 = uu_od::format_error_message(v5, v48, v49, "read-bytes");
                                        v2 = 1;
                                        v0 = v25;
                                        v1 = *((&v25 as &char + 16) as &i64);
                                        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
                                        *((a0 + 16) as &&i64) = &g_5416d8;
                                        *(a0 as &i64) = 2;
                                    } else {
                                        v50 = 1;
                                        v51 = v11;
LABEL_4c65e2:
                                        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "address-radix");
                                        v52 = clap_builder::parser::error::MatchesError::unwrap("address-radix", &v0);
                                        if !v52 {
                                            goto LABEL_4c679f;
                                        }
                                        if !*((v52 + 16) as &i64) {
                                            v5 = <T as alloc::slice::hack::ConvertVec>::to_vec("Radix cannot be empty, and must be one of [o, d, x, n]");
                                            v0 = v5;
                                            v2 = 1;
                                            v54 = alloc::boxed::Box<T>::new(&v0);
                                        } else {
                                            v53 = *(*((v52 + 8) as &i64) as &i8) - 100;
                                            switch (v53) {
                                            case 10:
                                                break;
                                            case 20:
                                                break;
                                            case 11:
LABEL_4c679f:
                                                return struct99 {
                                                    field_0: v50
                                                    field_8: v51
                                                    field_16: v13
                                                    field_24: v20
                                                    field_32: v18
                                                    field_48: v19
                                                    field_56: v14
                                                    field_72: v16
                                                    field_80: v37
                                                    field_88: v9
                                                    field_96: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "output-duplicates") as u8
                                                    field_97: v12 as i8
                                                    field_98: 2
                                                };
                                            default:
                                                v5 = <T as alloc::slice::hack::ConvertVec>::to_vec("Radix must be one of [o, d, x, n]");
                                                v0 = v5;
                                                v2 = 1;
                                                v54 = alloc::boxed::Box<T>::new(&v0);
                                            }
                                        }
                                        *((a0 + 8) as &i64) = v54;
                                        *((a0 + 16) as &&i64) = &g_5416d8;
                                        *(a0 as &i64) = 2;
                                    }
                                    return a0;
                                }
                            }
                        }
                        v5 = uucore::util_name();
                        v6 = v45;
                        eprint!("{:?}: warning: ", &v5);
                        eprintln!("invalid width {:?}; using {:?} instead", &v9, &v17);
                        v9 = v17;
                        goto LABEL_4c656c;
                    }
                }
                return struct99 {
                    field_0: v50
                    field_8: v51
                    field_16: v13
                    field_24: v20
                    field_32: v18
                    field_48: v19
                    field_56: v14
                    field_72: v16
                    field_80: v37
                    field_88: v9
                    field_96: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "output-duplicates") as u8
                    field_97: v12 as i8
                    field_98: 2
                };
            }
        }
        return struct99 {
            field_0: v50
            field_8: v51
            field_16: v13
            field_24: v20
            field_32: v18
            field_48: v19
            field_56: v14
            field_72: v16
            field_80: v37
            field_88: v9
            field_96: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "output-duplicates") as u8
            field_97: v12 as i8
            field_98: 2
        };
    }
}
