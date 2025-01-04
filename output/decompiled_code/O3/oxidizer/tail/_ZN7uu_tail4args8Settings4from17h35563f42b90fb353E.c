fn uu_tail::args::Settings::from(a0: &struct80, a1: &struct56) -> u64 {
    let v0: i8;  // [sp-0x1e2]
    let v1: i8;  // [sp-0x1e1]
    let v2: i224;  // [sp-0x1d8], Other Possible Types: Result<struct40, struct16>, struct24, struct64, struct56, struct66
    let v3: i128;  // [sp-0x1d0]
    let v4: i64;  // [sp-0x1c8]
    let v5: i32;  // [bp-0x1c0]
    let v6: struct10;  // [sp-0x198], Other Possible Types: i64
    let v7: i192;  // [sp-0x188], Other Possible Types: Option<Result<struct40, struct33>>, struct24
    let v8: i64;  // [sp-0x170]
    let v9: i32;  // [sp-0x15c]
    let v10: i64;  // [bp-0x158], Other Possible Types: struct64
    let v11: i64;  // [sp-0x150]
    let v12: i64;  // [sp-0x148]
    let v13: i8;  // [bp-0x140]
    let v14: i128;  // [bp-0x118]
    let v15: i64;  // [sp-0x100]
    let v16: i64;  // [sp-0xf8]
    let v17: i64;  // [sp-0xf0]
    let v18: i128;  // [sp-0xe8]
    let v19: i128;  // [bp-0xd8]
    let v20: i64;  // [sp-0xd0]
    let v21: i32;  // [sp-0xc8]
    let v22: i64;  // [bp-0xc0]
    let v23: i32;  // [sp-0xbc]
    let v24: i8;  // [sp-0xb8]
    let v25: i8;  // [sp-0xb7]
    let v26: i8;  // [sp-0xb6]
    let v27: i8;  // [sp-0xb5]
    let v28: i8;  // [sp-0xb4]
    let v29: i8;  // [bp-0xb1]
    let v30: i64;  // [sp-0xb0]
    let v31: i128;  // [sp-0xa8]
    let v32: i64;  // [sp-0x98]
    let v33: i192;  // [sp-0x90]
    let v34: i192;  // [sp-0x78]
    let v35: i192;  // [sp-0x60]
    let v36: i192;  // [sp-0x48]
    let v38: i8;  // r13b
    let v39: i64;  // rax
    let v42: i64;  // rcx
    let v43: i64;  // rcx
    let v44: i64;  // rax
    let v46: i64;  // rdx
    let v48: i64;  // rbp
    let v49: i64;  // r13
    let v50: i64;  // rbx
    let v51: i64;  // rax
    let v52: i64;  // rax
    let v53: i64;  // rcx
    let v54: i64;  // rax
    let v55: i64;  // r15
    let v56: i64;  // r12
    let v57: i64;  // rax
    let v58: i64;  // rax
    let v59: i64;  // rcx
    let v60: i64;  // rax
    let v61: i64;  // r12
    let v62: i64;  // r15
    let v63: i64;  // rax
    let v64: i64;  // rax
    let v67: i64;  // rax
    let v68: i8;  // al
    let v69: i128;  // xmm0
    let v70: i128;  // xmm1
    let v71: i128;  // xmm2
    let v72: i64;  // rcx

    v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "F") & 4294967295 & 4294967295;
    if !v38 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "retry");
    }
    v1 = 1;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "follow");
    v39 = clap_builder::parser::error::MatchesError::unwrap("follow", &v2);
    if !v39 {
        v43 = v42 | -0x100 | 2;
        if !(!v38) {
            goto LABEL_4f8f8a;
        }
    } else {
        if v38 {
            v44 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, &g_4285b3);
            if !(!v38) {
                goto LABEL_4f8f8c;
            }
        }
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v39 + 8) as &i64), *((v39 + 16) as &i64), "name") as i8 {
            v43 = 0;
        } else {
LABEL_4f8f8a:
            v43 = v43 | -0x100 | 1;
        }
    }
LABEL_4f8f8c:
    v9 = v43;
    v2 = uu_tail::args::FilterMode::from(a1);
    v48 = v2;
    v49 = v3;
    v50 = v4;
    if v48 == 5 {
        v51 = a0;
        *((v51 + 8) as &i64) = v49;
        *((v51 + 16) as &i64) = v50;
        *(v51 as &i64) = 5;
        return a0;
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "verbose") as i8;
    v2 = <uu_tail::args::Settings as core::default::Default>::default();
    v28 = v9;
    v15 = v48;
    v16 = v49;
    v17 = v50;
    v22 = v6;
    v24 = v1;
    v21 = *((&v2 as &char + 56) as &i32);
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "use-polling") as i32;
    v26 = v0;
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "-presume-input-pipe") as i32;
    v18 = *((&v2 as &char + 24) as &i128);
    v19 = *((&v2 as &char + 40) as &i128);
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "sleep-interval");
    v52 = clap_builder::parser::error::MatchesError::unwrap("sleep-interval", &v2);
    if v52 {
        v30 = v52;
        v6 = struct10 {
            field_0: 723401728380766730
            field_8: 2570
        };
        v2 = struct64 {
            field_0: g_5bb4b0
            field_16: g_5bb4c0
            field_32: g_5bb4d0
            field_48: g_5bb4e0
        };
        v7 = fundu_core::parse::Parser::parse_single(&v2, *((v52 + 8) as &i64), *((v52 + 16) as &i64), &v6);
        if v7 != 8 {
            v33 = format!("invalid number of seconds: '{:?}'", &v30);
            v13 = 1;
            v10 = v33;
            v12 = *((&v33 as &char + 16) as &i64);
            v53 = a0;
            *((v53 + 8) as &double) = alloc::boxed::Box<T>::new(&v10);
            *((v53 + 16) as &&i64) = &g_5bb550;
            *(v53 as &i64) = 5;
            return a0;
        }
        v32 = v8;
        v31 = *((&v7 as &char + 8) as &i128);
        v20 = <fundu_core::time::Duration as fundu_core::time::SaturatingInto<core::time::Duration>>::saturating_into(&v31);
        v21 = v46;
    }
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "max-unchanged-stats");
    v54 = clap_builder::parser::error::MatchesError::unwrap("max-unchanged-stats", &v2);
    if !v54 {
LABEL_4f91ee:
        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "pid");
        v58 = clap_builder::parser::error::MatchesError::unwrap("pid", &v2);
        if !v58 {
LABEL_4f9252:
            v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "files");
            v10 = clap_builder::parser::error::MatchesError::unwrap("files", &v2);
            if !v10 || (v2 = struct64 {
    field_0: v65
    field_16: v66
    field_32: *((&v10 as &char + 32) as &i128)
    field_48: *((&v10 as &char + 48) as &i128)
}, v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v2, v46), v14 = *((&v7 as &char + 8) as &i128), v2 == 0x8000000000000000) {
                v2 = uu_tail::args::Settings::from::{{closure}}();
            } else {
                v3 = v14;
                v2 = v7;
            }
            v18 = v2;
            if v19 < 2 {
                v68 = 0;
            } else {
                v67 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quiet");
                v68 = v67 | -0x100 | v67 ^ 1;
            }
            v26 = v68;
            v69 = v15;
            v70 = v17;
            v71 = *((&v18 as &char + 8) as &i128);
            v72 = a0;
            *((v72 + 48) as &i64) = v20;
            *((v72 + 32) as &i128) = v71;
            *((v72 + 16) as &i128) = v70;
            *(v72 as &i128) = v69;
            *((v72 + 64) as &i64) = v22;
            *((v72 + 72) as &i8) = v24;
            *((v72 + 74) as &i8) = v26;
            *((v72 + 75) as &i8) = v27;
            *((v72 + 79) as &i8) = v29;
            return a0;
        }
        v61 = *((v58 + 8) as &i64);
        v62 = *((v58 + 16) as &i64);
        v63 = core::num::<impl core::str::traits::FromStr for i32>::from_str(v61, v62);
        if (v63 & 1) {
            v14 = v63 >> 8;
            v10 = 0;
            v11 = v61;
            v12 = v62;
            v13 = 1;
            v36 = format!("invalid PID: {:?}: {:?}", &v10, &v14);
            v2 = v36;
            v64 = alloc::boxed::Box<T>::new(&v2);
            goto LABEL_4f96f4;
        }
        if v63 >= 0 {
            v23 = v63 >> 32;
            goto LABEL_4f9252;
        } else {
            v10 = 0;
            v11 = v61;
            v12 = v62;
            v13 = 1;
            v35 = format!("invalid PID: {:?}", &v10);
            v2 = v35;
            v64 = alloc::boxed::Box<T>::new(&v2);
LABEL_4f96f4:
            v59 = a0;
            *((v59 + 8) as &i64) = v64;
            v60 = &g_5bb3c8;
        }
    } else {
        v55 = *((v54 + 8) as &i64);
        v56 = *((v54 + 16) as &i64);
        v57 = core::num::<impl core::str::traits::FromStr for u32>::from_str(v55, v56);
        if !(v57 & 1) {
            v22 = v57 >> 32;
            goto LABEL_4f91ee;
        } else {
            v10 = 0;
            v11 = v55;
            v12 = v56;
            v13 = 1;
            v34 = format!("invalid maximum number of unchanged stats between opens: {:?}", &v10);
            v5 = 1;
            v2 = v34;
            v4 = *((&v34 as &char + 16) as &i64);
            v59 = a0;
            *((v59 + 8) as &double) = alloc::boxed::Box<T>::new(&v2);
            v60 = &g_5bb550;
        }
    }
    *((v59 + 16) as &i64) = v60;
    *(v59 as &i64) = 5;
    return a0;
}
