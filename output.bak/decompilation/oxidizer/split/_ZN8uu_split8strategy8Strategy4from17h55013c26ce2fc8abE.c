fn uu_split::strategy::Strategy::from(a0: &struct40, a1: u32, a2: u32) -> u64 {
    let v0: i256;  // [sp-0xd8]
    let v1: i64;  // [bp-0xc8]
    let v2: i128;  // [sp-0xb8], Other Possible Types: Result<struct32, struct8>
    let v3: i64;  // [sp-0xa8]
    let v4: i328;  // [sp-0x98], Other Possible Types: struct40, Result<struct40, struct8>
    let v5: i64;  // [sp-0x70]
    let v6: i128;  // [sp-0x68]
    let v7: i64;  // [sp-0x58]
    let v8: i256;  // [sp-0x50], Other Possible Types: Option<struct32>
    let v10: i8;  // r13b
    let v11: i8;  // r12b
    let v12: i8;  // bpl
    let v13: i8;  // al
    let v14: i64;  // rdx
    let v15: i64;  // r8
    let v16: i64;  // r9
    let v18: i64;  // rax
    let v19: i64;  // rax
    let v21: i64;  // rax

    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "lines");
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "bytes");
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "line-bytes") as i32;
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "number");
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
            goto LABEL_4d7525;
        } else if v10 != 2 {
            if v11 == 2 {
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
                uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v14, 5, v15, v16);
            } else if v12 == 2 {
                if v13 == 2 {
                    return struct8 {
                        field_0: 3
                    };
                }
                uu_split::strategy::Strategy::from::get_and_parse(a0, a1, &anon.94f0aa2b13bdb41c7ee8957331b484de.13.llvm.15137177309397333750, 10, uu_split::strategy::Strategy::LineBytes, uu_split::strategy::StrategyError::Bytes);
            } else if v13 != 2 {
                return struct24 {
                    field_0: 4
                    field_8: 6
                    field_16: 1000
                };
            } else {
                v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "number");
                v18 = clap_builder::parser::error::MatchesError::unwrap("number", &v4);
                if !v18 {
                    core::option::unwrap_failed("src/uu/split/src/strategy.rs"); /* do not return */
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
                        if v21 != 4 {
                            v3 = v1;
                            v2 = v0;
                            return struct40 {
                                field_0: v21
                                field_8: v2
                                field_24: v3
                                field_32: v22
                            };
                        }
                    },
                }
                v3 = v1;
                v2 = v0;
                return struct32 {
                    field_0: 4
                    field_8: v2
                    field_24: v3
                };
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
LABEL_4d7525:
            v2 = uucore::parser::parse_size::parse_size_u64_max(*((a2 + 8) as &i64), *((a2 + 16) as &i64));
            match v2 {
                Err(v19) => {
                },
                Ok(_) => {
                    v4 = uu_split::strategy::Strategy::from::{{closure}}(a2, &v0);
                    v19 = *((&v4 as &char + 8) as &i64);
                    v6 = *((&v4 as &char + 16) as &i128);
                    v7 = *((&v4 as &char + 32) as &i64);
                    if v4 != 4 {
                        return struct40 {
                            field_0: v20
                            field_8: v19
                            field_16: v6
                            field_32: v7
                        };
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
            return struct16 {
                field_0: 110680464442257309700
            };
        } else if v10 != 2 {
            if v11 == 2 {
                if v12 == 2 {
                    return struct8 {
                        field_0: 3
                    };
                }
                v14 = &anon.94f0aa2b13bdb41c7ee8957331b484de.12.llvm.15137177309397333750;
                v15 = uu_split::strategy::Strategy::Bytes;
                v16 = uu_split::strategy::StrategyError::Bytes;
                uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v14, 5, v15, v16);
            } else {
                if v12 != 2 {
                    return struct24 {
                        field_0: 4
                        field_8: 6
                        field_16: 1000
                    };
                }
                uu_split::strategy::Strategy::from::get_and_parse(a0, a1, &anon.94f0aa2b13bdb41c7ee8957331b484de.13.llvm.15137177309397333750, 10, uu_split::strategy::Strategy::LineBytes, uu_split::strategy::StrategyError::Bytes);
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
}
