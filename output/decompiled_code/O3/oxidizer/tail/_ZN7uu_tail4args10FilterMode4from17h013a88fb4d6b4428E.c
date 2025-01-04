fn uu_tail::args::FilterMode::from(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0xd8], Other Possible Types: Result<struct40, struct16>
    let v1: i64;  // [sp-0xd0]
    let v2: i64;  // [sp-0xc8]
    let v3: i64;  // [bp-0xc0]
    let v4: i64;  // [sp-0xb8]
    let v5: i256;  // [sp-0xa8], Other Possible Types: struct32
    let v6: i64;  // [sp-0x88]
    let v7: i64;  // [sp-0x80]
    let v8: i256;  // [bp-0x78]
    let v9: struct24;  // [sp-0x58], Other Possible Types: i192
    let v10: struct24;  // [sp-0x40], Other Possible Types: i192
    let v12: i8;  // bpl
    let v13: i64;  // rax
    let v14: i64;  // rax
    let v15: i64;  // rcx
    let v16: i64;  // rdx
    let v17: i64;  // rax
    let v18: i64;  // rax

    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "zero-terminated") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "bytes");
    v13 = clap_builder::parser::error::MatchesError::unwrap("bytes", &v0);
    if !v13 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "lines");
        v14 = clap_builder::parser::error::MatchesError::unwrap("lines", &v0);
        if !v14 {
            v16 = (v12 ? 0 : 10);
            return struct24 {
                field_0: 0
                field_8: 10
                field_16: v16
            };
        }
        v5 = uu_tail::args::parse_num(*((v14 + 8) as &i64), *((v14 + 16) as &i64));
        if v5 != 3 {
            v8 = v5;
            v6 = &v8;
            v7 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
            v0 = "invalid number of lines: ";
            v1 = 1;
            v4 = 0;
            v2 = &v6;
            v3 = 1;
            v10 = core::option::Option<T>::map_or_else(&v0);
            v0 = v10;
            v18 = alloc::boxed::Box<T>::new(&v0);
            return struct24 {
                field_0: 5
                field_8: v18
                field_16: &g_5bb3c8
            };
        }
        v17 = *((&v5 as &char + 8) as &i64);
        v15 = *((&v5 as &char + 16) as &i64);
        v16 = (v12 ? 0 : 10);
    } else {
        v5 = uu_tail::args::parse_num(*((v13 + 8) as &i64), *((v13 + 16) as &i64));
        if v5 != 3 {
            v8 = v5;
            v6 = &v8;
            v7 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
            v0 = "invalid number of bytes: '";
            v1 = 2;
            v4 = 0;
            v2 = &v6;
            v3 = 1;
            v9 = core::option::Option<T>::map_or_else(&v0);
            v0 = v9;
            v18 = alloc::boxed::Box<T>::new(&v0);
            return struct24 {
                field_0: 5
                field_8: v18
                field_16: &g_5bb3c8
            };
        }
        v15 = *((&v5 as &char + 8) as &i64);
        v16 = *((&v5 as &char + 16) as &i64);
        v17 = 4;
    }
    return struct24 {
        field_0: v17
        field_8: v15
        field_16: v16
    };
}
