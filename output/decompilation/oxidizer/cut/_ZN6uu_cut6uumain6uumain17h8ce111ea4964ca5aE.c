fn uu_cut::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x4f9]
    let v1: u8;  // [bp-0x4f8], Other Possible Types: struct24
    let v2: u64;  // [bp-0x4f0]
    let v3: u64;  // [bp-0x4e8]
    let v4: u64;  // [bp-0x4e0]
    let v5: u64;  // [bp-0x4d8]
    let v6: u8;  // [bp-0x4d0]
    let v7: u8;  // [bp-0x4c8]
    let v8: u8;  // [bp-0x4c0]
    let v9: u8;  // [bp-0x4b8]
    let v10: u64;  // [bp-0x4b0]
    let v11: u128;  // [bp-0x4a8], Other Possible Types: Result<struct56, struct16>
    let v12: struct24;  // [bp-0x4a8]
    let v13: u64;  // [bp-0x4a8]
    let v14: u128;  // [bp-0x4a0]
    let v15: u128;  // [bp-0x498]
    let v16: u64;  // [bp-0x490]
    let v17: u128;  // [bp-0x488]
    let v18: u128;  // [bp-0x478]
    let v19: u128;  // [bp-0x468]
    let v20: u64;  // [bp-0x450]
    let v21: u64;  // [bp-0x448]
    let v22: u64;  // [bp-0x440]
    let v23: u64;  // [bp-0x438]
    let v24: u8;  // [bp-0x430]
    let v25: u8;  // [bp-0x420]
    let v26: u64;  // [bp-0x410]
    let v27: struct24;  // [bp-0x408], Other Possible Types: u192
    let v28: struct24;  // [bp-0x408], Other Possible Types: u192
    let v29: struct64;  // [bp-0x408]
    let v30: u64;  // [bp-0x400]
    let v31: u64;  // [bp-0x3f8]
    let v32: u128;  // [bp-0x3e8]
    let v33: u64;  // [bp-0x3d8]
    let v34: void*;  // [bp-0x3d0]
    let v35: u64;  // [bp-0x3c8]
    let v36: u8;  // [bp-0x3c0]
    let v37: u64;  // [bp-0x3b8]
    let v38: u64;  // [bp-0x3b0]
    let v39: struct24;  // [bp-0x3a8]
    let v40: u192;  // [bp-0x3a8]
    let v41: void*;  // [bp-0x390]
    let v42: u64;  // [bp-0x388]
    let v43: u128;  // [bp-0x380]
    let v44: u64;  // [bp-0x370]
    let v45: u64;  // [bp-0x368]
    let v46: u64;  // [bp-0x360]
    let v47: u64;  // [bp-0x358]
    let v48: u8;  // [bp-0x350]
    let v49: u64;  // [bp-0x340]
    let v50: u512;  // [bp-0x338]
    let v51: u224;  // [bp-0x2f8], Other Possible Types: struct56, Result<struct32, struct16>
    let v52: u128;  // [bp-0x2f8], Other Possible Types: std::sys::os_str::bytes::Buf
    let v53: struct24;  // [bp-0x2f8]
    let v54: Option<struct24>;  // [bp-0x2f8], Other Possible Types: u320
    let v56: u128;  // [bp-0x2f8]
    let v57: u64;  // [bp-0x2f0]
    let v58: u64;  // [bp-0x2e8]
    let v59: u128;  // [bp-0x2e8]
    let v60: u128;  // [bp-0x2e0]
    let v61: u128;  // [bp-0x2d8]
    let v62: u64;  // [bp-0x2d0]
    let v63: u8;  // [bp-0x2c8]
    let v64: u64;  // [bp-0x2b8]
    let v66: u32;  // eax
    let v67: u32;  // ebx
    let v69: u8;  // r13b
    let v70: u128;  // xmm0
    let v71: u64;  // r14
    let v72: i64;  // r15
    let v73: i64;  // r12
    let v74: i64;  // rax
    let v75: u128;  // xmm1
    let v76: u128;  // xmm2
    let v77: u128;  // xmm3
    let v78: u8;  // al
    let v79: u128;  // xmm0
    let v81: u64;  // rax
    let v82: u64;  // rcx
    let v85: u128;  // xmm0
    let v87: void*;  // rbx

    core::iter::traits::iterator::Iterator::collect(&v36, a0, a1);
    v52 = std::sys::os_str::bytes::Slice::to_owned("-d=");
    v15 = v58;
    v11 = *(&v52.inner.buf.cap as &i128);
    v66 = <T as core::slice::cmp::SliceContains>::slice_contains(&v11, v37, v38);
    uu_cut::uu_app(&v52);
    v3 = v38;
    memcpy(&v1, &v36, 16);
    v11 = clap_builder::builder::command::Command::try_get_matches_from(&v52, &v1);
    match v11 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
        },
        Ok(_) => {
            v26 = *((&v11 as &char + 48) as &i64);
            memcpy(&v25, &v11 as u128, 16);
            memcpy(&v24, &v11, 16);
            v22 = v11 as i64;
            v23 = v14;
            v67 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v22, "complement") as i32;
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v22, "only-delimited") as i8;
            v52 as u320 = uu_cut::get_delimiters(&v22, v66 as u64);
            match v52 as u320 {
                Err(_) => {
                    return v57;
                },
                Ok(_) => {
                    v35 = v58;
                    v20 = *((&v51 as &char + 24) as &i64);
                    v21 = *((&v51 as &char + 32) as &i64);
                    v69 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v22, "zero-terminated") as i8 ? 0 : 10);
                    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v22, "bytes");
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v22, "characters");
                    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v22, "fields");
                    v58 = v31;
                    v70 = *(&v27.field_0 as &i128);
                    v52 = v70;
                    v60 = *(&v1.field_0 as &i128) as u128;
                    v62 = v3;
                    memcpy(&v63, &v12, 16);
                    v64 = v15;
                    v43 = v70;
                    memcpy(&v48, &v12, 16);
                    v49 = v64;
                    v44 = v58;
                    v45 = v60 as i64;
                    v46 = *((&v60 as &char + 8) as &i64);
                    v47 = v62;
                    v41 = 0;
                    v42 = 3;
                    v71 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold(&v41);
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v52 as u320, &v22, "bytes");
                    v72 = clap_builder::parser::error::MatchesError::unwrap("bytes", &v52 as u320);
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v52 as u320, &v22, "characters");
                    v73 = clap_builder::parser::error::MatchesError::unwrap("characters", &v52 as u320);
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v52 as u320, &v22, "fields");
                    v74 = clap_builder::parser::error::MatchesError::unwrap("fields", &v52 as u320);
                    if v71 {
                        if v71 != 1 {
                            v53 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)");
                            goto LABEL_46e18a;
                        }
                        if v72 {
                            if !(!v73 && !v74) {
                                goto LABEL_46e171;
                            }
                            v54 = uu_cut::list_to_ranges(*((v72 + 8) as &i64), *((v72 + 16) as &i64), v67 as u64);
                            if !(!v54 as i64) {
                                goto LABEL_46e08f;
                            }
                            v10 = *((&v54 as &char + 24) as &i64);
                            memcpy(&v8, &v57, 16);
                            v2 = v20;
                            v3 = v21;
                            v6 = 2;
                            v7 = v69;
                            v1 = 0;
                            if !(0) {
                                goto LABEL_46e0b3;
                            }
                        } else if v73 {
                            if !(!v74) {
                                goto LABEL_46e171;
                            }
                            v54 = uu_cut::list_to_ranges(*((v73 + 8) as &i64), *((v73 + 16) as &i64), v67 as u64);
                            if !(!v54 as i64) {
                                goto LABEL_46e08f;
                            }
                            v10 = *((&v54 as &char + 24) as &i64);
                            memcpy(&v8, &v57, 16);
                            v2 = v20;
                            v3 = v21;
                            v6 = 2;
                            v7 = v69;
                            v1 = 1;
                            if !(0) {
                                goto LABEL_46e0b3;
                            }
                        } else {
                            if !v74 {
                                goto LABEL_46e171;
                            }
                            v54 = uu_cut::list_to_ranges(*((v74 + 8) as &i64), *((v74 + 16) as &i64), v67 as u64);
                            match v54 {
                                Some(_) => {
LABEL_46e08f:
                                    v4 = *((&v54 as &char + 24) as &i64);
                                    memcpy(&v1 as u8, &v57, 16);
                                    v1 = 3;
                                    if !(1) {
                                        goto LABEL_46e0b3;
                                    }
                                },
                                None => {
                                    v10 = *((&v54 as &char + 24) as &i64);
                                    memcpy(&v8, &v57, 16);
                                    v2 = v20;
                                    v3 = v21;
                                    v4 = v57;
                                    v5 = v35;
                                    v6 = v0;
                                    v7 = v69;
                                    v1 = 2;
LABEL_46e0b3:
                                    v75 = *(&v3 as &i128);
                                    v76 = *(&v5 as &i128);
                                    v77 = *(&v7 as &i128);
                                    v56 = *(&v1 as &i128) as u128;
                                    memcpy(&v64, &v9, 16);
                                    v63 = v77;
                                    v61 = v76;
                                    v59 = v75;
                                    if let Some(_) = v54 {
                                        if !(v56 as i64 as i32 == 1) {
                                            goto LABEL_46e55e;
                                        }
                                        if !(!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v22, "delimiter") as i8) {
                                            goto LABEL_46e434;
                                        }
                                        if !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v22, "whitespace-delimited") as i8) {
                                            goto LABEL_46e474;
                                        }
                                        v78 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v22, "only-delimited") as i8;
                                        goto LABEL_46e50f;
                                    }
                                    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v22, "delimiter") as i8 {
LABEL_46e434:
                                        v28 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fields");
                                        goto LABEL_46e52c;
                                    }
                                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v22, "whitespace-delimited") as i8 {
LABEL_46e474:
                                        v28 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '-w' option only usable if printing a sequence of fields");
                                        goto LABEL_46e52c;
                                    } else {
                                        v78 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v22, "only-delimited") as i8;
LABEL_46e50f:
                                        if v78 {
                                            v28 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fields");
LABEL_46e52c:
                                            v16 = v31;
                                            v14 = v28 as i128 as u128;
                                            v13 = 3;
                                            goto LABEL_46e201;
                                        } else {
LABEL_46e55e:
                                            memcpy(&v11, &v64, 16);
                                            v79 = v56;
                                            v75 = v59;
                                            v18 = v63;
                                            memcpy(&v11, &v61, 16);
                                            v15 = v75;
                                            v11 = v79;
                                            goto LABEL_46e201;
                                        }
                                    }
                                },
                            }
                        }
                    } else {
LABEL_46e171:
                        v53 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)");
LABEL_46e18a:
                        v4 = v58;
                        memcpy(&v1 as u8, &v53, 16);
                        v1 = 3;
                    }
                    memcpy(&v11, &v9, 16);
                    v75 = *(&v7 as &i128);
                    v18 = v75;
                    memcpy(&v11, &v5, 16);
                    v15 = v3;
                    v16 = v4;
                    v13 = v1;
                    v14 = v2;
LABEL_46e201:
                    v51 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v22, "file");
                    v29 = clap_builder::parser::error::MatchesError::unwrap("file", &v51);
                    v81 = v29.field_0 as i64;
                    if v29.field_0 as i64 {
                        v82 = v30;
                        v75 = v29.field_16;
                    }
                    v50 = struct64 {
                        field_0: v81
                        field_8: v82
                        field_16: v75
                        field_32: v32
                        field_48: v33
                        field_56: v34
                    };
                    v39 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v50);
                    if v13 as i32 == 3 {
                        v51 = struct28 {
                            field_0: *(&v14 as &i128)
                            field_16: v16
                            field_24: 1
                        };
                        v87 = alloc::boxed::Box<T>::new(&v51);
                    } else {
                        memcpy(&v64, &v19, 16);
                        v85 = *(&v13 as &i128);
                        v51 = struct64 {
                            field_0: v85
                            field_16: *(&v15 as &i128)
                            field_32: v17
                            field_48: v18
                        };
                        v27 = v40;
                        uu_cut::cut_files(&v27, &v51);
                    }
                    return v87;
                },
            }
        },
    }
}
