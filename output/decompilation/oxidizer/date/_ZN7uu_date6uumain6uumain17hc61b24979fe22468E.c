fn uu_date::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x698]
    let v1: u32;  // [bp-0x690]
    let v2: u64;  // [bp-0x68c]
    let v3: u32;  // [bp-0x684]
    let v4: u64;  // [bp-0x678]
    let v5: u32;  // [bp-0x670]
    let v6: u8;  // [bp-0x668]
    let v7: u64;  // [bp-0x658]
    let v8: i64;  // [bp-0x648]
    let v9: u64;  // [bp-0x640]
    let v12: u64;  // [sp-0x618], Other Possible Types: struct64
    let v13: void*;  // [bp-0x618]
    let v14: Result<struct56, struct16>;  // [bp-0x618]
    let v15: Option<struct8>;  // [bp-0x618]
    let v17: u32;  // [bp-0x610]
    let v18: u64;  // [bp-0x60c]
    let v19: u64;  // [bp-0x608]
    let v20: u32;  // [bp-0x604]
    let v21: u8;  // [sp-0x600]
    let v22: u128;  // [bp-0x5f8]
    let v23: u64;  // [bp-0x5e8]
    let v24: u32;  // [bp-0x5e0]
    let v25: u64;  // [bp-0x5dc]
    let v26: u32;  // [bp-0x5d8]
    let v27: u32;  // [bp-0x5d4]
    let v28: u8;  // [bp-0x5d0]
    let v29: u64;  // [bp-0x5a8]
    let v30: u128;  // [bp-0x5a0]
    let v31: u32;  // [bp-0x598]
    let v32: u64;  // [bp-0x590]
    let v33: u128;  // [bp-0x588]
    let v34: u8;  // [bp-0x580]
    let v35: u64;  // [bp-0x578]
    let v36: i64;  // [bp-0x568], Other Possible Types: u128
    let v37: u64;  // [bp-0x560]
    let v38: u64;  // [bp-0x558]
    let v39: u64;  // [bp-0x538]
    let v40: u32;  // [bp-0x530]
    let v41: u64;  // [bp-0x528]
    let v42: u64;  // [bp-0x520]
    let v43: u8;  // [bp-0x518]
    let v44: u128;  // [bp-0x508]
    let v45: u64;  // [bp-0x4f8]
    let v46: u64;  // [bp-0x4d8]
    let v47: u32;  // [bp-0x4d0]
    let v48: u128;  // [bp-0x4c8], Other Possible Types: Result<struct40, struct16>
    let v49: u32;  // [bp-0x4c8]
    let v50: struct24;  // [bp-0x4c8], Other Possible Types: struct16, struct12
    let v51: struct56;  // [bp-0x4c8]
    let v52: struct24;  // [bp-0x4c8]
    let v53: std::sys::os_str::bytes::Buf;  // [bp-0x4c8]
    let v54: std::sys::os_str::bytes::Buf;  // [bp-0x4c8]
    let v55: Result<struct40, struct16>;  // [bp-0x4c8]
    let v56: u64;  // [bp-0x4c0]
    let v57: u64;  // [sp-0x4b8], Other Possible Types: struct_4 *
    let v58: u32;  // [bp-0x4b4]
    let v59: u64;  // [sp-0x4b0]
    let v60: void*;  // [sp-0x4a8], Other Possible Types: u128
    let v61: u64;  // [bp-0x4a0]
    let v62: struct16;  // [bp-0x1f8]
    let v63: u8;  // [bp-0x1e8]
    let v64: u128;  // [bp-0x1d0]
    let v65: u64;  // [bp-0x1c0]
    let v66: u128;  // [bp-0x1b8]
    let v67: i8;  // [bp-0x1a8]
    let v69: i64;  // rax
    let v70: u64;  // r15
    let v71: u64;  // r14
    let v72: u64;  // rdx
    let v75: u128;  // xmm0
    let v76: u128;  // xmm1
    let v77: u64;  // rbx
    let v78: u64;  // rax
    let v79: i64;  // rax
    let v80: i64;  // r14
    let v81: i64;  // rax
    let v82: u64;  // rax
    let v83: u32;  // ebp
    let v84: u8;  // al
    let v85: u128;  // xmm1
    let v86: &str;  // rax:rdx

    uu_date::uu_app(&v48);
    v14 = clap_builder::builder::command::Command::try_get_matches_from(&v48, a0, a1);
    match v14 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v14 as &char + 8) as &i64));
        },
        Ok(_) => {
            v45 = v23;
            v44 = v22;
            memcpy(&v43, &v14, 16);
            v41 = v14 as i64;
            v42 = *((&v14 as &char + 8) as &i64);
            v48 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v41, "format");
            v69 = clap_builder::parser::error::MatchesError::unwrap("format", &v48);
            if !v69 {
                v48 as u448 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v41, "iso-8601");
                v12 = clap_builder::parser::error::MatchesError::unwrap("iso-8601", &v48 as u448);
                if v12.field_0 as i64 {
                    v75 = v12.field_0;
                    v76 = v12.field_16;
                    memcpy(&v51, &v12, 16);
                    v60 = v22;
                    v57 = v76;
                    v48 = v75;
                    v34 = uu_date::uumain::uumain::{{closure}}(&v48 as u448) as i8;
                    v33 = 0x8000000000000000;
                    goto LABEL_5715df;
                } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v41, "rfc-email") as i8 {
                    v48 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v41, "rfc-3339");
                    v79 = clap_builder::parser::error::MatchesError::unwrap("rfc-3339", &v48);
                    if v79 {
                        v34 = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(*((v79 + 8) as &i64), *((v79 + 16) as &i64)) as i8;
                        v78 = 9223372036854775810;
                        goto LABEL_5715df;
                    }
                }
            }
            v70 = *((v69 + 8) as &i64);
            v71 = *((v69 + 16) as &i64);
            v49 = 0;
            v49 = v48 as i64 & -0x100000000;
            v86 = core::char::methods::encode_utf8_raw(43, &v49, v72);
            if core::slice::<impl [T]>::starts_with(v70, v71, v86.data_ptr, v86.length) as u8 {
                v52 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v70, v71) as u64, v72);
                v35 = v52.field_16;
                v33 = v52.field_0;
LABEL_5715df:
                v48 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v41, "date");
                v80 = clap_builder::parser::error::MatchesError::unwrap("date", &v48);
                if v80 {
                    v62 = chrono::offset::local::Local::now();
                    v15 = parse_datetime::parse_datetime_at_date(&v62, *((v80 + 8) as &i64), *((v80 + 16) as &i64));
                    match v15 {
                        Some(_) => {
                            memcpy(&v63, &v14, 16);
                            v30 = chrono::datetime::DateTime<Tz>::signed_duration_since(&v63 as u128, &v62);
                            v31 = v72 as u32;
                            v29 = 4;
                        },
                        None => {
                            v53 = <alloc::string::String as core::clone::Clone>::clone(v80);
                            v32 = v53.inner.len;
                            v30 = *(&v53.inner.buf.ptr as &i128) as u128;
                            v29 = 1;
                        },
                    }
                } else {
                    v48 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v41, "file");
                    v81 = clap_builder::parser::error::MatchesError::unwrap("file", &v48);
                    if v81 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v81 + 8) as &i64), *((v81 + 16) as &i64), "-") as i8 {
                        v54 = std::sys::os_str::bytes::Slice::to_owned(*((v81 + 8) as &i64), *((v81 + 16) as &i64));
                        v32 = v54.inner.len;
                        v30 = *(&v54.inner.buf.ptr as &i128) as u128;
                        v29 = 2;
                    }
                }
                v55 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v41, "set");
                v82 = clap_builder::parser::error::MatchesError::unwrap("set", &v55);
                v83 = 0;
                if v82 {
                    core::ops::function::FnOnce::call_once(&v55, v82);
                    v4 = *((&v55 as &char + 12) as &i64);
                    v5 = v58;
                    memcpy(&v6, &v55, 16);
                    v7 = v61;
                    if v55 as i64 == 9223372036854775809 {
                        goto LABEL_571831;
                    }
                    if v55 as i64 == 0x8000000000000000 {
                        v40 = v5;
                        v39 = v4;
                        v83 = *((&v55 as &char + 8) as &i32);
                        goto LABEL_571831;
                    } else {
                        v0 = v55 as i64;
                        v1 = *((&v55 as &char + 8) as &i32);
                        v3 = v5;
                        v2 = v4;
                        v38 = v7;
                        v36 = v6;
                        v13 = 0;
                        v17 = v1;
                        v18 = v2;
                        v20 = v3;
                        v21 = 1;
                        v8 = &v13;
                        v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v48 = "invalid date ";
                        v56 = 1 as u64;
                        v60 = 0;
                        *(&v57 as &&struct_4 *) = &v8;
                        v59 = 1;
                        v50 = core::option::Option<T>::map_or_else(v3);
                        v59 = 1;
                        v48 = v66;
                        v57 = *(&v67 as &i64) as u64;
                        v77 = alloc::boxed::Box<T>::new(&v50);
                    }
                } else {
LABEL_571831:
                    v84 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v41, "universal") as i8;
                    v23 = v35;
                    memcpy(&v14, &v33, 16);
                    v85 = *((&v30 as &char + 8) as &i128);
                    *(&v12 as &i128) = *(&v29 as &i128);
                    v19 = v85;
                    v25 = v39;
                    v27 = v40;
                    v28 = v84;
                    v24 = v83;
                    if v83 {
                        v47 = v26;
                        v46 = *(&v24 as &i64);
                        v77 = uu_date::set_system_datetime(&v46);
                    } else if v28 {
                        v50 = chrono::offset::utc::Utc::now();
                    } else {
                        v50 = chrono::offset::local::Local::now();
                    }
                }
            } else {
                v13 = 0;
                v17 = v70;
                v19 = v71;
                v21 = 1;
                v36 = &v13;
                v37 = <os_display::Quoted as core::fmt::Display>::fmt;
                v49 = "invalid date ";
                v56 = 1 as u64;
                v60 = 0;
                *(&v57 as &&struct_4 *) = &v36;
                v59 = 1;
                v49 as u192 = core::option::Option<T>::map_or_else(v72);
                v59 = 1;
                v49 = v64;
                v57 = v65;
                v77 = alloc::boxed::Box<T>::new(&v49 as u192);
            }
            return v77;
        },
    }
}
