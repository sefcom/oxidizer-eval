fn uu_head::Mode::from(a0: &struct25, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x88]
    let v1: Option<Result<struct32, struct9>>;  // [sp-0x68]
    let v2: Option<Result<struct32, struct9>>;  // [sp-0x48], Other Possible Types: Result<struct40, struct8>
    let v4: i64;  // rax
    let v5: i64;  // rax

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "BYTES");
    v4 = clap_builder::parser::error::MatchesError::unwrap("BYTES", &v2);
    if !v4 {
        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "LINES");
        v5 = clap_builder::parser::error::MatchesError::unwrap("LINES", &v2);
        if !v5 {
            *((a0 + 8) as &i64) = 0;
            *((a0 + 16) as &i64) = 10;
        }
        v1 = uu_head::parse::parse_num(*((v5 + 8) as &i64), *((v5 + 16) as &i64));
        if v1 as i32 != 3 {
            v2 = v1;
            v0 = uu_head::Mode::from::{{closure}}(&v2);
        } else if *((&v1 as &char + 16) as &i8) {
            *((a0 + 8) as &i64) = 1;
        } else {
            *((a0 + 8) as &i64) = 0;
        }
    } else {
        v1 = uu_head::parse::parse_num(*((v4 + 8) as &i64), *((v4 + 16) as &i64));
        if v1 as i32 != 3 {
            v2 = v1;
            v0 = uu_head::Mode::from::{{closure}}(&v2);
        } else if !*((&v1 as &char + 16) as &i8) {
            *((a0 + 8) as &i64) = 2;
        } else {
            return struct24 {
                field_0: v6
                field_8: 3
                field_16: v7
            };
        }
    }
    return struct25 {
        field_0: v0 as i128
        field_16: v6 as u8
        field_17: (&v0)[17] as i32
        field_20: <UNKNOWN>
    };
}
