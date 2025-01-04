fn uu_date::uumain::uumain() -> u32 {
    let v0: i64;  // [sp-0x698]
    let v1: i32;  // [sp-0x690]
    let v2: i64;  // [sp-0x68c]
    let v3: i32;  // [sp-0x684]
    let v4: i64;  // [sp-0x678]
    let v5: i32;  // [sp-0x670]
    let v6: i128;  // [sp-0x668]
    let v7: i64;  // [sp-0x658]
    let v8: i96;  // [bp-0x630]
    let v9: i32;  // [sp-0x628]
    let v10: i64;  // [sp-0x618], Other Possible Types: struct64, Result<struct56, struct16>, struct24
    let v11: i32;  // [bp-0x610]
    let v12: i64;  // [bp-0x60c]
    let v13: i128;  // [bp-0x608]
    let v14: i32;  // [sp-0x604]
    let v15: i8;  // [sp-0x600]
    let v16: i128;  // [sp-0x5f8]
    let v17: i64;  // [sp-0x5e8]
    let v18: i32;  // [sp-0x5e0]
    let v19: i64;  // [sp-0x5dc]
    let v20: i32;  // [sp-0x5d4]
    let v21: i8;  // [sp-0x5d0]
    let v22: i64;  // [sp-0x5a8]
    let v23: i192;  // [sp-0x5a0]
    let v24: i32;  // [sp-0x598]
    let v25: i64;  // [sp-0x588]
    let v26: i8;  // [sp-0x580]
    let v27: i64;  // [sp-0x578]
    let v28: i128;  // [bp-0x568]
    let v29: i64;  // [sp-0x558]
    let v30: i64;  // [sp-0x538]
    let v31: i32;  // [sp-0x530]
    let v32: i448;  // [sp-0x528]
    let v33: i64;  // [sp-0x520]
    let v34: i96;  // [bp-0x4d8]
    let v35: i32;  // [sp-0x4c8], Other Possible Types: Result<struct48, struct24>, struct24, struct16, struct712, struct12, struct56
    let v36: i128;  // [bp-0x4b8]
    let v37: i128;  // [bp-0x4a8]
    let v38: i128;  // [sp-0x498]
    let v39: struct16;  // [sp-0x1f8], Other Possible Types: i128
    let v40: i128;  // [sp-0x1e8]
    let v41: i192;  // [sp-0x1d0]
    let v42: i192;  // [sp-0x1b8]
    let v44: i64;  // rsi
    let v45: i64;  // rdx
    let v46: i64;  // rdi
    let v47: i64;  // rax
    let v48: i64;  // r15
    let v49: i64;  // r14
    let v50: i64;  // rax
    let v51: i128;  // xmm0
    let v52: i128;  // xmm1
    let v53: i64;  // rax
    let v54: i64;  // rax
    let v55: i64;  // r14
    let v56: i64;  // r8
    let v57: i64;  // r9
    let v58: i64;  // rax
    let v59: i64;  // r14
    let v60: i64;  // r15
    let v61: i64;  // rax
    let v63: i32;  // ebp
    let v64: i64;  // rcx
    let v65: i64;  // rcx
    let v66: i32;  // eax
    let v67: i128;  // xmm1

    v35 = uu_date::uu_app(v44, v45);
    v10 = clap_builder::builder::command::Command::try_get_matches_from(&v35, v46, v44);
    if v32 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v33);
        goto LABEL_57241f;
    }
    v32 = v10;
    v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v32, "format");
    v47 = clap_builder::parser::error::MatchesError::unwrap("format", &v35);
    if !v47 {
        v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v32, "iso-8601");
        v10 = clap_builder::parser::error::MatchesError::unwrap("iso-8601", &v35);
        if v10 {
            v51 = v10;
            v52 = *((&v10 as &char + 16) as &i128);
            v38 = *((&v10 as &char + 48) as &i128);
            v37 = v16;
            v36 = v52;
            v35 = v51;
            v26 = uu_date::uumain::uumain::{{closure}}(&v35, v44, v45) as i8;
            v25 = 0x8000000000000000;
        } else {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v32, "rfc-email") as i8 {
                v53 = 9223372036854775809;
            } else {
                v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v32, "rfc-3339");
                v54 = clap_builder::parser::error::MatchesError::unwrap("rfc-3339", &v35);
                if !v54 {
                    v53 = 9223372036854775812;
                } else {
                    v26 = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(*((v54 + 8) as &i64), *((v54 + 16) as &i64)) as i8;
                    v53 = 9223372036854775810;
                }
            }
            v25 = v53;
        }
    } else {
        v48 = *((v47 + 8) as &i64);
        v49 = *((v47 + 16) as &i64);
        v35 = 0;
        if !core::slice::<impl [T]>::starts_with(v48, v49, core::char::methods::encode_utf8_raw(43, &v35), v45) as i8 {
            v10 = 0;
            v11 = v48;
            v13 = v49;
            v15 = 1;
            v41 = format!("invalid date {:?}", &v10);
            v35 = v41;
            alloc::boxed::Box<T>::new(&v35);
            goto LABEL_571a74;
        } else {
            v50 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v48, v49);
            if !v50 {
                core::str::slice_error_fail(); /* do not return */
            }
            v35 = <T as alloc::slice::hack::ConvertVec>::to_vec(v50, v45);
            v25 = v35;
        }
    }
    v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v32, "date");
    v55 = clap_builder::parser::error::MatchesError::unwrap("date", &v35);
    if v55 {
        v39 = chrono::offset::local::Local::now(v44, v45);
        v10 = parse_datetime::parse_datetime_at_date(&v39, *((v55 + 8) as &i64), *((v55 + 16) as &i64), v56, v57);
        if v10 != 9223372036854775810 {
            v35 = <alloc::string::String as core::clone::Clone>::clone(v55);
            v23 = v35;
            v22 = 1;
        } else {
            v40 = *((&v10 as &char + 8) as &i128);
            v23 = chrono::datetime::DateTime<Tz>::signed_duration_since(&v40, &v39, v45);
            v24 = v45;
            v22 = 4;
        }
    } else {
        v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v32, "file");
        v58 = clap_builder::parser::error::MatchesError::unwrap("file", &v35);
        if !v58 {
            v22 = 0;
        } else {
            v59 = *((v58 + 8) as &i64);
            v60 = *((v58 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v59, v60, "-") as i8 {
                v22 = 3;
            } else {
                v35 = std::sys::os_str::bytes::Slice::to_owned(v59, v60);
                v23 = v35;
                v22 = 2;
            }
        }
    }
    v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v32, "set");
    v61 = clap_builder::parser::error::MatchesError::unwrap("set", &v35);
    v63 = 0;
    if !(v61 && (v35 = core::ops::function::FnOnce::call_once(v61, v45, v64, v56, v57), v65 = v35, v66 = *((&v35 as &char + 8) as &i32), v4 = *((&v35 as &char + 12) as &i64), v5 = *((&v35 as &char + 20) as &i32), v6 = *((&v35 as &char + 24) as &i128), v7 = *((&v35 as &char + 40) as &i64), v63 = 0, v65 != 9223372036854775809)) {
LABEL_571831:
        v17 = v27;
        v16 = v25;
        v67 = *((&v23 as &char + 8) as &i128);
        v10 = v22;
        v13 = v67;
        v19 = v30;
        v20 = v31;
        v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v32, "universal") as i8;
        v18 = v63;
        if v18 {
            v34 = v18;
            uu_date::set_system_datetime(&v34, v44, v45, *((&v19 as &char + 4) as &i32), v56);
        } else {
            if !v21 {
                v35 = chrono::offset::local::Local::now(v44, v45);
                v9 = *((&v35 as &char + 8) as &i32);
                v8 = v35;
                goto *((4516668 + (stack_base)[1560] as i64 * 4) as &i32) + 4516668;
            } else {
                v35 = chrono::offset::utc::Utc::now(v44, v45);
                v8 = v35;
                goto *((4516668 + (stack_base)[1560] as i64 * 4) as &i32) + 4516668;
            }
        }
LABEL_57241f:
        return;
    } else if v65 == 0x8000000000000000 {
        v31 = v5;
        v30 = v4;
        goto LABEL_571831;
    } else {
        v0 = v65;
        v1 = v66;
        v3 = v5;
        v2 = v4;
        v29 = v7;
        v28 = v6;
        v10 = 0;
        v11 = v1;
        v12 = v2;
        v14 = v3;
        v15 = 1;
        v42 = format!("invalid date {:?}", &v10);
        v35 = v42;
        alloc::boxed::Box<T>::new(&v35);
    }
LABEL_571a74:
    goto LABEL_57241f;
}
