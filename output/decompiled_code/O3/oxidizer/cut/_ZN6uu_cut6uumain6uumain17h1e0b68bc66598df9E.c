fn uu_cut::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i8;  // [sp-0x4f9]
    let v1: i64;  // [bp-0x4f8], Other Possible Types: struct24, Option<struct24>
    let v2: i128;  // [sp-0x4f0]
    let v3: i64;  // [sp-0x4e8]
    let v4: i64;  // [sp-0x4e0]
    let v5: i64;  // [sp-0x4d8]
    let v6: i8;  // [sp-0x4d0]
    let v7: i8;  // [sp-0x4c8]
    let v8: i128;  // [sp-0x4c0]
    let v9: i64;  // [sp-0x4b0]
    let v10: i64;  // [bp-0x4a8], Other Possible Types: struct24, Option<struct24>
    let v11: i64;  // [sp-0x4a0]
    let v12: i64;  // [bp-0x498]
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
    let v24: struct24;  // [sp-0x408], Other Possible Types: i128, struct64, Option<struct24>
    let v25: i64;  // [sp-0x3f8]
    let v26: i64;  // [sp-0x3c8]
    let v27: i8;  // [bp-0x3c0]
    let v28: i8;  // [bp-0x3b8]
    let v29: i8;  // [bp-0x3b0]
    let v30: struct24;  // [sp-0x3a8]
    let v31: i64;  // [sp-0x390]
    let v32: i64;  // [sp-0x388]
    let v33: i128;  // [sp-0x380]
    let v34: i64;  // [sp-0x370]
    let v35: i64;  // [sp-0x368]
    let v36: i64;  // [sp-0x360]
    let v37: i64;  // [sp-0x358]
    let v38: i128;  // [sp-0x350]
    let v39: i64;  // [sp-0x340]
    let v40: struct64;  // [bp-0x338]
    let v41: i64;  // [sp-0x300]
    let v42: i256;  // [sp-0x2f8], Other Possible Types: Result<struct32, struct16>, Option<struct24>, struct24, struct712, struct56
    let v43: i128;  // [sp-0x2e8]
    let v44: i128;  // [bp-0x2e0]
    let v45: i128;  // [bp-0x2d8]
    let v46: i128;  // [sp-0x2c8]
    let v47: i128;  // [bp-0x2b8]
    let v49: i64;  // rbx
    let v50: i64;  // r14
    let v52: i64;  // rsi
    let v53: i64;  // rdx
    let v54: i64;  // rcx
    let v55: i64;  // rax
    let v56: i32;  // ebx
    let v57: i8;  // r13b
    let v58: i64;  // rax
    let v59: i64;  // r14
    let v60: i64;  // r15
    let v61: i64;  // r12
    let v62: i64;  // rax
    let v63: i128;  // xmm1
    let v64: i128;  // xmm2
    let v65: i128;  // xmm3
    let v67: i8;  // al
    let v71: i128;  // xmm0
    let v72: i128;  // xmm1

    core::iter::traits::iterator::Iterator::collect(&v27, a0, a1);
    v49 = v28;
    v50 = v29;
    v42 = std::sys::os_str::bytes::Slice::to_owned("-d=");
    *(&v10.field_0 as &struct24) = struct24 {
        field_0: v42
        field_16: v43
    };
    v42 = uu_cut::uu_app(v52, v53);
    *(&v1.field_0 as &struct24) = struct24 {
        field_0: v27
        field_16: v29
    };
    clap_builder::builder::command::Command::try_get_matches_from(&v10, &v42, &v1, v54);
    if v19 == 0x8000000000000000 {
        v55 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
        return v55;
    }
    v23 = v15;
    v22 = v14;
    v21 = v12;
    v19 = v10;
    v20 = v11;
    v56 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "complement") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "only-delimited") as i8;
    v42 = uu_cut::get_delimiters(&v19, <T as core::slice::cmp::SliceContains>::slice_contains(&v10, v49, v50) as i32);
    v55 = *((&v42 as &char + 8) as &i64);
    if v42 {
        return v55;
    }
    v26 = v43;
    v17 = *((&v42 as &char + 24) as &i64);
    v18 = *((&v42 as &char + 32) as &i64);
    v57 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "zero-terminated") as i8 ? 0 : 10);
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v19, "bytes");
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v19, "characters");
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v19, "fields");
    v43 = v25;
    v42 = v24;
    v44 = v1;
    v42.40 = vvar_816{stack -1256};
    v42.48 = (stack_base)[1192] as i128;
    v58 = v12;
    v47 = v58;
    v33 = v42;
    v38 = v42.48;
    v39 = v58;
    v34 = v43;
    v35 = v44;
    v36 = *((&v44 as &char + 8) as &i64);
    v37 = v42.40;
    v31 = 0;
    v32 = 3;
    v59 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold(&v31, v52, v53);
    v42 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, "bytes");
    v60 = clap_builder::parser::error::MatchesError::unwrap("bytes", &v42);
    v42 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, "characters");
    v61 = clap_builder::parser::error::MatchesError::unwrap("characters", &v42);
    v42 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, "fields");
    v62 = clap_builder::parser::error::MatchesError::unwrap("fields", &v42);
    if !v59 {
LABEL_46e541:
        v42 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)");
        goto LABEL_46e55a;
    }
    if v59 != 1 {
        v42 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)");
LABEL_46e55a:
        v4 = v42.field_16;
        v2 = v42;
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
    if v60 {
        if !(!v61) || !(!v62) {
            goto LABEL_46e541;
        }
        v42 = uu_cut::list_to_ranges(*((v60 + 8) as &i64), *((v60 + 16) as &i64), v56);
        if !(!v61) || !(!v62) {
            goto LABEL_46e45f;
        }
        v9 = *((&v42 as &char + 24) as &i64);
        v8 = *((&v42 as &char + 8) as &i128);
        v2 = v17;
        v3 = v18;
        v6 = 2;
        v7 = v57;
        v1 = 0;
        if 0 == 3 {
            goto LABEL_46e57d;
        }
    } else if !v61 {
        if !v62 {
            goto LABEL_46e541;
        }
        v42 = uu_cut::list_to_ranges(*((v62 + 8) as &i64), *((v62 + 16) as &i64), v56);
        if !(!v61) || !(!v62) {
            goto LABEL_46e45f;
        }
        v9 = *((&v42 as &char + 24) as &i64);
        v8 = *((&v42 as &char + 8) as &i128);
        v2 = v17;
        v3 = v18;
        v4 = v55;
        v5 = v26;
        v6 = v0;
        v7 = v57;
        v1 = 2;
        if 2 == 3 {
            goto LABEL_46e57d;
        }
    } else {
        if !(!v61) || !(!v62) {
            goto LABEL_46e541;
        }
        v42 = uu_cut::list_to_ranges(*((v61 + 8) as &i64), *((v61 + 16) as &i64), v56);
        match v42 {
            Some(_) => {
LABEL_46e45f:
                v4 = *((&v42 as &char + 24) as &i64);
                v2 = *((&v42 as &char + 8) as &i128);
                v1 = 3;
                if 3 == 3 {
                    goto LABEL_46e57d;
                }
            },
            None => {
                v9 = *((&v42 as &char + 24) as &i64);
                v8 = *((&v42 as &char + 8) as &i128);
                v2 = v17;
                v3 = v18;
                v6 = 2;
                v7 = v57;
                v1 = 1;
                if 1 == 3 {
                    goto LABEL_46e57d;
                }
            },
        }
    }
    v63 = *((&v2 as &char + 8) as &i128);
    v64 = v5;
    v65 = v7;
    v42 = v1;
    v47 = *((&v8 as &char + 8) as &i128);
    v46 = v65;
    v45 = v64;
    v43 = v63;
    if !v42 {
        if !(!v61) || !(!v62) {
            goto LABEL_46e804;
        }
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "whitespace-delimited") as i8 {
            v67 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "only-delimited") as i8;
            goto LABEL_46e8df;
        }
LABEL_46e844:
        v24 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '-w' option only usable if printing a sequence of fields");
        goto LABEL_46e8fc;
    } else {
        if !(!v61) || !(!v62) {
            goto LABEL_46e92e;
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v19, "delimiter") as i8 {
LABEL_46e804:
            v24 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fields");
            goto LABEL_46e8fc;
        }
        if !(!v61) || !(!v62) {
            goto LABEL_46e844;
        }
        v67 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "only-delimited") as i8;
LABEL_46e8df:
        if !v67 {
LABEL_46e92e:
            v16 = v47;
            v15 = v46;
            v14 = v45;
            v12 = v43;
            v10 = v42;
        } else {
            v24 = <T as alloc::slice::hack::ConvertVec>::to_vec("invalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fields");
LABEL_46e8fc:
            v13 = v24.field_16;
            v11 = v24;
            v10 = 3;
        }
    }
LABEL_46e5d1:
    v42 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19, "file");
    v24 = clap_builder::parser::error::MatchesError::unwrap("file", &v42);
    *(&v40.field_0 as &struct64) = struct64 {
        field_0: v68
        field_8: v54
        field_16: v69
        field_32: v70
        field_48: v52
        field_56: v53
    };
    v30 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v40, v41);
    if v10 != 3 {
        v47 = v16;
        v71 = v10;
        v72 = v12;
        v42.field_64 = vvar_793{stack -1144};
        v45 = v14;
        v43 = v72;
        v42 = v71;
        *(&v24.field_0 as &struct24) = struct24 {
            field_0: v30
            field_16: *((&v30 as &char + 16) as &i64)
        };
        uu_cut::cut_files(&v24, &v42);
        v55 = 0;
    } else {
        v42.field_16 = vvar_795{stack -1168};
        v42 = *((&v10 as &char + 8) as &i128);
        v42.field_24 = 1;
        v55 = alloc::boxed::Box<T>::new(&v42);
    }
    return v55;
}
