fn uu_tail::args::FilterMode::from(a0: &struct24, a1: u32) -> u64 {
    let v0: i224;  // [sp-0xd8], Other Possible Types: Result<struct40, struct8>, struct28
    let v1: i64;  // [bp-0xc0]
    let v2: i64;  // [sp-0xb8]
    let v3: struct32;  // [sp-0xa8], Other Possible Types: i256
    let v4: i64;  // [sp-0x88]
    let v5: i64;  // [sp-0x80]
    let v6: struct32;  // [sp-0x78], Other Possible Types: i256
    let v7: i8;  // [bp-0x58]
    let v8: i8;  // [bp-0x40]
    let v10: i8;  // bpl
    let v11: i64;  // rax
    let v12: i64;  // rax

    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "zero-terminated") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "bytes");
    v11 = clap_builder::parser::error::MatchesError::unwrap("bytes", &v0);
    if !v11 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "lines");
        v12 = clap_builder::parser::error::MatchesError::unwrap("lines", &v0);
        if v12 {
            v3 = uu_tail::args::parse_num(*((v12 + 8) as &i64), *((v12 + 16) as &i64));
            if v3 != 3 {
                v6 = v3;
                v4 = &v6;
                v5 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
                v0 = struct28 {
                    field_0: "invalid number of lines: "
                    field_16: &v4
                    field_24: <UNKNOWN>
                };
                v2 = 0;
                v1 = 1;
                core::option::Option<T>::map_or_else();
                v0 = v8;
                alloc::boxed::Box<T>::new(&v0);
            }
        }
    } else {
        v3 = uu_tail::args::parse_num(*((v11 + 8) as &i64), *((v11 + 16) as &i64));
        if v3 != 3 {
            v6 = v3;
            v4 = &v6;
            v5 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
            v0 = struct28 {
                field_0: "invalid number of bytes: '"
                field_16: &v4
                field_24: <UNKNOWN>
            };
            v2 = 0;
            v1 = 1;
            core::option::Option<T>::map_or_else();
            v0 = v7;
            alloc::boxed::Box<T>::new(&v0);
        }
    }
    return struct24 {
        field_0: v15
        field_8: v13
        field_16: v14
    };
}
