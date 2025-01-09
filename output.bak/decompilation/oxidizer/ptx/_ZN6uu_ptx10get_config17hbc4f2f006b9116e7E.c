fn uu_ptx::get_config(a0: &Result<struct96, struct16>, a1: u32) -> u64 {
    let v0: i328;  // [bp-0xb8], Other Possible Types: Result<struct40, struct8>, struct1, struct24, struct2
    let v1: i32;  // [bp-0xb7]
    let v2: i32;  // [sp-0xb4]
    let v3: i128;  // [sp-0xb0]
    let v4: i64;  // [sp-0xa8]
    let v5: i32;  // [bp-0x90]
    let v6: i32;  // [sp-0x8d]
    let v7: i64;  // [sp-0x88], Other Possible Types: Result<struct8, struct1>
    let v8: i8;  // [bp-0x80]
    let v9: struct94;  // [sp-0x78], Other Possible Types: struct24
    let v11: struct8;  // [sp-0x48]
    let v12: i64;  // [sp-0x30]
    let v13: i64;  // [sp-0x28]
    let v14: i8;  // [sp-0x20]
    let v15: i8;  // [sp-0x1f]
    let v16: i8;  // [sp-0x1e]
    let v17: i8;  // [sp-0x1d]
    let v18: i8;  // [sp-0x1c]
    let v19: i8;  // [sp-0x1b]
    let v23: i64;  // rax
    let v25: i64;  // rax
    let v26: i64;  // rax
    let v27: i64;  // rax
    let v28: i128;  // xmm0
    let v29: i64;  // rax
    let v30: i64;  // rax
    let v31: i128;  // xmm0

    v9 = <uu_ptx::Config as core::default::Default>::default();
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "traditional") as i8 {
        v3 = &g_45ec2e;
        v4 = 14;
        v0 = struct1 {
            field_0: 1
        };
        alloc::boxed::Box<T>::new(&v0);
    }
    v14 = 0;
    v19 = 1;
    v11 = alloc::str::<impl alloc::borrow::ToOwned for str>::clone_into();
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "sentence-regexp") as i8 {
        v3 = &g_45ec58;
        v4 = 2;
        v0 = struct1 {
            field_0: 1
        };
        alloc::boxed::Box<T>::new(&v0);
        return Err(struct16 {
            field_0: v22
            field_8: &g_6edc08
        });
    }
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "auto-reference") as i8;
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "references") as i8;
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "right-side-refs") as i8 & v17;
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ignore-case") as i8;
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "macro-name") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "macro-name");
        v23 = clap_builder::parser::error::MatchesError::unwrap("macro-name", &v0);
        if !v23 {
            core::option::expect_failed("parsing options failed", "src/uu/ptx/src/ptx.rs"); /* do not return */
        }
        v0 = <alloc::string::String as core::clone::Clone>::clone(v23);
        v9 = v0;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "flag-truncation") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "flag-truncation");
        v25 = clap_builder::parser::error::MatchesError::unwrap("flag-truncation", &v0);
        if !v25 {
            core::option::expect_failed("parsing options failed", "src/uu/ptx/src/ptx.rs"); /* do not return */
        }
        v0 = <alloc::string::String as core::clone::Clone>::clone(v25);
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "width") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "width");
        v26 = clap_builder::parser::error::MatchesError::unwrap("width", &v0);
        if !v26 {
            core::option::expect_failed("parsing options failed", "src/uu/ptx/src/ptx.rs"); /* do not return */
        }
        v7 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v26 + 8) as &i64), *((v26 + 16) as &i64)) as u64;
        match v7 {
            Ok(v27) => {
            },
            Err(_) => {
                v0 = core::ops::function::FnOnce::call_once(*((&v7 as &char + 1) as &i8) as u8 as u64);
                v5 = *((&v0 as &char + 1) as &i32);
                v6 = v2;
                if v0 != 3 {
                    v28 = *((&v0 as &char + 8) as &i128);
                    v2 = v6;
                    v1 = v5;
                    v0 = struct1 {
                        field_0: v0
                    };
                    v3 = v28;
                    alloc::boxed::Box<T>::new(&v0);
                    return Err(struct16 {
                        field_0: v22
                        field_8: &g_6edc08
                    });
                }
            },
        }
        v12 = v27;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "gap-size") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "gap-size");
        v29 = clap_builder::parser::error::MatchesError::unwrap("gap-size", &v0);
        if !v29 {
            core::option::expect_failed("parsing options failed", "src/uu/ptx/src/ptx.rs"); /* do not return */
        }
        v7 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v29 + 8) as &i64), *((v29 + 16) as &i64)) as u64;
        match v7 {
            Ok(v30) => {
            },
            Err(_) => {
                v0 = core::ops::function::FnOnce::call_once(*((&v7 as &char + 1) as &i8) as u8 as u64);
                v5 = *((&v0 as &char + 1) as &i32);
                v6 = v2;
                if v0 != 3 {
                    v31 = *((&v0 as &char + 8) as &i128);
                    v2 = v6;
                    v1 = v5;
                    v0 = struct1 {
                        field_0: v0
                    };
                    v3 = v31;
                    alloc::boxed::Box<T>::new(&v0);
                    return Err(struct16 {
                        field_0: v22
                        field_8: &g_6edc08
                    });
                }
            },
        }
        v13 = v30;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "format=roff") as i8 {
        v19 = 1;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "format=tex") as i8 {
        return Ok(struct96 {
            field_0: v9
            field_16: v32
            field_32: v33
            field_48: *((&v9 as &char + 48) as &i128)
            field_64: *((&v9 as &char + 64) as &i128)
            field_80: v13
            field_88: v14
            field_92: v18
            field_93: v19
            field_94: v20
        });
    }
    v19 = 2;
}
