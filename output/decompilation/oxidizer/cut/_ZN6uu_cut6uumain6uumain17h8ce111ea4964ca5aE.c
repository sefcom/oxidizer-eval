fn uu_cut::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x4f9]
    let v1: iNone;  // [sp-0x4f8], Other Possible Types: Option<struct24>, unsigned long
    let v2: i64;  // [sp-0x4f0], Other Possible Types: int
    let v3: struct24;  // [sp-0x4f0]
    let v4: i64;  // [sp-0x4e0]
    let v5: i64;  // [sp-0x4d8]
    let v6: i8;  // [sp-0x4d0]
    let v7: i8;  // [sp-0x4c8]
    let v8: iNone;  // [sp-0x4c0]
    let v9: i64;  // [sp-0x4b0]
    let v10: i64;  // [bp-0x4a8], Other Possible Types: int, Option<struct24>
    let v11: struct24;  // [sp-0x4a8], Other Possible Types: unsigned long
    let v12: i64;  // [sp-0x4a0]
    let v13: i64;  // [sp-0x498]
    let v14: i64;  // [sp-0x490]
    let v15: iNone;  // [sp-0x488]
    let v16: iNone;  // [bp-0x478], Other Possible Types: char
    let v17: iNone;  // [sp-0x468]
    let v18: i64;  // [sp-0x450]
    let v19: i64;  // [sp-0x448]
    let v20: i64;  // [sp-0x440]
    let v21: i64;  // [sp-0x438]
    let v22: iNone;  // [sp-0x430]
    let v23: iNone;  // [sp-0x420]
    let v24: i64;  // [sp-0x410]
    let v25: struct24;  // [sp-0x408], Other Possible Types: Option<struct24>, struct64
    let v26: i64;  // [sp-0x3c8]
    let v27: i8;  // [bp-0x3c0]
    let v28: i8;  // [bp-0x3b8]
    let v29: i8;  // [bp-0x3b0]
    let v30: struct24;  // [sp-0x3a8]
    let v31: i64;  // [sp-0x390]
    let v32: i64;  // [sp-0x388]
    let v33: iNone;  // [sp-0x380]
    let v34: i64;  // [sp-0x370]
    let v35: i64;  // [sp-0x368]
    let v36: i64;  // [sp-0x360]
    let v37: i64;  // [sp-0x358]
    let v38: iNone;  // [sp-0x350]
    let v39: i64;  // [sp-0x340]
    let v40: struct64;  // [bp-0x338]
    let v41: Result<struct40, struct8>;  // [sp-0x2f8], Other Possible Types: int, struct24, struct56, struct712, struct80, Option<struct24>
    let v42: Option<struct24>;  // [sp-0x2f8], Other Possible Types: int
    let v43: i64;  // [sp-0x2e8], Other Possible Types: int
    let v44: Option<struct24>;  // [sp-0x2e0], Other Possible Types: unsigned int
    let v45: iNone;  // [bp-0x2d8]
    let v46: i64;  // [sp-0x2d0]
    let v47: iNone;  // [sp-0x2c8]
    let v48: i64;  // [bp-0x2b8], Other Possible Types: int
    let v52: i32;  // eax
    let v53: i64;  // rax
    let v54: i32;  // ebx
    let v56: i8;  // r13b
    let v57: i64;  // rax
    let v58: i64;  // r14
    let v59: i64;  // r15
    let v60: i64;  // r12
    let v61: i64;  // rax
    let v62: iNone;  // xmm1
    let v63: iNone;  // xmm2
    let v64: iNone;  // xmm3
    let v65: i64;  // rax
    let v66: i8;  // al
    let v75: i64;  // rbx

    core::iter::traits::iterator::Iterator::collect(&v27, a0, a1);
    v41 = std::sys::os_str::bytes::Slice::to_owned("-d=");
    v11 = v41;
    v52 = <T as core::slice::cmp::SliceContains>::slice_contains(&v11, *(&v28 as &i64), *(&v29 as &i64)) as i32;
    v41 = uu_cut::uu_app();
    v1 = *(&v27 as &i192);
    clap_builder::builder::command::Command::try_get_matches_from(&v11, &v41, &v1);
    if v20 == 0x8000000000000000 {
        v53 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
        return v53;
    }
    v24 = *(&v16 as &i64);
    v23 = v15;
    v22 = *(&v11.field_0 as &i128);
    v20 = v11;
    v21 = v12;
    v54 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "complement") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "only-delimited") as i8;
    v41 = uu_cut::get_delimiters(&v20, v52 as u64);
    match v41 {
        Err(_) => {
            v53 = *((&v41 as &char + 8) as &i64);
            return v53;
        },
        Ok(_) => {
            v26 = v43;
            v18 = *((&v41 as &char + 24) as &i64);
            v19 = *((&v41 as &char + 32) as &i64);
            v56 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "zero-terminated") as i8 ? 0 : 10);
            v25 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v20, "bytes");
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v20, "characters");
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v20, "fields");
            v41 = v25;
            v44 = v1;
            v47 = v10 as i128;
            v57 = v13;
            v48 = v57;
            v33 = v41;
            v38 = v47;
            v39 = v57;
            v34 = v43;
            v35 = v44 as i64;
            v36 = *((&v44 as &char + 8) as &i64);
            v37 = v46;
            v31 = 0;
            v32 = 3;
            v58 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold(&v31);
            v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, "bytes");
            v59 = clap_builder::parser::error::MatchesError::unwrap("bytes", &v41);
            v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, "characters");
            v60 = clap_builder::parser::error::MatchesError::unwrap("characters", &v41);
            v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, "fields");
            v61 = clap_builder::parser::error::MatchesError::unwrap("fields", &v41);
            if !v58 {
LABEL_46e171:
                v41 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)");
                goto LABEL_46e18a;
            }
            if v58 != 1 {
                v41 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)");
LABEL_46e18a:
                v3 = v41;
                v1 = 3;
LABEL_46e1ad:
                v17 = (&v8)[8] as i128;
                v16 = *(&v7 as &i128);
                v15 = *(&v5 as &i128);
                v10 = v2;
                v14 = v4;
                v10 = v1;
                v10 = v2;
                goto LABEL_46e201;
            }
            if v59 {
                if !(!v60 && !v61) {
                    goto LABEL_46e171;
                }
                v42 = uu_cut::list_to_ranges(*((v59 + 8) as &i64), *((v59 + 16) as &i64), v54 as u64);
                if !(!v42 as i64) {
                    goto LABEL_46e08f;
                }
                v9 = *((&v42 as &char + 24) as &i64);
                v8 = *((&v42 as &char + 8) as &i128);
                v2 = v18;
                v2 = v19;
                v6 = 2;
                v7 = v56;
                v1 = 0;
                if 0 {
                    goto LABEL_46e1ad;
                }
            } else if !v60 {
                if !v61 {
                    goto LABEL_46e171;
                }
                v42 = uu_cut::list_to_ranges(*((v61 + 8) as &i64), *((v61 + 16) as &i64), v54 as u64);
                if !(!v42 as i64) {
                    goto LABEL_46e08f;
                }
                v9 = *((&v42 as &char + 24) as &i64);
                v8 = *((&v42 as &char + 8) as &i128);
                v2 = v18;
                v2 = v19;
                v4 = v53;
                v5 = v26;
                v6 = v0;
                v7 = v56;
                v1 = 2;
                if 0 {
                    goto LABEL_46e1ad;
                }
            } else {
                if !(!v61) {
                    goto LABEL_46e171;
                }
                v42 = uu_cut::list_to_ranges(*((v60 + 8) as &i64), *((v60 + 16) as &i64), v54 as u64);
                match v42 {
                    Some(_) => {
LABEL_46e08f:
                        v4 = (&v42)[24] as i64;
                        *(&v2 as &i128) = (&v42)[8] as i128;
                        v1 = 3;
                        if 1 {
                            goto LABEL_46e1ad;
                        }
                    },
                    None => {
                        v9 = *((&v42 as &char + 24) as &i64);
                        v8 = *((&v42 as &char + 8) as &i128);
                        v2 = v18;
                        v2 = v19;
                        v6 = 2;
                        v7 = v56;
                        v1 = 1;
                        if 0 {
                            goto LABEL_46e1ad;
                        }
                    },
                }
            }
            v62 = (&v2)[8] as i128;
            v63 = *(&v5 as &i128);
            v64 = *(&v7 as &i128);
            v41 = *(&v1 as &i128);
            *(&v48 as &i128) = (&v8)[8] as i128;
            v47 = v64;
            v45 = v63;
            v43 = v62;
            v65 = v41 as i64;
            if !v65 {
                if !(!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v20, "delimiter") as i8) {
                    goto LABEL_46e434;
                }
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "whitespace-delimited") as i8 {
                    v66 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "only-delimited") as i8;
                    goto LABEL_46e50f;
                }
LABEL_46e474:
                v25 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '-w' option only usable if printing a sequence of fields");
                goto LABEL_46e55c;
            } else {
                if !(v65 as u32 == 1) {
                    goto LABEL_46e55e;
                }
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v20, "delimiter") as i8 {
LABEL_46e434:
                    v25 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fields");
                    goto LABEL_46e55c;
                }
                if !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "whitespace-delimited") as i8) {
                    goto LABEL_46e474;
                }
                v66 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "only-delimited") as i8;
LABEL_46e50f:
                if !v66 {
LABEL_46e55e:
                    v17 = v48 as i128;
                    v16 = v47;
                    v15 = v45 as i128;
                    *(&v10 as &i128) = v43 as i128;
                    v10 = v41;
                } else {
                    v25 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fields");
LABEL_46e55c:
                }
            }
LABEL_46e201:
            v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v20, "file");
            v25 = clap_builder::parser::error::MatchesError::unwrap("file", &v41);
            *(&v40.field_0 as &struct64) = struct64 {
                field_0: v67
                field_8: v68
                field_16: v69
                field_32: v70
                field_48: v71
                field_56: v72
            };
            v30 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v40);
            if v10 as i32 != 3 {
                v41 = struct80 {
                    field_0: v73
                    field_16: v74
                    field_32: v15
                    field_48: v16
                    field_64: v17
                };
                v25 = v30;
                uu_cut::cut_files(&v25, &v41);
            } else {
                v43 = v14;
                v41 = (&v10)[8] as i128;
                v44 = 1;
            }
            v53 = v75;
            return v53;
        },
    }
}
