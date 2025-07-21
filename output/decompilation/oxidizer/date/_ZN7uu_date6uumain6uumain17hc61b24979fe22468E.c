fn uu_date::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x698]
    let v1: u32;  // [bp-0x690]
    let v2: u64;  // [bp-0x68c]
    let v3: u32;  // [bp-0x684]
    let v4: u64;  // [bp-0x678]
    let v5: u32;  // [bp-0x670]
    let v6: u128;  // [bp-0x668]
    let v7: u64;  // [bp-0x658]
    let v8: i64;  // [bp-0x648]
    let v9: u64;  // [bp-0x640]
    let v12: struct64;  // [bp-0x618], Other Possible Types: u64
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
    let v25: struct16;  // [bp-0x5e0]
    let v26: u64;  // [bp-0x5dc]
    let v27: u32;  // [bp-0x5d4]
    let v28: u8;  // [bp-0x5d0]
    let v29: u64;  // [bp-0x5a8]
    let v30: u64;  // [bp-0x5a0]
    let v31: u32;  // [bp-0x598]
    let v32: u64;  // [bp-0x590]
    let v33: struct16;  // [bp-0x588], Other Possible Types: u128
    let v34: u64;  // [bp-0x588]
    let v35: u8;  // [bp-0x580]
    let v36: u64;  // [bp-0x578]
    let v37: i64;  // [bp-0x568], Other Possible Types: u128
    let v38: u64;  // [bp-0x560]
    let v39: u64;  // [bp-0x558]
    let v40: u64;  // [bp-0x538]
    let v41: u32;  // [bp-0x530]
    let v42: u64;  // [bp-0x528]
    let v43: u64;  // [bp-0x520]
    let v44: u128;  // [bp-0x518]
    let v45: u128;  // [bp-0x508]
    let v46: u64;  // [bp-0x4f8]
    let v47: struct16;  // [bp-0x4d8]
    let v48: Result<struct40, struct16>;  // [bp-0x4c8], Other Possible Types: u128
    let v49: u128;  // [bp-0x4c8]
    let v50: struct24;  // [bp-0x4c8], Other Possible Types: struct12
    let v51: u64;  // [bp-0x4c8]
    let v53: struct24;  // [bp-0x4c8]
    let v54: alloc::string::String;  // [bp-0x4c8]
    let v55: alloc::string::String;  // [bp-0x4c8]
    let v56: Result<struct40, struct16>;  // [bp-0x4c8]
    let v57: u64;  // [bp-0x4c0]
    let v58: i64;  // [sp-0x4b8], Other Possible Types: u64
    let v59: u32;  // [bp-0x4b4]
    let v60: u32;  // [sp-0x4b0]
    let v61: void*;  // [sp-0x4a8], Other Possible Types: u128
    let v62: u64;  // [bp-0x4a0]
    let v63: u128;  // [bp-0x498]
    let v64: struct12;  // [bp-0x1f8]
    let v65: u128;  // [bp-0x1e8]
    let v66: u128;  // [bp-0x1d0]
    let v67: u64;  // [bp-0x1c0]
    let v68: u128;  // [bp-0x1b8]
    let v69: i8;  // [bp-0x1a8]
    let v71: i64;  // rax
    let v72: u64;  // r15
    let v73: u64;  // r14
    let v74: u64;  // rdx
    let v77: u128;  // xmm0
    let v78: u128;  // xmm1
    let v79: u64;  // rbx
    let v80: u64;  // rax
    let v81: i64;  // rax
    let v82: i64;  // r14
    let v83: i64;  // rax
    let v84: u64;  // rax
    let v85: u32;  // ebp
    let v86: u8;  // al
    let v87: u128;  // xmm1
    let v88: &str;  // rax:rdx

    uu_date::uu_app(&v48);
    v14 = clap_builder::builder::command::Command::try_get_matches_from(&v48, a0, a1);
    match v14 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v14 as &char + 8) as &i64));
        },
        Ok(_) => {
            v46 = v23;
            v45 = v22;
            v44 = *((&v14 as &char + 16) as &i128);
            v42 = v14 as i64;
            v43 = *((&v14 as &char + 8) as &i64);
            v48 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, "format");
            v71 = clap_builder::parser::error::MatchesError::unwrap("format", &v48);
            if !v71 {
                v48 as u448 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v42, "iso-8601");
                v12 = clap_builder::parser::error::MatchesError::unwrap("iso-8601", &v48 as u448);
                if v12.field_0 as i64 {
                    v77 = v12.field_0;
                    v78 = v12.field_16;
                    v63 = v12.field_48;
                    v61 = v22;
                    v58 = v78;
                    v48 = v77;
                    v33 = struct16 {
                        field_0: 0x8000000000000000
                        field_8: uu_date::uumain::uumain::{{closure}}(&v48 as u448) as i8
                    };
                    goto LABEL_5715df;
                } else {
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v42, "rfc-email") as i8 {
                        v48 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, "rfc-3339");
                        v81 = clap_builder::parser::error::MatchesError::unwrap("rfc-3339", &v48);
                        if v81 {
                            v35 = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(*((v81 + 8) as &i64), *((v81 + 16) as &i64)) as i8;
                            v80 = 9223372036854775810;
                        }
                    }
                    v34 = v80;
                    goto LABEL_5715df;
                }
            }
            v72 = *((v71 + 8) as &i64);
            v73 = *((v71 + 16) as &i64);
            v49 = 0;
            v51 = v48 as i64 & -0x100000000;
            v88 = core::char::methods::encode_utf8_raw(43, &v51, v74);
            if core::slice::<impl [T]>::starts_with(v72, v73, v88.data_ptr, v88.length) as u8 {
                v53 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v72, v73) as u64, v74);
                v36 = v53.field_16;
                v33 = v53.field_0;
LABEL_5715df:
                v48 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, "date");
                v82 = clap_builder::parser::error::MatchesError::unwrap("date", &v48);
                if v82 {
                    v64 = chrono::offset::local::Local::now();
                    v15 = parse_datetime::parse_datetime_at_date(&v64, *((v82 + 8) as &i64), *((v82 + 16) as &i64));
                    match v15 {
                        Some(_) => {
                            v65 = *((&v14 as &char + 8) as &i128);
                            v30 = chrono::datetime::DateTime<Tz>::signed_duration_since(&v65, &v64);
                            v31 = v74 as u32;
                            v29 = 4;
                        },
                        None => {
                            v54 = <alloc::string::String as core::clone::Clone>::clone(v82);
                            v32 = v54.vec.len;
                            v30 = *(&v54.vec.buf.cap as &i128) as u128;
                            v29 = 1;
                        },
                    }
                } else {
                    v48 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, "file");
                    v83 = clap_builder::parser::error::MatchesError::unwrap("file", &v48);
                    if v83 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v83 + 8) as &i64), *((v83 + 16) as &i64), "-") as i8 {
                        v55 = std::sys::os_str::bytes::Slice::to_owned(*((v83 + 8) as &i64), *((v83 + 16) as &i64));
                        v32 = v55.vec.len;
                        v30 = *(&v55.vec.buf.cap as &i128) as u128;
                        v29 = 2;
                    }
                }
                v56 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, "set");
                v84 = clap_builder::parser::error::MatchesError::unwrap("set", &v56);
                v85 = 0;
                if v84 {
                    core::ops::function::FnOnce::call_once(&v56, v84);
                    v4 = *((&v56 as &char + 12) as &i64);
                    v5 = v59;
                    v6 = *((&v56 as &char + 24) as &i128);
                    v7 = v62;
                    if v56 as i64 == 9223372036854775809 {
                        goto LABEL_571831;
                    }
                    if v56 as i64 == 0x8000000000000000 {
                        v41 = v5;
                        v40 = v4;
                        v85 = *((&v56 as &char + 8) as &i32);
                        goto LABEL_571831;
                    } else {
                        v0 = v56 as i64;
                        v1 = *((&v56 as &char + 8) as &i32);
                        v3 = v5;
                        v2 = v4;
                        v39 = v7;
                        v37 = v6;
                        v13 = 0;
                        v17 = v1;
                        v18 = v2;
                        v20 = v3;
                        v21 = 1;
                        v8 = &v13;
                        v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v48 = "invalid date ";
                        v57 = 1 as u64;
                        v61 = 0;
                        *(&v58 as &&struct_0 *) = &v8;
                        v60 = 1;
                        v50 = core::option::Option<T>::map_or_else(v3);
                        v60 = 1;
                        v48 = v68;
                        v58 = *(&v69 as &i64) as u64;
                        v79 = alloc::boxed::Box<T>::new(&v50);
                    }
                } else {
LABEL_571831:
                    v86 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v42, "universal") as i8;
                    v23 = v36;
                    v22 = v33;
                    v87 = *((&v30 as &char + 8) as &i128);
                    *(&v12 as &i128) = *(&v29 as &i128);
                    v19 = v87;
                    v26 = v40;
                    v27 = v41;
                    v28 = v86;
                    v24 = v85;
                    if v85 {
                        v47 = v25;
                        v79 = uu_date::set_system_datetime(&v47);
                    } else if v28 {
                        v50 = chrono::offset::utc::Utc::now();
                    } else {
                        v50 = chrono::offset::local::Local::now();
                    }
                }
            } else {
                v13 = 0;
                v17 = v72;
                v19 = v73;
                v21 = 1;
                v37 = &v13;
                v38 = <os_display::Quoted as core::fmt::Display>::fmt;
                v49 = "invalid date ";
                v57 = 1 as u64;
                v61 = 0;
                *(&v58 as &&struct_0 *) = &v37;
                v60 = 1;
                v49 as u192 = core::option::Option<T>::map_or_else(v74);
                v60 = 1;
                v49 = v66;
                v58 = v67;
                v79 = alloc::boxed::Box<T>::new(&v49 as u192);
            }
            return v79;
        },
    }
}
