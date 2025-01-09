fn uu_date::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x698]
    let v1: i32;  // [sp-0x690]
    let v2: i64;  // [sp-0x68c]
    let v3: i32;  // [sp-0x684]
    let v4: i64;  // [sp-0x678]
    let v5: i32;  // [sp-0x670]
    let v6: i128;  // [sp-0x668]
    let v7: i64;  // [sp-0x658]
    let v8: i64;  // [sp-0x648]
    let v9: i64;  // [sp-0x640]
    let v10: struct12;  // [sp-0x630], Other Possible Types: i64
    let v11: i32;  // [sp-0x628]
    let v12: i192;  // [sp-0x618], Other Possible Types: struct64, Result<struct56, struct8>, struct24
    let v13: i64;  // [bp-0x610]
    let v14: i64;  // [bp-0x60c]
    let v15: i128;  // [bp-0x608]
    let v16: i32;  // [sp-0x604]
    let v17: i8;  // [sp-0x600]
    let v18: i128;  // [sp-0x5f8]
    let v19: i64;  // [sp-0x5e8]
    let v20: i32;  // [sp-0x5e0]
    let v21: i64;  // [sp-0x5dc]
    let v22: i32;  // [sp-0x5d4]
    let v23: i8;  // [sp-0x5d0]
    let v24: i64;  // [sp-0x5a8]
    let v25: struct24;  // [sp-0x5a0], Other Possible Types: i64
    let v26: i32;  // [sp-0x598]
    let v27: i192;  // [sp-0x588], Other Possible Types: struct24
    let v28: i8;  // [sp-0x580]
    let v29: i64;  // [sp-0x578]
    let v30: i128;  // [sp-0x568]
    let v31: i64;  // [sp-0x560]
    let v32: i64;  // [sp-0x558]
    let v33: i64;  // [sp-0x538]
    let v34: i32;  // [sp-0x530]
    let v35: i64;  // [sp-0x528]
    let v36: i64;  // [sp-0x520]
    let v37: i128;  // [sp-0x518]
    let v38: i128;  // [sp-0x508]
    let v39: i64;  // [sp-0x4f8]
    let v40: struct12;  // [bp-0x4d8]
    let v41: i64;  // [sp-0x4c8], Other Possible Types: Result<struct40, struct8>, struct24, struct28, struct712, struct16, struct12, struct56
    let v42: i64;  // [sp-0x4c0]
    let v43: i64;  // [sp-0x4b8]
    let v44: i64;  // [bp-0x4b0]
    let v45: i64;  // [bp-0x4a8]
    let v46: i128;  // [sp-0x498]
    let v47: i128;  // [sp-0x1f8], Other Possible Types: struct16
    let v48: i128;  // [sp-0x1e8]
    let v55: i64;  // rax
    let v56: i64;  // rax
    let v57: i64;  // r15
    let v58: i64;  // r14
    let v59: i64;  // rdx
    let v60: i64;  // rax
    let v61: i128;  // xmm0
    let v62: i128;  // xmm1
    let v63: i64;  // rax
    let v64: i64;  // rax
    let v65: i64;  // r14
    let v66: i64;  // rax
    let v67: i64;  // r14
    let v68: i64;  // r15
    let v69: i64;  // rax
    let v71: i32;  // ebp
    let v72: i64;  // rcx
    let v73: i32;  // eax
    let v74: i128;  // xmm1

    v41 = uu_date::uu_app();
    v12 = clap_builder::builder::command::Command::try_get_matches_from(&v41, a0, a1);
    if v35 == 0x8000000000000000 {
        v55 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v36);
        return v55;
    }
    v39 = v19;
    v38 = v18;
    v37 = *((&v12 as &char + 16) as &i128);
    v35 = v12;
    v36 = *((&v12 as &char + 8) as &i64);
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v35, "format");
    v56 = clap_builder::parser::error::MatchesError::unwrap("format", &v41);
    if !v56 {
        v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v35, "iso-8601");
        v12 = clap_builder::parser::error::MatchesError::unwrap("iso-8601", &v41);
        if v12 {
            v61 = v12;
            v62 = *((&v12 as &char + 16) as &i128);
            v46 = *((&v12 as &char + 48) as &i128);
            v45 = v18;
            v43 = v62;
            v41 = v61;
            v28 = uu_date::uumain::uumain::{{closure}}(&v41) as i8;
            v27 = 0x8000000000000000;
        } else {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v35, "rfc-email") as i8 {
                v63 = 9223372036854775809;
            } else {
                v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v35, "rfc-3339");
                v64 = clap_builder::parser::error::MatchesError::unwrap("rfc-3339", &v41);
                if !v64 {
                    v63 = 9223372036854775812;
                } else {
                    v28 = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(*((v64 + 8) as &i64), *((v64 + 16) as &i64)) as i8;
                    v63 = 9223372036854775810;
                }
            }
            v27 = v63;
        }
    } else {
        v57 = *((v56 + 8) as &i64);
        v58 = *((v56 + 16) as &i64);
        v41 = 0;
        if !core::slice::<impl [T]>::starts_with(v57, v58, core::char::methods::encode_utf8_raw(43, &v41), v59) as i8 {
            v12 = 0;
            v13 = v57;
            v15 = v58;
            v17 = 1;
            v30 = &v12;
            v31 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(&v41 as &&str) = "invalid date ";
            v42 = 1;
            v45 = 0;
            v43 = &v30;
            v44 = 1;
            core::option::Option<T>::map_or_else();
            v41 = struct28 {
                field_0: v49
                field_16: v50
                field_24: 1
            };
            alloc::boxed::Box<T>::new(&v41);
            return v55;
        }
        v60 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v57, v58);
        if !v60 {
            core::str::slice_error_fail(v57, v58, 1, v58, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/date/src/date.rs"); /* do not return */
        }
        v41 = <T as alloc::slice::hack::ConvertVec>::to_vec(v60, v59);
        v27 = v41;
    }
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v35, "date");
    v65 = clap_builder::parser::error::MatchesError::unwrap("date", &v41);
    if v65 {
        v47 = chrono::offset::local::Local::now();
        v12 = parse_datetime::parse_datetime_at_date(&v47, *((v65 + 8) as &i64), *((v65 + 16) as &i64));
        if v12 != 9223372036854775810 {
            v41 = <alloc::string::String as core::clone::Clone>::clone(v65);
            v25 = v41;
            v24 = 1;
        } else {
            v48 = *((&v12 as &char + 8) as &i128);
            v25 = chrono::datetime::DateTime<Tz>::signed_duration_since(&v48, &v47);
            v26 = v59;
            v24 = 4;
        }
    } else {
        v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v35, "file");
        v66 = clap_builder::parser::error::MatchesError::unwrap("file", &v41);
        if !v66 {
            v24 = 0;
        } else {
            v67 = *((v66 + 8) as &i64);
            v68 = *((v66 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v67, v68, "-") as i8 {
                v24 = 3;
            } else {
                v41 = std::sys::os_str::bytes::Slice::to_owned(v67, v68);
                v25 = v41;
                v24 = 2;
            }
        }
    }
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v35, "set");
    v69 = clap_builder::parser::error::MatchesError::unwrap("set", &v41);
    v71 = 0;
    if v69 {
        v41 = core::ops::function::FnOnce::call_once(v69);
        v72 = v41;
        v73 = *((&v41 as &char + 8) as &i32);
        v4 = *((&v41 as &char + 12) as &i64);
        v5 = *((&v41 as &char + 20) as &i32);
        v6 = *((&v41 as &char + 24) as &i128);
        v7 = *((&v41 as &char + 40) as &i64);
        v71 = 0;
        if v72 != 9223372036854775809 {
            match v41 {
                Err(_) => {
                    v34 = v5;
                    v33 = v4;
                },
                Ok(_) => {
                    v0 = v72;
                    v1 = v73;
                    v3 = v5;
                    v2 = v4;
                    v32 = v7;
                    v30 = v6;
                    v12 = 0;
                    v13 = v1;
                    v14 = v2;
                    v16 = v3;
                    v17 = 1;
                    v8 = &v12;
                    v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                    *(&v41 as &&str) = "invalid date ";
                    v42 = 1;
                    v45 = 0;
                    v43 = &v8;
                    v44 = 1;
                    core::option::Option<T>::map_or_else();
                    v41 = struct28 {
                        field_0: v51
                        field_16: v52
                        field_24: 1
                    };
                    v55 = alloc::boxed::Box<T>::new(&v41);
                    return v55;
                },
            }
        }
    }
    v19 = v29;
    v18 = v27;
    v74 = *((&v25 as &char + 8) as &i128);
    v12 = v24;
    v15 = v74;
    v21 = v33;
    v22 = v34;
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v35, "universal") as i8;
    v20 = v71;
    if v20 {
        v40 = struct12 {
            field_0: v20
            field_8: *((&v21 as &char + 4) as &i32)
        };
        v55 = uu_date::set_system_datetime(&v40);
        return v55;
    }
    if !v23 {
        v41 = chrono::offset::local::Local::now();
        v11 = *((&v41 as &char + 8) as &i32);
        v10 = v41;
        goto *((4516668 + (stack_base)[1560] as i64 * 4) as &i32) + 4516668;
    } else {
        v41 = chrono::offset::utc::Utc::now();
        v10 = v41;
        goto *((4516668 + (stack_base)[1560] as i64 * 4) as &i32) + 4516668;
    }
}
