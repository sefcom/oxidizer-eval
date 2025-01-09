fn uu_realpath::prepare_relative_options(a0: &Result<struct48, struct16>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [sp-0xe8], Other Possible Types: Result<struct40, struct8>, i328
    let v5: i64;  // [sp-0xa8]
    let v6: i64;  // [sp-0xa0]
    let v7: i64;  // [sp-0x98]
    let v8: i192;  // [sp-0x90], Other Possible Types: struct24
    let v9: i64;  // [bp-0x78], Other Possible Types: struct24
    let v11: i64;  // [sp-0x60]
    let v12: i64;  // [sp-0x58]
    let v13: i64;  // [sp-0x50]
    let v14: struct24;  // [sp-0x48], Other Possible Types: i64
    let v16: i64;  // rax
    let v17: i64;  // rax
    let v18: i64;  // r13
    let v19: i64;  // r14
    let v20: i64;  // r15
    let v21: i64;  // r12
    let v22: i64;  // rsi
    let v23: i64;  // rax
    let v24: i64;  // rcx

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "relative-to");
    v16 = clap_builder::parser::error::MatchesError::unwrap("relative-to", &v0);
    if !v16 {
        v14 = 0x8000000000000000;
    } else {
        v14 = core::ops::function::FnOnce::call_once(*((v16 + 8) as &i64), *((v16 + 16) as &i64));
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "relative-base");
    v17 = clap_builder::parser::error::MatchesError::unwrap("relative-base", &v0);
    if !v17 {
        v9 = 0x8000000000000000;
    } else {
        v0 = core::ops::function::FnOnce::call_once(*((v17 + 8) as &i64), *((v17 + 16) as &i64));
        v9 = v0;
    }
    *(&v0.field_0 as &struct24) = struct24 {
        field_0: v14
        field_16: *((&v14 as &char + 16) as &i64)
    };
    v8 = uu_realpath::canonicalize_relative_option(&v0, a2, a3);
    v18 = v8;
    v19 = *((&v8 as &char + 8) as &i64);
    v20 = *((&v8 as &char + 16) as &i64);
    if v11 == 9223372036854775809 {
        v21 = a0;
        *((v21 + 8) as &i64) = v12;
        *((v21 + 16) as &i64) = v13;
        *(v21 as &i64) = 9223372036854775809;
    } else {
        v11 = v18;
        v12 = v19;
        v13 = v20;
        *(&v0.field_0 as &struct24) = struct24 {
            field_0: v9
            field_16: v10
        };
        v8 = uu_realpath::canonicalize_relative_option(&v0, a2, a3);
        v21 = a0;
        v22 = v8;
        v23 = *((&v8 as &char + 8) as &i64);
        v24 = *((&v8 as &char + 16) as &i64);
        if v5 == 9223372036854775809 {
            *((v21 + 8) as &i64) = v6;
            *((v21 + 16) as &i64) = v7;
            *(v21 as &i64) = 9223372036854775809;
        } else {
            v5 = v22;
            v6 = v23;
            v7 = v24;
            if v5 != 0x8000000000000000 {
                v6 = v6;
            }
            return Ok(struct48 {
                field_0: v0
                field_16: v1
                field_24: v2
                field_32: v3
                field_40: v4
            });
            *(v21 as &i64) = 0x8000000000000000;
            *((v21 + 24) as &i64) = 0x8000000000000000;
        }
    }
}
