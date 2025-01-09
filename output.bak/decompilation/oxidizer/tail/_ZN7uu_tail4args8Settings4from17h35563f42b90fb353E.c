fn uu_tail::args::Settings::from(a0: &struct80, a1: &struct56) -> u64 {
    let v0: i8;  // [sp-0x1e2]
    let v1: i8;  // [sp-0x1e1]
    let v2: i328;  // [sp-0x1d8], Other Possible Types: Result<struct40, struct8>, struct24, struct64, struct28, struct56, struct66
    let v3: i64;  // [sp-0x1d0]
    let v4: i64;  // [sp-0x1c8]
    let v5: i64;  // [bp-0x1c0]
    let v6: i64;  // [bp-0x1b8]
    let v7: i64;  // [sp-0x198], Other Possible Types: struct10
    let v8: i328;  // [sp-0x188], Other Possible Types: struct24, Option<Result<struct40, struct25>>
    let v9: i64;  // [sp-0x180]
    let v10: i64;  // [sp-0x178]
    let v11: i64;  // [sp-0x170]
    let v12: i32;  // [sp-0x15c]
    let v13: i128;  // [sp-0x158], Other Possible Types: struct64
    let v14: i64;  // [sp-0x150]
    let v15: i64;  // [sp-0x148]
    let v16: i32;  // [bp-0x140]
    let v17: i64;  // [sp-0x138]
    let v18: i128;  // [bp-0x118]
    let v19: i64;  // [sp-0x110]
    let v20: i64;  // [sp-0x100]
    let v21: i64;  // [sp-0xf8]
    let v22: i64;  // [sp-0xf0]
    let v23: struct24;  // [sp-0xe8], Other Possible Types: i128
    let v24: i64;  // [bp-0xd8]
    let v25: i64;  // [sp-0xd0]
    let v26: i32;  // [sp-0xc8]
    let v27: i64;  // [bp-0xc0]
    let v28: i32;  // [sp-0xbc]
    let v29: i8;  // [sp-0xb8]
    let v30: i8;  // [sp-0xb7]
    let v31: i8;  // [sp-0xb6]
    let v32: i8;  // [sp-0xb5]
    let v33: i8;  // [sp-0xb4]
    let v35: i64;  // [sp-0xb0]
    let v36: i128;  // [sp-0xa8]
    let v37: i64;  // [sp-0x98]
    let v38: i8;  // [bp-0x90]
    let v39: i8;  // [bp-0x80]
    let v40: i8;  // [bp-0x78]
    let v41: i8;  // [bp-0x68]
    let v47: i8;  // r13b
    let v48: i64;  // rax
    let v51: i64;  // rcx
    let v52: i64;  // rcx
    let v53: i64;  // rax
    let v55: i64;  // rdx
    let v57: i64;  // rbp
    let v61: i64;  // rax
    let v62: i64;  // rcx
    let v63: i64;  // rax
    let v64: i64;  // r15
    let v65: i64;  // r12
    let v66: i64;  // rax
    let v67: i64;  // rax
    let v70: i64;  // r12
    let v71: i64;  // r15
    let v72: i64;  // rax
    let v73: i64;  // rax
    let v76: i64;  // rax
    let v77: i8;  // al

    v47 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "F") & 4294967295 & 4294967295;
    if !v47 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "retry");
    }
    v1 = 1;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "follow");
    v48 = clap_builder::parser::error::MatchesError::unwrap("follow", &v2);
    if !v48 {
        v52 = v51 | -0x100 | 2;
        if !(!v47) {
            goto LABEL_4f8f8a;
        }
    } else {
        if v47 {
            v53 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, "follow");
            if !(!v47) {
                goto LABEL_4f8f8c;
            }
        }
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v48 + 8) as &i64), *((v48 + 16) as &i64), "name") as i8 {
            v52 = 0;
        } else {
LABEL_4f8f8a:
            v52 = v52 | -0x100 | 1;
        }
    }
LABEL_4f8f8c:
    v12 = v52;
    v2 = uu_tail::args::FilterMode::from(a1);
    v57 = v2;
    if v57 == 5 {
        return struct24 {
            field_0: 5
            field_8: v58
            field_16: v59
        };
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "verbose") as i8;
    v2 = <uu_tail::args::Settings as core::default::Default>::default();
    v33 = v12;
    v20 = v57;
    v21 = v3;
    v22 = v4;
    v27 = v7;
    v29 = v1;
    v26 = *((&v2 as &char + 56) as &i32);
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "use-polling") as i32;
    v31 = v0;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "-presume-input-pipe") as i32;
    v23 = *((&v2 as &char + 24) as &i128);
    v24 = *((&v2 as &char + 40) as &i128);
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "sleep-interval");
    v61 = clap_builder::parser::error::MatchesError::unwrap("sleep-interval", &v2);
    if v61 {
        v35 = v61;
        v7 = struct10 {
            field_0: 723401728380766730
            field_8: 2570
        };
        v2 = struct64 {
            field_0: g_5bb4b0
            field_16: g_5bb4c0
            field_32: g_5bb4d0
            field_48: g_5bb4e0
        };
        v8 = fundu_core::parse::Parser::parse_single(&v2, *((v61 + 8) as &i64), *((v61 + 16) as &i64), &v7);
        if v8 == 8 {
            v37 = v11;
            v36 = *((&v8 as &char + 8) as &i128);
            v25 = <fundu_core::time::Duration as fundu_core::time::SaturatingInto<core::time::Duration>>::saturating_into(&v36);
            v26 = v55;
        } else {
            v18 = &v35;
            v19 = <&T as core::fmt::Display>::fmt;
            v13 = "invalid number of seconds: '";
            v14 = 2;
            v17 = 0;
            v15 = &v18;
            v16 = 1;
            core::option::Option<T>::map_or_else();
            v16 = 1;
            v13 = v38;
            v15 = v39;
            v62 = a0;
            *((v62 + 8) as &double) = alloc::boxed::Box<T>::new(&v13);
            *((v62 + 16) as &&i64) = &g_5bb550;
            *(v62 as &i64) = 5;
        }
    }
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "max-unchanged-stats");
    v63 = clap_builder::parser::error::MatchesError::unwrap("max-unchanged-stats", &v2);
    if !v63 {
LABEL_4f91ee:
        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "pid");
        v67 = clap_builder::parser::error::MatchesError::unwrap("pid", &v2);
        if !v67 {
LABEL_4f9252:
            v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "files");
            v13 = clap_builder::parser::error::MatchesError::unwrap("files", &v2);
            if !v13 || (v2 = struct64 {
    field_0: v74
    field_16: v75
    field_32: *((&v13 as &char + 32) as &i128)
    field_48: *((&v13 as &char + 48) as &i128)
}, v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v2), v18 = *((&v8 as &char + 8) as &i128), v2 == 0x8000000000000000) {
                v2 = uu_tail::args::Settings::from::{{closure}}();
            } else {
                v2 = v8;
            }
            v23 = v2;
            if v24 < 2 {
                v77 = 0;
            } else {
                v76 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quiet");
                v77 = v76 | -0x100 | v76 ^ 1;
            }
            v31 = v77;
            return struct80 {
                field_0: v78
                field_16: v79
                field_32: v80
                field_48: v25
                field_64: v27
                field_72: v29
                field_74: v31
                field_75: v32
                field_79: v34
            };
        }
        v70 = *((v67 + 8) as &i64);
        v71 = *((v67 + 16) as &i64);
        v72 = core::num::<impl core::str::traits::FromStr for i32>::from_str();
        if (v72 & 1) {
            v18 = v72 >> 8;
            v13 = 0;
            v14 = v70;
            v15 = v71;
            v16 = 1;
            v8 = &v13;
            v9 = <os_display::Quoted as core::fmt::Display>::fmt;
            v10 = &v18;
            v11 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
            v2 = "invalid PID: ";
            v3 = 2;
            v6 = 0;
            v4 = &v8;
            v5 = 2;
            core::option::Option<T>::map_or_else();
            v2 = struct28 {
                field_0: v44
                field_16: v45
                field_24: 1
            };
            v73 = alloc::boxed::Box<T>::new(&v2);
            goto LABEL_4f96f4;
        }
        if v72 >= 0 {
            v28 = v72 >> 32;
            goto LABEL_4f9252;
        } else {
            v13 = 0;
            v14 = v70;
            v15 = v71;
            v16 = 1;
            v8 = &v13;
            v9 = <os_display::Quoted as core::fmt::Display>::fmt;
            v2 = "invalid PID: ";
            v3 = 1;
            v6 = 0;
            v4 = &v8;
            v5 = 1;
            core::option::Option<T>::map_or_else();
            v2 = struct28 {
                field_0: v42
                field_16: v43
                field_24: 1
            };
            v73 = alloc::boxed::Box<T>::new(&v2);
LABEL_4f96f4:
            *((a0 + 8) as &i64) = v73;
        }
    } else {
        v64 = *((v63 + 8) as &i64);
        v65 = *((v63 + 16) as &i64);
        v66 = core::num::<impl core::str::traits::FromStr for u32>::from_str(v64, v65);
        if !(v66 & 1) {
            v27 = v66 >> 32;
            goto LABEL_4f91ee;
        } else {
            v13 = 0;
            v14 = v64;
            v15 = v65;
            v16 = 1;
            v8 = &v13;
            v9 = <os_display::Quoted as core::fmt::Display>::fmt;
            v2 = "invalid maximum number of unchanged stats between opens: ";
            v3 = 1;
            v6 = 0;
            v4 = &v8;
            v5 = 1;
            core::option::Option<T>::map_or_else();
            v5 = 1;
            v2 = v40;
            v4 = v41;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v2);
        }
    }
    return struct16 {
        field_0: 5
        field_16: <UNKNOWN>
    };
}
