fn uu_date::uumain::uumain() -> u32 {
    let v0: i64;  // [sp-0x6b0]
    let v1: i32;  // [sp-0x6a8]
    let v2: i64;  // [sp-0x6a0]
    let v3: i32;  // [sp-0x698]
    let v4: i64;  // [sp-0x694]
    let v5: i32;  // [sp-0x68c]
    let v6: i128;  // [sp-0x678]
    let v7: i64;  // [sp-0x668]
    let v8: i64;  // [sp-0x648]
    let v9: i32;  // [sp-0x640]
    let v10: i512;  // [bp-0x638], Other Possible Types: struct24, struct64
    let v11: i8;  // [bp-0x630]
    let v12: i64;  // [bp-0x62c]
    let v13: i64;  // [bp-0x628]
    let v14: i8;  // [sp-0x620]
    let v15: i128;  // [sp-0x618]
    let v16: i64;  // [sp-0x608]
    let v17: i8;  // [bp-0x5f8]
    let v18: i32;  // [sp-0x5f4]
    let v19: i8;  // [sp-0x5f0]
    let v20: i64;  // [sp-0x5c8]
    let v21: i128;  // [sp-0x5c0]
    let v22: i32;  // [sp-0x5b8]
    let v23: i64;  // [sp-0x5b0]
    let v24: i64;  // [bp-0x5a8]
    let v25: i8;  // [sp-0x5a0]
    let v26: i64;  // [sp-0x598]
    let v27: i128;  // [bp-0x588]
    let v28: i64;  // [sp-0x578]
    let v29: i64;  // [sp-0x550]
    let v30: i32;  // [sp-0x548]
    let v31: i64;  // [sp-0x540]
    let v32: i64;  // [sp-0x538]
    let v33: i128;  // [sp-0x530]
    let v34: i128;  // [sp-0x520]
    let v35: i64;  // [sp-0x510]
    let v36: struct12;  // [bp-0x4f8]
    let v37: i320;  // [sp-0x4c8], Other Possible Types: Result<struct40, struct16>, struct24, struct28, struct16, struct56, struct12, struct712
    let v38: i128;  // [bp-0x4b8]
    let v39: i128;  // [bp-0x4a8]
    let v40: struct16;  // [sp-0x1f8], Other Possible Types: i128
    let v41: i128;  // [sp-0x1e8]
    let v42: i192;  // [sp-0x1d0]
    let v43: i192;  // [sp-0x1b8]
    let v45: i64;  // rsi
    let v46: i64;  // rdx
    let v47: i64;  // rdi
    let v49: i64;  // rax
    let v50: i64;  // r15
    let v51: i64;  // r14
    let v52: i64;  // rax
    let v53: i128;  // xmm0
    let v54: i128;  // xmm1
    let v55: i64;  // rax
    let v56: i64;  // rax
    let v57: i64;  // r14
    let v58: i64;  // r8
    let v59: i64;  // r9
    let v60: i64;  // rax
    let v61: i64;  // r14
    let v62: i64;  // r15
    let v63: i64;  // rax
    let v64: i32;  // ebp
    let v65: i32;  // ebp
    let v66: i64;  // rcx
    let v67: i64;  // rcx
    let v68: i32;  // eax
    let v69: i128;  // xmm1

    v37 = uu_date::uu_app(v45, v46);
    clap_builder::builder::command::Command::try_get_matches_from(&v10, &v37, v47, v45);
    if v31 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v32);
        goto LABEL_57161c;
    }
    v35 = v16;
    v34 = v15;
    v33 = v13;
    v31 = v10;
    v32 = v11;
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, "format");
    v49 = clap_builder::parser::error::MatchesError::unwrap("format", &v37);
    if !v49 {
        v37 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v31, "iso-8601");
        v10 = clap_builder::parser::error::MatchesError::unwrap("iso-8601", &v37);
        if v10 {
            v53 = v10;
            v54 = *((&v10 as &char + 16) as &i128);
            v37.field_64 = (stack_base)[1544] as i128;
            *(&v39 as &struct64) = v10.field_32;
            v38 = v54;
            v37 = v53;
            v25 = uu_date::uumain::uumain::{{closure}}(&v37, v45, v46) as i8;
            v55 = 0x8000000000000000;
        } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v31, "rfc-email") as i8 {
            v55 = 9223372036854775809;
        } else {
            v37 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, "rfc-3339");
            v56 = clap_builder::parser::error::MatchesError::unwrap("rfc-3339", &v37);
            if !v56 {
                v55 = 9223372036854775812;
            } else {
                v25 = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(*((v56 + 8) as &i64), *((v56 + 16) as &i64)) as i8;
                v55 = 9223372036854775810;
            }
        }
        v24 = v55;
    } else {
        v50 = *((v49 + 8) as &i64);
        v51 = *((v49 + 16) as &i64);
        v37 = 0;
        if !core::slice::<impl [T]>::starts_with(v50, v51, core::char::methods::encode_utf8_raw(43, &v37), v46) as i8 {
            v10 = 0;
            v11 = v50;
            v13 = v51;
            v14 = 1;
            v42 = format!("invalid date {:?}", &v10);
            v37 = struct28 {
                field_0: v42
                field_16: *((&v42 as &char + 16) as &i64)
                field_24: 1
            };
            alloc::boxed::Box<T>::new(&v37);
            goto LABEL_570c4a;
        } else {
            v52 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v50, v51);
            if !v52 {
                core::str::slice_error_fail(); /* do not return */
            }
            v37 = <T as alloc::slice::hack::ConvertVec>::to_vec(v52, v46);
            v26 = v37.field_16;
            v24 = v37;
        }
    }
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, "date");
    v57 = clap_builder::parser::error::MatchesError::unwrap("date", &v37);
    if v57 {
        v40 = chrono::offset::local::Local::now(v45, v46);
        v10 = parse_datetime::parse_datetime_at_date(&v40, *((v57 + 8) as &i64), *((v57 + 16) as &i64), v58, v59);
        if v10 != 9223372036854775810 {
            v37 = <alloc::string::String as core::clone::Clone>::clone(v57);
            v23 = v37.field_16;
            v21 = v37;
            v20 = 1;
        } else {
            v41 = *((&v10 as &char + 8) as &i128);
            v21 = chrono::datetime::DateTime<Tz>::signed_duration_since(&v41, &v40, v46);
            v22 = v46;
            v20 = 4;
        }
    } else {
        v37 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, "file");
        v60 = clap_builder::parser::error::MatchesError::unwrap("file", &v37);
        if !v60 {
            v20 = 0;
        } else {
            v61 = *((v60 + 8) as &i64);
            v62 = *((v60 + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v61, v62, "-") as i8 {
                v20 = 3;
            } else {
                v37 = std::sys::os_str::bytes::Slice::to_owned(v61, v62);
                v23 = v37.field_16;
                v21 = v37;
                v20 = 2;
            }
        }
    }
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, "set");
    v63 = clap_builder::parser::error::MatchesError::unwrap("set", &v37);
    v64 = 0;
    if !(v63 && (v37 = core::ops::function::FnOnce::call_once(v63, v46, v66, v58, v59), v67 = v37, v68 = *((&v37 as &char + 8) as &i32), v0 = *((&v37 as &char + 12) as &i64), v1 = *((&v37 as &char + 20) as &i32), v6 = *((&v37 as &char + 24) as &i128), v7 = *((&v37 as &char + 40) as &i64), v67 != 9223372036854775809)) {
LABEL_570a04:
        v10.field_48 = vvar_675{stack -1432};
        v10.field_32 = (stack_base)[1448] as i128;
        v69 = *((&v21 as &char + 8) as &i128);
        v10 = v20;
        v13 = v69;
        v10.60 = vvar_623{stack -1360};
        v18 = v30;
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v31, "universal") as i8;
        v10.56 = vvar_103{reg 56};
        if v65 {
            v36 = struct12 {
                field_0: *((&v10 as &char + 56) as &i64)
                field_8: v17
            };
            uu_date::set_system_datetime(&v36, v45, v46, v17, v58);
        } else {
            if !v19 {
                v37 = chrono::offset::local::Local::now(v45, v46);
                v9 = *((&v37 as &char + 8) as &i32);
                v8 = v37;
                goto *((4517180 + (stack_base)[1592] as i64 * 4) as &i32) + 4517180;
            } else {
                v37 = chrono::offset::utc::Utc::now(v45, v46);
                v9 = *((&v37 as &char + 8) as &i32);
                v8 = v37;
                goto *((4517180 + (stack_base)[1592] as i64 * 4) as &i32) + 4517180;
            }
        }
LABEL_57161c:
        return;
    } else if v67 == 0x8000000000000000 {
        v30 = v1;
        v29 = v0;
        goto LABEL_570a04;
    } else {
        v2 = v67;
        v3 = v68;
        v5 = v1;
        v4 = v0;
        v28 = v7;
        v27 = v6;
        v10 = 0;
        v10.8 = vvar_751{stack -1688};
        v12 = v4;
        v10.20 = vvar_752{stack -1676};
        v10.24 = 1;
        v43 = format!("invalid date {:?}", &v10);
        v37 = struct28 {
            field_0: v43
            field_16: *((&v43 as &char + 16) as &i64)
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v37);
    }
LABEL_570c4a:
    goto LABEL_57161c;
}
