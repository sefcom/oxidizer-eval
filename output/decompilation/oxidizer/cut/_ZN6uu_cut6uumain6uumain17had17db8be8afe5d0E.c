fn uu_cut::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x4b9]
    let v1: struct24;  // [bp-0x4b8], Other Possible Types: u64
    let v2: u128;  // [bp-0x4b0]
    let v3: u64;  // [bp-0x4a8]
    let v4: u64;  // [bp-0x4a0]
    let v5: u64;  // [bp-0x498]
    let v6: u8;  // [bp-0x490]
    let v7: u8;  // [bp-0x488]
    let v8: u128;  // [bp-0x480]
    let v9: u64;  // [bp-0x478]
    let v10: u64;  // [bp-0x470]
    let v11: struct24;  // [bp-0x468], Other Possible Types: u128
    let v12: struct16;  // [bp-0x468]
    let v13: u64;  // [bp-0x468]
    let v14: u64;  // [bp-0x460]
    let v15: iNone;  // [bp-0x460]
    let v16: i8;  // [bp-0x458], Other Possible Types: u128
    let v17: u64;  // [bp-0x458]
    let v18: u64;  // [bp-0x450]
    let v19: iNone;  // [bp-0x448]
    let v20: i8;  // [bp-0x438], Other Possible Types: u128
    let v21: iNone;  // [bp-0x428]
    let v22: u64;  // [bp-0x410]
    let v23: u64;  // [bp-0x408]
    let v24: u64;  // [bp-0x400]
    let v25: u64;  // [bp-0x3f8]
    let v26: iNone;  // [bp-0x3f0]
    let v27: iNone;  // [bp-0x3e0]
    let v28: u64;  // [bp-0x3d0]
    let v29: u64;  // [bp-0x3c8]
    let v30: struct24;  // [bp-0x3c0], Other Possible Types: u8
    let v31: struct24;  // [bp-0x3a8]
    let v32: struct64;  // [bp-0x3a8]
    let v33: u64;  // [bp-0x3a0]
    let v34: u64;  // [bp-0x398]
    let v35: iNone;  // [bp-0x388]
    let v36: u64;  // [bp-0x378]
    let v37: void*;  // [bp-0x370]
    let v38: u8;  // [bp-0x368]
    let v39: void*;  // [bp-0x350]
    let v40: u64;  // [bp-0x348]
    let v41: u128;  // [bp-0x340]
    let v42: u64;  // [bp-0x330]
    let v43: u64;  // [bp-0x328]
    let v44: u64;  // [bp-0x320]
    let v45: u64;  // [bp-0x318]
    let v46: iNone;  // [bp-0x310]
    let v47: u64;  // [bp-0x300]
    let v48: Result<struct32, struct16>;  // [bp-0x2f8], Other Possible Types: struct28, struct56, struct64, struct80
    let v49: struct712;  // [bp-0x2f8]
    let v50: u128;  // [bp-0x2f8]
    let v51: Option<struct32>;  // [bp-0x2f8], Other Possible Types: u256
    let v52: struct24;  // [bp-0x2f8], Other Possible Types: u192
    let v53: struct24;  // [bp-0x2f8], Other Possible Types: u192
    let v54: u64;  // [bp-0x2f0]
    let v55: u64;  // [bp-0x2e8]
    let v56: u64;  // [bp-0x2e8]
    let v57: u128;  // [bp-0x2e0]
    let v58: u64;  // [bp-0x2d0]
    let v59: u128;  // [bp-0x2c8]
    let v60: u64;  // [bp-0x2b8]
    let v63: u64;  // rdx
    let v64: core::fmt::Arguments;  // rdi
    let v65: u32;  // ebp
    let v67: u8;  // r14b
    let v68: u128;  // xmm0
    let v69: iNone;  // xmm1
    let v70: u64;  // r15
    let v71: i64;  // r12
    let v72: i64;  // r13
    let v73: i64;  // rax
    let v74: u8;  // al
    let v75: u128;  // xmm0
    let v76: u64;  // rax
    let v77: u64;  // rcx
    let v80: void*;  // rbx
    let v81: iNone;  // xmm0

    core::iter::traits::iterator::Iterator::collect(&v38, core::iter::traits::iterator::Iterator::map(a0, a1), v63);
    v49 = uu_cut::uu_app();
    v12 = clap_builder::builder::command::Command::try_get_matches_from(&v49, &v38);
    v64 = v14;
    if (((0 ^ v12.field_0) & (0 ^ -(v13))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
    }
    v28 = *(&v20 as &i64);
    v27 = v19;
    v26 = *(&v16 as &i128);
    v24 = v12.field_0;
    v25 = v14;
    v65 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, "complement");
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, "only-delimited");
    v50 = uu_cut::get_delimiters(&v24);
    match v50 as u320 {
        Err(_) => {
            return v54;
        },
        Ok(_) => {
            v29 = v55;
            v22 = *((&v48 as &char + 24) as &i64);
            v23 = *((&v48 as &char + 32) as &i64);
            v67 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, "zero-terminated") as u8 ? 0 : 10);
            v31 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v24, "bytes");
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v24, "characters");
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v24, "fields");
            v56 = v34;
            v68 = *(&v31.field_0 as &i128);
            v50 = v68;
            v57 = *(&v1.field_0 as &i128) as u128;
            v58 = v3;
            v69 = *(&v11.field_0 as &i128);
            *(&v59 as void*) = v69;
            v60 = v16;
            v41 = v68;
            v46 = v69;
            v47 = v60;
            v42 = v56;
            v43 = v57 as i64;
            v44 = *((&v57 as &char + 8) as &i64);
            v45 = v58;
            v39 = 0;
            v40 = 3;
            v70 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold(&v39, a1) as u64;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v50 as u320, &v24, "bytes");
            v71 = clap_builder::parser::error::MatchesError::unwrap("bytes", &v50 as u320);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v50 as u320, &v24, "characters");
            v72 = clap_builder::parser::error::MatchesError::unwrap("characters", &v50 as u320);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v50 as u320, &v24, "fields");
            v73 = clap_builder::parser::error::MatchesError::unwrap("fields", &v50 as u320);
            if v70 {
                if v70 != 1 {
                    v53 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)");
                    goto LABEL_46012b;
                }
                if v71 {
                    if v72 || v73 {
                        goto LABEL_460112;
                    }
                    v51 = uu_cut::list_to_ranges(*((v71 + 8) as &i64), *((v71 + 16) as &i64), v65 as u64);
                    if v51 as i32 == 1 {
                        goto LABEL_460073;
                    }
                    v10 = *((&v51 as &char + 24) as &i64);
                    v8 = *((&v51 as &char + 8) as &i128) as u128;
                    v2 = v22;
                    v3 = v23;
                    v6 = 2;
                    v7 = v67;
                    v1 = 0;
                    if !(0) {
                        goto LABEL_460097;
                    }
                } else if v72 {
                    if v73 {
                        goto LABEL_460112;
                    }
                    v51 = uu_cut::list_to_ranges(*((v72 + 8) as &i64), *((v72 + 16) as &i64), v65 as u64);
                    if v51 as i32 == 1 {
                        goto LABEL_460073;
                    }
                    v10 = *((&v51 as &char + 24) as &i64);
                    v8 = *((&v51 as &char + 8) as &i128) as u128;
                    v2 = v22;
                    v3 = v23;
                    v6 = 2;
                    v7 = v67;
                    v1 = 1;
                    if !(0) {
                        goto LABEL_460097;
                    }
                } else {
                    if !v73 {
                        goto LABEL_460112;
                    }
                    v51 = uu_cut::list_to_ranges(*((v73 + 8) as &i64), *((v73 + 16) as &i64), v65 as u64);
                    if v51 as i32 == 1 {
LABEL_460073:
                        v4 = *((&v51 as &char + 24) as &i64);
                        v2 = *((&v51 as &char + 8) as &i128) as u128;
                        v1 = 3;
                        if !(1) {
                            goto LABEL_460097;
                        }
                    } else {
                        v10 = *((&v51 as &char + 24) as &i64);
                        v8 = *((&v51 as &char + 8) as &i128) as u128;
                        v2 = v22;
                        v3 = v23;
                        v4 = v54;
                        v5 = v29;
                        v6 = v0;
                        v7 = v67;
                        v1 = 2;
LABEL_460097:
                        if v1 {
                            if v1 != 1 {
                                goto LABEL_4604a9;
                            }
                            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v24, "delimiter") as u8 {
                                goto LABEL_460386;
                            }
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, "whitespace-delimited") as u8 {
                                goto LABEL_460425;
                            }
                            v74 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, "only-delimited") as u8;
                            goto LABEL_46045a;
                        }
                        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v24, "delimiter") as u8 {
LABEL_460386:
                            v52 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("invalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fields");
                            goto LABEL_460477;
                        }
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, "whitespace-delimited") as u8 {
LABEL_460425:
                            v52 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("invalid input: The '-w' option only usable if printing a sequence of fields");
                            goto LABEL_460477;
                        } else {
                            v74 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, "only-delimited") as u8;
LABEL_46045a:
                            if v74 {
                                v52 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("invalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fields");
LABEL_460477:
                                v18 = v56;
                                *(&v15 as &i128) = v52 as i128;
                                v13 = 3;
                                goto LABEL_46019d;
                            } else {
LABEL_4604a9:
                                v21 = *(&v9 as &i128);
                                v75 = *(&v1 as &i128);
                                v69 = *(&v3 as &i128);
                                v20 = *(&v7 as &i128);
                                v19 = *(&v5 as &i128);
                                *(&v16 as void*) = v69;
                                v11 = v75;
                                goto LABEL_46019d;
                            }
                        }
                    }
                }
            } else {
LABEL_460112:
                v53 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("invalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)");
LABEL_46012b:
                v4 = v56;
                v2 = v53 as i128 as u128;
                v1 = 3;
            }
            v21 = *(&v9 as &i128);
            v69 = *(&v7 as &i128);
            v20 = v69;
            v19 = *(&v5 as &i128);
            v17 = v3;
            v18 = v4;
            v13 = v1;
            v14 = v2;
LABEL_46019d:
            v48 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v24);
            v32 = clap_builder::parser::error::MatchesError::unwrap(&v48);
            v76 = v32.field_0 as i64;
            if v32.field_0 as i64 {
                v77 = v33;
                v69 = v32.field_16;
            }
            v48 = struct64 {
                field_0: v76
                field_8: v77
                field_16: v69
                field_32: v35
                field_48: v36
                field_56: v37
            };
            core::iter::traits::iterator::Iterator::collect(&v30, &v48);
            if v13 as i32 == 3 {
                v48 = struct28 {
                    field_0: v15 as i128
                    field_16: v18
                    field_24: 1
                };
                v80 = alloc::boxed::Box<T>::new(&v48) as u64;
            } else {
                v81 = *(&v13 as &i128);
                v48 = struct80 {
                    field_0: v81
                    field_16: (&v15)[8] as i128
                    field_32: v19
                    field_48: v20
                    field_64: v21
                };
                v31 = v30;
                uu_cut::cut_files(&v31, &v48);
            }
            return v80;
        },
    }
}
