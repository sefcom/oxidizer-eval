fn uu_date::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x698]
    let v1: i32;  // [sp-0x690]
    let v2: i64;  // [sp-0x68c]
    let v3: i32;  // [sp-0x684]
    let v4: i64;  // [sp-0x678]
    let v5: i32;  // [sp-0x670]
    let v6: iNone;  // [sp-0x668]
    let v7: i64;  // [sp-0x658]
    let v8: struct12;  // [sp-0x630], Other Possible Types: unsigned long
    let v9: i32;  // [sp-0x628]
    let v10: i64;  // [sp-0x618], Other Possible Types: struct64, char, struct24, int
    let v11: i8;  // [bp-0x610], Other Possible Types: unsigned int, unsigned long
    let v12: i64;  // [bp-0x60c]
    let v13: iNone;  // [bp-0x608], Other Possible Types: unsigned long, char
    let v14: i32;  // [sp-0x604]
    let v15: i8;  // [sp-0x600]
    let v16: iNone;  // [sp-0x5f8]
    let v17: i64;  // [sp-0x5e8]
    let v18: i32;  // [sp-0x5e0]
    let v19: i64;  // [sp-0x5dc]
    let v20: i32;  // [sp-0x5d4]
    let v21: i8;  // [sp-0x5d0]
    let v22: i64;  // [sp-0x5a8]
    let v23: struct24;  // [sp-0x5a0], Other Possible Types: unsigned long, unsigned int, int
    let v24: i64;  // [sp-0x580], Other Possible Types: char, struct24, int
    let v25: i64;  // [sp-0x578]
    let v26: iNone;  // [bp-0x568]
    let v27: i64;  // [sp-0x558]
    let v28: i64;  // [sp-0x538]
    let v29: i32;  // [sp-0x530]
    let v30: i64;  // [sp-0x528]
    let v31: i64;  // [sp-0x520]
    let v32: iNone;  // [sp-0x518]
    let v33: iNone;  // [sp-0x508]
    let v34: i64;  // [sp-0x4f8]
    let v35: i64;  // [sp-0x4d8]
    let v36: i32;  // [sp-0x4d0]
    let v37: Result<struct40, struct8>;  // [sp-0x4c8], Other Possible Types: struct24, String, struct16, unsigned int, int, struct56, struct12, struct712
    let v38: iNone;  // [bp-0x4b8]
    let v39: i32;  // [bp-0x4b0]
    let v40: iNone;  // [bp-0x4a8]
    let v41: iNone;  // [sp-0x498]
    let v42: struct16;  // [sp-0x1f8]
    let v43: iNone;  // [sp-0x1e8]
    let v44: String;  // [sp-0x1d0]
    let v45: String;  // [sp-0x1b8]
    let v48: i64;  // rbx
    let v49: i64;  // rax
    let v50: i64;  // r15
    let v51: i64;  // r14
    let v52: i64;  // rdx
    let v53: iNone;  // xmm0
    let v54: iNone;  // xmm1
    let v55: i64;  // rax
    let v56: i64;  // rax
    let v57: i64;  // r14
    let v58: i64;  // rax
    let v59: i64;  // r14
    let v60: i64;  // r15
    let v61: i64;  // rax
    let v62: i32;  // ebp
    let v63: i64;  // rcx
    let v64: i32;  // eax
    let v65: iNone;  // xmm1

    v37 = uu_date::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v10, &v37, a0, a1);
    if v30 == 0x8000000000000000 {
        v48 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v31);
        return v48;
    }
    v34 = v17;
    v33 = v16;
    v32 = *(&v13 as &i128);
    v30 = v10;
    v31 = *(&v11 as &i64);
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, "format");
    v49 = clap_builder::parser::error::MatchesError::unwrap("format", &v37);
    if !v49 {
        v37 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v30, "iso-8601");
        v10 = clap_builder::parser::error::MatchesError::unwrap("iso-8601", &v37);
        if v10 {
            v53 = v10.field_0;
            v54 = v10.field_16;
            v41 = v10.field_48;
            v40 = v16;
            v38 = v54;
            v37 = v53;
            v24 = uu_date::uumain::uumain::{{closure}}(&v37) as i8;
            v24 = 0x8000000000000000;
        } else {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v30, "rfc-email") as i8 {
                v55 = 9223372036854775809;
            } else {
                v37 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, "rfc-3339");
                v56 = clap_builder::parser::error::MatchesError::unwrap("rfc-3339", &v37);
                if !v56 {
                    v55 = 9223372036854775812;
                } else {
                    v24 = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(*((v56 + 8) as &i64), *((v56 + 16) as &i64)) as i8;
                    v55 = 9223372036854775810;
                }
            }
            v24 = v55;
        }
    } else {
        v50 = *((v49 + 8) as &i64);
        v51 = *((v49 + 16) as &i64);
        *(&v37 as &i32) = 0;
        if !core::slice::<impl [T]>::starts_with(v50, v51, core::char::methods::encode_utf8_raw(43, &v37), v52) as i8 {
            v10 = 0;
            v11 = v50;
            v13 = v51;
            v15 = 1;
            v44 = format!("invalid date {}", &v10);
            *(&v39 as &i32) = 1;
            v37 = v44;
            v48 = alloc::boxed::Box<T>::new(&v37);
            return v48;
        }
        v37 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v50, v51), v52);
        v24 = v37;
    }
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, "date");
    v57 = clap_builder::parser::error::MatchesError::unwrap("date", &v37);
    if v57 {
        v42 = chrono::offset::local::Local::now();
        v10 = parse_datetime::parse_datetime_at_date(&v42, *((v57 + 8) as &i64), *((v57 + 16) as &i64));
        if v10 != 9223372036854775810 {
            v37 = <alloc::string::String as core::clone::Clone>::clone(v57);
            v23 = v37;
            v22 = 1;
        } else {
            v43 = *(&v10.field_8 as &i128);
            v23 = chrono::datetime::DateTime<Tz>::signed_duration_since(&v43, &v42);
            v23 = v52 as u32;
            v22 = 4;
        }
    } else {
        v37 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, "file");
        v58 = clap_builder::parser::error::MatchesError::unwrap("file", &v37);
        if !v58 {
            v22 = 0;
        } else {
            v59 = *((v58 + 8) as &i64);
            v60 = *((v58 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v59, v60, "-") as i8 {
                v22 = 3;
            } else {
                v37 = std::sys::os_str::bytes::Slice::to_owned(v59, v60);
                v23 = v37;
                v22 = 2;
            }
        }
    }
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, "set");
    v61 = clap_builder::parser::error::MatchesError::unwrap("set", &v37);
    v62 = 0;
    if v61 {
        v37 = core::ops::function::FnOnce::call_once(v61);
        v63 = v37 as i64;
        v64 = *((&v37 as &char + 8) as &i32);
        v4 = *((&v37 as &char + 12) as &i64);
        v5 = *((&v37 as &char + 20) as &i32);
        v6 = *((&v37 as &char + 24) as &i128);
        v7 = *((&v37 as &char + 40) as &i64);
        if v63 != 9223372036854775809 {
            match v37 {
                Err(_) => {
                    v29 = v5;
                    v28 = v4;
                    v62 = v64;
                },
                Ok(_) => {
                    v0 = v63;
                    v1 = v64;
                    v3 = v5;
                    v2 = v4;
                    v27 = v7;
                    v26 = v6;
                    v10 = 0;
                    v11 = v1;
                    v12 = v2;
                    v14 = v3;
                    v15 = 1;
                    v45 = format!("invalid date {}", &v10);
                    *(&v39 as &i32) = 1;
                    v37 = v45;
                    return v48;
                },
            }
        }
    }
    v17 = v25;
    v16 = v24 as i128;
    v65 = (&v23)[8] as i128;
    *(&v10 as &i128) = *(&v22 as &i128);
    v13 = v65;
    v19 = v28;
    v20 = v29;
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v30, "universal") as i8;
    v18 = v62;
    if v62 {
        v36 = *((&v19 as &char + 4) as &i32);
        v35 = *(&v18 as &i64);
        v48 = uu_date::set_system_datetime(&v35);
        return v48;
    }
    if !v21 {
        v37 = chrono::offset::local::Local::now();
        v9 = v37.field_8;
        v8 = v37.field_0;
        goto *((4516668 + (stack_base)[1560] as i64 * 4) as &i32) + 4516668;
    } else {
        v37 = chrono::offset::utc::Utc::now();
        v8 = v37;
        goto *((4516668 + (stack_base)[1560] as i64 * 4) as &i32) + 4516668;
    }
}
