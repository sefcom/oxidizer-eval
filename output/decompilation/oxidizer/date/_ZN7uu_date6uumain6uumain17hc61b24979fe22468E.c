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
    let v10: i64;  // [sp-0x630], Other Possible Types: struct12
    let v11: i32;  // [sp-0x628]
    let v12: i64;  // [bp-0x618], Other Possible Types: struct64
    let v13: i64;  // [bp-0x610]
    let v14: i64;  // [bp-0x60c]
    let v15: i64;  // [bp-0x608]
    let v16: i32;  // [sp-0x604]
    let v17: i8;  // [sp-0x600]
    let v18: i128;  // [sp-0x5f8]
    let v19: i64;  // [sp-0x5e8]
    let v20: i32;  // [sp-0x5e0]
    let v21: i64;  // [sp-0x5dc]
    let v22: i32;  // [sp-0x5d4]
    let v23: i8;  // [sp-0x5d0]
    let v24: i64;  // [sp-0x5a8]
    let v25: i192;  // [sp-0x5a0], Other Possible Types: struct24
    let v26: i32;  // [sp-0x598]
    let v27: i64;  // [sp-0x588], Other Possible Types: struct24
    let v28: i8;  // [sp-0x580]
    let v29: i64;  // [sp-0x578]
    let v30: i64;  // [sp-0x568]
    let v31: i64;  // [sp-0x560]
    let v32: i64;  // [sp-0x558]
    let v33: i64;  // [sp-0x538]
    let v34: i32;  // [sp-0x530]
    let v35: i64;  // [sp-0x528]
    let v36: i64;  // [sp-0x520]
    let v37: i128;  // [sp-0x518]
    let v38: i128;  // [sp-0x508]
    let v39: i64;  // [sp-0x4f8]
    let v40: i96;  // [sp-0x4d8]
    let v41: i384;  // [sp-0x4c8], Other Possible Types: Result<struct48, struct16>, struct24, struct56, struct712, struct16, struct12
    let v42: i64;  // [sp-0x4c0]
    let v43: i128;  // [sp-0x4b8]
    let v44: i64;  // [bp-0x4b0]
    let v45: i64;  // [bp-0x4a8]
    let v46: i128;  // [sp-0x498]
    let v47: struct16;  // [sp-0x1f8], Other Possible Types: i128
    let v48: i128;  // [sp-0x1e8]
    let v49: i8;  // [bp-0x1d0]
    let v50: i8;  // [bp-0x1b8]
    let v53: i64;  // rax
    let v54: i64;  // rax
    let v55: i64;  // r15
    let v56: i64;  // r14
    let v57: i64;  // rdx
    let v58: i128;  // xmm0
    let v59: i128;  // xmm1
    let v60: i64;  // rax
    let v61: i64;  // rax
    let v62: i64;  // r14
    let v63: i64;  // rax
    let v64: i64;  // r14
    let v65: i64;  // r15
    let v66: i64;  // rax
    let v68: i32;  // ebp
    let v69: i64;  // rcx
    let v70: i32;  // eax
    let v71: i128;  // xmm1

    v41 = uu_date::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v12, &v41, a0, a1);
    if v35 == 0x8000000000000000 {
        v53 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v36);
        return v53;
    }
    v39 = v19;
    v38 = v18;
    v37 = v15;
    v35 = v12;
    v36 = v13;
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v35, "format");
    v54 = clap_builder::parser::error::MatchesError::unwrap("format", &v41);
    if !v54 {
        v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v35, "iso-8601");
        v12 = clap_builder::parser::error::MatchesError::unwrap("iso-8601", &v41);
        if v12 {
            v58 = v12;
            v59 = *((&v12 as &char + 16) as &i128);
            v46 = *((&v12 as &char + 48) as &i128);
            v45 = v18;
            v43 = v59;
            v41 = v58;
            v28 = uu_date::uumain::uumain::{{closure}}(&v41) as i8;
            v27 = 0x8000000000000000;
        } else {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v35, "rfc-email") as i8 {
                v60 = 9223372036854775809;
            } else {
                v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v35, "rfc-3339");
                v61 = clap_builder::parser::error::MatchesError::unwrap("rfc-3339", &v41);
                if !v61 {
                    v60 = 9223372036854775812;
                } else {
                    v28 = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(*((v61 + 8) as &i64), *((v61 + 16) as &i64)) as i8;
                    v60 = 9223372036854775810;
                }
            }
            v27 = v60;
        }
    } else {
        v55 = *((v54 + 8) as &i64);
        v56 = *((v54 + 16) as &i64);
        v41 = 0;
        if !core::slice::<impl [T]>::starts_with(v55, v56, core::char::methods::encode_utf8_raw(43, &v41), v57) as i8 {
            v12 = 0;
            v13 = v55;
            v15 = v56;
            v17 = 1;
            v30 = &v12;
            v31 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(&v41 as &&str) = "invalid date ";
            v42 = 1;
            v45 = 0;
            v43 = &v30;
            v44 = 1;
            core::option::Option<T>::map_or_else();
            v41 = v49;
            alloc::boxed::Box<T>::new(&v41);
            return v53;
        }
        v41 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v55, v56), v57);
        v27 = v41;
    }
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v35, "date");
    v62 = clap_builder::parser::error::MatchesError::unwrap("date", &v41);
    if v62 {
        v47 = chrono::offset::local::Local::now();
        parse_datetime::parse_datetime_at_date(&v12, &v47, *((v62 + 8) as &i64), *((v62 + 16) as &i64));
        if v12 != 9223372036854775810 {
            v41 = <alloc::string::String as core::clone::Clone>::clone(v62);
            v25 = v41;
            v24 = 1;
        } else {
            v48 = *((&v12 as &char + 8) as &i128);
            v25 = chrono::datetime::DateTime<Tz>::signed_duration_since(&v48, &v47);
            v26 = v57;
            v24 = 4;
        }
    } else {
        v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v35, "file");
        v63 = clap_builder::parser::error::MatchesError::unwrap("file", &v41);
        if !v63 {
            v24 = 0;
        } else {
            v64 = *((v63 + 8) as &i64);
            v65 = *((v63 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v64, v65, "-") as i8 {
                v24 = 3;
            } else {
                v41 = std::sys::os_str::bytes::Slice::to_owned(v64, v65);
                v25 = v41;
                v24 = 2;
            }
        }
    }
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v35, "set");
    v66 = clap_builder::parser::error::MatchesError::unwrap("set", &v41);
    v68 = 0;
    if v66 {
        v41 = core::ops::function::FnOnce::call_once(v66);
        v69 = v41;
        v70 = *((&v41 as &char + 8) as &i32);
        v4 = *((&v41 as &char + 12) as &i64);
        v5 = *((&v41 as &char + 20) as &i32);
        v6 = *((&v41 as &char + 24) as &i128);
        v7 = *((&v41 as &char + 40) as &i64);
        v68 = 0;
        if v69 != 9223372036854775809 {
            match v41 {
                Err(_) => {
                    v34 = v5;
                    v33 = v4;
                },
                Ok(_) => {
                    v0 = v69;
                    v1 = v70;
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
                    v41 = v50;
                    alloc::boxed::Box<T>::new(&v41);
                    return v53;
                },
            }
        }
    }
    v19 = v29;
    v18 = v27;
    v71 = *((&v25 as &char + 8) as &i128);
    v12 = v24;
    v15 = v71;
    v21 = v33;
    v22 = v34;
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v35, "universal") as i8;
    v20 = v68;
    if v20 {
        v40 = v20;
        uu_date::set_system_datetime(&v40);
        return v53;
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
