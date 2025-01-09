fn uu_tail::args::FilterMode::from(a0: &struct24, a1: u32) -> u64 {
    let v0: i328;  // [sp-0xd8], Other Possible Types: struct28, Result<struct40, struct8>
    let v1: i64;  // [sp-0xd0]
    let v2: i64;  // [sp-0xc8]
    let v3: i64;  // [bp-0xc0]
    let v4: i64;  // [sp-0xb8]
    let v5: struct32;  // [sp-0xa8], Other Possible Types: i256
    let v6: i64;  // [sp-0x88]
    let v7: i64;  // [sp-0x80]
    let v8: struct32;  // [sp-0x78], Other Possible Types: i256
    let v14: i8;  // bpl
    let v15: i64;  // rax
    let v16: i64;  // rax

    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "zero-terminated") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "bytes");
    v15 = clap_builder::parser::error::MatchesError::unwrap("bytes", &v0);
    if !v15 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "lines");
        v16 = clap_builder::parser::error::MatchesError::unwrap("lines", &v0);
        if v16 {
            v5 = uu_tail::args::parse_num(*((v16 + 8) as &i64), *((v16 + 16) as &i64));
            if v5 != 3 {
                v8 = v5;
                v6 = &v8;
                v7 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
                v0 = "invalid number of lines: ";
                v1 = 1;
                v4 = 0;
                v2 = &v6;
                v3 = 1;
                core::option::Option<T>::map_or_else();
                v0 = struct28 {
                    field_0: v11
                    field_16: v12
                    field_24: 1
                };
                alloc::boxed::Box<T>::new(&v0);
            }
        }
    } else {
        v5 = uu_tail::args::parse_num(*((v15 + 8) as &i64), *((v15 + 16) as &i64));
        if v5 != 3 {
            v8 = v5;
            v6 = &v8;
            v7 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
            v0 = "invalid number of bytes: '";
            v1 = 2;
            v4 = 0;
            v2 = &v6;
            v3 = 1;
            core::option::Option<T>::map_or_else();
            v0 = struct28 {
                field_0: v9
                field_16: v10
                field_24: 1
            };
            alloc::boxed::Box<T>::new(&v0);
            return struct24 {
                field_0: 5
                field_8: v20
                field_16: &g_5bb3c8
            };
        }
    }
    return struct24 {
        field_0: v19
        field_8: v17
        field_16: v18
    };
}
