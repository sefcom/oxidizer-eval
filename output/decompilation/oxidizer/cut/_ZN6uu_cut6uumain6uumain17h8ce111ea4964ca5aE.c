fn uu_cut::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x4f9]
    let v1: i192;  // [sp-0x4f8], Other Possible Types: Option<struct24>
    let v2: i64;  // [sp-0x4f0], Other Possible Types: struct24
    let v3: i64;  // [sp-0x4e8]
    let v4: i64;  // [sp-0x4e0]
    let v5: i64;  // [sp-0x4d8]
    let v6: i8;  // [sp-0x4d0]
    let v7: i8;  // [sp-0x4c8]
    let v8: i128;  // [sp-0x4c0]
    let v9: i64;  // [sp-0x4b0]
    let v10: i192;  // [sp-0x4a8], Other Possible Types: Option<struct24>, struct24
    let v11: i64;  // [sp-0x4a0]
    let v12: i64;  // [sp-0x498]
    let v13: i64;  // [sp-0x490]
    let v14: i128;  // [sp-0x488]
    let v15: i128;  // [bp-0x478]
    let v16: i128;  // [sp-0x468]
    let v17: i64;  // [sp-0x450]
    let v18: i64;  // [sp-0x448]
    let v19: i64;  // [sp-0x440]
    let v20: i64;  // [sp-0x438]
    let v21: i128;  // [sp-0x430]
    let v22: i128;  // [sp-0x420]
    let v23: i64;  // [sp-0x410]
    let v24: struct24;  // [sp-0x408], Other Possible Types: i192, struct64, Option<struct24>
    let v25: i64;  // [sp-0x3c8]
    let v26: i8;  // [bp-0x3c0]
    let v27: i8;  // [bp-0x3b8]
    let v28: i8;  // [bp-0x3b0]
    let v29: struct24;  // [sp-0x3a8]
    let v30: i64;  // [sp-0x390]
    let v31: i64;  // [sp-0x388]
    let v32: i128;  // [sp-0x380]
    let v33: i64;  // [sp-0x370]
    let v34: i64;  // [sp-0x368]
    let v35: i64;  // [sp-0x360]
    let v36: i64;  // [sp-0x358]
    let v37: i128;  // [sp-0x350]
    let v38: i64;  // [sp-0x340]
    let v39: struct64;  // [bp-0x338]
    let v40: i320;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct8>, Option<struct24>, struct24, struct56, struct712
    let v41: i64;  // [sp-0x2e8]
    let v42: i192;  // [sp-0x2e0], Other Possible Types: Option<struct24>
    let v43: i128;  // [bp-0x2d8]
    let v44: i64;  // [sp-0x2d0]
    let v45: i128;  // [sp-0x2c8]
    let v46: i128;  // [bp-0x2b8]
    let v50: i32;  // eax
    let v51: i64;  // rax
    let v52: i32;  // ebx
    let v53: i64;  // rbp
    let v54: i8;  // r13b
    let v55: i64;  // rax
    let v56: i64;  // r14
    let v57: i64;  // r15
    let v58: i64;  // r12
    let v59: i64;  // rax
    let v60: i128;  // xmm1
    let v61: i128;  // xmm2
    let v62: i128;  // xmm3
    let v64: i8;  // al
    let v71: i128;  // xmm0
    let v72: i128;  // xmm1

    core::iter::traits::iterator::Iterator::collect(&v26, a0, a1);
    v40 = std::sys::os_str::bytes::Slice::to_owned("-d=");
    v10 = v40;
    v50 = <T as core::slice::cmp::SliceContains>::slice_contains(&v10, v27, v28) as i32;
    v40 = uu_cut::uu_app();
    v1 = v26;
    clap_builder::builder::command::Command::try_get_matches_from(&v10, &v40, &v1);
    if v19 == 0x8000000000000000 {
        v51 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
        return v51;
    }
    v23 = v15;
    v22 = v14;
    v21 = v10;
    v19 = v10;
    v20 = v11;
    v52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "complement") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "only-delimited") as i8;
    v40 = uu_cut::get_delimiters(&v19, v50);
    v53 = *((&v40 as &char + 8) as &i64);
    match v40 {
        Err(_) => {
            return v51;
        },
        Ok(_) => {
            v25 = v41;
            v17 = *((&v40 as &char + 24) as &i64);
            v18 = *((&v40 as &char + 32) as &i64);
            v54 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "zero-terminated") as i8 ? 0 : 10);
            v24 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v19, "bytes");
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v19, "characters");
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v19, "fields");
            v40 = v24;
            v42 = v1;
            v45 = v10;
            v55 = v12;
            v46 = v55;
            v32 = v40;
            v37 = v45;
            v38 = v55;
            v33 = v41;
            v34 = v42;
            v35 = *((&v42 as &char + 8) as &i64);
            v36 = v44;
            v30 = 0;
            v31 = 3;
            v56 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold(&v30);
            v40 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, "bytes");
            v57 = clap_builder::parser::error::MatchesError::unwrap("bytes", &v40);
            v40 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, "characters");
            v58 = clap_builder::parser::error::MatchesError::unwrap("characters", &v40);
            v40 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, "fields");
            v59 = clap_builder::parser::error::MatchesError::unwrap("fields", &v40);
            if !v56 {
LABEL_46e171:
                v40 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)");
                goto LABEL_46e18a;
            }
            if v56 != 1 {
                v40 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)");
LABEL_46e18a:
                v2 = v40;
                v1 = 3;
LABEL_46e1ad:
                v16 = *((&v8 as &char + 8) as &i128);
                v15 = v7;
                v14 = v5;
                v12 = v3;
                v13 = v4;
                v10 = v1;
                v11 = v2;
                goto LABEL_46e201;
            }
            if v57 {
                if !(!v58) || !(!v59) {
                    goto LABEL_46e171;
                }
                v40 = uu_cut::list_to_ranges(*((v57 + 8) as &i64), *((v57 + 16) as &i64), v52 as u32 as u64);
                if !(!v58) || !(!v59) {
                    goto LABEL_46e08f;
                }
                v9 = *((&v40 as &char + 24) as &i64);
                v8 = *((&v40 as &char + 8) as &i128);
                v2 = v17;
                v3 = v18;
                v6 = 2;
                v7 = v54;
                v1 = 0;
                if 0 {
                    goto LABEL_46e1ad;
                }
            } else if !v58 {
                if !v59 {
                    goto LABEL_46e171;
                }
                v40 = uu_cut::list_to_ranges(*((v59 + 8) as &i64), *((v59 + 16) as &i64), v52 as u32 as u64);
                if !(!v58) || !(!v59) {
                    goto LABEL_46e08f;
                }
                v9 = *((&v40 as &char + 24) as &i64);
                v8 = *((&v40 as &char + 8) as &i128);
                v2 = v17;
                v3 = v18;
                v4 = v53;
                v5 = v25;
                v6 = v0;
                v7 = v54;
                v1 = 2;
                if 0 {
                    goto LABEL_46e1ad;
                }
            } else {
                if !(!v58) || !(!v59) {
                    goto LABEL_46e171;
                }
                v40 = uu_cut::list_to_ranges(*((v58 + 8) as &i64), *((v58 + 16) as &i64), v52 as u32 as u64);
                match v40 {
                    Some(_) => {
LABEL_46e08f:
                        v4 = *((&v40 as &char + 24) as &i64);
                        v2 = *((&v40 as &char + 8) as &i128);
                        v1 = 3;
                        if 1 {
                            goto LABEL_46e1ad;
                        }
                    },
                    None => {
                        v9 = *((&v40 as &char + 24) as &i64);
                        v8 = *((&v40 as &char + 8) as &i128);
                        v2 = v17;
                        v3 = v18;
                        v6 = 2;
                        v7 = v54;
                        v1 = 1;
                        if 0 {
                            goto LABEL_46e1ad;
                        }
                    },
                }
            }
            v60 = *((&v2 as &char + 8) as &i128);
            v61 = v5;
            v62 = v7;
            v40 = v1;
            v46 = *((&v8 as &char + 8) as &i128);
            v45 = v62;
            v43 = v61;
            v41 = v60;
            if !v40 {
                if !(!v58) || !(!v59) {
                    goto LABEL_46e434;
                }
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "whitespace-delimited") as i8 {
                    v64 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "only-delimited") as i8;
                    goto LABEL_46e50f;
                }
LABEL_46e474:
                v24 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '-w' option only usable if printing a sequence of fields");
                goto LABEL_46e55c;
            } else {
                if !(!v58) || !(!v59) {
                    goto LABEL_46e55e;
                }
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v19, "delimiter") as i8 {
LABEL_46e434:
                    v24 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fields");
                    goto LABEL_46e55c;
                }
                if !(!v58) || !(!v59) {
                    goto LABEL_46e474;
                }
                v64 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "only-delimited") as i8;
LABEL_46e50f:
                if !v64 {
LABEL_46e55e:
                    v16 = v46;
                    v15 = v45;
                    v14 = v43;
                    v12 = v41;
                    v10 = v40;
                } else {
                    v24 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fields");
LABEL_46e55c:
                }
            }
LABEL_46e201:
            v40 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19, "file");
            v24 = clap_builder::parser::error::MatchesError::unwrap("file", &v40);
            *(&v39.field_0 as &struct64) = struct64 {
                field_0: v65
                field_8: v66
                field_16: v67
                field_32: v68
                field_48: v69
                field_56: v70
            };
            v29 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v39);
            if v10 == 3 {
                v41 = v13;
                v40 = *((&v10 as &char + 8) as &i128);
                v42 = 1;
            } else {
                v46 = v16;
                v71 = v10;
                v72 = *((&v10 as &char + 16) as &i128);
                v45 = v15;
                v43 = v14;
                v41 = v72;
                v40 = v71;
                v24 = v29;
                uu_cut::cut_files(&v24, &v40);
            }
            return v51;
        },
    }
}
