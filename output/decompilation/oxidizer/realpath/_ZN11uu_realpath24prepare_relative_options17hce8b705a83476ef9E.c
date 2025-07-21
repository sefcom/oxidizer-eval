fn uu_realpath::prepare_relative_options(a1: i64, a2: i8) -> : struct48 {
    let a0: u64;  // rsi
    let v0: Result<struct40, struct16>;  // [bp-0xe8], Other Possible Types: struct24, u128
    let v1: u64;  // [bp-0xd8]
    let v2: u64;  // [bp-0xd0]
    let v3: u64;  // [bp-0xc8]
    let v4: u64;  // [bp-0xc0]
    let v5: i64;  // [bp-0xb0]
    let v6: u64;  // [bp-0xa8]
    let v7: u64;  // [bp-0xa0]
    let v8: u64;  // [bp-0xa0]
    let v9: u64;  // [bp-0x98]
    let v10: struct24;  // [bp-0x90]
    let v11: u64;  // [bp-0x88]
    let v12: u64;  // [bp-0x80]
    let v13: struct24;  // [bp-0x78]
    let v16: u64;  // [bp-0x60]
    let v17: u64;  // [bp-0x58]
    let v18: u64;  // [bp-0x50]
    let v19: struct24;  // [bp-0x48]
    let v20: struct24;  // [bp-0x48]
    let v22: i64;  // rax
    let v23: i64;  // rax
    let v25: u64;  // rdx

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "relative-to");
    v22 = clap_builder::parser::error::MatchesError::unwrap("relative-to", &v0);
    if v22 {
        v20 = core::ops::function::FnOnce::call_once(*((v22 + 8) as &i64), *((v22 + 16) as &i64));
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "relative-base");
    v23 = clap_builder::parser::error::MatchesError::unwrap("relative-base", &v0);
    if v23 {
        v0 = core::ops::function::FnOnce::call_once(*((v23 + 8) as &i64), *((v23 + 16) as &i64));
    }
    v0 = v19;
    v10 = uu_realpath::canonicalize_relative_option(&v0, a1, a2);
    if v10.field_0 == 9223372036854775809 {
        *((v5 + 8) as &u64) = v17;
        *((v5 + 16) as &u64) = v18;
        *(v5 as &i64) = 9223372036854775809;
    } else {
        v16 = v10.field_0;
        v17 = v11;
        v18 = v12;
        v0 = v13;
        v10 = uu_realpath::canonicalize_relative_option(&v0, a1, a2);
        if v10.field_0 == 9223372036854775809 {
            *((v5 + 8) as &u64) = v7;
            *((v5 + 16) as &u64) = v9;
            *(v5 as &i64) = 9223372036854775809;
        } else {
            v6 = v10.field_0;
            v7 = v11;
            v9 = v12;
            if v10.field_0 != 0x8000000000000000 {
                v8 = v7;
            } else {
                v8 = 0;
            }
            v25 = v8;
            if v10.field_0 == 0x8000000000000000 || !v25 || std::path::Path::starts_with(v17, v18, v25, v9) {
                v1 = v18;
                v0 = *(&v16 as &i128);
                v4 = v9;
                v2 = v6;
                v3 = v7;
                *(v5 as &i128) = *(&v16 as &i128);
                *((v5 + 32) as &u64) = v3;
                *((v5 + 40) as &u64) = v4;
                *((v5 + 16) as &u64) = v1;
                *((v5 + 24) as &u64) = v2;
                return;
            }
            *(v5 as &i64) = 0x8000000000000000;
            *((v5 + 24) as &i64) = 0x8000000000000000;
        }
    }
    return;
}
