fn uu_split::strategy::Strategy::from(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [bp-0xd8]
    let v1: i64;  // [bp-0xc8]
    let v2: i256;  // [sp-0xb8], Other Possible Types: Result<struct32, struct16>
    let v3: i64;  // [sp-0xa8]
    let v4: i320;  // [sp-0x98], Other Possible Types: struct40, Result<struct40, struct16>
    let v5: i64;  // [sp-0x70]
    let v6: i128;  // [sp-0x68]
    let v7: i64;  // [sp-0x58]
    let v8: Option<struct32>;  // [sp-0x50], Other Possible Types: i256
    let v10: i8;  // r13b
    let v11: i8;  // r12b
    let v12: i8;  // bpl
    let v13: i8;  // al
    let v14: i64;  // rdx
    let v15: i64;  // r8
    let v16: i64;  // r9
    let v18: i64;  // rax
    let v19: i64;  // rax
    let v20: i64;  // rcx
    let v21: i64;  // rax
    let v22: i64;  // rcx

    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "lines") as i32;
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "bytes") as i32;
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "line-bytes") as i32;
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "number") as i8;
    if v13 != 3 {
        if *(a2 as &i64) != 0x8000000000000000 {
            if v10 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
            if v11 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
            if v12 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
            if v13 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
            goto LABEL_4d75f5;
        } else if v10 != 2 {
            if v11 == 2 {
                if v12 == 2 {
                    return struct8 {
                        field_0: 3
                    };
                } else if v13 == 2 {
                    return struct8 {
                        field_0: 3
                    };
                } else {
                    uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v14, 5, v15, v16);
                    return a0;
                }
            } else {
                if v12 == 2 {
                    if v13 != 2 {
                        uu_split::strategy::Strategy::from::get_and_parse(a0, a1, &anon.9d13e420ba7f79f1a423f69e627c1176.13.llvm.7226783020046524460, 10, uu_split::strategy::Strategy::LineBytes, uu_split::strategy::StrategyError::Bytes);
                        return a0;
                    }
                    a0 = a0;
                    *(a0 as &i64) = 3;
                    return a0;
                } else {
                    if v13 == 2 {
                        v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "number");
                        v18 = clap_builder::parser::error::MatchesError::unwrap("number", &v4);
                        if !v18 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v8 = uu_split::strategy::NumberType::from(*((v18 + 8) as &i64), *((v18 + 16) as &i64));
                        match v8 {
                            None => {
                                v1 = *((&v8 as &char + 24) as &i64);
                                v0 = *((&v8 as &char + 8) as &i128);
                            },
                            Some(_) => {
                                v4 = core::ops::function::FnOnce::call_once(&v8);
                                v21 = v4;
                                v0 = *((&v4 as &char + 8) as &i128);
                                v1 = *((&v4 as &char + 24) as &i64);
                                a0 = a0;
                                if v21 != 4 {
                                    v22 = *((&v4 as &char + 32) as &i64);
                                    v3 = v1;
                                    v2 = v0;
                                    *((a0 + 24) as &i64) = v3;
                                    *((a0 + 8) as &i128) = v2;
                                    *(a0 as &i64) = v21;
                                    *((a0 + 32) as &i64) = v22;
                                    return a0;
                                }
                            },
                        }
                        v3 = v1;
                        v2 = v0;
                        *((a0 + 24) as &i64) = v3;
                        *((a0 + 8) as &i128) = v2;
                        *(a0 as &i64) = 4;
                        return a0;
                    } else {
                        vvar_478{reg 40} = a0;
                        *((a0 + 8) as &i64) = 6;
                        *((a0 + 16) as &i64) = 1000;
                        *(a0 as &i64) = 4;
                        return a0;
                    }
                }
            }
        } else {
            if v11 == 2 {
                return struct8 {
                    field_0: 3
                };
            } else if v12 == 2 {
                return struct8 {
                    field_0: 3
                };
            } else if v13 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
        }
    } else {
        if *(a2 as &i64) != 0x8000000000000000 {
            if v10 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
            if v11 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
            if v12 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
LABEL_4d75f5:
            v2 = uucore::parser::parse_size::parse_size_u64_max(*((a2 + 8) as &i64), *((a2 + 16) as &i64));
            match v2 {
                Err(_) => {
                    v19 = *((&v2 as &char + 8) as &i64);
                },
                Ok(_) => {
                    v0 = v2;
                    v4 = uu_split::strategy::Strategy::from::{{closure}}(a2, &v0);
                    v20 = v4;
                    v19 = *((&v4 as &char + 8) as &i64);
                    v6 = *((&v4 as &char + 16) as &i128);
                    v7 = *((&v4 as &char + 32) as &i64);
                    if v20 != 4 {
                        a0 = a0;
                        *((a0 + 32) as &i64) = v7;
                        *((a0 + 16) as &i128) = v6;
                        *(a0 as &i64) = v20;
                        *((a0 + 8) as &i64) = v19;
                        return a0;
                    }
                },
            }
            a0 = a0;
            v5 = v19;
            if v5 {
                *((a0 + 16) as &i64) = v5;
            } else {
                <T as alloc::string::ToString>::to_string(a0 + 16, &v5);
            }
            *(a0 as &i128) = 110680464442257309700;
            return a0;
        } else if v10 != 2 {
            if v11 == 2 {
                if v12 == 2 {
                    return struct8 {
                        field_0: 3
                    };
                }
                v14 = &anon.9d13e420ba7f79f1a423f69e627c1176.12.llvm.7226783020046524460;
                v15 = uu_split::strategy::Strategy::Bytes;
                v16 = uu_split::strategy::StrategyError::Bytes;
                a0 = a0;
                uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v14, 5, v15, v16);
                return a0;
            } else {
                if v12 == 2 {
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
            if v11 == 2 {
                return struct8 {
                    field_0: 3
                };
            } else if v12 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
        }
    }
    uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v14, 5, v15, v16);
    return a0;
}
