fn uu_cut::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i8;  // [sp-0x4f9]
    let v1: i64;  // [bp-0x4f8], Other Possible Types: Option<struct24>
    let v2: i128;  // [sp-0x4f0]
    let v3: i64;  // [sp-0x4e8]
    let v4: i64;  // [sp-0x4e0]
    let v5: i64;  // [sp-0x4d8]
    let v6: i8;  // [sp-0x4d0]
    let v7: i8;  // [sp-0x4c8]
    let v8: i128;  // [sp-0x4c0]
    let v9: i64;  // [sp-0x4b0]
    let v10: i192;  // [bp-0x4a8], Other Possible Types: Option<struct24>, Result<struct56, struct16>
    let v11: i192;  // [sp-0x4a0]
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
    let v24: struct24;  // [sp-0x408], Other Possible Types: i192, Option<struct24>, struct64
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
    let v41: i128;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct16>, struct24, Option<struct24>, struct712, struct56
    let v42: i64;  // [sp-0x2e8]
    let v43: i192;  // [bp-0x2e0]
    let v44: i128;  // [bp-0x2d8]
    let v45: i128;  // [sp-0x2c8]
    let v46: i64;  // [bp-0x2b8]
    let v48: i64;  // rbx
    let v49: i64;  // r14
    let v51: i64;  // rsi
    let v52: i64;  // rdx
    let v53: i64;  // rcx
    let v54: i64;  // rax
    let v55: i32;  // ebx
    let v56: i8;  // r13b
    let v57: i64;  // rax
    let v58: i64;  // r14
    let v59: i64;  // r15
    let v60: i64;  // r12
    let v61: i64;  // rax
    let v62: i128;  // xmm1
    let v63: i128;  // xmm2
    let v64: i128;  // xmm3
    let v66: i8;  // al
    let v70: i128;  // xmm0
    let v71: i128;  // xmm1

    core::iter::traits::iterator::Iterator::collect(&v26, a0, a1);
    v48 = v27;
    v49 = v28;
    v41 = std::sys::os_str::bytes::Slice::to_owned("-d=");
    v10 = v41;
    v41 = uu_cut::uu_app(v51, v52);
    v1 = v26;
    v10 = clap_builder::builder::command::Command::try_get_matches_from(&v41, &v1, v53);
    if v19 == 0x8000000000000000 {
        v54 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
        return v54;
    }
    v23 = *((&v10 as &char + 48) as &i64);
    v22 = v14;
    v21 = *((&v10 as &char + 16) as &i128);
    v19 = v10;
    v20 = v11;
    v55 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "complement") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "only-delimited") as i8;
    v41 = uu_cut::get_delimiters(&v19, <T as core::slice::cmp::SliceContains>::slice_contains(&v10, v48, v49) as i32);
    v54 = *((&v41 as &char + 8) as &i64);
    if v41 {
        return v54;
    }
    v25 = v42;
    v17 = *((&v41 as &char + 24) as &i64);
    v18 = *((&v41 as &char + 32) as &i64);
    v56 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "zero-terminated") as i8 ? 0 : 10);
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v19, "bytes");
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v19, "characters");
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v19, "fields");
    v41 = v24;
    v43 = v1;
    v41.48 = (stack_base)[1192] as i128;
    v57 = v12;
    v46 = v57;
    v32 = v41;
    v37 = v41.48;
    v38 = v57;
    v33 = v42;
    v34 = v43;
    v35 = *((&v43 as &char + 8) as &i64);
    v36 = v41.40;
    v30 = 0;
    v31 = 3;
    v58 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold(&v30, v51, v52);
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, "bytes");
    v59 = clap_builder::parser::error::MatchesError::unwrap("bytes", &v41);
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, "characters");
    v60 = clap_builder::parser::error::MatchesError::unwrap("characters", &v41);
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, "fields");
    v61 = clap_builder::parser::error::MatchesError::unwrap("fields", &v41);
    if !v58 {
LABEL_46e541:
        v41 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)");
        goto LABEL_46e55a;
    }
    if v58 != 1 {
        v41 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)");
LABEL_46e55a:
        v2 = v41;
        v1 = 3;
LABEL_46e57d:
        v16 = *((&v8 as &char + 8) as &i128);
        v15 = v7;
        v14 = v5;
        v12 = v3;
        v13 = v4;
        v10 = v1;
        v11 = v2;
        goto LABEL_46e5d1;
    }
    if v59 {
        if !(!v60) || !(!v61) {
            goto LABEL_46e541;
        }
        v41 = uu_cut::list_to_ranges(*((v59 + 8) as &i64), *((v59 + 16) as &i64), v55);
        if !(!v60) || !(!v61) {
            goto LABEL_46e45f;
        }
        v9 = *((&v41 as &char + 24) as &i64);
        v8 = *((&v41 as &char + 8) as &i128);
        v2 = v17;
        v3 = v18;
        v6 = 2;
        v7 = v56;
        v1 = 0;
        if 0 == 3 {
            goto LABEL_46e57d;
        }
    } else if !v60 {
        if !v61 {
            goto LABEL_46e541;
        }
        v41 = uu_cut::list_to_ranges(*((v61 + 8) as &i64), *((v61 + 16) as &i64), v55);
        if !(!v60) || !(!v61) {
            goto LABEL_46e45f;
        }
        v9 = *((&v41 as &char + 24) as &i64);
        v8 = *((&v41 as &char + 8) as &i128);
        v2 = v17;
        v3 = v18;
        v4 = v54;
        v5 = v25;
        v6 = v0;
        v7 = v56;
        v1 = 2;
        if 2 == 3 {
            goto LABEL_46e57d;
        }
    } else {
        if !(!v60) || !(!v61) {
            goto LABEL_46e541;
        }
        v41 = uu_cut::list_to_ranges(*((v60 + 8) as &i64), *((v60 + 16) as &i64), v55);
        match v41 {
            Some(_) => {
LABEL_46e45f:
                v4 = *((&v41 as &char + 24) as &i64);
                v2 = *((&v41 as &char + 8) as &i128);
                v1 = 3;
                if 3 == 3 {
                    goto LABEL_46e57d;
                }
            },
            None => {
                v9 = *((&v41 as &char + 24) as &i64);
                v8 = *((&v41 as &char + 8) as &i128);
                v2 = v17;
                v3 = v18;
                v6 = 2;
                v7 = v56;
                v1 = 1;
                if 1 == 3 {
                    goto LABEL_46e57d;
                }
            },
        }
    }
    v62 = *((&v2 as &char + 8) as &i128);
    v63 = v5;
    v64 = v7;
    v41 = v1;
    v46 = *((&v8 as &char + 8) as &i128);
    v45 = v64;
    v44 = v63;
    v42 = v62;
    if !v41 {
        if !(!v60) || !(!v61) {
            goto LABEL_46e804;
        }
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "whitespace-delimited") as i8 {
            v66 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "only-delimited") as i8;
            goto LABEL_46e8df;
        }
LABEL_46e844:
        v24 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '-w' option only usable if printing a sequence of fields");
        goto LABEL_46e8fc;
    } else {
        if !(!v60) || !(!v61) {
            goto LABEL_46e92e;
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v19, "delimiter") as i8 {
LABEL_46e804:
            v24 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fields");
            goto LABEL_46e8fc;
        }
        if !(!v60) || !(!v61) {
            goto LABEL_46e844;
        }
        v66 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "only-delimited") as i8;
LABEL_46e8df:
        if !v66 {
LABEL_46e92e:
            v16 = v46;
            v15 = v45;
            v14 = v44;
            v12 = v42;
            v10 = v41;
        } else {
            v24 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fields");
LABEL_46e8fc:
            v11 = v24;
            v10 = 3;
        }
    }
LABEL_46e5d1:
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19, "file");
    v24 = clap_builder::parser::error::MatchesError::unwrap("file", &v41);
    *(&v39.field_0 as &struct64) = struct64 {
        field_0: v67
        field_8: v53
        field_16: v68
        field_32: v69
        field_48: v51
        field_56: v52
    };
    v29 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v39, v40);
    if v10 != 3 {
        v46 = v16;
        v70 = v10;
        v71 = v12;
        v41.field_64 = vvar_793{stack -1144};
        v44 = v14;
        v42 = v71;
        v41 = v70;
        v24 = v29;
        uu_cut::cut_files(&v24, &v41);
        v54 = 0;
    } else {
        v41.field_16 = vvar_795{stack -1168};
        v41 = *((&v10 as &char + 8) as &i128);
        v41.field_24 = 1;
        v54 = alloc::boxed::Box<T>::new(&v41);
    }
    return v54;
}
