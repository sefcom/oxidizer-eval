fn uu_split::strategy::Strategy::from(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [bp-0xd8], Other Possible Types: struct32
    let v1: i64;  // [bp-0xc8]
    let v2: i128;  // [sp-0xb8], Other Possible Types: Result<struct32, struct16>
    let v3: i64;  // [sp-0xa8]
    let v4: i320;  // [sp-0x98], Other Possible Types: struct40, Result<struct40, struct16>
    let v5: i8;  // [bp-0x90]
    let v6: i8;  // [bp-0x88]
    let v7: i8;  // [bp-0x78]
    let v8: i64;  // [sp-0x70]
    let v9: i128;  // [sp-0x68]
    let v10: i64;  // [sp-0x58]
    let v11: i8;  // [bp-0x50]
    let v12: i8;  // [bp-0x48]
    let v13: i8;  // [bp-0x38]
    let v15: i8;  // r13b
    let v16: i8;  // r12b
    let v17: i8;  // bpl
    let v18: i8;  // al
    let v19: i64;  // rdx
    let v20: i64;  // r8
    let v21: i64;  // r9
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v25: i64;  // rcx
    let v26: i64;  // rax
    let v27: i64;  // rcx

    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "lines") as i32;
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "bytes") as i32;
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "line-bytes") as i32;
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "number") as i8;
    if v18 != 3 {
        if *(a2 as &i64) != 0x8000000000000000 {
            if v15 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
            if v16 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
            if v17 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
            if v18 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
            goto LABEL_4d75f5;
        } else if v15 != 2 {
            if v16 == 2 {
                if v17 == 2 {
                    return struct8 {
                        field_0: 3
                    };
                } else if v18 == 2 {
                    return struct8 {
                        field_0: 3
                    };
                } else {
                    uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v19, 5, v20, v21);
                    return a0;
                }
            } else {
                if v17 == 2 {
                    if v18 != 2 {
                        uu_split::strategy::Strategy::from::get_and_parse(a0, a1, &anon.9d13e420ba7f79f1a423f69e627c1176.13.llvm.7226783020046524460, 10, uu_split::strategy::Strategy::LineBytes, uu_split::strategy::StrategyError::Bytes);
                        return a0;
                    }
                    a0 = a0;
                    *(a0 as &i64) = 3;
                    return a0;
                } else {
                    if v18 == 2 {
                        v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "number");
                        v23 = clap_builder::parser::error::MatchesError::unwrap("number", &v4);
                        if !v23 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        uu_split::strategy::NumberType::from(&v11, *((v23 + 8) as &i64), *((v23 + 16) as &i64));
                        if v11 == 2 {
                            v1 = v13;
                            v0 = v12;
                        } else {
                            v4 = core::ops::function::FnOnce::call_once(&v11);
                            v26 = v4;
                            v0 = *((&v4 as &char + 8) as &i128);
                            v1 = *((&v4 as &char + 24) as &i64);
                            a0 = a0;
                            if v26 != 4 {
                                v27 = *((&v4 as &char + 32) as &i64);
                                v3 = v1;
                                v2 = v0;
                                *((a0 + 24) as &i64) = v3;
                                *((a0 + 8) as &i128) = v2;
                                *(a0 as &i64) = v26;
                                *((a0 + 32) as &i64) = v27;
                                return a0;
                            }
                        }
                        v3 = v1;
                        v2 = v0;
                        *((a0 + 24) as &i64) = v3;
                        *((a0 + 8) as &i128) = v2;
                        *(a0 as &i64) = 4;
                        return a0;
                    } else {
                        vvar_476{reg 40} = a0;
                        *((a0 + 8) as &i64) = 6;
                        *((a0 + 16) as &i64) = 1000;
                        *(a0 as &i64) = 4;
                        return a0;
                    }
                }
            }
        } else {
            if v16 == 2 {
                return struct8 {
                    field_0: 3
                };
            } else if v17 == 2 {
                return struct8 {
                    field_0: 3
                };
            } else if v18 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
        }
    } else {
        if *(a2 as &i64) != 0x8000000000000000 {
            if v15 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
            if v16 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
            if v17 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
LABEL_4d75f5:
            v2 = uucore::parser::parse_size::parse_size_u64_max(*((a2 + 8) as &i64), *((a2 + 16) as &i64));
            match v2 {
                Err(_) => {
                    v24 = *((&v2 as &char + 8) as &i64);
                },
                Ok(_) => {
                    v0 = struct32 {
                        field_0: v2
                        field_16: *((&v2 as &char + 16) as &i128)
                    };
                    uu_split::strategy::Strategy::from::{{closure}}(&v4, a2, &v0);
                    v25 = v4;
                    v24 = v5;
                    v9 = v6;
                    v10 = v7;
                    if v25 != 4 {
                        a0 = a0;
                        *((a0 + 32) as &i64) = v10;
                        *((a0 + 16) as &i128) = v9;
                        *(a0 as &i64) = v25;
                        *((a0 + 8) as &i64) = v24;
                        return a0;
                    }
                },
            }
            a0 = a0;
            v8 = v24;
            if v8 {
                *((a0 + 16) as &i64) = v8;
            } else {
                <T as alloc::string::ToString>::to_string(a0 + 16, &v8);
            }
            *(a0 as &i128) = 110680464442257309700;
            return a0;
        } else if v15 != 2 {
            if v16 == 2 {
                if v17 == 2 {
                    return struct8 {
                        field_0: 3
                    };
                }
                v19 = &anon.9d13e420ba7f79f1a423f69e627c1176.12.llvm.7226783020046524460;
                v20 = uu_split::strategy::Strategy::Bytes;
                v21 = uu_split::strategy::StrategyError::Bytes;
                a0 = a0;
                uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v19, 5, v20, v21);
                return a0;
            } else {
                if v17 == 2 {
                    uu_split::strategy::Strategy::from::get_and_parse(a0, a1, &anon.9d13e420ba7f79f1a423f69e627c1176.13.llvm.7226783020046524460, 10, uu_split::strategy::Strategy::LineBytes, uu_split::strategy::StrategyError::Bytes);
                    return a0;
                }
                a0 = a0;
                *((a0 + 8) as &i64) = 6;
                *((a0 + 16) as &i64) = 1000;
                *(a0 as &i64) = 4;
                return a0;
            }
        } else {
            if v16 == 2 {
                return struct8 {
                    field_0: 3
                };
            } else if v17 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
        }
    }
    uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v19, 5, v20, v21);
    return a0;
}
