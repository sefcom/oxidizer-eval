fn uu_seq::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: Result<struct24, struct24>;  // [bp-0x550]
    let v2: i64;  // [bp-0x548]
    let v3: u64;  // [bp-0x540]
    let v4: Result<struct56, struct16>;  // [bp-0x538], Other Possible Types: alloc::string::String, struct32, u64
    let v5: u64;  // [bp-0x538]
    let v6: u64;  // [bp-0x538]
    let v7: u64;  // [bp-0x538]
    let v8: u128;  // [bp-0x530]
    let v9: u64;  // [bp-0x528]
    let v10: u8;  // [bp-0x520]
    let v11: u128;  // [bp-0x510]
    let v12: u64;  // [bp-0x508]
    let v13: u128;  // [bp-0x500]
    let v14: alloc::string::String;  // [sp-0x4e8], Other Possible Types: u128
    let v15: u64;  // [bp-0x4d8]
    let v16: u64;  // [bp-0x4d8]
    let v17: u128;  // [bp-0x4c8]
    let v18: u64;  // [bp-0x4c0]
    let v19: u64;  // [bp-0x4b8]
    let v20: alloc::string::String;  // [bp-0x4a8], Other Possible Types: u128
    let v21: struct32;  // [bp-0x4a8]
    let v22: u128;  // [bp-0x498]
    let v23: struct16;  // [bp-0x488]
    let v24: u128;  // [bp-0x488]
    let v25: u128;  // [bp-0x478]
    let v26: u64;  // [bp-0x470]
    let v27: u128;  // [bp-0x468]
    let v28: u64;  // [bp-0x460]
    let v29: u64;  // [bp-0x458]
    let v30: u128;  // [bp-0x448]
    let v31: u64;  // [bp-0x440]
    let v32: u64;  // [bp-0x438]
    let v33: u128;  // [bp-0x430]
    let v34: u64;  // [bp-0x428]
    let v35: u64;  // [bp-0x420]
    let v36: void*;  // [bp-0x418]
    let v37: i64;  // [bp-0x410]
    let v38: u8;  // [bp-0x408]
    let v39: u64;  // [bp-0x400]
    let v40: u64;  // [bp-0x3f8]
    let v41: u128;  // [bp-0x3f0]
    let v42: u128;  // [bp-0x3e0]
    let v43: u64;  // [bp-0x3d0]
    let v44: struct16;  // [sp-0x3c8]
    let v45: u128;  // [bp-0x3c8]
    let v47: u128;  // [bp-0x3b8]
    let v48: u128;  // [bp-0x3a8]
    let v49: u64;  // [bp-0x3a0]
    let v51: u64;  // [bp-0x398]
    let v52: struct64;  // [bp-0x388]
    let v53: struct64;  // [bp-0x388]
    let v54: struct120;  // [bp-0x348], Other Possible Types: struct56, struct32, Result<struct40, struct16>, u8
    let v55: struct24;  // [bp-0x348]
    let v56: struct24;  // [bp-0x348]
    let v57: struct56;  // [bp-0x348]
    let v58: struct56;  // [bp-0x348]
    let v59: struct56;  // [bp-0x348]
    let v60: struct72;  // [bp-0x348]
    let v61: u64;  // [bp-0x318]
    let v62: u128;  // [bp-0x310]
    let v63: struct64;  // [bp-0x78]
    let v65: u64;  // rbx
    let v66: u64;  // rax
    let v67: u64;  // rsi
    let v69: u64;  // rsi
    let v70: void*;  // rsi
    let v71: u64;  // rax
    let v72: u64;  // rcx
    let v73: u64;  // rcx
    let v75: u64;  // r14
    let v76: u8;  // al
    let v77: i64;  // rax
    let v78: void*;  // rcx
    let v79: u128;  // xmm0
    let v80: u128;  // xmm1
    let v81: u8;  // bl
    let v82: u128;  // xmm0
    let v83: u128;  // xmm1
    let v84: u8;  // bl
    let v85: u64;  // rax
    let v87: u64;  // r14
    let v90: u64;  // rax
    let v92: u128;  // xmm0
    let v93: u128;  // xmm1
    let v94: u8;  // bl
    let v95: u64;  // rax
    let v96: u64;  // rax
    let v97: u64;  // rax
    let v98: u128;  // xmm1
    let v99: u64;  // rbx
    let v100: void*;  // rbx
    let v103: u64;  // [bp-0x328]

    uu_seq::uu_app(&v54);
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v54, a0, a1);
    match v7 as u640 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v4 as &char + 8) as &i64));
        },
        Ok(_) => {
            v43 = v12;
            v42 = *((&v4 as &char + 32) as &i128);
            v41 = *((&v4 as &char + 16) as &i128);
            v39 = v4 as i64;
            v40 = *((&v4 as &char + 8) as &i64);
            v54 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v39, "numbers");
            v52 = clap_builder::parser::error::MatchesError::unwrap("numbers", &v54);
            if v52.field_0 as i64 {
                v63 = v53;
                v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v63);
                v54 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v39, "separator");
                v66 = clap_builder::parser::error::MatchesError::unwrap("separator", &v54);
                if !v67 {
                    v69 = &g_4178e2;
                } else {
                    v69 = v67;
                }
                v70 = v69;
                v55 = <T as alloc::slice::hack::ConvertVec>::to_vec(v70, v66);
                v15 = v55.field_16;
                v14 = *(&v55.field_0 as &i128);
                v54 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v39, "terminator");
                v71 = clap_builder::parser::error::MatchesError::unwrap("terminator", &v54);
                if v72 {
                    v73 = v72;
                } else {
                    v73 = &g_4178e2;
                }
                v75 = v73;
                v56 = <T as alloc::slice::hack::ConvertVec>::to_vec(v75, v71);
                v9 = v56.field_16;
                *(&v5 as &i128) = *(&v56.field_0 as &i128);
                v76 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v39, "equal-width") as i32 as i8;
                v54 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v39, "format");
                v77 = clap_builder::parser::error::MatchesError::unwrap("format", &v54);
                v32 = v16;
                v30 = v14;
                v33 = *(&v5 as &i128) as u128;
                v35 = v9;
                v38 = v76;
                v36 = v78;
                v37 = v77;
                if v3 > 1 {
                    v57 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((*(v2 as &i64) + 8) as &i64), *((*(v2 as &i64) + 16) as &i64));
                    if v57.field_0 == 9223372036854775812 {
                        v81 = v57.field_8 as i8;
                        v14 = <alloc::string::String as core::clone::Clone>::clone(*(v2 as &i64));
                        v9 = v16;
                        *(&v6 as &i128) = *(&v14.vec.buf.cap as &i128);
                        v10 = v81;
                        v65 = alloc::boxed::Box<T>::new(&v7 as u640);
                    } else {
                        v51 = v61;
                        v79 = *(&v57.field_0 as &i128);
                        v80 = *(&v57.field_16 as &i128);
                        v48 = *(&v57.field_32 as &i128) as u128;
                        v47 = v80;
                        v45 = v79;
                        if !(v3 <= 2) {
                            goto LABEL_479991;
                        }
LABEL_479a6d:
                        v23 = uu_seq::number::PreciseNumber::one();
                        goto LABEL_479ad7;
                    }
                } else {
                    v44 = uu_seq::number::PreciseNumber::one();
                    if v3 <= 2 {
                        goto LABEL_479a6d;
                    }
LABEL_479991:
                    v58 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((*((v2 + 8) as &i64) + 8) as &i64), *((*((v2 + 8) as &i64) + 16) as &i64));
                    if v58.field_0 == 9223372036854775812 {
                        v84 = v58.field_8 as i8;
                        v14 = <alloc::string::String as core::clone::Clone>::clone(*((v2 + 8) as &i64));
                        v9 = v16;
                        *(&v7 as &i128) = *(&v14.vec.buf.cap as &i128);
                        v10 = v84;
                        v65 = alloc::boxed::Box<T>::new(&v7 as u640);
                    } else {
                        v29 = v61;
                        v82 = *(&v58.field_0 as &i128);
                        v83 = *(&v58.field_16 as &i128);
                        v27 = *(&v103 as &i128) as u128;
                        v25 = v83;
                        v24 = v82;
LABEL_479ad7:
                        v85 = (v24 as i64 < 9223372036854775812 ? 0x8000000000000000 + v24 as i64 + 1 : 0);
                        match (v85) {
                            0 => {
                                if v26 as i8 == 1 {
                                    goto LABEL_479af1;
                                } else {
                                    goto LABEL_479b43;
                                }
                            }
                            3 => {
LABEL_479af1:
                                v4 = <alloc::string::String as core::clone::Clone>::clone(*((v2 + 8) as &i64));
                                v54 = struct32 {
                                    field_0: 0x8000000000000000
                                    field_8: *(&v4.vec.buf.cap as &i128)
                                    field_24: v9
                                };
                                v90 = alloc::boxed::Box<T>::new(&v54);
                                goto LABEL_479bd4;
                            }
                            _ => {
LABEL_479b43:
                                v87 = v3 - 1;
                                v59 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((*((v2 + v87 * 8) as &i64) + 8) as &i64), *((*((v2 + v87 * 8) as &i64) + 16) as &i64));
                                if v59.field_0 == 9223372036854775812 {
                                    v94 = v59.field_8 as i8;
                                    v20 = <alloc::string::String as core::clone::Clone>::clone(*((v2 + v87 * 8) as &i64));
                                    v4 = struct32 {
                                        field_0: *(&v20.vec.buf.cap as &i128)
                                        field_8: <UNKNOWN>
                                        field_24: v94
                                    };
                                    v90 = alloc::boxed::Box<T>::new(&v4);
LABEL_479bd4:
                                    v65 = v90;
                                    break;
                                } else {
                                    v19 = v61;
                                    v92 = *(&v59.field_0 as &i128);
                                    v93 = *(&v59.field_16 as &i128);
                                    v17 = *(&v59.field_32 as &i128) as u128;
                                    v15 = v93;
                                    v14 = v92;
                                    v95 = core::cmp::max_by(core::cmp::max_by(v49, v28), v18);
                                    v96 = core::cmp::max_by(v51, v29);
                                    if v36 {
                                        v60 = uucore::features::format::Format<F>::parse(v36, v37);
                                        v97 = v60.field_0 as i64;
                                        v20 = *((&v60.field_0 as &char + 8) as &i128);
                                        v22 = *((&v60.field_16 as &char + 8) as &i128);
                                        if v60.field_0 as i64 == 0x8000000000000000 {
                                            v54 = v21;
                                            v65 = alloc::boxed::Box<T>::new(&v54);
                                        } else {
                                            v13 = v62;
                                            v11 = *(&v60.field_40 as &i128) as u128;
                                            v8 = v20;
                                            v10 = v22;
                                            goto LABEL_479d83;
                                        }
                                    } else {
LABEL_479d83:
                                        v4 = v97;
                                        v98 = v25;
                                        v54 = struct120 {
                                            field_0: v45
                                            field_16: v47
                                            field_32: v48 as i64
                                            field_40: v24
                                            field_56: v98
                                            field_72: v27 as i64
                                            field_80: v14
                                            field_96: v15
                                            field_112: v17 as i64
                                        };
                                        v99 = uu_seq::print_seq(&v54, v96, v31, v32, v34, v35, v38, v95, &v4);
                                        if !(v99 && std::io::error::Error::kind(v99) != 11) {
                                            return v100;
                                        }
                                        v100 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v99);
                                        break;
                                        return v100;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                v54 = 9223372036854775809;
                v65 = alloc::boxed::Box<T>::new(&v54);
            }
            return v65;
        },
    }
}
