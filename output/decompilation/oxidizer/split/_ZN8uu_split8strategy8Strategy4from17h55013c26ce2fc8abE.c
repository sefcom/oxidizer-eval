fn uu_split::strategy::Strategy::from(a1: i64, a2: i64) -> Result<struct40, struct32> {
    let a0: u64;  // rsi
    let v0: i64;  // [bp-0xe0]
    let v1: struct24;  // [bp-0xd8], Other Possible Types: struct32
    let v2: u128;  // [bp-0xd8]
    let v3: u64;  // [bp-0xc8]
    let v4: Result<struct32, struct16>;  // [bp-0xb8], Other Possible Types: u128
    let v5: struct32;  // [bp-0xb8]
    let v6: u64;  // [bp-0xb0]
    let v7: u64;  // [bp-0xa8]
    let v8: struct168;  // [bp-0x98], Other Possible Types: struct40, u8
    let v9: struct24;  // [bp-0x90]
    let v10: u64;  // [bp-0x78]
    let v11: u64;  // [bp-0x70]
    let v12: u128;  // [bp-0x68]
    let v13: u64;  // [bp-0x58]
    let v14: u8;  // [bp-0x50]
    let v17: u8;  // r13b
    let v18: u8;  // r12b
    let v19: u8;  // bpl
    let v20: core::result::Result<&str, core::str::error::Utf8Error>;  // al
    let v21: struct48;  // rdx
    let v22: &void*;  // r8
    let v23: &void*;  // r9
    let v24: &mut [u8];  // rcx
    let v25: i64;  // rax
    let v26: u128;  // xmm0

    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a0, "lines") as i32;
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a0, "bytes") as i32;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a0, "line-bytes") as i32;
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a0, "number") as i8;
    if v20 == 3 {
        if *(a1 as &i64) == 0x8000000000000000 {
            if v17 == 2 {
                if v18 != 2 && v19 != 2 {
                    uu_split::strategy::Strategy::from::get_and_parse(v0, a0, v21, v24, v22, v23);
                    return;
                }
            } else {
                if v18 == 2 {
                    if v19 != 2 {
                        uu_split::strategy::Strategy::from::get_and_parse(v0, a0, v21, v24, v22, v23);
                        return;
                    }
                } else {
                    if v19 == 2 {
                        uu_split::strategy::Strategy::from::get_and_parse(v0, a0, v21, v24, v22, v23);
                        return;
                    }
                    *((v0 + 8) as &i64) = 6;
                    *((v0 + 16) as &i64) = 1000;
                    *(v0 as &i64) = 4;
                    return;
                }
            }
        } else {
            if v17 != 2 && v18 != 2 && v19 != 2 {
                goto LABEL_4d7525;
            }
        }
    } else {
        if *(a1 as &i64) == 0x8000000000000000 {
            if v17 == 2 {
                if v18 != 2 && v19 != 2 && v20 != 2 {
                    uu_split::strategy::Strategy::from::get_and_parse(v0, a0, v21, v24, v22, v23);
                    return;
                }
            } else {
                if v18 == 2 {
                    if v19 != 2 && v20 != 2 {
                        uu_split::strategy::Strategy::from::get_and_parse(v0, a0, v21, v24, v22, v23);
                        return;
                    }
                } else {
                    if v19 == 2 {
                        if let Ok(_) = v20 {
                            uu_split::strategy::Strategy::from::get_and_parse(v0, a0, v21, v24, v22, v23);
                            return;
                        }
                    } else {
                        if v20 == 2 {
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, a0, "number");
                            v25 = clap_builder::parser::error::MatchesError::unwrap("number", &v8);
                            if !v25 {
                                core::option::unwrap_failed(); /* do not return */
                            }
                            uu_split::strategy::NumberType::from(*((v25 + 8) as &i64), *((v25 + 16) as &i64), a2);
                            if *(&v14 as &i32) != 2 {
                                core::ops::function::FnOnce::call_once(&v8, &v14);
                                v1 = v9;
                                if v8 != 4 {
                                    v7 = v3;
                                    v4 = v1.field_0;
                                    *((v0 + 24) as &u64) = v3;
                                    *((v0 + 8) as &u128) = v1.field_0;
                                    *(v0 as &struct168) = v8;
                                    *((v0 + 32) as &u64) = v10;
                                    return;
                                }
                            }
                            v7 = v3;
                            v4 = v2;
                            *((v0 + 24) as &u64) = v3;
                            *((v0 + 8) as &u128) = v2;
                            *(v0 as &i64) = 4;
                            return;
                        } else {
                            *((v0 + 8) as &i64) = 6;
                            *((v0 + 16) as &i64) = 1000;
                            *(v0 as &i64) = 4;
                            return;
                        }
                    }
                }
            }
        } else {
            if v17 != 2 && v18 != 2 && v19 != 2 && v20 != 2 {
LABEL_4d7525:
                v4 = uucore::parser::parse_size::parse_size_u64_max(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
                if let Ok(v1) = v4 {
                    v8 = uu_split::strategy::Strategy::from::{{closure}}(a1, &v1);
                    v12 = v8.field_16;
                    v13 = v10;
                    if v8.field_0 != 4 {
                        *((v0 + 32) as &u64) = v13;
                        *((v0 + 16) as &u128) = v12;
                        *(v0 as &u64) = v8.field_0;
                        *((v0 + 8) as &u64) = v6;
                        return;
                    }
                }
                v11 = v6;
                if v6 {
                    *((v0 + 16) as &u64) = v6;
                } else {
                    <T as alloc::string::ToString>::to_string(v0 + 16, &v11);
                }
                *(v0 as &u128) = v26;
                return;
            }
        }
    }
    *(v0 as &i64) = 3;
    return;
}
