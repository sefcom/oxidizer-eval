fn uu_hashsum::create_algorithm_from_flags(a1: i64) -> Result<struct40, struct24> {
    let a0: i64;  // rdi
    let v0: Result<struct40, struct16>;  // [bp-0x90], Other Possible Types: struct40, u64
    let v1: struct40;  // [bp-0x90]
    let v2: struct40;  // [bp-0x90]
    let v3: struct40;  // [bp-0x90]
    let v4: struct40;  // [bp-0x90]
    let v5: struct40;  // [bp-0x90]
    let v6: Result<struct40, struct16>;  // [bp-0x90]
    let v7: struct40;  // [bp-0x90]
    let v8: u64;  // [bp-0x90]
    let v10: struct40;  // [bp-0x90]
    let v11: u64;  // [bp-0x88]
    let v12: u64;  // [bp-0x80]
    let v13: struct40;  // [bp-0x68]
    let v14: void*;  // [bp-0x40]
    let v15: u128;  // [bp-0x38]
    let v16: i8;  // [bp-0x28]
    let v18: u64;  // r8
    let v19: u64;  // rax
    let v20: u64;  // rcx
    let v21: struct24;  // rax
    let v23: u64;  // rdx
    let v24: u8;  // sil

    v14 = 0;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "md5") {
        v0 = uucore::features::checksum::detect_algo("md5sum", None, v18);
        v19 = v11;
        v20 = v12;
        if !v0.field_0 {
            *((a0 + 8) as &u64) = v19;
            *((a0 + 16) as &u64) = v20;
        }
        v13 = struct40 {
            field_0: v0.field_0
            field_8: v19
            field_16: v20
            field_24: *(&v0.field_24 as &i128)
        };
        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v13);
        if v21 {
            return struct24 {
                field_0: 0
                field_8: v21
                field_16: &g_551750
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha1") {
        v10 = uucore::features::checksum::detect_algo("sha1sum", None, v18);
        v19 = v11;
        v20 = v12;
        if !v10.field_0 {
            *((a0 + 8) as &u64) = v19;
            *((a0 + 16) as &u64) = v20;
        }
        v13 = struct40 {
            field_0: v10.field_0
            field_8: v19
            field_16: v20
            field_24: *(&v10.field_24 as &i128)
        };
        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v13);
        if v21 {
            return struct24 {
                field_0: 0
                field_8: v21
                field_16: &g_551750
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha224") {
        v0 = uucore::features::checksum::detect_algo("sha224sum", None, v18);
        v19 = v11;
        v20 = v12;
        if !v0.field_0 {
            *((a0 + 8) as &u64) = v19;
            *((a0 + 16) as &u64) = v20;
        }
        v13 = struct40 {
            field_0: v0.field_0
            field_8: v19
            field_16: v20
            field_24: *(&v0.field_24 as &i128)
        };
        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v13);
        if v21 {
            return struct24 {
                field_0: 0
                field_8: v21
                field_16: &g_551750
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha256") {
        v1 = uucore::features::checksum::detect_algo("sha256sum", None, v18);
        v19 = v11;
        v20 = v12;
        if !v1.field_0 {
            *((a0 + 8) as &u64) = v19;
            *((a0 + 16) as &u64) = v20;
        }
        v13 = struct40 {
            field_0: v1.field_0
            field_8: v19
            field_16: v20
            field_24: *(&v1.field_24 as &i128)
        };
        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v13);
        if v21 {
            goto LABEL_482553;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha384") {
        v2 = uucore::features::checksum::detect_algo("sha384sum", None, v18);
        v19 = v11;
        v20 = v12;
        if !v2.field_0 {
            *((a0 + 8) as &u64) = v19;
            *((a0 + 16) as &u64) = v20;
        }
        v13 = struct40 {
            field_0: v2.field_0
            field_8: v19
            field_16: v20
            field_24: *(&v2.field_24 as &i128)
        };
        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v13);
        if !v21 {
            goto LABEL_482077;
        }
    } else {
LABEL_482077:
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha512") {
            v3 = uucore::features::checksum::detect_algo("sha512sum", None, v18);
            v19 = v11;
            v20 = v12;
            if !v3.field_0 {
                *((a0 + 8) as &u64) = v19;
                *((a0 + 16) as &u64) = v20;
            }
            v13 = struct40 {
                field_0: v3.field_0
                field_8: v19
                field_16: v20
                field_24: *(&v3.field_24 as &i128)
            };
            uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v13);
            if !v21 {
                goto LABEL_4820f2;
            }
        } else {
LABEL_4820f2:
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "b2sum") {
                v4 = uucore::features::checksum::detect_algo("b2sum", None, v18);
                v19 = v11;
                v20 = v12;
                if !v4.field_0 {
                    *((a0 + 8) as &u64) = v19;
                    *((a0 + 16) as &u64) = v20;
                }
                v13 = struct40 {
                    field_0: v4.field_0
                    field_8: v19
                    field_16: v20
                    field_24: *(&v4.field_24 as &i128)
                };
                uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v13);
                if !v21 {
                    goto LABEL_48216d;
                }
            } else {
LABEL_48216d:
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "b3sum") {
                    v5 = uucore::features::checksum::detect_algo("b3sum", None, v18);
                    v19 = v11;
                    v20 = v12;
                    if !v5.field_0 {
                        *((a0 + 8) as &u64) = v19;
                        *((a0 + 16) as &u64) = v20;
                    }
                    v13 = struct40 {
                        field_0: v5.field_0
                        field_8: v19
                        field_16: v20
                        field_24: *(&v5.field_24 as &i128)
                    };
                    uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v13);
                    if !v21 {
                        goto LABEL_4821e8;
                    }
                } else {
LABEL_4821e8:
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3") {
                        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
                        clap_builder::parser::error::MatchesError::unwrap(&v6);
                        v7 = uucore::features::checksum::create_sha3(v24, v23);
                        v19 = v11;
                        v20 = v12;
                        if !v7.field_0 {
                            *((a0 + 8) as &u64) = v19;
                            *((a0 + 16) as &u64) = v20;
                        }
                        v13 = struct40 {
                            field_0: v7.field_0
                            field_8: v19
                            field_16: v20
                            field_24: *(&v7.field_24 as &i128)
                        };
                        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v13);
                        if !v21 {
                            goto LABEL_48227d;
                        }
                    } else {
LABEL_48227d:
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3-224") {
                            v0 = struct40 {
                                field_0: "SHA3-224"
                                field_16: alloc::boxed::Box<T>::new()
                                field_24: &g_551670
                            };
                            uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v0);
                            if !v21 {
                                goto LABEL_4822e2;
                            }
                        } else {
LABEL_4822e2:
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3-256") {
                                v0 = struct40 {
                                    field_0: "SHA3-256"
                                    field_16: alloc::boxed::Box<T>::new()
                                    field_24: &g_5516a0
                                };
                                uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v0);
                                if !v21 {
                                    goto LABEL_482347;
                                }
                            } else {
LABEL_482347:
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3-384") {
                                    v0 = struct40 {
                                        field_0: "SHA3-384"
                                        field_16: alloc::boxed::Box<T>::new()
                                        field_24: &g_5516d0
                                    };
                                    uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v0);
                                    if !v21 {
                                        goto LABEL_4823ac;
                                    }
                                } else {
LABEL_4823ac:
                                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3-512") {
                                        v0 = struct40 {
                                            field_0: "SHA3-512"
                                            field_16: alloc::boxed::Box<T>::new()
                                            field_24: &g_551700
                                        };
                                        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v0);
                                        if !v21 {
                                            goto LABEL_482411;
                                        }
                                    } else {
LABEL_482411:
                                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "shake128") {
                                            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
                                            if clap_builder::parser::error::MatchesError::unwrap(&v0) {
                                                v0 = struct40 {
                                                    field_0: "SHAKE128"
                                                    field_16: alloc::boxed::Box<T>::new()
                                                    field_24: &g_5517b8
                                                };
                                                uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v0);
                                                v0 = v8;
                                                if !v21 {
                                                    goto LABEL_482498;
                                                }
                                            } else {
                                                alloc::boxed::Box<T>::new(6);
                                            }
                                        } else {
LABEL_482498:
                                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "shake256") {
                                                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
                                                if clap_builder::parser::error::MatchesError::unwrap(&v0) {
                                                    v0 = struct40 {
                                                        field_0: "SHAKE256"
                                                        field_16: alloc::boxed::Box<T>::new()
                                                        field_24: &g_5517e8
                                                    };
                                                    uu_hashsum::create_algorithm_from_flags::{{closure}}(&v14, &v0);
                                                    if !v21 {
                                                        goto LABEL_482506;
                                                    }
                                                } else {
                                                    alloc::boxed::Box<T>::new(7);
                                                }
                                            } else {
LABEL_482506:
                                                if v14 {
                                                    return Ok(struct40 {
                                                        field_0: v14
                                                        field_8: v15
                                                        field_24: *(&v16 as &i128)
                                                    });
                                                }
                                                alloc::boxed::Box<T>::new(14);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
LABEL_482553:
    return struct24 {
        field_0: 0
        field_8: v21
        field_16: &g_551750
    };
}
