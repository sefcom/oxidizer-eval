fn uu_env::make_options(a0: i64, a1: i64) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x269]
    let v1: struct56;  // [bp-0x268], Other Possible Types: struct64
    let v2: struct64;  // [bp-0x268], Other Possible Types: u128
    let v3: struct24;  // [bp-0x218]
    let v6: void*;  // [bp-0x208]
    let v7: struct24;  // [bp-0x200]
    let v10: void*;  // [bp-0x1f0]
    let v11: Result<struct40, struct16>;  // [bp-0x1e8], Other Possible Types: struct56
    let v12: u128;  // [bp-0x1e8]
    let v13: struct16;  // [bp-0x1e8]
    let v15: u64;  // [bp-0x1d8]
    let v16: u128;  // [bp-0x1d0]
    let v17: u64;  // [bp-0x1c0]
    let v18: void*;  // [bp-0x1b8]
    let v19: u64;  // [bp-0x1b0]
    let v20: u128;  // [bp-0x1a8]
    let v21: u64;  // [bp-0x198]
    let v22: void*;  // [bp-0x190]
    let v23: void*;  // [bp-0x188]
    let v24: u64;  // [bp-0x180]
    let v25: void*;  // [bp-0x178]
    let v26: core::fmt::Arguments;  // [bp-0x170]
    let v27: core::fmt::rt::Argument;  // [bp-0x168]
    let v28: struct24;  // [bp-0x160]
    let v29: struct24;  // [bp-0x158]
    let v30: core::fmt::Arguments;  // [bp-0x150], Other Possible Types: u8
    let v31: u8;  // [bp-0x14f]
    let v32: i64;  // [bp-0x140]
    let v33: struct64;  // [bp-0x138], Other Possible Types: u128
    let v34: u128;  // [bp-0x128]
    let v35: u128;  // [bp-0x118]
    let v36: u128;  // [bp-0x108]
    let v37: struct64;  // [bp-0xf8]
    let v38: u128;  // [bp-0xe8]
    let v39: u128;  // [bp-0xd8]
    let v40: u128;  // [bp-0xc8]
    let v41: struct64;  // [bp-0xb8]
    let v42: struct64;  // [bp-0x78]
    let v44: core::fmt::Arguments;  // r13
    let v45: u8;  // bl
    let v47: core::fmt::rt::Argument;  // rbp
    let v48: u32;  // ecx
    let v49: struct24;  // rax
    let v50: struct24;  // rcx
    let v51: i64;  // rax
    let v52: u64;  // rax
    let v53: u64;  // rdx
    let v54: u8;  // bl
    let v55: i64;  // r13
    let v56: u64;  // rdx
    let v57: u64;  // r8
    let v58: i64;  // rax
    let v59: u64;  // rax
    let v61: u64;  // [bp-0x260]
    let v62: u128;  // [bp-0x258]
    let v63: u128;  // [bp-0x248]
    let v64: u128;  // [bp-0x238]

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ignore-environment") as i8;
    v45 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "null") as i8 ? 0 : 10);
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "chdir");
    clap_builder::parser::error::MatchesError::unwrap("chdir", &v11);
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v1 = clap_builder::parser::error::MatchesError::unwrap("file", &v11);
    if v1.field_0 as i64 {
        v41 = v2;
        v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v41);
    } else {
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(None, 0, v48);
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "unset");
    v1 = clap_builder::parser::error::MatchesError::unwrap("unset", &v11);
    if v1.field_0 as i64 {
        v42 = v2;
        v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v42);
    } else {
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(None, 0, v48);
    }
    v13 as u640 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "argv0");
    clap_builder::parser::error::MatchesError::unwrap("argv0", &v13 as u640);
    v15 = v6;
    v12 = v3.field_0;
    v16 = v7.field_0;
    v17 = v10;
    v30 = v0;
    v31 = v45;
    v26 = v44;
    v27 = v47;
    v18 = 0;
    v19 = 8;
    v20 = 0;
    v21 = 8;
    v22 = 0;
    v28 = v50;
    v29 = v49;
    v23 = 0;
    v24 = 8;
    v25 = 0;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "ignore-signal");
    v33 = clap_builder::parser::error::MatchesError::unwrap("ignore-signal", &v1);
    if v33.field_0 as i64 {
        v64 = v36;
        v63 = v35;
        v62 = v34;
        v2 = v33.field_0;
        loop {
            v51 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v1);
            if !v51 {
                break;
            }
            v52 = uu_env::parse_signal_opt(&v13 as u640, *((v51 + 8) as &i64), *((v51 + 16) as &i64));
            if v52 {
                *((v32 + 8) as &u64) = v52;
                *((v32 + 16) as &u64) = v53;
                *(v32 as &i64) = 0x8000000000000000;
                return v32;
            }
        }
    }
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "vars");
    v37 = clap_builder::parser::error::MatchesError::unwrap("vars", &v1);
    if v37.field_0 as i64 {
        v36 = v40;
        v35 = v39;
        v34 = v38;
        v33 = v37.field_0;
        loop {
            v55 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v33);
            if !v55 {
                break;
            }
            if <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v55 + 8) as &i64), *((v55 + 16) as &i64), v56) {
                v30 = 1;
                if (v54 & 1) {
                    break;
                }
            } else {
                v13 = uu_env::parse_name_value_opt(*((v55 + 8) as &i64), *((v55 + 16) as &i64), v57);
                if v1.field_0 {
                    *((v32 + 8) as &u64) = v1.field_0;
                    *((v32 + 16) as &u64) = v61;
                    *(v32 as &i64) = 0x8000000000000000;
                    return v32;
                }
                if (v54 & 1) {
                    break;
                }
            }
        }
        v64 = v36;
        v63 = v35;
        v62 = v34;
        v2 = v33;
        loop {
            v58 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v1);
            if !v58 {
                break;
            }
            v59 = uu_env::parse_program_opt(&v13 as u640, *((v58 + 8) as &i64), *((v58 + 16) as &i64));
            if v59 {
                *((v32 + 8) as &u64) = v59;
                *((v32 + 16) as &&u8) = &g_548840;
                *(v32 as &i64) = 0x8000000000000000;
                return v32;
            }
        }
    }
    memcpy(v32, &v13 as u640, 160);
    return v32;
}
