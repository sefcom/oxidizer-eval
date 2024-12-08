fn uu_tail::args::FilterMode::from(a0: i64, a1: i64) -> u64 {
    let v0: Result<struct40, struct16>;  // [sp-0xd8], Other Possible Types: i320, struct28
    let v1: i8;  // [bp-0xa8]
    let v2: i8;  // [bp-0xa0]
    let v3: i8;  // [bp-0x98]
    let v4: i128;  // [sp-0x78]
    let v5: i128;  // [sp-0x68]
    let v6: i192;  // [sp-0x58]
    let v7: i192;  // [sp-0x40]
    let v9: i8;  // bpl
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v12: i64;  // rcx
    let v13: i64;  // rdx
    let v14: i64;  // rax
    let v15: i64;  // rax

    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "zero-terminated") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "bytes");
    v10 = clap_builder::parser::error::MatchesError::unwrap("bytes", &v0);
    if !v10 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "lines");
        v11 = clap_builder::parser::error::MatchesError::unwrap("lines", &v0);
        if !v11 {
            v13 = (v9 ? 0 : 10);
            return struct24 {
                field_0: 0
                field_8: 10
                field_16: v13
            };
        }
        uu_tail::args::parse_num(&v1, *((v11 + 8) as &i64), *((v11 + 16) as &i64));
        if v1 != 3 {
            v5 = v3;
            v4 = v1;
            v7 = format!("invalid number of lines: {:?}", &v4);
            v0 = struct28 {
                field_0: v7
                field_16: *((&v7 as &char + 16) as &i64)
                field_24: 1
            };
            v15 = alloc::boxed::Box<T>::new(&v0);
            return struct24 {
                field_0: 5
                field_8: v15
                field_16: &g_5bd388
            };
        }
        v14 = v2;
        v12 = v3;
        v13 = (v9 ? 0 : 10);
    } else {
        uu_tail::args::parse_num(&v1, *((v10 + 8) as &i64), *((v10 + 16) as &i64));
        if v1 != 3 {
            v5 = v3;
            v4 = v1;
            v6 = format!("invalid number of bytes: '{:?}'", &v4);
            v0 = struct28 {
                field_0: v6
                field_16: *((&v6 as &char + 16) as &i64)
                field_24: 1
            };
            v15 = alloc::boxed::Box<T>::new(&v0);
            return struct24 {
                field_0: 5
                field_8: v15
                field_16: &g_5bd388
            };
        }
        v12 = v2;
        v13 = v3;
        v14 = 4;
    }
    return struct24 {
        field_0: v14
        field_8: v12
        field_16: v13
    };
}
