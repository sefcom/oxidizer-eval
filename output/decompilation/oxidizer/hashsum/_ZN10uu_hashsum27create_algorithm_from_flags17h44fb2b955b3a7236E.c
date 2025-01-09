fn uu_hashsum::create_algorithm_from_flags(a0: &struct40, a1: u32) -> u64 {
    let v0: Result<struct40, struct8>;  // [sp-0x90], Other Possible Types: struct40, i320
    let v2: i64;  // [sp-0x80]
    let v3: i320;  // [sp-0x68], Other Possible Types: Result<struct16, struct32>
    let v4: i64;  // [sp-0x40]
    let v8: i64;  // r8
    let v9: i64;  // rax
    let v10: i64;  // rcx
    let v11: struct40;  // rax
    let v12: i64;  // rax
    let v14: i64;  // rsi

    v4 = 0;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "md5") as i8 {
        v0 = uucore::features::checksum::detect_algo("md5sum", 0, v8);
        if !v3 {
            *((a0 + 8) as &i64) = v9;
            *((a0 + 16) as &i64) = v10;
        }
        v3 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v3);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha1") as i8 {
        v0 = uucore::features::checksum::detect_algo("sha1sum", 0, v8);
        if !v3 {
            *((a0 + 8) as &i64) = v9;
            *((a0 + 16) as &i64) = v10;
        }
        v3 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v3);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha224") as i8 {
        v0 = uucore::features::checksum::detect_algo("sha224sum", 0, v8);
        if !v3 {
            *((a0 + 8) as &i64) = v9;
            *((a0 + 16) as &i64) = v10;
        }
        v3 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v3);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha256") as i8 {
        v0 = uucore::features::checksum::detect_algo("sha256sum", 0, v8);
        if !v3 {
            *((a0 + 8) as &i64) = v9;
            *((a0 + 16) as &i64) = v10;
        }
        v3 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v3);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha384") as i8 {
        v0 = uucore::features::checksum::detect_algo("sha384sum", 0, v8);
        if !v3 {
            *((a0 + 8) as &i64) = v9;
            *((a0 + 16) as &i64) = v10;
        }
        v3 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v3);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha512") as i8 {
        v0 = uucore::features::checksum::detect_algo("sha512sum", 0, v8);
        if !v3 {
            *((a0 + 8) as &i64) = v9;
            *((a0 + 16) as &i64) = v10;
        }
        v3 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v3);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "b2sum") as i8 {
        v0 = uucore::features::checksum::detect_algo("b2sum", 0, v8);
        if !v3 {
            *((a0 + 8) as &i64) = v9;
            *((a0 + 16) as &i64) = v10;
        }
        v3 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v3);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "b3sum") as i8 {
        v0 = uucore::features::checksum::detect_algo("b3sum", 0, v8);
        if !v3 {
            *((a0 + 8) as &i64) = v9;
            *((a0 + 16) as &i64) = v10;
        }
        v3 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v3);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
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
        if !v3 {
            *((a0 + 8) as &i64) = v9;
            *((a0 + 16) as &i64) = v10;
        }
        v3 = v0;
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v3);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3-224") as i8 {
        *(&v0.field_0 as &struct40) = struct40 {
            field_0: &g_4696d0
            field_8: 8
            field_16: v2
            field_24: &g_73e920
            field_32: 224
        };
        v2 = alloc::boxed::Box<T>::new();
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v0);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3-256") as i8 {
        *(&v0.field_0 as &struct40) = struct40 {
            field_0: &g_4696d8
            field_8: 8
            field_16: v2
            field_24: &g_73e950
            field_32: 0x100
        };
        v2 = alloc::boxed::Box<T>::new();
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v0);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3-384") as i8 {
        *(&v0.field_0 as &struct40) = struct40 {
            field_0: &g_469088
            field_8: 8
            field_16: v2
            field_24: &g_73e980
            field_32: 384
        };
        v2 = alloc::boxed::Box<T>::new();
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v0);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sha3-512") as i8 {
        *(&v0.field_0 as &struct40) = struct40 {
            field_0: &g_469158
            field_8: 8
            field_16: v2
            field_24: &g_73e9b0
            field_32: 0x200
        };
        v2 = alloc::boxed::Box<T>::new();
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v0);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "shake128") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "bits");
        if !clap_builder::parser::error::MatchesError::unwrap("bits", &v0) {
            v11 = alloc::boxed::Box<T>::new(6);
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
        *(&v0.field_0 as &struct40) = struct40 {
            field_0: &g_469928
            field_8: 8
            field_16: v2
            field_24: &g_73ea70
            field_32: *(v15 as &i64)
        };
        v2 = alloc::boxed::Box<T>::new();
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v0);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "shake256") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "bits");
        if !clap_builder::parser::error::MatchesError::unwrap("bits", &v0) {
            v11 = alloc::boxed::Box<T>::new(7);
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
        *(&v0.field_0 as &struct40) = struct40 {
            field_0: &g_4697b8
            field_8: 8
            field_16: v2
            field_24: &g_73eaa0
            field_32: *(v16 as &i64)
        };
        v2 = alloc::boxed::Box<T>::new();
        v11 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v0);
        if v11 {
            *((a0 + 8) as &struct40) = v11;
            *((a0 + 16) as &&i64) = &g_73ea00;
        }
    }
    if v4 {
        return struct40 {
            field_0: v17
            field_8: v18
            field_24: v6
        };
    }
    v11 = alloc::boxed::Box<T>::new(14);
    *((a0 + 8) as &struct40) = v11;
    *((a0 + 16) as &&i64) = &g_73ea00;
}
