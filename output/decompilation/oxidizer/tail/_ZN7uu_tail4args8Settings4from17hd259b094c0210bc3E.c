fn uu_tail::args::Settings::from(a1: &struct56) -> Result<struct80, struct24> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x1cc]
    let v1: u8;  // [bp-0x1cb]
    let v2: u8;  // [bp-0x1ca]
    let v3: i8;  // [bp-0x1c9]
    let v4: struct24;  // [bp-0x1c8], Other Possible Types: struct28, Result<struct40, struct16>
    let v5: struct56;  // [bp-0x1c8]
    let v6: u64;  // [bp-0x1c8]
    let v7: struct66;  // [bp-0x1c8]
    let v8: u128;  // [bp-0x1c0]
    let v9: u64;  // [bp-0x1b8]
    let v10: u128;  // [bp-0x1a0]
    let v11: void*;  // [bp-0x178], Other Possible Types: u128
    let v12: u64;  // [bp-0x170]
    let v13: u64;  // [bp-0x168]
    let v14: u8;  // [bp-0x160]
    let v15: u32;  // [bp-0x154]
    let v16: u64;  // [bp-0x148]
    let v17: u64;  // [bp-0x140]
    let v18: u64;  // [bp-0x138]
    let v19: iNone;  // [bp-0x130], Other Possible Types: u128
    let v20: u128;  // [bp-0x120]
    let v21: struct16;  // [bp-0x118]
    let v22: u32;  // [bp-0x110]
    let v23: u64;  // [bp-0x108]
    let v26: u8;  // [bp-0x100]
    let v27: u8;  // [bp-0xff]
    let v28: u8;  // [bp-0xfe]
    let v29: u8;  // [bp-0xfd]
    let v30: u8;  // [bp-0xfc]
    let v31: u8;  // [bp-0xf9]
    let v32: i64;  // [bp-0xd8]
    let v33: Result<struct24, struct20>;  // [bp-0xd0]
    let v34: u64;  // [bp-0xd0]
    let v36: alloc::string::String;  // [bp-0xb8]
    let v37: u64;  // [bp-0xa8]
    let v38: alloc::string::String;  // [bp-0xa0]
    let v39: u64;  // [bp-0x90]
    let v40: alloc::string::String;  // [bp-0x88]
    let v41: u64;  // [bp-0x78]
    let v42: struct64;  // [bp-0x70]
    let v44: core::fmt::Arguments;  // r13b
    let v46: u8;  // al
    let v47: u8;  // al
    let v48: u64;  // rdx
    let v49: u64;  // rdx
    let v50: u8;  // al
    let v51: u8;  // al
    let v52: i64;  // rax
    let v53: u64;  // rax
    let v54: i64;  // rax
    let v55: u64;  // rax
    let v56: u64;  // rax
    let v57: i64;  // rax
    let v58: u64;  // r12
    let v59: u64;  // r15
    let v60: u64;  // rax
    let v61: u64;  // rax
    let v62: u8;  // al
    let v63: iNone;  // xmm0
    let v64: iNone;  // xmm1
    let v65: iNone;  // xmm2
    let v66: core::result::Result<u32, core::num::error::ParseIntError>;  // rax:rax
    let v67: core::result::Result<i32, core::num::error::ParseIntError>;  // rax:rax

    v44 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "F");
    if !v44 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "retry");
    }
    v2 = 1;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "follow");
    if clap_builder::parser::error::MatchesError::unwrap("follow", &v4) && v44 {
        v46 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, "F");
        v47 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, "follow");
    }
    v15 = v49;
    v50 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "use-polling");
    v4 = uu_tail::args::FilterMode::from(a1);
    if v4.field_0 == 5 {
        return struct24 {
            field_0: 5
            field_8: v8
            field_16: v9
        };
    }
    v0 = v50;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "verbose");
    v51 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "-presume-input-pipe");
    v7 = <uu_tail::args::Settings as core::default::Default>::default();
    v30 = v15;
    v16 = v7.field_0;
    v17 = v8;
    v18 = v9;
    v23 = v7.field_64;
    v26 = 1;
    v22 = v7.field_56;
    v27 = v0;
    v28 = v1;
    v29 = v51;
    v19 = *(&v7.field_24 as &i128);
    v20 = v10;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "sleep-interval");
    v52 = clap_builder::parser::error::MatchesError::unwrap("sleep-interval", &v4);
    if v52 {
        v32 = v52;
        v33 = uucore::features::parser::parse_time::from_str(*((v52 + 8) as &i64), *((v52 + 16) as &i64), 0);
        if (((0 ^ v33 as i64) & (0 ^ -(v34))) >> 63) as char {
            goto LABEL_49f2f5;
        }
        v53 = uu_tail::args::Settings::from::{{closure}}(&v32, &v33);
    } else {
LABEL_49f2f5:
        v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "max-unchanged-stats");
        v54 = clap_builder::parser::error::MatchesError::unwrap("max-unchanged-stats", &v4);
        if v54 {
            v66 = core::num::<impl u32>::from_ascii_radix(*((v54 + 8) as &i64), *((v54 + 16) as &i64), v48) as u128;
            if !(v66 as u8 & 1) {
                goto LABEL_49f420;
            }
            v11 = 0;
            v12 = *((v54 + 8) as &i64);
            v13 = *((v54 + 16) as &i64);
            v14 = 1;
            v36 = format!("invalid maximum number of unchanged stats between opens: {}", &v11);
            v4 = struct28 {
                field_0: *(&v36.vec.buf.inner.cap as &i128)
                field_16: v37
                field_24: 1
            };
            v53 = alloc::boxed::Box<T>::new(&v4) as u64;
        } else {
LABEL_49f420:
            v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "pid");
            v57 = clap_builder::parser::error::MatchesError::unwrap("pid", &v4);
            if v57 {
                v58 = *((v57 + 8) as &i64);
                v59 = *((v57 + 16) as &i64);
                v67 = core::num::<impl i32>::from_ascii_radix(v58, v59, v48) as u128;
                if (v67 as u8 & 1) {
                    v3 = (v67 >> 8) as u8;
                    v11 = 0;
                    v12 = v58;
                    v13 = v59;
                    v14 = 1;
                    v40 = format!("invalid PID: {}: {}", &v11, &v3);
                    v4 = struct28 {
                        field_0: *(&v40.vec.buf.inner.cap as &i128)
                        field_16: v41
                        field_24: 1
                    };
                    v60 = alloc::boxed::Box<T>::new(&v4) as u64;
                } else {
                    if v67 >= 0 {
                        goto LABEL_49f552;
                    }
                    v11 = 0;
                    v12 = v58;
                    v13 = v59;
                    v14 = 1;
                    v38 = format!("invalid PID: {}", &v11);
                    v4 = struct28 {
                        field_0: *(&v38.vec.buf.inner.cap as &i128)
                        field_16: v39
                        field_24: 1
                    };
                    v60 = alloc::boxed::Box<T>::new(&v4) as u64;
                }
                v61 = &g_572f18;
                return struct24 {
                    field_0: 5
                    field_8: v60
                    field_16: v55
                };
            } else {
LABEL_49f552:
                v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1);
                v42 = clap_builder::parser::error::MatchesError::unwrap(&v5);
                if v42.field_0 as i64 {
                    core::iter::traits::iterator::Iterator::collect(&v5, &v42);
                    v11 = *(&v5.field_8 as &i128);
                    if (((0 ^ v5.field_0) & (0 ^ -(v6))) >> 63) as char {
                        goto LABEL_49f5a5;
                    }
                    v8 = v11;
                } else {
LABEL_49f5a5:
                    v4 = uu_tail::args::Settings::from::{{closure}}();
                }
                v20 = v9;
                *(&v19 as &i128) = *(&v5.field_0 as &i128);
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "verbose") || v20 >= 2 {
                    v62 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quiet") ^ 1;
                }
                v28 = v62;
                v63 = *(&v16 as &i128);
                v64 = *(&v18 as &i128);
                v65 = (&v19)[8] as i128;
                return struct88 {
                    field_0: v63
                    field_16: v64
                    field_32: v65
                    field_48: *(&v21.field_0 as &i128)
                    field_64: v23
                    field_72: *(&v26 as &i16)
                    field_74: v28
                    field_75: <UNKNOWN>
                    field_79: <UNKNOWN>
                };
            }
        }
    }
    *((a0 + 8) as &u64) = v53;
    v56 = &g_573010;
}
