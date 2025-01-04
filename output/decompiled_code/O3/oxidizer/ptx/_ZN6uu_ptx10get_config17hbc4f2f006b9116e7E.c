fn uu_ptx::get_config(a0: &Result<struct96, struct24>, a1: u32) -> u64 {
    let v0: i320;  // [bp-0xb8], Other Possible Types: struct1, Result<struct40, struct16>, struct2, struct24
    let v1: i32;  // [bp-0xb7]
    let v2: i32;  // [sp-0xb4]
    let v3: i64;  // [sp-0xb0]
    let v4: i64;  // [sp-0xa8]
    let v5: i32;  // [bp-0x90]
    let v6: i32;  // [sp-0x8d]
    let v7: Result<struct8, struct1>;  // [sp-0x88], Other Possible Types: i64
    let v8: i8;  // [bp-0x80]
    let v9: i128;  // [sp-0x78], Other Possible Types: struct94
    let v10: i64;  // [sp-0x68]
    let v11: i128;  // [sp-0x60]
    let v12: i64;  // [sp-0x50]
    let v13: struct8;  // [sp-0x48]
    let v14: i64;  // [sp-0x30]
    let v15: i64;  // [sp-0x28]
    let v16: i8;  // [sp-0x20]
    let v17: i8;  // [sp-0x1f]
    let v18: i8;  // [sp-0x1e]
    let v19: i8;  // [sp-0x1d]
    let v20: i8;  // [sp-0x1c]
    let v21: i8;  // [sp-0x1b]
    let v24: i64;  // rax
    let v25: i64;  // rax
    let v26: i64;  // rax
    let v27: i64;  // rax
    let v28: i64;  // rax
    let v29: i128;  // xmm0
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i128;  // xmm0
    let v33: i128;  // xmm1
    let v34: i128;  // xmm2

    v9 = <uu_ptx::Config as core::default::Default>::default();
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "traditional") as i8 {
        v3 = &g_45ec2e;
        v4 = 14;
        v0 = struct1 {
            field_0: 1
        };
        v24 = alloc::boxed::Box<T>::new(&v0);
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v24
            field_16: &g_6edc08
        };
    }
    v16 = 0;
    v21 = 1;
    v13 = alloc::str::<impl alloc::borrow::ToOwned for str>::clone_into();
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "sentence-regexp") as i8 {
        v3 = &g_45ec58;
        v4 = 2;
        v0 = struct1 {
            field_0: 1
        };
        v24 = alloc::boxed::Box<T>::new(&v0);
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v24
            field_16: &g_6edc08
        };
    }
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "auto-reference") as i8;
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "references") as i8;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "right-side-refs") as i8 & v19;
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ignore-case") as i8;
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "macro-name") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "macro-name");
        v25 = clap_builder::parser::error::MatchesError::unwrap("macro-name", &v0);
        if !v25 {
LABEL_5b664e:
            core::option::expect_failed(); /* do not return */
        }
        v0 = <alloc::string::String as core::clone::Clone>::clone(v25);
        v10 = v4;
        v9 = v0;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "flag-truncation") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "flag-truncation");
        v26 = clap_builder::parser::error::MatchesError::unwrap("flag-truncation", &v0);
        if !v26 {
            goto LABEL_5b664e;
        } else {
            v0 = <alloc::string::String as core::clone::Clone>::clone(v26);
            v12 = v4;
            v11 = v0;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "width") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "width");
        v27 = clap_builder::parser::error::MatchesError::unwrap("width", &v0);
        if !v27 {
            goto LABEL_5b664e;
        } else {
            v7 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v27 + 8) as &i64), *((v27 + 16) as &i64));
            match v7 {
                Ok(v28) => {
                },
                Err(_) => {
                    v0 = core::ops::function::FnOnce::call_once(*((&v7 as &char + 1) as &i8) as u8 as u64);
                    v5 = *((&v0 as &char + 1) as &i32);
                    v6 = v2;
                    if v0 != 3 {
                        v29 = *((&v0 as &char + 8) as &i128);
                        v2 = v6;
                        v1 = v5;
                        v0 = struct1 {
                            field_0: v0
                        };
                        v3 = v29;
                        v24 = alloc::boxed::Box<T>::new(&v0);
                        return struct24 {
                            field_0: 0x8000000000000000
                            field_8: v24
                            field_16: &g_6edc08
                        };
                    }
                },
            }
            v14 = v28;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "gap-size") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "gap-size");
        v30 = clap_builder::parser::error::MatchesError::unwrap("gap-size", &v0);
        if !v30 {
            goto LABEL_5b664e;
        } else {
            v7 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v30 + 8) as &i64), *((v30 + 16) as &i64));
            match v7 {
                Ok(v31) => {
                    goto LABEL_5b6538;
                },
                Err(_) => {
                    v0 = core::ops::function::FnOnce::call_once(*((&v7 as &char + 1) as &i8) as u8 as u64);
                    v5 = *((&v0 as &char + 1) as &i32);
                    v6 = v2;
                    if v0 != 3 {
                        v32 = *((&v0 as &char + 8) as &i128);
                        v2 = v6;
                        v1 = v5;
                        v0 = struct1 {
                            field_0: v0
                        };
                        v3 = v32;
                        v24 = alloc::boxed::Box<T>::new(&v0);
                        return struct24 {
                            field_0: 0x8000000000000000
                            field_8: v24
                            field_16: &g_6edc08
                        };
                    }
LABEL_5b6538:
                },
            }
            v15 = v31;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "format=roff") as i8 {
        v21 = 1;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "format=tex") as i8 {
        v21 = 2;
    }
    v33 = *((&v9 as &char + 16) as &i128);
    v34 = *((&v11 as &char + 8) as &i128);
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v24
        field_16: &g_6edc08
    };
}
