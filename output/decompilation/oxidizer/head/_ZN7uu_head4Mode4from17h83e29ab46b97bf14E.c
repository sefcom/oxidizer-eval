fn uu_head::Mode::from(a0: i64, a1: u64) -> long long {
    let v0: struct24;  // [bp-0x88], Other Possible Types: u192
    let v1: iNone;  // [bp-0x88]
    let v2: struct48;  // [bp-0x78]
    let v3: struct32;  // [bp-0x68]
    let v4: struct32;  // [bp-0x68]
    let v5: u64;  // [bp-0x60]
    let v6: Result<struct40, struct16>;  // [bp-0x48], Other Possible Types: struct32
    let v8: i64;  // rax
    let v9: u64;  // rcx
    let v10: i64;  // rax

    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, &g_41b167);
    v8 = clap_builder::parser::error::MatchesError::unwrap(&g_41b167, &v6);
    if v8 {
        v3 = uu_head::parse::parse_num(*((v8 + 8) as &i64), *((v8 + 16) as &i64));
        if v3.field_0 as i32 == 4 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v9
                field_16: v5
            };
        }
        v6 = v4;
        v0 = uu_head::Mode::from::{{closure}}(&v6);
    } else {
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, &g_41b1e2);
        v10 = clap_builder::parser::error::MatchesError::unwrap(&g_41b1e2, &v6);
        if !v10 {
            *((a0 + 8) as &i64) = 0;
            *((a0 + 16) as &i64) = 10;
        }
        v4 = uu_head::parse::parse_num(*((v10 + 8) as &i64), *((v10 + 16) as &i64));
        if v4.field_0 as i32 == 4 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v9
                field_16: v5
            };
        }
        v6 = v3;
        v0 = uu_head::Mode::from::{{closure}}(&v6);
    }
    return struct32 {
        field_0: v1
        field_16: v2
        field_17: *((&v0 as &char + 20) as &i32)
        field_20: <UNKNOWN>
    };
}
