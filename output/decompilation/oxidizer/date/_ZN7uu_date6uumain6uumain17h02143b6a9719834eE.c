fn uu_date::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x658]
    let v1: u32;  // [bp-0x650]
    let v4: u64;  // [bp-0x630]
    let v5: u32;  // [bp-0x628]
    let v6: u64;  // [bp-0x624]
    let v7: u32;  // [bp-0x61c]
    let v8: void*;  // [bp-0x5f8], Other Possible Types: u128
    let v9: struct16;  // [bp-0x5f8]
    let v10: struct64;  // [bp-0x5f8]
    let v11: u32;  // [bp-0x5f0]
    let v12: u64;  // [bp-0x5ec]
    let v13: core::fmt::Arguments;  // [bp-0x5e8], Other Possible Types: char, u128
    let v14: u32;  // [bp-0x5e4]
    let v15: u8;  // [bp-0x5e0]
    let v16: iNone;  // [bp-0x5d8]
    let v17: u64;  // [bp-0x5c8]
    let v18: u32;  // [bp-0x5c0]
    let v19: struct16;  // [bp-0x5c0]
    let v20: u64;  // [bp-0x5bc]
    let v21: u32;  // [bp-0x5b4]
    let v22: u8;  // [bp-0x5b0]
    let v23: u128;  // [bp-0x5a8]
    let v24: u64;  // [bp-0x5a8]
    let v26: u8;  // [bp-0x5a0]
    let v27: u64;  // [bp-0x598]
    let v28: u64;  // [bp-0x568]
    let v29: iNone;  // [bp-0x560], Other Possible Types: u64
    let v30: u32;  // [bp-0x558]
    let v31: u64;  // [bp-0x550]
    let v32: u64;  // [bp-0x520]
    let v33: u32;  // [bp-0x518]
    let v34: u64;  // [bp-0x510]
    let v35: u64;  // [bp-0x508]
    let v36: iNone;  // [bp-0x500]
    let v37: iNone;  // [bp-0x4f0]
    let v38: u64;  // [bp-0x4e0]
    let v39: struct16;  // [bp-0x4c8]
    let v40: struct16;  // [bp-0x4b8], Other Possible Types: u8
    let v41: Result<struct40, struct16>;  // [bp-0x4b8], Other Possible Types: u128
    let v42: u32;  // [bp-0x4b8]
    let v43: struct24;  // [bp-0x4b8]
    let v44: struct24;  // [bp-0x4b8]
    let v45: alloc::string::String;  // [bp-0x4b8]
    let v46: struct24;  // [bp-0x4b8]
    let v47: Result<struct48, struct24>;  // [bp-0x4b8]
    let v48: struct12;  // [bp-0x4b8]
    let v49: u128;  // [bp-0x4a8]
    let v50: u32;  // [bp-0x4a4]
    let v51: u32;  // [bp-0x4a0]
    let v52: u128;  // [bp-0x498]
    let v53: u64;  // [bp-0x490]
    let v54: iNone;  // [bp-0x488]
    let v55: struct16;  // [bp-0x1e8]
    let v56: iNone;  // [bp-0x1d8]
    let v57: u64;  // [bp-0x1c8]
    let v58: alloc::string::String;  // [bp-0x1b8]
    let v59: u64;  // [bp-0x1a8]
    let v60: alloc::string::String;  // [bp-0x1a0]
    let v62: i64;  // r14
    let v63: u32;  // rdx
    let v65: u64;  // rcx
    let v66: core::fmt::Arguments;  // r14
    let v67: core::option::Option<&str>;  // rax
    let v68: core::fmt::Arguments;  // rcx
    let v69: u64;  // rbx
    let v70: iNone;  // xmm0
    let v71: iNone;  // xmm1
    let v72: u64;  // rax
    let v73: i64;  // rax
    let v74: i64;  // r14
    let v75: i64;  // rax
    let v76: u64;  // rax
    let v77: u32;  // ebp
    let v78: u8;  // al
    let v79: iNone;  // xmm1
    let v80: &mut [u8];  // rax:rdx
    let v81: u64;  // [bp-0x4b8]

    uu_date::uu_app(&v40);
    v9 = clap_builder::builder::command::Command::try_get_matches_from(&v40, a0, a1);
    if (((0 ^ v9.field_0) & (0 ^ -(v8))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9.field_8);
    }
    v38 = v17;
    v37 = v16;
    v36 = *(&v13 as &i128);
    v34 = v9.field_0;
    v35 = v9.field_8;
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v34, "format");
    v62 = clap_builder::parser::error::MatchesError::unwrap("format", &v41);
    if !v62 {
        v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v34);
        v10 = clap_builder::parser::error::MatchesError::unwrap(&v41);
        if v10.field_0 as i64 {
            v70 = v10.field_0;
            v71 = v10.field_16;
            v54 = v10.field_48;
            *(&v52 as void*) = v16;
            *(&v49 as void*) = v71;
            *(&v41 as void*) = v70;
            v26 = uu_date::uumain::uumain::{{closure}}(&v41);
            v24 = 0x8000000000000000;
            goto LABEL_6022fb;
        } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v34, "rfc-email") {
            v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v34, "rfc-3339");
            v73 = clap_builder::parser::error::MatchesError::unwrap("rfc-3339", &v41);
            if v73 {
                v26 = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(*((v73 + 8) as &i64), *((v73 + 16) as &i64));
                v72 = 9223372036854775810;
                goto LABEL_6022fb;
            }
        }
    }
    v42 = 0;
    v80 = core::char::methods::encode_utf8_raw(43, &v42, v63);
    if core::slice::<impl [T]>::starts_with(*((v62 + 8) as &i64), *((v62 + 16) as &i64), v80.data_ptr, v65) {
        v66 = *((v62 + 16) as &i64);
        v67 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, *((v62 + 8) as &i64), v66) as u64;
        v43 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v67, v63);
        v27 = v43.field_16;
        v23 = *(&v43.field_0 as &i128);
LABEL_6022fb:
        v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v34, "date");
        v74 = clap_builder::parser::error::MatchesError::unwrap("date", &v41);
        if v74 {
            v55 = chrono::offset::local::Local::now();
            v44 = parse_datetime::parse_datetime_at_date(&v55, *((v74 + 8) as &i64), *((v74 + 16) as &i64));
            if v44.field_0 == 9223372036854775810 {
                v29 = chrono::datetime::DateTime<Tz>::signed_duration_since(&v44 as u8, &v55);
                v30 = v63;
                v28 = 4;
            } else {
                v45 = <alloc::string::String as core::clone::Clone>::clone(v74);
                v31 = v45.vec.len;
                v29 = *(&v45.vec.buf.inner.cap as &i128);
                v28 = 1;
            }
        } else {
            v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v34, "file");
            v75 = clap_builder::parser::error::MatchesError::unwrap("file", &v41);
            if v75 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v75 + 8) as &i64), *((v75 + 16) as &i64), "-") {
                v46 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v75 + 8) as &i64), *((v75 + 16) as &i64));
                v31 = v46.field_16;
                *(&v29 as &i128) = *(&v46.field_0 as &i128);
                v28 = 2;
            }
        }
        v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v34, "set");
        v76 = clap_builder::parser::error::MatchesError::unwrap("set", &v41);
        v77 = 0;
        if v76 {
            v47 = uu_date::parse_date(v76);
            v0 = *((&v47 as &char + 12) as &i64);
            v1 = v50;
            v56 = *((&v47 as &char + 24) as &i128);
            v57 = v53;
            if !((((0 ^ v47 as i64) & (0 ^ -(v81))) >> 63) as char) {
                if v47 as i64 == 9223372036854775809 {
                    goto LABEL_6026d1;
                }
                v4 = v47 as i64;
                v5 = *((&v47 as &char + 8) as &i32);
                v7 = v1;
                v6 = v0;
                v8 = 0;
                v11 = v5;
                v12 = v6;
                v14 = v7;
                v15 = 1;
                v60 = format!("invalid date {}", &v8);
                v51 = 1;
                v40 = *(&v60.vec.buf.inner.cap as &i128);
                v49 = v60.vec.len;
                v69 = alloc::boxed::Box<T>::new(&v40) as u64;
            } else {
                v33 = v1;
                v32 = v0;
                v77 = *((&v47 as &char + 8) as &i32);
                goto LABEL_6026d1;
            }
        } else {
LABEL_6026d1:
            v78 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v34, "universal");
            v17 = v27;
            v16 = v23;
            v79 = (&v29)[8] as i128;
            v8 = *(&v28 as &i128);
            *(&v13 as void*) = v79;
            v20 = v32;
            v21 = v33;
            v22 = v78;
            v18 = v77;
            if v77 {
                v39 = v19;
                v69 = uu_date::set_system_datetime(&v39);
            } else if v22 {
                v48 = chrono::offset::utc::Utc::now();
            } else {
                v40 = chrono::offset::local::Local::now();
            }
        }
    } else {
        v68 = *((v62 + 16) as &i64);
        v8 = 0;
        v11 = *((v62 + 8) as &i64);
        v13 = v68;
        v15 = 1;
        v58 = format!("invalid date {}", &v8);
        v51 = 1;
        v40 = *(&v58.vec.buf.inner.cap as &i128);
        v49 = v59;
        v69 = alloc::boxed::Box<T>::new(&v40) as u64;
    }
    return v69;
}
