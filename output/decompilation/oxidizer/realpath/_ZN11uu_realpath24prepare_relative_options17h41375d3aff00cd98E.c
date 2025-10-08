fn uu_realpath::prepare_relative_options(a0: i64, a1: i64, a2: i32, a3: i8) -> u64 {
    let v0: u64;  // [bp-0x98]
    let v1: u64;  // [bp-0x98]
    let v2: u64;  // [bp-0x90]
    let v3: struct24;  // [bp-0x88], Other Possible Types: u64
    let v4: struct24;  // [bp-0x88], Other Possible Types: u8
    let v5: struct24;  // [bp-0x88], Other Possible Types: u64
    let v6: u64;  // [bp-0x88]
    let v7: u64;  // [bp-0x80]
    let v8: u64;  // [bp-0x80]
    let v9: u64;  // [bp-0x78]
    let v10: u64;  // [bp-0x78]
    let v11: u64;  // [bp-0x60]
    let v12: i64;  // [bp-0x58]
    let v13: Result<struct24, struct24>;  // [bp-0x50]
    let v14: u64;  // [bp-0x48]
    let v15: u64;  // [bp-0x40]
    let v16: u64;  // [bp-0x38]
    let v18: u64;  // rbp
    let v19: u64;  // r15
    let v20: i64;  // rax
    let v21: i64;  // rax
    let v22: u8;  // r12b
    let v24: u64;  // rdx
    let v25: u64;  // rdx
    let v27: u64;  // rdi

    v0 = a2;
    v18 = 0x8000000000000000;
    v19 = &g_41a307;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, a1, "relative-to");
    v20 = clap_builder::parser::error::MatchesError::unwrap("relative-to", &v4);
    if v20 {
        v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v20 + 8) as &i64), *((v20 + 16) as &i64));
        v5 = v6;
        v8 = v7;
        v9 = v10;
    } else {
        v6 = 0x8000000000000000;
        v7 = v19;
    }
    v3 = v5;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, a1, "relative-base");
    v21 = clap_builder::parser::error::MatchesError::unwrap("relative-base", &v4);
    if v21 {
        v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v21 + 8) as &i64), *((v21 + 16) as &i64));
        v2 = v8;
        v16 = v9;
    } else {
        v3 = v18;
    }
    v4 = struct24 {
        field_0: v6
        field_8: v7
        field_16: v10
    };
    v22 = a3;
    v13 = uu_realpath::canonicalize_relative_option(&v4, v0, v22);
    match v13 {
        Err(_) => {
            *((v12 + 8) as &u64) = v14;
            *((v12 + 16) as &u64) = v15;
            *(v12 as &i64) = 9223372036854775809;
            return v12;
        },
        Ok(_) => {
            v11 = v15;
            v1 = v14;
            v3 = struct24 {
                field_0: v3
                field_8: v2
                field_16: v16
            };
            v13 = uu_realpath::canonicalize_relative_option(&v3, v0 as i8, v22);
            match v13 {
                Err(_) => {
                    *((v12 + 8) as &u64) = v14;
                    *((v12 + 16) as &u64) = v15;
                    *(v12 as &i64) = 9223372036854775809;
                },
                Ok(_) => {
                    if v13 as i64 == 0x8000000000000000 {
                        v24 = 0;
                    } else {
                        v24 = v14;
                    }
                    v25 = v24;
                    if let Ok(_) = v13 {
                        v0 = v1;
                    }
                    v27 = v0;
                    if !v27 || !v25 || std::path::Path::starts_with(v27, v11, v25, v15) {
                        *(v12 as &i64) = v13 as i64;
                        *((v12 + 8) as &u64) = v1;
                        *((v12 + 16) as &u64) = v11;
                        *((v12 + 24) as &i64) = v13 as i64;
                        *((v12 + 32) as &u64) = v14;
                        *((v12 + 40) as &u64) = v15;
                    } else {
                        *(v12 as &i64) = 0x8000000000000000;
                        *((v12 + 24) as &i64) = 0x8000000000000000;
                    }
                },
            }
            return v12;
        },
    }
}
