fn uu_env::make_options(a0: &struct160, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x269]
    let v1: struct64;  // [sp-0x268], Other Possible Types: struct56, Result<struct16, struct1>, int
    let v2: iNone;  // [sp-0x258]
    let v3: iNone;  // [sp-0x248]
    let v4: iNone;  // [sp-0x238]
    let v5: i64;  // [sp-0x210], Other Possible Types: int, struct24
    let v6: i64;  // [sp-0x200], Other Possible Types: struct24
    let v7: i64;  // [sp-0x1f8]
    let v8: i64;  // [sp-0x1f0]
    let v9: Result<struct16, struct8>;  // [sp-0x1e8], Other Possible Types: struct56, int
    let v10: i64;  // [sp-0x1d8]
    let v11: struct24;  // [sp-0x1d0]
    let v12: i64;  // [sp-0x1b8]
    let v13: i64;  // [sp-0x1b0]
    let v14: iNone;  // [sp-0x1a8]
    let v15: i64;  // [sp-0x198]
    let v16: i64;  // [sp-0x190]
    let v17: i64;  // [sp-0x188]
    let v18: i64;  // [sp-0x180]
    let v19: i64;  // [sp-0x178]
    let v20: i64;  // [sp-0x170]
    let v21: i64;  // [sp-0x168]
    let v22: i64;  // [sp-0x160]
    let v23: i64;  // [sp-0x158]
    let v24: i8;  // [sp-0x150]
    let v25: i8;  // [sp-0x14f]
    let v26: struct64;  // [sp-0x138], Other Possible Types: int
    let v27: iNone;  // [sp-0x128]
    let v28: iNone;  // [sp-0x118]
    let v29: iNone;  // [sp-0x108]
    let v30: struct64;  // [sp-0xf8]
    let v31: struct64;  // [sp-0xb8]
    let v32: struct64;  // [sp-0x78]
    let v34: i64;  // r13
    let v36: i64;  // rax
    let v40: i64;  // rax
    let v41: i64;  // rcx
    let v42: struct8;  // rax
    let v43: i64;  // rax
    let v44: i64;  // rdx
    let v45: i8;  // bl
    let v46: i64;  // r13
    let v47: i64;  // rax
    let v48: i64;  // rcx
    let v49: struct8;  // rax
    let v50: i64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ignore-environment") as i8;
    v34 = 0;
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "chdir");
    v36 = clap_builder::parser::error::MatchesError::unwrap("chdir", &v9);
    if v36 {
        v34 = *((v36 + 8) as &i64);
    }
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v1 = clap_builder::parser::error::MatchesError::unwrap("file", &v9);
    if v1.field_0 as i64 {
        v31 = v1;
        v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v31);
    } else {
        v9 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(None, 0);
        v5 = *((&v9 as &char + 8) as &i64);
        v5 = v10;
        v5 = 0;
    }
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "unset");
    v1 = clap_builder::parser::error::MatchesError::unwrap("unset", &v9);
    if v1.field_0 as i64 {
        v32 = v1;
        v6 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v32);
    } else {
        v9 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(None, 0);
        v6 = *((&v9 as &char + 8) as &i64);
        v7 = v10;
        v8 = 0;
    }
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "argv0");
    v40 = clap_builder::parser::error::MatchesError::unwrap("argv0", &v9);
    if v40 {
        v41 = *((v40 + 8) as &i64);
        v40 = *((v40 + 16) as &i64);
    } else {
        v41 = 0;
    }
    v10 = v5;
    v9 = v5 as i128;
    v11 = v6;
    v24 = v0;
    v25 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "null") as i8 ? 0 : 10);
    v20 = v34;
    v21 = *((v36 + 16) as &i64);
    v12 = 0;
    v13 = 8;
    v14 = 0;
    v15 = 8;
    v16 = 0;
    v22 = v41;
    v23 = v40;
    v17 = 0;
    v18 = 8;
    v19 = 0;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "ignore-signal");
    v26 = clap_builder::parser::error::MatchesError::unwrap("ignore-signal", &v1);
    if v26.field_0 as i64 {
        v1 = v26;
        loop {
            v42 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
            if !v42 {
                break;
            }
            v43 = uu_env::parse_signal_opt(&v9, *((v42 + 8) as &i64), *((v42 + 16) as &i64));
            if v43 {
                *((a0 + 8) as &unsigned long) = v43;
                *((a0 + 16) as &unsigned long) = v44;
                return a0;
            }
        }
    }
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "vars");
    v30 = clap_builder::parser::error::MatchesError::unwrap("vars", &v1);
    if v30.field_0 as i64 {
        v26 = v30;
        v45 = 0;
        loop {
            v46 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v26);
            if !v46 {
                break;
            }
            if !<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v46 + 8) as &i64), *((v46 + 16) as &i64)) as i8 {
                v1 = uu_env::parse_name_value_opt(&v9, *((v46 + 8) as &i64), *((v46 + 16) as &i64));
                v47 = v1 as i64;
                match v1 {
                    Ok(_) => {
                        v48 = *((&v1 as &char + 8) as &i64);
                        *((a0 + 8) as &unsigned long) = v47;
                        *((a0 + 16) as &unsigned long) = v48;
                        return a0;
                    },
                    Err(v45) => {
                    },
                }
                if (v45 & 1) {
                    break;
                }
            } else {
                v24 = 1;
                if (v45 & 1) {
                    break;
                }
            }
        }
        v4 = v29;
        v3 = v28;
        v2 = v27;
        v1 = v26;
        loop {
            v49 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
            if !v49 {
                break;
            }
            v50 = uu_env::parse_program_opt(&v9, *((v49 + 8) as &i64), *((v49 + 16) as &i64));
            if v50 {
                *((a0 + 8) as &unsigned long) = v50;
                *((a0 + 16) as &&i64) = &g_548840;
                return a0;
            }
        }
    }
    memcpy(a0, &v9, 160);
    return a0;
}
