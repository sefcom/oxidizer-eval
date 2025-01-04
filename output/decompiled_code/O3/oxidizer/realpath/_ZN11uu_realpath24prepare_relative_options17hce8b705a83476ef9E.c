fn uu_realpath::prepare_relative_options(a0: &Result<struct48, struct24>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i320;  // [sp-0xe8], Other Possible Types: Result<struct40, struct16>, struct24
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: i64;  // [sp-0xc8]
    let v4: i64;  // [sp-0xc0]
    let v5: i64;  // [sp-0xa8]
    let v6: i64;  // [sp-0xa0]
    let v7: i64;  // [sp-0x98]
    let v8: struct24;  // [sp-0x90], Other Possible Types: i192
    let v9: i192;  // [bp-0x78]
    let v10: i64;  // [sp-0x60]
    let v11: i64;  // [sp-0x58]
    let v12: i64;  // [sp-0x50]
    let v13: i192;  // [sp-0x48], Other Possible Types: struct24
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // r13
    let v18: i64;  // r14
    let v19: i64;  // r15
    let v20: i64;  // r12
    let v21: i64;  // rsi
    let v22: i64;  // rax
    let v23: i64;  // rcx
    let v25: i64;  // rdx

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
        v9 = 0x8000000000000000;
    } else {
        v0 = core::ops::function::FnOnce::call_once(*((v16 + 8) as &i64), *((v16 + 16) as &i64));
        v9 = v0;
    }
    v0 = v13;
    v8 = uu_realpath::canonicalize_relative_option(&v0, a2, a3);
    v17 = v8;
    v18 = *((&v8 as &char + 8) as &i64);
    v19 = *((&v8 as &char + 16) as &i64);
    if v10 == 9223372036854775809 {
        v20 = a0;
        *((v20 + 8) as &i64) = v11;
        *((v20 + 16) as &i64) = v12;
        *(v20 as &i64) = 9223372036854775809;
    } else {
        v10 = v17;
        v11 = v18;
        v12 = v19;
        v0 = v9;
        v8 = uu_realpath::canonicalize_relative_option(&v0, a2, a3);
        v20 = a0;
        v21 = v8;
        v22 = *((&v8 as &char + 8) as &i64);
        v23 = *((&v8 as &char + 16) as &i64);
        if v5 == 9223372036854775809 {
            *((v20 + 8) as &i64) = v6;
            *((v20 + 16) as &i64) = v7;
            *(v20 as &i64) = 9223372036854775809;
        } else {
            v5 = v21;
            v6 = v22;
            v7 = v23;
            if v5 != 0x8000000000000000 {
                v6 = v6;
            } else {
                v6 = 0;
            }
            v25 = v6;
            if !(v10 != 0x8000000000000000) || !(v25) || !(!std::path::Path::starts_with(v11, v12, v25, v7) as i8) {
                v1 = v12;
                v0 = v10;
                v4 = v7;
                v2 = v5;
                v3 = v6;
                *(v20 as &i128) = v0;
                *((v20 + 32) as &i64) = v3;
                *((v20 + 40) as &i64) = v4;
                *((v20 + 16) as &i64) = v1;
                *((v20 + 24) as &i64) = v2;
                return v20;
            }
            *(v20 as &i64) = 0x8000000000000000;
            *((v20 + 24) as &i64) = 0x8000000000000000;
        }
    }
    return v20;
}
