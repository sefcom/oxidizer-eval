fn just::config::Config::search_config(a0: void*, a1: u64, a2: i64) -> int {
    let v0: struct24;  // [bp-0xf0]
    let v1: u64;  // [bp-0xf0]
    let v2: struct25;  // [bp-0xe0]
    let v3: u64;  // [bp-0xd8]
    let v4: struct24;  // [bp-0xd8]
    let v5: u64;  // [bp-0xc8]
    let v6: Result<struct40, struct16>;  // [bp-0xb8], Other Possible Types: struct24, u128
    let v7: Result<struct40, struct16>;  // [bp-0xb8]
    let v8: struct25;  // [bp-0xa8], Other Possible Types: u64
    let v9: struct24;  // [bp-0xa0]
    let v10: u64;  // [bp-0x98]
    let v11: u64;  // [bp-0x90]
    let v12: iNone;  // [bp-0x88]
    let v13: u64;  // [bp-0x78]
    let v14: struct32;  // [bp-0x68]
    let v15: struct25;  // [bp-0x58]
    let v16: struct24;  // [bp-0x50]
    let v17: struct24;  // [bp-0x40]
    let v20: i64;  // rax
    let v21: struct24;  // rax
    let v22: struct40;  // rax
    let v23: u64;  // rax
    let v24: u64;  // rax
    let v25: u64;  // rax

    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "JUSTFILE");
    v20 = clap_builder::parser::error::MatchesError::unwrap("JUSTFILE", &v6);
    if v20 {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v20 + 8) as &i64), *((v20 + 16) as &i64));
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "WORKING-DIRECTORY");
    v21 = clap_builder::parser::error::MatchesError::unwrap("WORKING-DIRECTORY", &v7);
    if v21 {
        v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v21 + 8) as &i64), *((v21 + 16) as &i64));
        v5 = v8;
        v4 = *(&v6.field_0 as &i128);
        if *((a2 + 48) as &i64) != 0x8000000000000000 {
            goto LABEL_65f8b8;
        }
    } else {
        v3 = 0x8000000000000000;
        if *((a2 + 48) as &i64) != 0x8000000000000000 {
LABEL_65f8b8:
            v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((a2 + 56) as &i64), *((a2 + 64) as &i64));
            v13 = v8;
            v12 = *(&v6.field_0 as &i128);
            if v12 as i64 != 0x8000000000000000 {
                if v1 != 0x8000000000000000 || v3 != 0x8000000000000000 {
                    return struct8 {
                        field_0: 9223372036854775812
                    };
                }
                return struct40 {
                    field_0: 9223372036854775815
                    field_8: 9223372036854775809
                    field_16: v12
                    field_32: v13
                };
                return struct8 {
                    field_0: 9223372036854775812
                };
            }
        }
    }
    v14 = *(&v0.field_0 as &i128);
    v15 = v2;
    v16 = v4;
    v17 = v5;
    v22 = v16.field_0;
    if v14.field_0 == 0x8000000000000000 {
        if v22 == 0x8000000000000000 {
            *(&a0[8] as &i64) = 0x8000000000000000;
        }
        v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("--working-directory set without --justfile");
        return struct32 {
            field_0: 9223372036854775809
            field_8: *(&v6.field_0 as &i128)
            field_24: v8
        };
    } else {
        if v22 == 0x8000000000000000 {
            v23 = 9223372036854775811;
            return struct40 {
                field_0: 9223372036854775815
                field_8: v24
                field_16: *(&v0.field_0 as &i128)
                field_32: v2
            };
        }
        v25 = a0 + 8;
        v8 = v2;
        v6 = *(&v0.field_0 as &i128);
        v11 = v5;
        v9 = v4;
        *(v25 as &u128) = v6;
        *((v25 + 32) as &u64) = v10;
        *((v25 + 40) as &u64) = v11;
        *((v25 + 16) as &struct25) = v8;
        *((v25 + 24) as &u64) = v9.field_0;
    }
}
