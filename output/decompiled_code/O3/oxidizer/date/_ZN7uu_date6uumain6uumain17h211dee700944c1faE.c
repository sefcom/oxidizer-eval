fn uu_date::uumain::uumain() -> u32 {
    let v0: i64;  // [sp-0x6b0]
    let v1: i32;  // [sp-0x6a8]
    let v2: i64;  // [sp-0x6a0]
    let v3: i32;  // [sp-0x698]
    let v4: i64;  // [sp-0x694]
    let v5: i32;  // [sp-0x68c]
    let v6: i128;  // [sp-0x678]
    let v7: i64;  // [sp-0x668]
    let v8: i64;  // [bp-0x648]
    let v9: i32;  // [sp-0x640]
    let v10: i512;  // [sp-0x638], Other Possible Types: struct64, Result<struct56, struct16>, struct24
    let v11: i64;  // [bp-0x630]
    let v12: i64;  // [bp-0x62c]
    let v13: i128;  // [bp-0x628]
    let v14: i8;  // [sp-0x620]
    let v15: i96;  // [bp-0x600]
    let v16: i32;  // [sp-0x5f4]
    let v17: i8;  // [sp-0x5f0]
    let v18: i64;  // [sp-0x5c8]
    let v19: i192;  // [sp-0x5c0]
    let v20: i32;  // [sp-0x5b8]
    let v21: i64;  // [bp-0x5a8]
    let v22: i8;  // [sp-0x5a0]
    let v23: i128;  // [bp-0x588]
    let v24: i64;  // [sp-0x578]
    let v25: i64;  // [sp-0x550]
    let v26: i32;  // [sp-0x548]
    let v27: i64;  // [sp-0x540]
    let v28: i64;  // [sp-0x538]
    let v29: i96;  // [bp-0x4f8]
    let v30: i192;  // [sp-0x4c8], Other Possible Types: Result<struct40, struct16>, struct24, struct712, struct16, struct56, struct12
    let v31: i128;  // [bp-0x4b8]
    let v32: i128;  // [bp-0x4a8]
    let v33: i128;  // [sp-0x1f8], Other Possible Types: struct16
    let v34: i128;  // [sp-0x1e8]
    let v35: i192;  // [sp-0x1d0]
    let v36: i192;  // [sp-0x1b8]
    let v38: i64;  // rsi
    let v39: i64;  // rdx
    let v40: i64;  // rdi
    let v41: i64;  // rax
    let v42: i64;  // r15
    let v43: i64;  // r14
    let v44: i64;  // rax
    let v45: i128;  // xmm0
    let v46: i128;  // xmm1
    let v47: i64;  // rax
    let v48: i64;  // rax
    let v49: i64;  // r14
    let v50: i64;  // r8
    let v51: i64;  // r9
    let v52: i64;  // rax
    let v53: i64;  // r14
    let v54: i64;  // r15
    let v55: i64;  // rax
    let v56: i32;  // ebp
    let v57: i32;  // ebp
    let v58: i64;  // rcx
    let v59: i64;  // rcx
    let v60: i32;  // eax
    let v61: i128;  // xmm1

    v30 = uu_date::uu_app(v38, v39);
    v10 = clap_builder::builder::command::Command::try_get_matches_from(&v30, v40, v38);
    if v27 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28);
        goto LABEL_57161c;
    }
    v27 = v10;
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, "format");
    v41 = clap_builder::parser::error::MatchesError::unwrap("format", &v30);
    if !v41 {
        v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v27, "iso-8601");
        v10 = clap_builder::parser::error::MatchesError::unwrap("iso-8601", &v30);
        if v10 {
            v45 = v10;
            v46 = *((&v10 as &char + 16) as &i128);
            v30.field_64 = (stack_base)[1544] as i128;
            *(&v32 as &struct64) = v10.field_32;
            v31 = v46;
            v30 = v45;
            v22 = uu_date::uumain::uumain::{{closure}}(&v30, v38, v39) as i8;
            v47 = 0x8000000000000000;
        } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v27, "rfc-email") as i8 {
            v47 = 9223372036854775809;
        } else {
            v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, "rfc-3339");
            v48 = clap_builder::parser::error::MatchesError::unwrap("rfc-3339", &v30);
            if !v48 {
                v47 = 9223372036854775812;
            } else {
                v22 = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(*((v48 + 8) as &i64), *((v48 + 16) as &i64)) as i8;
                v47 = 9223372036854775810;
            }
        }
        v21 = v47;
    } else {
        v42 = *((v41 + 8) as &i64);
        v43 = *((v41 + 16) as &i64);
        v30 = 0;
        if !core::slice::<impl [T]>::starts_with(v42, v43, core::char::methods::encode_utf8_raw(43, &v30), v39) as i8 {
            v10 = 0;
            v11 = v42;
            v13 = v43;
            v14 = 1;
            v35 = format!("invalid date {:?}", &v10);
            v30 = v35;
            alloc::boxed::Box<T>::new(&v30);
            goto LABEL_570c4a;
        } else {
            v44 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v42, v43);
            if !v44 {
                core::str::slice_error_fail(); /* do not return */
            }
            v30 = <T as alloc::slice::hack::ConvertVec>::to_vec(v44, v39);
            v21 = v30;
        }
    }
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, "date");
    v49 = clap_builder::parser::error::MatchesError::unwrap("date", &v30);
    if v49 {
        v33 = chrono::offset::local::Local::now(v38, v39);
        v10 = parse_datetime::parse_datetime_at_date(&v33, *((v49 + 8) as &i64), *((v49 + 16) as &i64), v50, v51);
        if v10 != 9223372036854775810 {
            v30 = <alloc::string::String as core::clone::Clone>::clone(v49);
            v19 = v30;
            v18 = 1;
        } else {
            v34 = *((&v10 as &char + 8) as &i128);
            v19 = chrono::datetime::DateTime<Tz>::signed_duration_since(&v34, &v33, v39);
            v20 = v39;
            v18 = 4;
        }
    } else {
        v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, "file");
        v52 = clap_builder::parser::error::MatchesError::unwrap("file", &v30);
        if !v52 {
            v18 = 0;
        } else {
            v53 = *((v52 + 8) as &i64);
            v54 = *((v52 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v53, v54, "-") as i8 {
                v18 = 3;
            } else {
                v30 = std::sys::os_str::bytes::Slice::to_owned(v53, v54);
                v19 = v30;
                v18 = 2;
            }
        }
    }
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, "set");
    v55 = clap_builder::parser::error::MatchesError::unwrap("set", &v30);
    v56 = 0;
    if !(v55 && (v30 = core::ops::function::FnOnce::call_once(v55, v39, v58, v50, v51), v59 = v30, v60 = *((&v30 as &char + 8) as &i32), v0 = *((&v30 as &char + 12) as &i64), v1 = *((&v30 as &char + 20) as &i32), v6 = *((&v30 as &char + 24) as &i128), v7 = *((&v30 as &char + 40) as &i64), v59 != 9223372036854775809)) {
LABEL_570a04:
        v10.field_48 = vvar_675{stack -1432};
        v10.field_32 = (stack_base)[1448] as i128;
        v61 = *((&v19 as &char + 8) as &i128);
        v10 = v18;
        v13 = v61;
        v10.60 = vvar_623{stack -1360};
        v16 = v26;
        v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v27, "universal") as i8;
        v10.56 = vvar_103{reg 56};
        if v57 {
            v29 = v15;
            uu_date::set_system_datetime(&v29, v38, v39, *((&v15 as &char + 8) as &i32), v50);
        } else {
            if !v17 {
                v30 = chrono::offset::local::Local::now(v38, v39);
                v9 = *((&v30 as &char + 8) as &i32);
                v8 = v30;
                goto *((4517180 + (stack_base)[1592] as i64 * 4) as &i32) + 4517180;
            } else {
                v30 = chrono::offset::utc::Utc::now(v38, v39);
                v8 = v30;
                goto *((4517180 + (stack_base)[1592] as i64 * 4) as &i32) + 4517180;
            }
        }
LABEL_57161c:
        return;
    } else if v59 == 0x8000000000000000 {
        v26 = v1;
        v25 = v0;
        goto LABEL_570a04;
    } else {
        v2 = v59;
        v3 = v60;
        v5 = v1;
        v4 = v0;
        v24 = v7;
        v23 = v6;
        v10 = 0;
        v10.8 = vvar_751{stack -1688};
        v12 = v4;
        v10.20 = vvar_752{stack -1676};
        v14 = 1;
        v36 = format!("invalid date {:?}", &v10);
        v30 = v36;
        alloc::boxed::Box<T>::new(&v30);
    }
LABEL_570c4a:
    goto LABEL_57161c;
}
