fn uu_env::make_options(a1: i64) -> Result<struct160, struct24> {
    let a0: struct40;  // rdi
    let v0: u8;  // [bp-0x261]
    let v1: i64;  // [bp-0x260]
    let v2: u8;  // [bp-0x258]
    let v3: u64;  // [bp-0x258]
    let v4: u64;  // [bp-0x250]
    let v5: void*;  // [bp-0x248]
    let v6: u8;  // [bp-0x240]
    let v7: u64;  // [bp-0x240]
    let v8: u64;  // [bp-0x238]
    let v9: void*;  // [bp-0x230]
    let v10: struct56;  // [bp-0x228]
    let v11: u128;  // [bp-0x228]
    let v12: struct56;  // [bp-0x228]
    let v13: Result<struct16, struct9>;  // [bp-0x228]
    let v14: struct24;  // [bp-0x228]
    let v15: u64;  // [bp-0x220]
    let v16: struct640;  // [bp-0x218], Other Possible Types: struct712
    let v17: struct640;  // [bp-0x208], Other Possible Types: struct712
    let v18: struct640;  // [bp-0x1f8], Other Possible Types: struct712
    let v19: struct24;  // [bp-0x1d8], Other Possible Types: struct64
    let v20: struct712;  // [bp-0x1c8]
    let v21: struct712;  // [bp-0x1b8]
    let v22: struct437;  // [bp-0x1a8], Other Possible Types: struct712
    let v23: Result<struct40, struct16>;  // [bp-0x198], Other Possible Types: struct56, u128
    let v24: void*;  // [bp-0x188]
    let v25: iNone;  // [bp-0x180]
    let v26: void*;  // [bp-0x170]
    let v27: void*;  // [bp-0x168]
    let v28: u64;  // [bp-0x160]
    let v29: u128;  // [bp-0x158]
    let v30: u64;  // [bp-0x148]
    let v31: void*;  // [bp-0x140]
    let v32: void*;  // [bp-0x138]
    let v33: u64;  // [bp-0x130]
    let v34: void*;  // [bp-0x128]
    let v35: i64;  // [bp-0x120]
    let v36: Option<struct17>;  // [bp-0x118]
    let v37: Option<struct17>;  // [bp-0x110]
    let v38: i64;  // [bp-0x108]
    let v39: u8;  // [bp-0x100]
    let v40: core::option::Option<&str>;  // [bp-0xff]
    let v41: struct64;  // [bp-0xf0]
    let v42: u128;  // [bp-0xe0]
    let v43: u128;  // [bp-0xd0]
    let v44: u128;  // [bp-0xc0]
    let v45: struct64;  // [bp-0xb0]
    let v46: struct64;  // [bp-0x70]
    let v48: Option<struct17>;  // r12
    let v49: i8;  // r13b
    let v51: Option<struct17>;  // rbp
    let v52: u64;  // rdx
    let v53: i64;  // rax
    let v54: Option<struct17>;  // rcx
    let v55: struct40;  // rbx
    let v56: core::fmt::rt::Argument;  // rax
    let v57: u64;  // rax
    let v58: Option<struct17>;  // r12b
    let v59: i64;  // rax
    let v60: i64;  // rax
    let v61: u64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ignore-environment");
    v49 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "null") ? 0 : 10);
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, &g_41e9ab);
    clap_builder::parser::error::MatchesError::unwrap(&g_41e9ab, &v23);
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v45 = clap_builder::parser::error::MatchesError::unwrap("file", &v23);
    if v45.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v2, &v45);
    } else {
        v3 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(0, 8, 16, "src/uu/env/src/env.rs");
        v4 = v52;
        v5 = 0;
    }
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "unset");
    v46 = clap_builder::parser::error::MatchesError::unwrap("unset", &v23);
    if v46.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v6, &v46);
    } else {
        v7 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(0, 8, 16, "src/uu/env/src/env.rs");
        v8 = v52;
        v9 = 0;
    }
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, &g_41eb5c);
    clap_builder::parser::error::MatchesError::unwrap(&g_41eb5c, &v23);
    v24 = v5;
    v23 = *(&v3 as &i128);
    v25 = *(&v7 as &i128);
    v26 = v9;
    v39 = v0;
    v40 = v49;
    v35 = v48;
    v36 = v51;
    v27 = 0;
    v28 = 8;
    v29 = 0;
    v30 = 8;
    v31 = 0;
    v37 = v54;
    v38 = v53;
    v32 = 0;
    v33 = 8;
    v34 = 0;
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "ignore-signal");
    v55 = a0;
    v19 = clap_builder::parser::error::MatchesError::unwrap("ignore-signal", &v10);
    if v19.field_0 as i64 {
        v18 = v22;
        v17 = v21;
        v16 = v20;
        v11 = v19.field_0;
        loop {
            v56 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v10);
            if !v56 {
                break;
            }
            v57 = uu_env::parse_signal_opt(&v23, *((v56 + 8) as &i64), *((v56 + 16) as &i64));
            if v57 {
                *((v55 + 8) as &u64) = v57;
                *((v55 + 16) as &u64) = v52;
                *(v55 as &i64) = 0x8000000000000000;
                return;
            }
        }
    }
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "vars");
    v41 = clap_builder::parser::error::MatchesError::unwrap("vars", &v12);
    if v41.field_0 as i64 {
        v22 = v44;
        v21 = v43;
        v20 = v42;
        v19 = v41.field_0;
        loop {
            v59 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v19);
            if !v59 {
                break;
            }
            if !<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v59 + 8) as &i64), *((v59 + 16) as &i64), &g_41e8a6) {
                v13 = uu_env::parse_name_value_opt(&v23, *((v59 + 8) as &i64), *((v59 + 16) as &i64));
                if let Ok(_) = v13 {
                    v55 = a0;
                    *((v1 + 8) as &i64) = v13 as i64;
                    *((v1 + 16) as &u64) = v15;
                    *(v55 as &i64) = 0x8000000000000000;
                    return;
                }
            }
            if (v58 & 1) {
                break;
            }
        }
        v18 = v22;
        v17 = v21;
        v16 = v20;
        v14 = v19;
        v55 = a0;
        loop {
            v60 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v13);
            if !v60 {
                break;
            }
            v61 = uu_env::parse_program_opt(&v23, *((v60 + 8) as &i64), *((v60 + 16) as &i64));
            if v61 {
                *((v55 + 8) as &u64) = v61;
                *((v55 + 16) as &&u64) = &g_5107e8;
                *(v55 as &i64) = 0x8000000000000000;
                return;
            }
        }
    }
    memcpy(v55, &v23, 160);
    return;
}
