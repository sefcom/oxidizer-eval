fn uu_hashsum::create_algorithm_from_flags(a1: i64) -> Result<struct40, struct24> {
    let a0: u64;  // rsi
    let v0: Result<struct40, struct16>;  // [bp-0x90], Other Possible Types: struct40
    let v1: struct40;  // [bp-0x90]
    let v2: u64;  // [bp-0x90]
    let v3: u64;  // [bp-0x90]
    let v4: u64;  // [bp-0x88]
    let v5: u64;  // [bp-0x80]
    let v6: i8;  // [bp-0x78], Other Possible Types: u64
    let v7: struct40;  // [bp-0x68]
    let v8: struct64;  // [bp-0x40]
    let v9: u128;  // [bp-0x38]
    let v10: i8;  // [bp-0x28]
    let v12: u32;  // r8
    let v13: u64;  // r9
    let v14: core::fmt::Arguments;  // rax
    let v15: core::fmt::rt::Argument;  // rcx
    let v16: core::fmt::rt::Argument;  // rax
    let v18: u64;  // rdx
    let v19: core::fmt::rt::Argument;  // rsi
    let v20: i64;  // rax
    let v21: i64;  // rax
    let v22: i64;  // rdi
    let v23: i64;  // rdi

    v8 = 0;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "md5") as i8 {
        uucore::features::checksum::detect_algo("md5sum", 0, v12, v13);
        v14 = v4;
        v15 = v5;
        if !v3 {
            *((v23 + 8) as &core::fmt::Arguments) = v14;
            *((v23 + 16) as &core::fmt::rt::Argument) = v15;
            *(v23 as &i64) = 0;
            return;
        }
        v7 = struct40 {
            field_0: v3
            field_8: v14
            field_16: v15
            field_24: *(&v6 as &i128)
        };
        v7 = struct40 {
            field_0: v3
            field_8: v14
            field_16: v15
            field_24: *(&v6 as &i128)
        };
        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v7);
        if v16 {
            *((v23 + 8) as &core::fmt::rt::Argument) = v16;
            *((v23 + 16) as &&core::fmt::rt::ArgumentType) = &g_73ea00.ty;
            *(v23 as &i64) = 0;
            return;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "sha1") as i8 {
        uucore::features::checksum::detect_algo("sha1sum", 0, v12, v13);
        v14 = v4;
        v15 = v5;
        if !v3 {
            *((v23 + 8) as &core::fmt::Arguments) = v14;
            *((v23 + 16) as &core::fmt::rt::Argument) = v15;
            *(v23 as &i64) = 0;
            return;
        }
        v7 = struct40 {
            field_0: v3
            field_8: v14
            field_16: v15
            field_24: *(&v6 as &i128)
        };
        v7 = struct40 {
            field_0: v3
            field_8: v14
            field_16: v15
            field_24: *(&v6 as &i128)
        };
        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v7);
        if v16 {
            *((v23 + 8) as &core::fmt::rt::Argument) = v16;
            *((v23 + 16) as &&core::fmt::rt::ArgumentType) = &g_73ea00.ty;
            *(v23 as &i64) = 0;
            return;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "sha224") as i8 {
        uucore::features::checksum::detect_algo("sha224sum", 0, v12, v13);
        v14 = v4;
        v15 = v5;
        if !v3 {
            *((v23 + 8) as &core::fmt::Arguments) = v14;
            *((v23 + 16) as &core::fmt::rt::Argument) = v15;
            *(v23 as &i64) = 0;
            return;
        }
        v7 = struct40 {
            field_0: v3
            field_8: v14
            field_16: v15
            field_24: *(&v6 as &i128)
        };
        v7 = struct40 {
            field_0: v3
            field_8: v14
            field_16: v15
            field_24: *(&v6 as &i128)
        };
        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v7);
        if !(!v16) {
            goto LABEL_5da877;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "sha256") as i8 {
        uucore::features::checksum::detect_algo("sha256sum", 0, v12, v13);
        v14 = v4;
        v15 = v5;
        if !v3 {
            *((v23 + 8) as &core::fmt::Arguments) = v14;
            *((v23 + 16) as &core::fmt::rt::Argument) = v15;
            *(v23 as &i64) = 0;
            return;
        }
        v7 = struct40 {
            field_0: v3
            field_8: v14
            field_16: v15
            field_24: *(&v6 as &i128)
        };
        v7 = struct40 {
            field_0: v3
            field_8: v14
            field_16: v15
            field_24: *(&v6 as &i128)
        };
        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v7);
        if !v16 {
            goto LABEL_5da2cc;
        }
    } else {
LABEL_5da2cc:
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "sha384") as i8 {
            uucore::features::checksum::detect_algo("sha384sum", 0, v12, v13);
            v14 = v4;
            v15 = v5;
            if !v3 {
                *((v23 + 8) as &core::fmt::Arguments) = v14;
                *((v23 + 16) as &core::fmt::rt::Argument) = v15;
                *(v23 as &i64) = 0;
                return;
            }
            v7 = struct40 {
                field_0: v3
                field_8: v14
                field_16: v15
                field_24: *(&v6 as &i128)
            };
            v7 = struct40 {
                field_0: v3
                field_8: v14
                field_16: v15
                field_24: *(&v6 as &i128)
            };
            uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v7);
            if !v16 {
                goto LABEL_5da347;
            }
        } else {
LABEL_5da347:
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "sha512") as i8 {
                uucore::features::checksum::detect_algo("sha512sum", 0, v12, v13);
                v14 = v4;
                v15 = v5;
                if !v3 {
                    *((v23 + 8) as &core::fmt::Arguments) = v14;
                    *((v23 + 16) as &core::fmt::rt::Argument) = v15;
                    *(v23 as &i64) = 0;
                    return;
                }
                v7 = struct40 {
                    field_0: v3
                    field_8: v14
                    field_16: v15
                    field_24: *(&v6 as &i128)
                };
                v7 = struct40 {
                    field_0: v3
                    field_8: v14
                    field_16: v15
                    field_24: *(&v6 as &i128)
                };
                uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v7);
                if !v16 {
                    goto LABEL_5da3c2;
                }
            } else {
LABEL_5da3c2:
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "b2sum") as i8 {
                    uucore::features::checksum::detect_algo("b2sum", 0, v12, v13);
                    v14 = v4;
                    v15 = v5;
                    if !v3 {
                        *((v23 + 8) as &core::fmt::Arguments) = v14;
                        *((v23 + 16) as &core::fmt::rt::Argument) = v15;
                        *(v23 as &i64) = 0;
                        return;
                    }
                    v7 = struct40 {
                        field_0: v3
                        field_8: v14
                        field_16: v15
                        field_24: *(&v6 as &i128)
                    };
                    v7 = struct40 {
                        field_0: v3
                        field_8: v14
                        field_16: v15
                        field_24: *(&v6 as &i128)
                    };
                    uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v7);
                    if !v16 {
                        goto LABEL_5da43d;
                    }
                } else {
LABEL_5da43d:
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "b3sum") as i8 {
                        uucore::features::checksum::detect_algo("b3sum", 0, v12, v13);
                        v14 = v4;
                        v15 = v5;
                        if !v3 {
                            *((v23 + 8) as &core::fmt::Arguments) = v14;
                            *((v23 + 16) as &core::fmt::rt::Argument) = v15;
                            *(v23 as &i64) = 0;
                            return;
                        }
                        v7 = struct40 {
                            field_0: v3
                            field_8: v14
                            field_16: v15
                            field_24: *(&v6 as &i128)
                        };
                        v7 = struct40 {
                            field_0: v3
                            field_8: v14
                            field_16: v15
                            field_24: *(&v6 as &i128)
                        };
                        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v7);
                        if !v16 {
                            goto LABEL_5da4b8;
                        }
                    } else {
LABEL_5da4b8:
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "sha3") as i8 {
                            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "bits");
                            clap_builder::parser::error::MatchesError::unwrap("bits", &v0);
                            v1 = uucore::features::checksum::create_sha3(v19, v18);
                            v14 = v4;
                            v15 = v5;
                            if !v1.field_0 {
                                *((v23 + 8) as &core::fmt::Arguments) = v14;
                                *((v23 + 16) as &core::fmt::rt::Argument) = v15;
                                *(v23 as &i64) = 0;
                                return;
                            }
                            v7 = struct40 {
                                field_0: v1.field_0
                                field_8: v14
                                field_16: v15
                                field_24: v1.field_24
                            };
                            v7 = struct40 {
                                field_0: v1.field_0
                                field_8: v14
                                field_16: v15
                                field_24: v1.field_24
                            };
                            uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v7);
                            if !v16 {
                                goto LABEL_5da569;
                            }
                        } else {
LABEL_5da569:
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "sha3-224") as i8 {
                                v0 = struct40 {
                                    field_0: &g_4696d0
                                    field_8: 8
                                    field_16: alloc::boxed::Box<T>::new()
                                    field_24: &g_73e920
                                    field_32: 224
                                };
                                v0 = struct40 {
                                    field_0: &g_4696d0
                                    field_8: 8
                                    field_16: alloc::boxed::Box<T>::new()
                                    field_24: &g_73e920
                                };
                                uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v0);
                                if !v16 {
                                    goto LABEL_5da5ce;
                                }
                            } else {
LABEL_5da5ce:
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "sha3-256") as i8 {
                                    v0 = struct40 {
                                        field_0: &g_4696d8
                                        field_8: 8
                                        field_16: alloc::boxed::Box<T>::new()
                                        field_24: &g_73e950
                                        field_32: 0x100
                                    };
                                    v0 = struct40 {
                                        field_0: &g_4696d8
                                        field_8: 8
                                        field_16: alloc::boxed::Box<T>::new()
                                        field_24: &g_73e950
                                    };
                                    uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v0);
                                    if !v16 {
                                        goto LABEL_5da633;
                                    }
                                } else {
LABEL_5da633:
                                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "sha3-384") as i8 {
                                        v0 = struct40 {
                                            field_0: &g_469088
                                            field_8: 8
                                            field_16: alloc::boxed::Box<T>::new()
                                            field_24: &g_73e980
                                            field_32: 384
                                        };
                                        v0 = struct40 {
                                            field_0: &g_469088
                                            field_8: 8
                                            field_16: alloc::boxed::Box<T>::new()
                                            field_24: &g_73e980
                                        };
                                        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v0);
                                        if !v16 {
                                            goto LABEL_5da698;
                                        }
                                    } else {
LABEL_5da698:
                                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "sha3-512") as i8 {
                                            v0 = struct40 {
                                                field_0: &g_469158
                                                field_8: 8
                                                field_16: alloc::boxed::Box<T>::new()
                                                field_24: &g_73e9b0
                                                field_32: 0x200
                                            };
                                            v0 = struct40 {
                                                field_0: &g_469158
                                                field_8: 8
                                                field_16: alloc::boxed::Box<T>::new()
                                                field_24: &g_73e9b0
                                            };
                                            uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v0);
                                            if !v16 {
                                                goto LABEL_5da6fd;
                                            }
                                        } else {
LABEL_5da6fd:
                                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "shake128") as i8 {
                                                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "bits");
                                                v20 = clap_builder::parser::error::MatchesError::unwrap("bits", &v0);
                                                if v20 {
                                                    v0 = struct40 {
                                                        field_0: &g_469928
                                                        field_8: 8
                                                        field_16: alloc::boxed::Box<T>::new()
                                                        field_24: &g_73ea70
                                                        field_32: *(v20 as &i64)
                                                    };
                                                    v0 = struct40 {
                                                        field_0: &g_469928
                                                        field_8: 8
                                                        field_16: alloc::boxed::Box<T>::new()
                                                        field_24: &g_73ea70
                                                    };
                                                    uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v0);
                                                    v0 = v2;
                                                    if !v16 {
                                                        goto LABEL_5da7a0;
                                                    }
                                                } else {
                                                    alloc::boxed::Box<T>::new(6);
                                                }
                                            } else {
LABEL_5da7a0:
                                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "shake256") as i8 {
                                                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "bits");
                                                    v21 = clap_builder::parser::error::MatchesError::unwrap("bits", &v0);
                                                    if v21 {
                                                        v0 = struct40 {
                                                            field_0: &g_4697b8
                                                            field_8: 8
                                                            field_16: alloc::boxed::Box<T>::new()
                                                            field_24: &g_73eaa0
                                                            field_32: *(v21 as &i64)
                                                        };
                                                        v0 = struct40 {
                                                            field_0: &g_4697b8
                                                            field_8: 8
                                                            field_16: alloc::boxed::Box<T>::new()
                                                            field_24: &g_73eaa0
                                                        };
                                                        uu_hashsum::create_algorithm_from_flags::{{closure}}(&v8, &v0);
                                                        if !v16 {
                                                            goto LABEL_5da82a;
                                                        }
                                                    } else {
                                                        alloc::boxed::Box<T>::new(7);
                                                    }
                                                } else {
LABEL_5da82a:
                                                    if v8 {
                                                        *((v22 + 24) as &i128) = *(&v10 as &i128);
                                                        *((v22 + 8) as &u128) = v9;
                                                        *(v22 as &struct64) = v8;
                                                        return;
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
    }
LABEL_5da877:
    *((v23 + 8) as &core::fmt::rt::Argument) = v16;
    *((v23 + 16) as &&core::fmt::rt::ArgumentType) = &g_73ea00.ty;
    *(v23 as &i64) = 0;
    return;
}
