fn uu_split::strategy::Strategy::from(a0: &struct40, a1: u32, a2: u32) -> u64 {
    let v0: struct32;  // [sp-0xd8], Other Possible Types: int
    let v1: i64;  // [bp-0xc8]
    let v3: iNone;  // [sp-0xb8], Other Possible Types: struct32
    let v4: i64;  // [sp-0xa8]
    let v5: struct40;  // [sp-0x98], Other Possible Types: Result<struct40, struct8>
    let v6: i64;  // [sp-0x70]
    let v7: iNone;  // [sp-0x68]
    let v8: i64;  // [sp-0x58]
    let v9: Option<struct32>;  // [sp-0x50]
    let v11: i8;  // r13b
    let v12: i8;  // r12b
    let v13: i8;  // bpl
    let v14: i8;  // al
    let v15: i64;  // rdx
    let v16: i64;  // r8
    let v17: i64;  // r9
    let v19: i64;  // rbx
    let v20: i64;  // rax
    let v21: i64;  // rax
    let v23: i64;  // rax

    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "lines");
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "bytes");
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "line-bytes") as i32;
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "number");
    if v14 != 3 {
        if *(a2 as &i64) != 0x8000000000000000 {
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
            if v14 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
            goto LABEL_4d7525;
        } else if v11 != 2 {
            if v12 == 2 {
                if v13 == 2 {
                    return struct8 {
                        field_0: 3
                    };
                }
                if v14 == 2 {
                    return struct8 {
                        field_0: 3
                    };
                }
                uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v15, 5, v16, v17);
            } else if v13 == 2 {
                if v14 == 2 {
                    return struct8 {
                        field_0: 3
                    };
                }
                uu_split::strategy::Strategy::from::get_and_parse(a0, a1, &anon.94f0aa2b13bdb41c7ee8957331b484de.13.llvm.15137177309397333750, 10, uu_split::strategy::Strategy::LineBytes, uu_split::strategy::StrategyError::Bytes);
            } else if v14 != 2 {
                return struct24 {
                    field_0: 4
                    field_8: 6
                    field_16: 1000
                };
            } else {
                v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "number");
                v20 = clap_builder::parser::error::MatchesError::unwrap("number", &v5);
                if !v20 {
                    core::option::unwrap_failed("src/uu/split/src/strategy.rs"); /* do not return */
                }
                v9 = uu_split::strategy::NumberType::from(*((v20 + 8) as &i64), *((v20 + 16) as &i64));
                match v9 {
                    None => {
                        *(&v1 as &i64) = *((&v9 as &char + 24) as &i64);
                        v0 = *((&v9 as &char + 8) as &i128);
                    },
                    Some(_) => {
                        v5 = core::ops::function::FnOnce::call_once(&v9);
                        v23 = v5.field_0;
                        v0 = *(&v5.field_8 as &i128);
                        *(&v1 as &i64) = *((&v5.field_16 as &char + 8) as &i64);
                        if v23 != 4 {
                            v4 = v1;
                            v3 = v0;
                            return struct40 {
                                field_0: v23
                                field_8: v3
                                field_24: v4
                                field_32: v24
                            };
                        }
                    },
                }
                v4 = v1;
                v3 = v0;
                return struct32 {
                    field_0: 4
                    field_8: v3
                    field_24: v4
                };
            }
        } else {
            if v12 == 2 {
                return struct8 {
                    field_0: 3
                };
            } else if v13 == 2 {
                return struct8 {
                    field_0: 3
                };
            } else if v14 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
        }
    } else {
        if *(a2 as &i64) != 0x8000000000000000 {
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
LABEL_4d7525:
            v3 = uucore::parser::parse_size::parse_size_u64_max(*((a2 + 8) as &i64), *((a2 + 16) as &i64));
            if v3.field_0 as i32 == 3 {
                v21 = *((&v3.field_0 as &char + 8) as &i64);
            } else {
                v5 = uu_split::strategy::Strategy::from::{{closure}}(a2, &v0);
                v21 = v5.field_8;
                v7 = v5.field_16;
                v8 = v5.field_32;
                if v5.field_0 != 4 {
                    return struct40 {
                        field_0: v22
                        field_8: v21
                        field_16: v7
                        field_32: v8
                    };
                }
            }
            v19 = a0;
            v6 = v21;
            if v21 {
                *((v19 + 16) as &unsigned long) = v21;
            } else {
                <T as alloc::string::ToString>::to_string(v19 + 16, &v6);
            }
            return struct16 {
                field_0: 110680464442257309700
            };
        } else if v11 != 2 {
            if v12 == 2 {
                if v13 == 2 {
                    return struct8 {
                        field_0: 3
                    };
                }
                v15 = &anon.94f0aa2b13bdb41c7ee8957331b484de.12.llvm.15137177309397333750;
                v16 = uu_split::strategy::Strategy::Bytes;
                v17 = uu_split::strategy::StrategyError::Bytes;
                uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v15, 5, v16, v17);
            } else {
                if v13 != 2 {
                    return struct24 {
                        field_0: 4
                        field_8: 6
                        field_16: 1000
                    };
                }
                uu_split::strategy::Strategy::from::get_and_parse(a0, a1, &anon.94f0aa2b13bdb41c7ee8957331b484de.13.llvm.15137177309397333750, 10, uu_split::strategy::Strategy::LineBytes, uu_split::strategy::StrategyError::Bytes);
            }
        } else {
            if v12 == 2 {
                return struct8 {
                    field_0: 3
                };
            } else if v13 == 2 {
                return struct8 {
                    field_0: 3
                };
            }
        }
    }
    uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v15, 5, v16, v17);
}
