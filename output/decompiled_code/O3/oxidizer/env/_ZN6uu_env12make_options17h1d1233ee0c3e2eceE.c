fn uu_env::make_options(a0: &Result<struct160, struct24>, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x269]
    let v1: i448;  // [sp-0x268], Other Possible Types: struct64, struct56, Result<struct16, struct9>
    let v2: i128;  // [sp-0x258]
    let v3: i128;  // [sp-0x248]
    let v4: i128;  // [sp-0x238]
    let v5: i192;  // [sp-0x218], Other Possible Types: struct24
    let v6: i64;  // [sp-0x210]
    let v7: i64;  // [sp-0x208]
    let v8: i192;  // [sp-0x200], Other Possible Types: struct24
    let v9: i64;  // [sp-0x1f8]
    let v10: i64;  // [sp-0x1f0]
    let v11: i128;  // [sp-0x1e8], Other Possible Types: Result<struct40, struct16>, struct56
    let v12: i64;  // [sp-0x1d8]
    let v13: i192;  // [bp-0x1d0]
    let v14: i64;  // [sp-0x1b8]
    let v15: i64;  // [sp-0x1b0]
    let v16: i128;  // [sp-0x1a8]
    let v17: i64;  // [sp-0x198]
    let v18: i64;  // [sp-0x190]
    let v19: i64;  // [sp-0x188]
    let v20: i64;  // [sp-0x180]
    let v21: i64;  // [sp-0x178]
    let v22: i64;  // [sp-0x170]
    let v23: i64;  // [sp-0x168]
    let v24: i64;  // [sp-0x160]
    let v25: i64;  // [sp-0x158]
    let v26: i8;  // [sp-0x150]
    let v27: i8;  // [sp-0x14f]
    let v28: i128;  // [sp-0x138], Other Possible Types: struct64
    let v29: i128;  // [sp-0x128]
    let v30: i128;  // [sp-0x118]
    let v31: i128;  // [sp-0x108]
    let v32: struct64;  // [sp-0xf8], Other Possible Types: i512
    let v33: i512;  // [bp-0xb8]
    let v34: i512;  // [bp-0x78]
    let v36: i64;  // r13
    let v38: i64;  // rax
    let v39: i64;  // rbp
    let v40: i64;  // rdx
    let v43: i64;  // rax
    let v44: i64;  // rcx
    let v45: i64;  // rsi
    let v46: i64;  // rdx
    let v47: struct8;  // rax
    let v48: i64;  // rax
    let v49: i8;  // bl
    let v50: i64;  // rsi
    let v51: i64;  // rdx
    let v52: i64;  // r13
    let v53: i64;  // rax
    let v54: i64;  // rsi
    let v55: i64;  // rdx
    let v56: i64;  // rcx
    let v57: struct8;  // rax
    let v58: i64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ignore-environment") as i8;
    v36 = 0;
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "chdir");
    v38 = clap_builder::parser::error::MatchesError::unwrap("chdir", &v11);
    if v38 {
        v36 = *((v38 + 8) as &i64);
        v39 = *((v38 + 16) as &i64);
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v1 = clap_builder::parser::error::MatchesError::unwrap("file", &v11);
    if v1 {
        v33 = v1;
        v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v33, v40);
    } else {
        v11 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(None, 0);
        v5 = *((&v11 as &char + 8) as &i64);
        v6 = v12;
        v7 = 0;
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "unset");
    v1 = clap_builder::parser::error::MatchesError::unwrap("unset", &v11);
    if v1 {
        v34 = v1;
        v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v34, v40);
    } else {
        v11 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(None, 0);
        v8 = *((&v11 as &char + 8) as &i64);
        v9 = v12;
        v10 = 0;
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "argv0");
    v43 = clap_builder::parser::error::MatchesError::unwrap("argv0", &v11);
    if v43 {
        v44 = *((v43 + 8) as &i64);
        v43 = *((v43 + 16) as &i64);
    } else {
        v44 = 0;
    }
    v12 = v7;
    v11 = v5;
    v13 = v8;
    v26 = v0;
    v27 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "null") as i8 ? 0 : 10);
    v22 = v36;
    v23 = v39;
    v14 = 0;
    v15 = 8;
    v16 = 0;
    v17 = 8;
    v18 = 0;
    v24 = v44;
    v25 = v43;
    v19 = 0;
    v20 = 8;
    v21 = 0;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "ignore-signal");
    v28 = clap_builder::parser::error::MatchesError::unwrap("ignore-signal", &v1);
    if v28 {
        v1 = v28;
        loop {
            v47 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v45, v46);
            if !v47 {
                break;
            }
            v48 = uu_env::parse_signal_opt(&v11, *((v47 + 8) as &i64), *((v47 + 16) as &i64));
            if v48 {
                return struct24 {
                    field_0: 0x8000000000000000
                    field_8: v48
                    field_16: v40
                };
            }
        }
    }
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "vars");
    v32 = clap_builder::parser::error::MatchesError::unwrap("vars", &v1);
    if v32 {
        v28 = v32;
        v49 = 0;
        loop {
            v52 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v28, v50, v51);
            if !v52 {
                break;
            }
            if !<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v52 + 8) as &i64), *((v52 + 16) as &i64)) as i8 {
                v1 = uu_env::parse_name_value_opt(&v11, *((v52 + 8) as &i64), *((v52 + 16) as &i64));
                v53 = v1;
                match v1 {
                    Ok(_) => {
                        v56 = *((&v1 as &char + 8) as &i64);
                        return struct24 {
                            field_0: 0x8000000000000000
                            field_8: v53
                            field_16: v56
                        };
                    },
                    Err(_) => {
                        v49 = *((&v1 as &char + 8) as &i8);
                    },
                }
                if (v49 & 1) {
                    break;
                }
            } else {
                v26 = 1;
                if (v49 & 1) {
                    break;
                }
            }
        }
        v4 = v31;
        v3 = v30;
        v2 = v29;
        v1 = v28;
        loop {
            v57 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v54, v55);
            if !v57 {
                break;
            }
            v58 = uu_env::parse_program_opt(&v11, *((v57 + 8) as &i64), *((v57 + 16) as &i64));
            if v58 {
                return struct24 {
                    field_0: 0x8000000000000000
                    field_8: v58
                    field_16: &g_548840
                };
            }
        }
    }
    memcpy(a0, &v11, 160);
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v53
        field_16: v56
    };
}
