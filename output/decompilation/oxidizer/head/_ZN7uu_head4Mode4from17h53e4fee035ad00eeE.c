fn uu_head::Mode::from(a0: &struct25, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x88]
    let v3: Option<Result<struct32, struct9>>;  // [sp-0x68], Other Possible Types: i256
    let v4: i256;  // [sp-0x48], Other Possible Types: Option<Result<struct32, struct9>>, Result<struct40, struct8>
    let v6: i64;  // rax
    let v7: i64;  // rax
    let v8: i64;  // rax
    let v9: i64;  // rcx

    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "BYTES");
    v6 = clap_builder::parser::error::MatchesError::unwrap("BYTES", &v4);
    if !v6 {
        v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "LINES");
        v7 = clap_builder::parser::error::MatchesError::unwrap("LINES", &v4);
        if !v7 {
            *((a0 + 8) as &i64) = 0;
            *((a0 + 16) as &i64) = 10;
            v8 = 0x8000000000000000;
        }
        v3 = uu_head::parse::parse_num(*((v7 + 8) as &i64), *((v7 + 16) as &i64));
        if v3 != 3 {
            v4 = v3;
            uu_head::Mode::from::{{closure}}(&v0, &v4);
        }
        v8 = 0x8000000000000000;
        v9 = *((&v3 as &char + 8) as &i64);
        if !*((&v3 as &char + 16) as &i8) {
            return struct24 {
                field_0: v8
                field_8: 0
                field_16: v9
            };
        }
        *((a0 + 8) as &i64) = 1;
    } else {
        v3 = uu_head::parse::parse_num(*((v6 + 8) as &i64), *((v6 + 16) as &i64));
        if v3 != 3 {
            v4 = v3;
            uu_head::Mode::from::{{closure}}(&v0, &v4);
            return struct25 {
                field_0: v0
                field_16: v8 as i8
                field_17: v1
                field_20: <UNKNOWN>
            };
        }
        v8 = 0x8000000000000000;
        v9 = *((&v3 as &char + 8) as &i64);
        if *((&v3 as &char + 16) as &i8) {
            *((a0 + 8) as &i64) = 3;
        }
        *((a0 + 8) as &i64) = 2;
    }
}
