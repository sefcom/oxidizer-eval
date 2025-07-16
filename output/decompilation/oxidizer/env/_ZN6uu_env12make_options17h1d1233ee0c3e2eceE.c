fn uu_env::make_options(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x269]
    let v1: struct64;  // [bp-0x268]
    let v2: u128;  // [bp-0x268]
    let v3: u128;  // [bp-0x268]
    let v5: u128;  // [bp-0x258]
    let v6: u128;  // [bp-0x248]
    let v7: u128;  // [bp-0x238], Other Possible Types: struct437
    let v9: u64;  // [bp-0x218]
    let v11: void*;  // [bp-0x208]
    let v12: struct24;  // [bp-0x200]
    let v14: void*;  // [bp-0x1f0]
    let v15: Result<struct40, struct16>;  // [bp-0x1e8], Other Possible Types: u64
    let v16: Result<struct16, struct9>;  // [bp-0x1e8]
    let v18: u64;  // [bp-0x1d8]
    let v19: u64;  // [bp-0x1c0]
    let v20: void*;  // [bp-0x1b8]
    let v21: u64;  // [bp-0x1b0]
    let v22: u128;  // [bp-0x1a8]
    let v23: u64;  // [bp-0x198]
    let v24: void*;  // [bp-0x190]
    let v25: void*;  // [bp-0x188]
    let v26: u64;  // [bp-0x180]
    let v27: void*;  // [bp-0x178]
    let v28: u64;  // [bp-0x170]
    let v29: u64;  // [bp-0x168]
    let v30: struct24;  // [bp-0x160]
    let v31: struct24;  // [bp-0x158]
    let v32: u8;  // [bp-0x150]
    let v33: u8;  // [bp-0x14f]
    let v34: i64;  // [bp-0x140]
    let v35: struct64;  // [bp-0x138], Other Possible Types: u128
    let v36: u128;  // [bp-0x128]
    let v37: u128;  // [bp-0x118]
    let v38: u128;  // [bp-0x108]
    let v39: struct64;  // [bp-0xf8]
    let v40: u128;  // [bp-0xe8]
    let v41: u128;  // [bp-0xd8]
    let v42: u128;  // [bp-0xc8]
    let v43: u8;  // [bp-0xb8]
    let v44: u128;  // [bp-0xa8]
    let v45: u128;  // [bp-0x98]
    let v46: struct437;  // [bp-0x88]
    let v47: u8;  // [bp-0x78]
    let v48: u128;  // [bp-0x68]
    let v49: u128;  // [bp-0x58]
    let v50: struct437;  // [bp-0x48]
    let v52: void*;  // r13
    let v53: u8;  // bl
    let v55: u64;  // rbp
    let v56: u32;  // ecx
    let v57: struct24;  // rax
    let v58: struct24;  // rcx
    let v59: i64;  // rax
    let v60: u64;  // rax
    let v61: u64;  // rdx
    let v62: u8;  // bl
    let v63: i64;  // r13
    let v64: u64;  // rdx
    let v65: u64;  // r8
    let v66: i64;  // rax
    let v67: u64;  // rax
    let v69: u64;  // [bp-0x260]

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ignore-environment") as i8;
    v53 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "null") as i8 ? 0 : 10);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "chdir");
    clap_builder::parser::error::MatchesError::unwrap("chdir", &v16);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, a1, "file");
    v1 = clap_builder::parser::error::MatchesError::unwrap("file", &v16);
    if v1.field_0 as i64 {
        v46 = v7;
        v45 = v6;
        v44 = v5;
        memcpy(&v43, &v1, 16);
        v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v43);
    } else {
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(None, 0, v56);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v15, a1, "unset");
    v1 = clap_builder::parser::error::MatchesError::unwrap("unset", &v15);
    if v1.field_0 as i64 {
        v50 = v7;
        v49 = v6;
        v48 = v5;
        memcpy(&v47, &v1, 16);
        v12 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v47);
    } else {
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(None, 0, v56);
    }
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "argv0");
    clap_builder::parser::error::MatchesError::unwrap("argv0", &v15);
    v18 = v11;
    memcpy(&v15, &v9, 16);
    memcpy(&v15, &v12, 16);
    v19 = v14;
    v32 = v0;
    v33 = v53;
    v28 = v52;
    v29 = v55;
    v20 = 0;
    v21 = 8;
    v22 = 0;
    v23 = 8;
    v24 = 0;
    v30 = v58;
    v31 = v57;
    v25 = 0;
    v26 = 8;
    v27 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, a1, "ignore-signal");
    v35 = clap_builder::parser::error::MatchesError::unwrap("ignore-signal", &v1);
    if v35.field_0 as i64 {
        v7 = v38;
        v6 = v37;
        v5 = v36;
        v2 = v35.field_0;
        loop {
            v59 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v1);
            if !v59 {
                break;
            }
            v60 = uu_env::parse_signal_opt(&v15, *((v59 + 8) as &i64), *((v59 + 16) as &i64));
            if v60 {
                *((v34 + 8) as &u64) = v60;
                *((v34 + 16) as &u64) = v61;
                *(v34 as &i64) = 0x8000000000000000;
                return v34;
            }
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, a1, "vars");
    v39 = clap_builder::parser::error::MatchesError::unwrap("vars", &v1);
    if v39.field_0 as i64 {
        v38 = v42;
        v37 = v41;
        v36 = v40;
        memcpy(stack_base + -312, stack_base + -248, 16);
        loop {
            v63 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v35);
            if !v63 {
                break;
            }
            if <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v63 + 8) as &i64), *((v63 + 16) as &i64), v64) {
                v32 = 1;
                if (v62 & 1) {
                    break;
                }
            } else {
                v16 = uu_env::parse_name_value_opt(*((v63 + 8) as &i64), *((v63 + 16) as &i64), v65);
                if v1.field_0 as i64 {
                    *((v34 + 8) as &i64) = v1.field_0;
                    *((v34 + 16) as &u64) = v69;
                    *(v34 as &i64) = 0x8000000000000000;
                    return v34;
                }
                if (v62 & 1) {
                    break;
                }
            }
        }
        v7 = v38;
        v6 = v37;
        v5 = v36;
        v3 = v35;
        loop {
            v66 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v1);
            if !v66 {
                break;
            }
            v67 = uu_env::parse_program_opt(&v15, *((v66 + 8) as &i64), *((v66 + 16) as &i64));
            if v67 {
                *((v34 + 8) as &u64) = v67;
                *((v34 + 16) as &&u8) = &g_548840;
                *(v34 as &i64) = 0x8000000000000000;
                return v34;
            }
        }
    }
    memcpy(v34, &v15, 160);
    return v34;
}
