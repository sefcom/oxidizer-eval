fn uu_hashsum::create_algorithm_from_flags(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i320;  // [sp-0x90], Other Possible Types: Result<struct40, struct16>
    let v1: i64;  // [sp-0x88]
    let v2: i64;  // [sp-0x80]
    let v3: i64;  // [sp-0x78]
    let v4: i64;  // [sp-0x70]
    let v5: i320;  // [sp-0x68]
    let v6: i64;  // [sp-0x40]
    let v7: i8;  // [bp-0x38]
    let v10: i64;  // r8
    let v11: struct40;  // rax
    let v12: i64;  // rax
    let v14: i64;  // rsi
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // rax
    let v18: i128;  // xmm0

    v6 = 0;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "md5") as i8 {
        v0 = uucore::features::checksum::detect_algo("md5sum", 0, v10);
        if !v5 {
            return struct24 {
                field_0: 0
                field_8: v1
                field_16: v2
            };
        }
        v5 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v5);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha1") as i8 {
        v0 = uucore::features::checksum::detect_algo("sha1sum", 0, v10);
        if !v5 {
            return struct24 {
                field_0: 0
                field_8: v1
                field_16: v2
            };
        }
        v5 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v5);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha224") as i8 {
        v0 = uucore::features::checksum::detect_algo("sha224sum", 0, v10);
        if !v5 {
            return struct24 {
                field_0: 0
                field_8: v1
                field_16: v2
            };
        }
        v5 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v5);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha256") as i8 {
        v0 = uucore::features::checksum::detect_algo("sha256sum", 0, v10);
        if !v5 {
            return struct24 {
                field_0: 0
                field_8: v1
                field_16: v2
            };
        }
        v5 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v5);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha384") as i8 {
        v0 = uucore::features::checksum::detect_algo("sha384sum", 0, v10);
        if !v5 {
            return struct24 {
                field_0: 0
                field_8: v1
                field_16: v2
            };
        }
        v5 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v5);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha512") as i8 {
        v0 = uucore::features::checksum::detect_algo("sha512sum", 0, v10);
        if !v5 {
            return struct24 {
                field_0: 0
                field_8: v1
                field_16: v2
            };
        }
        v5 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v5);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "b2sum") as i8 {
        v0 = uucore::features::checksum::detect_algo("b2sum", 0, v10);
        if !v5 {
            return struct24 {
                field_0: 0
                field_8: v1
                field_16: v2
            };
        }
        v5 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v5);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "b3sum") as i8 {
        v0 = uucore::features::checksum::detect_algo("b3sum", 0, v10);
        if !v5 {
            return struct24 {
                field_0: 0
                field_8: v1
                field_16: v2
            };
        }
        v5 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v5);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "bits");
        v12 = clap_builder::parser::error::MatchesError::unwrap("bits", &v0);
        if v12 {
            v14 = 1;
        } else {
            v14 = 0;
        }
        v0 = uucore::features::checksum::create_sha3(v14, *(v12 as &i64));
        if !v5 {
            return struct24 {
                field_0: 0
                field_8: v1
                field_16: v2
            };
        }
        v5 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v5);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3-224") as i8 {
        v0 = &g_469848;
        v1 = 8;
        v2 = alloc::boxed::Box<T>::new();
        v3 = &g_73f890;
        v4 = 224;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v0);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3-256") as i8 {
        v0 = &g_469850;
        v1 = 8;
        v2 = alloc::boxed::Box<T>::new();
        v3 = &g_73f8c0;
        v4 = 0x100;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v0);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3-384") as i8 {
        v0 = &g_469200;
        v1 = 8;
        v2 = alloc::boxed::Box<T>::new();
        v3 = &g_73f8f0;
        v4 = 384;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v0);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3-512") as i8 {
        v0 = &g_4692d0;
        v1 = 8;
        v2 = alloc::boxed::Box<T>::new();
        v3 = &g_73f920;
        v4 = 0x200;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v0);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "shake128") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "bits");
        v15 = clap_builder::parser::error::MatchesError::unwrap("bits", &v0);
        if !v15 {
            v11 = alloc::boxed::Box<T>::new(6);
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
        v0 = &g_469aa0;
        v1 = 8;
        v2 = alloc::boxed::Box<T>::new();
        v3 = &g_73f9e0;
        v4 = *(v15 as &i64);
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v0);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "shake256") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "bits");
        v16 = clap_builder::parser::error::MatchesError::unwrap("bits", &v0);
        if !v16 {
            v11 = alloc::boxed::Box<T>::new(7);
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
        v0 = &g_469930;
        v1 = 8;
        v2 = alloc::boxed::Box<T>::new();
        v3 = &g_73fa10;
        v4 = *(v16 as &i64);
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v0);
        if v11 {
            return struct24 {
                field_0: 0
                field_8: v11
                field_16: &g_73f970
            };
        }
    }
    v17 = v6;
    if v17 {
        v18 = v7;
        return struct24 {
            field_0: 0
            field_8: v11
            field_16: &g_73f970
        };
    }
    v11 = alloc::boxed::Box<T>::new(14);
    return struct24 {
        field_0: 0
        field_8: v11
        field_16: &g_73f970
    };
}
