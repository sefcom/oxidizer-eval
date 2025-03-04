fn uu_realpath::prepare_relative_options(a0: &struct48, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: Result<struct40, struct8>;  // [sp-0xe8], Other Possible Types: struct24, int
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: i64;  // [sp-0xc8]
    let v4: i64;  // [sp-0xc0]
    let v5: i64;  // [sp-0xa8]
    let v6: i64;  // [sp-0xa0]
    let v7: i64;  // [sp-0x98]
    let v8: struct24;  // [sp-0x90]
    let v9: iNone;  // [sp-0x78], Other Possible Types: unsigned long, struct24
    let v10: i64;  // [sp-0x60]
    let v11: i64;  // [sp-0x58]
    let v12: i64;  // [sp-0x50]
    let v13: i64;  // [sp-0x48], Other Possible Types: struct24
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v24: i64;  // rdx

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "relative-to");
    v15 = clap_builder::parser::error::MatchesError::unwrap("relative-to", &v0);
    if !v15 {
        v13 = 0x8000000000000000;
    } else {
        v13 = core::ops::function::FnOnce::call_once(*((v15 + 8) as &i64), *((v15 + 16) as &i64));
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "relative-base");
    v16 = clap_builder::parser::error::MatchesError::unwrap("relative-base", &v0);
    if !v16 {
        *(&v9 as &i64) = 0x8000000000000000;
    } else {
        v0 = core::ops::function::FnOnce::call_once(*((v16 + 8) as &i64), *((v16 + 16) as &i64));
        v9 = v0;
    }
    v0 = v13;
    v8 = uu_realpath::canonicalize_relative_option(&v0, a2 as u64, a3 as u64);
    if v10 == 9223372036854775809 {
        return struct24 {
            field_0: 9223372036854775809
            field_8: v11
            field_16: v12
        };
    }
    v10 = v8.field_0;
    v11 = v8.field_8;
    v12 = v8.field_16;
    v0 = v9 as i192;
    v8 = uu_realpath::canonicalize_relative_option(&v0, a2 as u64, a3 as u64);
    if v5 != 9223372036854775809 {
        v5 = v8.field_0;
        v6 = v8.field_8;
        v7 = v8.field_16;
        v24 = (v5 != 0x8000000000000000 ? v6 : 0);
        v1 = v12;
        v0 = *(&v10 as &i128);
        v4 = v7;
        v2 = v5;
        v3 = v6;
        return struct48 {
            field_0: v0
            field_16: v1
            field_24: v2
            field_32: v3
            field_40: v4
        };
    }
    return struct24 {
        field_0: 9223372036854775809
        field_8: v6
        field_16: v7
    };
}
