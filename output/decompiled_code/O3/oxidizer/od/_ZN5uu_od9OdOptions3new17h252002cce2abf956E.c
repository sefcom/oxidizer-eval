fn uu_od::OdOptions::new(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [sp-0x168], Other Possible Types: Result<struct40, struct16>, struct40
    let v1: i64;  // [sp-0x158]
    let v2: i32;  // [bp-0x150]
    let v3: i8;  // [bp-0x140]
    let v4: i128;  // [sp-0x138], Other Possible Types: struct24, Result<struct24, struct32>
    let v5: i64;  // [sp-0x130]
    let v6: i128;  // [bp-0x128]
    let v7: i32;  // [bp-0x120]
    let v8: i64;  // [sp-0x110]
    let v9: i256;  // [sp-0x108], Other Possible Types: struct32
    let v10: i64;  // [sp-0x100]
    let v11: i32;  // [sp-0xe4]
    let v12: i64;  // [sp-0xe0]
    let v13: i64;  // [sp-0xd8]
    let v14: i64;  // [sp-0xd0]
    let v15: i64;  // [sp-0xc8]
    let v16: i64;  // [sp-0xc0]
    let v17: struct24;  // [sp-0xb8], Other Possible Types: i128
    let v18: i64;  // [sp-0xa8]
    let v19: i64;  // [sp-0x98]
    let v20: i64;  // [sp-0x90]
    let v21: i128;  // [sp-0x88]
    let v22: i192;  // [sp-0x78], Other Possible Types: struct24
    let v23: i192;  // [sp-0x60], Other Possible Types: struct24
    let v24: struct24;  // [sp-0x48], Other Possible Types: i192
    let v26: i64;  // rax
    let v27: i64;  // r15
    let v28: i64;  // rbp
    let v29: i64;  // rcx
    let v30: i32;  // ecx
    let v31: i64;  // rcx
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v34: i64;  // r15
    let v35: i64;  // rbp
    let v36: i64;  // r15
    let v37: i128;  // xmm1
    let v38: i64;  // rax
    let v39: i64;  // rax
    let v40: i64;  // rcx
    let v41: i64;  // r13
    let v42: i64;  // r12
    let v43: i64;  // r12
    let v44: i128;  // xmm1
    let v45: i64;  // rdx
    let v46: i64;  // rdx
    let v48: i64;  // rax
    let v49: i64;  // r13
    let v50: i64;  // r12
    let v51: i64;  // r12
    let v52: i64;  // r13
    let v53: i128;  // xmm1
    let v54: i64;  // rax
    let v55: i64;  // rax
    let v56: i64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "endian");
    v26 = clap_builder::parser::error::MatchesError::unwrap("endian", &v0);
    if !v26 {
        v30 = v29 | -0x100 | 2;
        goto LABEL_4c5b50;
    }
    v20 = v26;
    v27 = *((v26 + 8) as &i64);
    v28 = *((v26 + 16) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, v28, "little") as i8 {
        v30 = 0;
        goto LABEL_4c5b50;
    } else {
        v30 = v31 | -0x100 | 1;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, v28, "big") as i8 {
            v4 = format!("Invalid argument --endian={:?}", &v20);
            v7 = 1;
            v33 = alloc::boxed::Box<T>::new(&v4);
        } else {
LABEL_4c5b50:
            v11 = v30;
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "skip-bytes");
            v32 = clap_builder::parser::error::MatchesError::unwrap("skip-bytes", &v0);
            if !v32 {
                v36 = 0;
            } else {
                v34 = *((v32 + 8) as &i64);
                v35 = *((v32 + 16) as &i64);
                v9 = uu_od::parse_nrofbytes::parse_number_of_bytes(v34, v35);
                if v9 != 3 {
                    v37 = *((&v9 as &char + 16) as &i128);
                    v4 = v9;
                    v6 = v37;
                    v22 = uu_od::format_error_message(v4, v34, v35, "skip-bytes");
                    v2 = 1;
                    v0 = v22;
                    v1 = *((&v22 as &char + 16) as &i64);
                    *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
                    *((a0 + 16) as &&i64) = &g_540f88;
                    *(a0 as &i64) = 2;
                    return struct99 {
                        field_0: v51
                        field_8: v52
                        field_16: v12
                        field_24: v19
                        field_32: v17
                        field_48: v18
                        field_56: v13
                        field_72: v15
                        field_80: v36
                        field_88: v8
                        field_96: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "output-duplicates") as i32 as i8
                        field_97: v11 as i8
                        field_98: 2
                    };
                }
            }
            v0 = uu_od::parse_inputs::parse_inputs(a1, &g_540ff8);
            if v12 == 3 {
                *(&v4.field_0 as &struct24) = struct24 {
                    field_0: v0
                    field_16: v1
                };
                v33 = uu_od::OdOptions::new::{{closure}}(&v4);
            } else {
                v19 = v3;
                v12 = v0.field_32;
                if v12 == 2 {
                    v17 = v21;
                    v18 = v0.field_16;
                    v12 = 0;
                } else {
                    v36 = *((&v0 as &char + 24) as &i64);
                    v21 = v17;
                    v0 = v17;
                    v0.field_16 = vvar_754{stack -168};
                    v38 = alloc::alloc::Global::alloc_impl(24);
                    *(v38 as &i128) = v21;
                    *((v38 + 16) as &i64) = v18;
                    v17 = alloc::slice::hack::into_vec(v38, 1);
                }
                v4 = uu_od::parse_formats::parse_format_flags(a2, a3);
                if v4 {
                    v1 = *((&v4 as &char + 24) as &i64);
                    v0 = *((&v4 as &char + 8) as &i128);
                    v2 = 1;
                    v39 = alloc::boxed::Box<T>::new(&v0);
                    v40 = &g_540f88;
                } else {
                    v39 = v6;
                    v40 = *((&v4 as &char + 24) as &i64);
                    if v13 != 0x8000000000000000 {
                        v13 = v5;
                        v14 = v39;
                        v15 = v40;
                        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "width");
                        v41 = clap_builder::parser::error::MatchesError::unwrap("width", &v0);
                        if !v41 || clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "width") as i8 != 2 {
                            v8 = 16;
                            v43 = 16;
                        } else {
                            v42 = *((v41 + 8) as &i64);
                            v41 = *((v41 + 16) as &i64);
                            v9 = uu_od::parse_nrofbytes::parse_number_of_bytes(v42, v41);
                            if v9 != 3 {
                                v44 = *((&v9 as &char + 16) as &i128);
                                v4 = v9;
                                v6 = v44;
                                v23 = uu_od::format_error_message(v4, v42, v41, "width");
                                v2 = 1;
                                v0 = v23;
                                v1 = *((&v23 as &char + 16) as &i64);
                                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
                                *((a0 + 16) as &&i64) = &g_540f88;
                                *(a0 as &i64) = 2;
                                return a0;
                            }
                            v43 = v9.8;
                            v8 = v43;
                        }
                        v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v14, v14 + v15 * 40);
                        if v43 {
                            if !v16 {
                                core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
                            }
                            v45 = (!(v16 | v43) >> 32 ? (0 CONCAT v43) /m v16 >> 32 & 4294967295 : (0 CONCAT v43) /m v16 >> 64);
                            if !v45 {
LABEL_4c5fec:
                                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "read-bytes");
                                v48 = clap_builder::parser::error::MatchesError::unwrap("read-bytes", &v0);
                                if !v48 {
                                    v51 = 0;
                                    goto LABEL_4c6062;
                                } else {
                                    v49 = *((v48 + 8) as &i64);
                                    v50 = *((v48 + 16) as &i64);
                                    v9 = uu_od::parse_nrofbytes::parse_number_of_bytes(v49, v50);
                                    if v9 != 3 {
                                        v53 = *((&v9 as &char + 16) as &i128);
                                        v4 = v9;
                                        v6 = v53;
                                        v24 = uu_od::format_error_message(v4, v49, v50, "read-bytes");
                                        v2 = 1;
                                        v0 = v24;
                                        v1 = *((&v24 as &char + 16) as &i64);
                                        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
                                        *((a0 + 16) as &&i64) = &g_540f88;
                                        *(a0 as &i64) = 2;
                                    } else {
                                        v51 = 1;
                                        v52 = v10;
LABEL_4c6062:
                                        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "address-radix");
                                        v54 = clap_builder::parser::error::MatchesError::unwrap("address-radix", &v0);
                                        if !v54 {
                                            goto LABEL_4c621f;
                                        }
                                        if !*((v54 + 16) as &i64) {
                                            v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("Radix cannot be empty, and must be one of [o, d, x, n]");
                                            v1 = v4.field_16;
                                            v0 = v4;
                                            v2 = 1;
                                            v56 = alloc::boxed::Box<T>::new(&v0);
                                        } else {
                                            v55 = *(*((v54 + 8) as &i64) as &i8) - 100;
                                            switch (v55) {
                                            case 10:
                                                break;
                                            case 20:
                                                break;
                                            case 11:
LABEL_4c621f:
                                                return struct99 {
                                                    field_0: v51
                                                    field_8: v52
                                                    field_16: v12
                                                    field_24: v19
                                                    field_32: v17
                                                    field_48: v18
                                                    field_56: v13
                                                    field_72: v15
                                                    field_80: v36
                                                    field_88: v8
                                                    field_96: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "output-duplicates") as i32 as i8
                                                    field_97: v11 as i8
                                                    field_98: 2
                                                };
                                            default:
                                                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("Radix must be one of [o, d, x, n]");
                                                v1 = v4.field_16;
                                                v0 = v4;
                                                v2 = 1;
                                                v56 = alloc::boxed::Box<T>::new(&v0);
                                            }
                                        }
                                        *((a0 + 8) as &i64) = v56;
                                        *((a0 + 16) as &&i64) = &g_540f88;
                                        *(a0 as &i64) = 2;
                                    }
                                    return a0;
                                }
                            }
                        }
                        v4 = uucore::util_name();
                        v5 = v46;
                        eprint!("{:?}: warning: ", &v4);
                        eprintln!("invalid width {:?}; using {:?} instead", &v8, &v16);
                        v8 = v16;
                        goto LABEL_4c5fec;
                    }
                }
                return struct99 {
                    field_0: v51
                    field_8: v52
                    field_16: v12
                    field_24: v19
                    field_32: v17
                    field_48: v18
                    field_56: v13
                    field_72: v15
                    field_80: v36
                    field_88: v8
                    field_96: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "output-duplicates") as i32 as i8
                    field_97: v11 as i8
                    field_98: 2
                };
            }
        }
        return struct99 {
            field_0: v51
            field_8: v52
            field_16: v12
            field_24: v19
            field_32: v17
            field_48: v18
            field_56: v13
            field_72: v15
            field_80: v36
            field_88: v8
            field_96: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "output-duplicates") as i32 as i8
            field_97: v11 as i8
            field_98: 2
        };
    }
}
