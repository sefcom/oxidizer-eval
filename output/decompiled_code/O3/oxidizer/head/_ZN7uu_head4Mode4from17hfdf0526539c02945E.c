fn uu_head::Mode::from(a0: i64, a1: i64) -> u64 {
    let v0: i8;  // [bp-0x88]
    let v1: i8;  // [bp-0x78]
    let v4: Option<Result<struct32, struct17>>;  // [sp-0x68], Other Possible Types: i256
    let v5: struct32;  // [sp-0x48], Other Possible Types: i320, Result<struct40, struct16>
    let v7: i64;  // rax
    let v8: i64;  // rax
    let v9: i64;  // rax
    let v10: i64;  // rcx

    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "BYTES");
    v7 = clap_builder::parser::error::MatchesError::unwrap("BYTES", &v5);
    if !v7 {
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "LINES");
        v8 = clap_builder::parser::error::MatchesError::unwrap("LINES", &v5);
        if !v8 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: 0
                field_16: 10
            };
        }
        v4 = uu_head::parse::parse_num(*((v8 + 8) as &i64), *((v8 + 16) as &i64));
        if v4 != 3 {
            v5 = struct32 {
                field_0: v4
                field_16: *((&v4 as &char + 16) as &i128)
            };
            uu_head::Mode::from::{{closure}}(&v0, &v5);
            vvar_198{reg 16} = v1;
            return struct25 {
                field_0: v0
                field_16: v9 as i8
                field_17: v2
                field_20: <UNKNOWN>
            };
        }
        v9 = 0x8000000000000000;
        v10 = *((&v4 as &char + 8) as &i64);
        if *((&v4 as &char + 16) as &i8) {
            *((a0 + 8) as &i64) = 1;
        } else {
            *((a0 + 8) as &i64) = 0;
        }
    } else {
        v4 = uu_head::parse::parse_num(*((v7 + 8) as &i64), *((v7 + 16) as &i64));
        if v4 != 3 {
            v5 = struct32 {
                field_0: v4
                field_16: *((&v4 as &char + 16) as &i128)
            };
            uu_head::Mode::from::{{closure}}(&v0, &v5);
            v9 = v1;
            return struct25 {
                field_0: v0
                field_16: v9 as i8
                field_17: v2
                field_20: <UNKNOWN>
            };
        }
        v9 = 0x8000000000000000;
        v10 = *((&v4 as &char + 8) as &i64);
        if !*((&v4 as &char + 16) as &i8) {
            *((a0 + 8) as &i64) = 2;
        } else {
            *((a0 + 8) as &i64) = 3;
        }
    }
    return struct16 {
        field_0: v9
        field_16: <UNKNOWN>
    };
}
