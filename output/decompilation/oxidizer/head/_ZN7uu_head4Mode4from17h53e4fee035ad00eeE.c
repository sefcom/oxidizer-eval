fn uu_head::Mode::from(a1: i64) -> : struct25 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x88]
    let v1: u8;  // [bp-0x78]
    let v2: i8;  // [bp-0x77]
    let v3: i8;  // [bp-0x74]
    let v4: struct32;  // [sp-0x68]
    let v5: struct32;  // [bp-0x68]
    let v6: Result<struct40, struct16>;  // [bp-0x48], Other Possible Types: struct32
    let v8: i64;  // rax
    let v9: i64;  // rax
    let v10: u64;  // rcx

    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "BYTES");
    v8 = clap_builder::parser::error::MatchesError::unwrap("BYTES", &v6);
    if v8 {
        v4 = uu_head::parse::parse_num(*((v8 + 8) as &i64), *((v8 + 16) as &i64));
        if v4.field_0 as i32 != 3 {
            v6 = v5;
            uu_head::Mode::from::{{closure}}(&v0, &v6);
        } else if v4.field_16 as i8 {
            *((a0 + 8) as &i64) = 3;
        } else {
            *((a0 + 8) as &i64) = 2;
        }
    } else {
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "LINES");
        v9 = clap_builder::parser::error::MatchesError::unwrap("LINES", &v6);
        if !v9 {
            *((a0 + 8) as &i64) = 0;
            *((a0 + 16) as &i64) = 10;
        }
        v4 = uu_head::parse::parse_num(*((v9 + 8) as &i64), *((v9 + 16) as &i64));
        if v4.field_0 as i32 != 3 {
            v6 = v5;
            uu_head::Mode::from::{{closure}}(&v0, &v6);
        } else if v4.field_16 as i8 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: 1
                field_16: v10
            };
        } else {
            *((a0 + 8) as &i64) = 0;
        }
    }
    return struct32 {
        field_0: v0
        field_16: v1
        field_17: *(&v3 as &i32)
        field_20: <UNKNOWN>
    };
}
