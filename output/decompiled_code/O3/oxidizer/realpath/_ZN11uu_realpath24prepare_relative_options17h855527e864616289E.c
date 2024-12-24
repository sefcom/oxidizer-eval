fn uu_realpath::prepare_relative_options(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [sp-0xe8], Other Possible Types: Result<struct40, struct16>, struct24
    let v1: i64;  // [sp-0xd0]
    let v2: i64;  // [sp-0xc8]
    let v3: i64;  // [sp-0xc0]
    let v4: i64;  // [sp-0xa8]
    let v5: i64;  // [sp-0xa0]
    let v6: i64;  // [sp-0x98]
    let v7: struct24;  // [sp-0x90], Other Possible Types: i192
    let v8: i192;  // [bp-0x78]
    let v9: i64;  // [sp-0x60]
    let v10: i64;  // [sp-0x58]
    let v11: i64;  // [sp-0x50]
    let v12: i64;  // [sp-0x48], Other Possible Types: struct24
    let v14: i64;  // rax
    let v15: i64;  // rax
    let v16: i64;  // rbx
    let v17: i64;  // r14
    let v18: i64;  // r15
    let v19: i64;  // r12
    let v20: i64;  // rax
    let v21: i64;  // rdx
    let v22: i64;  // rcx

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "relative-to");
    v14 = clap_builder::parser::error::MatchesError::unwrap("relative-to", &v0);
    if !v14 {
        v12 = 0x8000000000000000;
    } else {
        v12 = core::ops::function::FnOnce::call_once(*((v14 + 8) as &i64), *((v14 + 16) as &i64));
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "relative-base");
    v15 = clap_builder::parser::error::MatchesError::unwrap("relative-base", &v0);
    if !v15 {
        v8 = 0x8000000000000000;
    } else {
        v0 = core::ops::function::FnOnce::call_once(*((v15 + 8) as &i64), *((v15 + 16) as &i64));
        v8 = v0;
    }
    v0 = v12;
    v7 = uu_realpath::canonicalize_relative_option(&v0, a2, a3);
    v16 = v7;
    v17 = *((&v7 as &char + 8) as &i64);
    v18 = *((&v7 as &char + 16) as &i64);
    if v9 == 9223372036854775809 {
        v19 = a0;
        *((v19 + 8) as &i64) = v10;
        *((v19 + 16) as &i64) = v11;
        *(v19 as &i64) = 9223372036854775809;
    } else {
        v9 = v16;
        v10 = v17;
        v11 = v18;
        v0 = v8;
        v7 = uu_realpath::canonicalize_relative_option(&v0, a2, a3);
        v19 = a0;
        v20 = v7;
        v21 = *((&v7 as &char + 8) as &i64);
        v22 = *((&v7 as &char + 16) as &i64);
        if v4 == 9223372036854775809 {
            *((v19 + 8) as &i64) = v5;
            *((v19 + 16) as &i64) = v6;
            *(v19 as &i64) = 9223372036854775809;
        } else {
            v4 = v20;
            v5 = v21;
            v6 = v22;
            if !(v9 != 0x8000000000000000) || !(v4 != 0x8000000000000000) || !(!std::path::Path::starts_with(v10, v11, v5, v6) as i8) {
                v0.field_16 = vvar_257{stack -80};
                v0 = v9;
                v3 = v6;
                v1 = v4;
                v2 = v5;
                *(v19 as &i128) = v0;
                *((v19 + 32) as &i64) = v2;
                *((v19 + 40) as &i64) = v3;
                *((v19 + 16) as &struct24) = v0.field_16;
                *((v19 + 24) as &i64) = v1;
                return v19;
            }
            *(v19 as &i64) = 0x8000000000000000;
            *((v19 + 24) as &i64) = 0x8000000000000000;
        }
    }
    return v19;
}
