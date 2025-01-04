fn uu_cut::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x4f9]
    let v1: i64;  // [bp-0x4f8], Other Possible Types: Option<struct24>
    let v2: i192;  // [sp-0x4f0]
    let v3: i64;  // [sp-0x4e8]
    let v4: i64;  // [sp-0x4e0]
    let v5: i64;  // [sp-0x4d8]
    let v6: i8;  // [sp-0x4d0]
    let v7: i8;  // [sp-0x4c8]
    let v8: i128;  // [sp-0x4c0]
    let v9: i64;  // [sp-0x4b0]
    let v10: i128;  // [bp-0x4a8], Other Possible Types: Option<struct24>, Result<struct56, struct16>
    let v11: i64;  // [sp-0x4a0]
    let v12: i128;  // [sp-0x498]
    let v13: i64;  // [sp-0x490]
    let v14: i128;  // [sp-0x488]
    let v15: i128;  // [sp-0x478]
    let v16: i128;  // [sp-0x468]
    let v17: i64;  // [sp-0x450]
    let v18: i64;  // [sp-0x448]
    let v19: i64;  // [sp-0x440]
    let v20: i64;  // [sp-0x438]
    let v21: i128;  // [sp-0x430]
    let v22: i128;  // [sp-0x420]
    let v23: i64;  // [sp-0x410]
    let v24: i192;  // [sp-0x408], Other Possible Types: struct24, Option<struct24>, struct64
    let v25: i64;  // [sp-0x3c8]
    let v26: i8;  // [bp-0x3c0]
    let v27: i8;  // [bp-0x3b8]
    let v28: i8;  // [bp-0x3b0]
    let v29: i192;  // [sp-0x3a8], Other Possible Types: struct24
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
    let v40: i64;  // [sp-0x300]
    let v41: i192;  // [sp-0x2f8], Other Possible Types: Result<struct32, struct16>, struct24, Option<struct24>, struct56, struct712
    let v42: i128;  // [sp-0x2e8]
    let v43: i192;  // [bp-0x2e0]
    let v44: i128;  // [bp-0x2d8]
    let v45: i64;  // [sp-0x2d0]
    let v46: i128;  // [sp-0x2c8]
    let v47: i128;  // [bp-0x2b8]
    let v49: i64;  // rbx
    let v50: i64;  // r14
    let v52: i64;  // rsi
    let v53: i64;  // rdx
    let v54: i64;  // rcx
    let v55: i64;  // r8
    let v56: i64;  // r9
    let v57: i64;  // rax
    let v58: i32;  // ebx
    let v59: i8;  // r13b
    let v60: i64;  // rax
    let v61: i64;  // r14
    let v62: i64;  // r15
    let v63: i64;  // r12
    let v64: i64;  // rax
    let v65: i128;  // xmm1
    let v66: i128;  // xmm2
    let v67: i128;  // xmm3
    let v69: i8;  // al
    let v73: i128;  // xmm0
    let v74: i128;  // xmm1

    core::iter::traits::iterator::Iterator::collect(&v26, a0, a1);
    v49 = v27;
    v50 = v28;
    v41 = std::sys::os_str::bytes::Slice::to_owned("-d=");
    v10 = v41;
    v41 = uu_cut::uu_app(v52, v53);
    v1 = v26;
    v10 = clap_builder::builder::command::Command::try_get_matches_from(&v41, &v1, v54, v55, v56);
    if v19 == 0x8000000000000000 {
        v57 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
        return v57;
    }
    v23 = *((&v10 as &char + 48) as &i64);
    v22 = v14;
    v21 = *((&v10 as &char + 16) as &i128);
    v19 = v10;
    v20 = v11;
    v58 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "complement") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "only-delimited") as i8;
    v41 = uu_cut::get_delimiters(&v19, <T as core::slice::cmp::SliceContains>::slice_contains(&v10, v49, v50) as i32);
    v57 = *((&v41 as &char + 8) as &i64);
    if v41 {
        return v57;
    }
    v25 = v42;
    v17 = *((&v41 as &char + 24) as &i64);
    v18 = *((&v41 as &char + 32) as &i64);
    v59 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "zero-terminated") as i8 ? 0 : 10);
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v19, "bytes");
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v19, "characters");
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v19, "fields");
    v41 = v24;
    v43 = v1;
    v46 = v10;
    v60 = v12;
    v47 = v60;
    v32 = v41;
    v37 = v46;
    v38 = v60;
    v33 = v42;
    v34 = v43;
    v35 = *((&v43 as &char + 8) as &i64);
    v36 = v45;
    v30 = 0;
    v31 = 3;
    v61 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold(&v30, v52, v53);
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, "bytes");
    v62 = clap_builder::parser::error::MatchesError::unwrap("bytes", &v41);
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, "characters");
    v63 = clap_builder::parser::error::MatchesError::unwrap("characters", &v41);
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, "fields");
    v64 = clap_builder::parser::error::MatchesError::unwrap("fields", &v41);
    if !v61 {
LABEL_46e171:
        v41 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)");
        goto LABEL_46e18a;
    }
    if v61 != 1 {
        v41 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)");
LABEL_46e18a:
        v2 = v41;
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
    if v62 {
        if !(!v63) || !(!v64) {
            goto LABEL_46e171;
        }
        v41 = uu_cut::list_to_ranges(*((v62 + 8) as &i64), *((v62 + 16) as &i64), v58);
        if !(!v63) || !(!v64) {
            goto LABEL_46e08f;
        }
        v9 = *((&v41 as &char + 24) as &i64);
        v8 = *((&v41 as &char + 8) as &i128);
        v2 = v17;
        v3 = v18;
        v6 = 2;
        v7 = v59;
        v1 = 0;
        if 0 {
            goto LABEL_46e1ad;
        }
    } else if !v63 {
        if !v64 {
            goto LABEL_46e171;
        }
        v41 = uu_cut::list_to_ranges(*((v64 + 8) as &i64), *((v64 + 16) as &i64), v58);
        if !(!v63) || !(!v64) {
            goto LABEL_46e08f;
        }
        v9 = *((&v41 as &char + 24) as &i64);
        v8 = *((&v41 as &char + 8) as &i128);
        v2 = v17;
        v3 = v18;
        v4 = v57;
        v5 = v25;
        v6 = v0;
        v7 = v59;
        v1 = 2;
        if 0 {
            goto LABEL_46e1ad;
        }
    } else {
        if !(!v63) || !(!v64) {
            goto LABEL_46e171;
        }
        v41 = uu_cut::list_to_ranges(*((v63 + 8) as &i64), *((v63 + 16) as &i64), v58);
        match v41 {
            Some(_) => {
LABEL_46e08f:
                v4 = *((&v41 as &char + 24) as &i64);
                v2 = *((&v41 as &char + 8) as &i128);
                v1 = 3;
                if 1 {
                    goto LABEL_46e1ad;
                }
            },
            None => {
                v9 = *((&v41 as &char + 24) as &i64);
                v8 = *((&v41 as &char + 8) as &i128);
                v2 = v17;
                v3 = v18;
                v6 = 2;
                v7 = v59;
                v1 = 1;
                if 0 {
                    goto LABEL_46e1ad;
                }
            },
        }
    }
    v65 = *((&v2 as &char + 8) as &i128);
    v66 = v5;
    v67 = v7;
    v41 = v1;
    v47 = *((&v8 as &char + 8) as &i128);
    v46 = v67;
    v44 = v66;
    v42 = v65;
    if !v41 {
        if !(!v63) || !(!v64) {
            goto LABEL_46e434;
        }
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "whitespace-delimited") as i8 {
            v69 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "only-delimited") as i8;
            goto LABEL_46e50f;
        }
LABEL_46e474:
        v24 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '-w' option only usable if printing a sequence of fields");
        goto LABEL_46e52c;
    } else {
        if !(!v63) || !(!v64) {
            goto LABEL_46e55e;
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v19, "delimiter") as i8 {
LABEL_46e434:
            v24 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fields");
            goto LABEL_46e52c;
        }
        if !(!v63) || !(!v64) {
            goto LABEL_46e474;
        }
        v69 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "only-delimited") as i8;
LABEL_46e50f:
        if !v69 {
LABEL_46e55e:
            v16 = v47;
            v15 = v46;
            v14 = v44;
            v12 = v42;
            v10 = v41;
        } else {
            v24 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fields");
LABEL_46e52c:
            v11 = v24;
            v10 = 3;
        }
    }
LABEL_46e201:
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19, "file");
    v24 = clap_builder::parser::error::MatchesError::unwrap("file", &v41);
    *(&v39.field_0 as &struct64) = struct64 {
        field_0: v70
        field_8: v54
        field_16: v71
        field_32: v72
        field_48: v52
        field_56: v53
    };
    v29 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v39, v40);
    if v10 != 3 {
        v47 = v16;
        v73 = v10;
        v74 = *((&v11 as &char + 8) as &i128);
        v46 = v15;
        v44 = v14;
        v42 = v74;
        v41 = v73;
        v24 = v29;
        uu_cut::cut_files(&v24, &v41);
        v57 = 0;
    } else {
        v42 = v13;
        v41 = *((&v10 as &char + 8) as &i128);
        v43 = 1;
        v57 = alloc::boxed::Box<T>::new(&v41);
    }
    return v57;
}
