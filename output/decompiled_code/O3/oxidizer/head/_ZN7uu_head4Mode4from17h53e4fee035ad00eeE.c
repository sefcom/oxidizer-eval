fn uu_head::Mode::from(a0: i64, a1: i64) -> u64 {
    let v0: struct24;  // [sp-0x88], Other Possible Types: i192
    let v1: i256;  // [sp-0x68], Other Possible Types: Option<Result<struct32, struct17>>
    let v2: i256;  // [sp-0x48], Other Possible Types: Result<struct40, struct16>
    let v4: i64;  // rax
    let v5: i64;  // rax
    let v6: i64;  // rax
    let v7: i64;  // rcx

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "BYTES");
    v4 = clap_builder::parser::error::MatchesError::unwrap("BYTES", &v2);
    if !v4 {
        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "LINES");
        v5 = clap_builder::parser::error::MatchesError::unwrap("LINES", &v2);
        if !v5 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: 0
                field_16: 10
            };
        }
        v1 = uu_head::parse::parse_num(*((v5 + 8) as &i64), *((v5 + 16) as &i64));
        if v1 != 3 {
            v2 = v1;
            v0 = uu_head::Mode::from::{{closure}}(&v2);
            vvar_200{reg 16} = *((&v0 as &char + 16) as &i8);
            return struct25 {
                field_0: v0
                field_16: v6 as i8
                field_17: *((&v0 as &char + 17) as &i32)
                field_20: <UNKNOWN>
            };
        }
        v6 = 0x8000000000000000;
        v7 = *((&v1 as &char + 8) as &i64);
        if *((&v1 as &char + 16) as &i8) {
            *((a0 + 8) as &i64) = 1;
        } else {
            *((a0 + 8) as &i64) = 0;
        }
    } else {
        v1 = uu_head::parse::parse_num(*((v4 + 8) as &i64), *((v4 + 16) as &i64));
        if v1 != 3 {
            v2 = v1;
            v0 = uu_head::Mode::from::{{closure}}(&v2);
            v6 = *((&v0 as &char + 16) as &i8);
            return struct25 {
                field_0: v0
                field_16: v6 as i8
                field_17: *((&v0 as &char + 17) as &i32)
                field_20: <UNKNOWN>
            };
        }
        v6 = 0x8000000000000000;
        v7 = *((&v1 as &char + 8) as &i64);
        if !*((&v1 as &char + 16) as &i8) {
            *((a0 + 8) as &i64) = 2;
        } else {
            *((a0 + 8) as &i64) = 3;
        }
    }
    return struct16 {
        field_0: v6
        field_16: <UNKNOWN>
    };
}
