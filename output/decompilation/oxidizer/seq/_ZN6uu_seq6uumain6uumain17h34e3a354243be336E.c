fn uu_seq::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x550]
    let v2: i64;  // [bp-0x548]
    let v3: u64;  // [bp-0x540]
    let v4: u256;  // [bp-0x538], Other Possible Types: alloc::string::String, Result<struct56, struct16>
    let v5: u128;  // [bp-0x538]
    let v6: u128;  // [bp-0x538]
    let v7: u64;  // [bp-0x530]
    let v8: u64;  // [bp-0x528]
    let v9: u8;  // [bp-0x520]
    let v10: u128;  // [bp-0x510]
    let v11: u64;  // [bp-0x508]
    let v12: u128;  // [bp-0x500]
    let v13: u128;  // [bp-0x4e8], Other Possible Types: alloc::string::String
    let v14: u128;  // [bp-0x4d8]
    let v15: u64;  // [bp-0x4d8]
    let v16: u128;  // [bp-0x4c8]
    let v17: u64;  // [bp-0x4c0]
    let v18: u64;  // [bp-0x4b8]
    let v19: u256;  // [bp-0x4a8], Other Possible Types: alloc::string::String
    let v20: u128;  // [bp-0x498]
    let v21: struct16;  // [bp-0x488]
    let v22: u128;  // [bp-0x488]
    let v23: u128;  // [bp-0x478]
    let v24: u64;  // [bp-0x470]
    let v25: u128;  // [bp-0x468]
    let v26: u64;  // [bp-0x460]
    let v27: u64;  // [bp-0x458]
    let v28: u128;  // [bp-0x448]
    let v29: u64;  // [bp-0x440]
    let v30: u64;  // [bp-0x438]
    let v31: u128;  // [bp-0x430]
    let v32: u64;  // [bp-0x428]
    let v33: u64;  // [bp-0x420]
    let v34: void*;  // [bp-0x418]
    let v35: i64;  // [bp-0x410]
    let v36: u8;  // [bp-0x408]
    let v37: u64;  // [bp-0x400]
    let v38: u64;  // [bp-0x3f8]
    let v39: u8;  // [bp-0x3f0]
    let v40: u8;  // [bp-0x3e0]
    let v41: u64;  // [bp-0x3d0]
    let v42: struct16;  // [sp-0x3c8]
    let v43: u128;  // [bp-0x3c8]
    let v44: u128;  // [bp-0x3c8]
    let v46: u128;  // [bp-0x3b8]
    let v47: u128;  // [bp-0x3a8]
    let v48: u64;  // [bp-0x3a0]
    let v50: u64;  // [bp-0x398]
    let v51: struct64;  // [bp-0x388]
    let v52: u512;  // [bp-0x388]
    let v53: u256;  // [bp-0x348], Other Possible Types: Result<struct40, struct16>, struct56
    let v54: struct24;  // [bp-0x348]
    let v55: struct24;  // [bp-0x348]
    let v56: struct56;  // [bp-0x348]
    let v57: struct56;  // [bp-0x348]
    let v58: struct56;  // [bp-0x348]
    let v59: struct72;  // [bp-0x348]
    let v60: u128;  // [bp-0x320]
    let v61: u64;  // [bp-0x318]
    let v62: u128;  // [bp-0x310]
    let v63: u64;  // [bp-0x300]
    let v64: u8;  // [bp-0x2f8]
    let v65: u128;  // [bp-0x2e8]
    let v66: u64;  // [bp-0x2d8]
    let v67: u512;  // [bp-0x78]
    let v69: u64;  // rbx
    let v70: u64;  // rax
    let v71: u64;  // rsi
    let v73: u64;  // rsi
    let v74: void*;  // rsi
    let v75: u64;  // rax
    let v76: u64;  // rcx
    let v77: u64;  // rcx
    let v79: u64;  // r14
    let v80: u8;  // al
    let v81: i64;  // rax
    let v82: void*;  // rcx
    let v83: u128;  // xmm0
    let v84: u128;  // xmm1
    let v85: u8;  // bl
    let v86: u128;  // xmm0
    let v87: u128;  // xmm1
    let v88: u8;  // bl
    let v89: u64;  // rax
    let v91: u64;  // r14
    let v94: u64;  // rax
    let v96: u128;  // xmm0
    let v97: u128;  // xmm1
    let v98: u8;  // bl
    let v99: u64;  // rax
    let v100: u64;  // rax
    let v101: u64;  // rax
    let v102: u128;  // xmm1
    let v103: u64;  // rbx
    let v104: void*;  // rbx
    let v106: u64;  // [bp-0x330]
    let v107: u64;  // [bp-0x328]

    uu_seq::uu_app(&v53);
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v53, a0, a1);
    match v6 as u640 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v38);
        },
        Ok(_) => {
            v41 = v11;
            memcpy(&v40, &v4, 16);
            memcpy(&v39, &v4, 16);
            v37 = v4 as i64;
            v38 = v7;
            v53 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v37, "numbers");
            v51 = clap_builder::parser::error::MatchesError::unwrap("numbers", &v53);
            if v51.field_0 as i64 {
                v67 = v52;
                v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v67);
                v53 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v37, "separator");
                v70 = clap_builder::parser::error::MatchesError::unwrap("separator", &v53);
                if !v71 {
                    v73 = &g_4178e2;
                } else {
                    v73 = v71;
                }
                v74 = v73;
                v54 = <T as alloc::slice::hack::ConvertVec>::to_vec(v74, v70);
                v14 = v54.field_16;
                memcpy(&v13, &v54, 16);
                v53 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v37, "terminator");
                v75 = clap_builder::parser::error::MatchesError::unwrap("terminator", &v53);
                if v76 {
                    v77 = v76;
                } else {
                    v77 = &g_4178e2;
                }
                v79 = v77;
                v55 = <T as alloc::slice::hack::ConvertVec>::to_vec(v79, v75);
                v8 = v55.field_16;
                memcpy(&v6 as u640, &v55, 16);
                v80 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v37, "equal-width") as i32 as i8;
                v53 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v37, "format");
                v81 = clap_builder::parser::error::MatchesError::unwrap("format", &v53);
                v30 = v15;
                v28 = v13;
                v31 = v4 as i128 as u128;
                v33 = v8;
                v36 = v80;
                v34 = v82;
                v35 = v81;
                if v3 > 1 {
                    v56 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((*(v2 as &i64) + 8) as &i64), *((*(v2 as &i64) + 16) as &i64));
                    if v56.field_0 == 9223372036854775812 {
                        v85 = v56.field_8 as i8;
                        v13 = <alloc::string::String as core::clone::Clone>::clone(*(v2 as &i64));
                        v8 = v15;
                        v5 = *(&v13.vec.buf.ptr as &i128) as u128;
                        v9 = v85;
                        v69 = alloc::boxed::Box<T>::new(&v6 as u640);
                    } else {
                        v50 = v61;
                        v83 = *(&v56.field_0 as &i128);
                        v84 = *(&v56.field_16 as &i128);
                        v47 = *(&v56.field_32 as &i128) as u128;
                        v46 = v84;
                        v43 = v83;
                        if !(v3 <= 2) {
                            goto LABEL_479991;
                        }
LABEL_479a6d:
                        v21 = uu_seq::number::PreciseNumber::one();
                        goto LABEL_479ad7;
                    }
                } else {
                    v42 = uu_seq::number::PreciseNumber::one();
                    if v3 <= 2 {
                        goto LABEL_479a6d;
                    }
LABEL_479991:
                    v57 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((*((v2 + 8) as &i64) + 8) as &i64), *((*((v2 + 8) as &i64) + 16) as &i64));
                    if v57.field_0 == 9223372036854775812 {
                        v88 = v57.field_8 as i8;
                        v13 = <alloc::string::String as core::clone::Clone>::clone(*((v2 + 8) as &i64));
                        v8 = v15;
                        v6 = *(&v13.vec.buf.ptr as &i128) as u128;
                        v9 = v88;
                        v69 = alloc::boxed::Box<T>::new(&v6 as u640);
                    } else {
                        v27 = v61;
                        v86 = *(&v57.field_0 as &i128);
                        v87 = *(&v57.field_16 as &i128);
                        v25 = *(&v107 as &i128) as u128;
                        v23 = v87;
                        v22 = v86;
LABEL_479ad7:
                        v89 = (v22 as i64 < 9223372036854775812 ? 0x8000000000000000 + v22 as i64 + 1 : 0);
                        match (v89) {
                            0 => {
                                if v24 as i8 == 1 {
                                    goto LABEL_479af1;
                                } else {
                                    goto LABEL_479b43;
                                }
                            }
                            3 => {
LABEL_479af1:
                                v4 = <alloc::string::String as core::clone::Clone>::clone(*((v2 + 8) as &i64));
                                v53 = struct32 {
                                    field_0: 0x8000000000000000
                                    field_8: *(&v4.vec.buf.ptr as &i128)
                                    field_24: v8
                                };
                                v94 = alloc::boxed::Box<T>::new(&v53);
                                goto LABEL_479bd4;
                            }
                            _ => {
LABEL_479b43:
                                v91 = v3 - 1;
                                v58 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((*((v2 + v91 * 8) as &i64) + 8) as &i64), *((*((v2 + v91 * 8) as &i64) + 16) as &i64));
                                if v58.field_0 == 9223372036854775812 {
                                    v98 = v58.field_8 as i8;
                                    v19 = <alloc::string::String as core::clone::Clone>::clone(*((v2 + v91 * 8) as &i64));
                                    v4 = struct32 {
                                        field_0: *(&v19.vec.buf.ptr as &i128)
                                        field_8: <UNKNOWN>
                                        field_24: v98
                                    };
                                    v94 = alloc::boxed::Box<T>::new(&v4);
LABEL_479bd4:
                                    v69 = v94;
                                    break;
                                } else {
                                    v18 = v61;
                                    v96 = *(&v58.field_0 as &i128);
                                    v97 = *(&v58.field_16 as &i128);
                                    v16 = *(&v58.field_32 as &i128) as u128;
                                    v14 = v97;
                                    v13 = v96;
                                    v99 = core::cmp::max_by(core::cmp::max_by(v48, v26), v17);
                                    v100 = core::cmp::max_by(v50, v27);
                                    if v34 {
                                        v59 = uucore::features::format::Format<F>::parse(v34, v35);
                                        v101 = v59.field_0 as i64;
                                        memcpy(&v19, &v59, 16);
                                        memcpy(&v19 as u8, &v106, 16);
                                        if v59.field_0 as i64 == 0x8000000000000000 {
                                            v53 = v19;
                                            v69 = alloc::boxed::Box<T>::new(&v53);
                                        } else {
                                            v12 = v62;
                                            v10 = *(&v59.field_40 as &i128) as u128;
                                            memcpy(&v4 as u64, &v19 as u128, 16);
                                            v9 = v20;
                                            goto LABEL_479d83;
                                        }
                                    } else {
LABEL_479d83:
                                        v4 = v101;
                                        v107 = v47 as i64;
                                        memcpy(&v58 as u8, &v46, 16);
                                        v53 = v44;
                                        v102 = v23;
                                        v60 = v22;
                                        v62 = v102;
                                        v63 = v25 as i64;
                                        memcpy(&v64, &v13, 16);
                                        v65 = v14;
                                        v66 = v16 as i64;
                                        v103 = uu_seq::print_seq(&v53, v100, v29, v30, v32, v33, v36, v99, &v4);
                                        if !(v103 && std::io::error::Error::kind(v103) != 11) {
                                            return v104;
                                        }
                                        v104 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v103);
                                        break;
                                        return v104;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                v53 = 9223372036854775809;
                v69 = alloc::boxed::Box<T>::new(&v53);
            }
            return v69;
        },
    }
}
