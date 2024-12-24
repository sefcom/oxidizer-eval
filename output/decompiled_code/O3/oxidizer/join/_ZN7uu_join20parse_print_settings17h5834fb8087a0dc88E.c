fn uu_join::parse_print_settings(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0x1c0]
    let v1: i128;  // [bp-0x1b8]
    let v2: i64;  // [sp-0x1b0]
    let v3: i64;  // [bp-0x1a8]
    let v4: i64;  // [sp-0x1a0]
    let v5: i128;  // [bp-0x198]
    let v6: i64;  // [sp-0x190]
    let v7: i128;  // [bp-0x188]
    let v8: i64;  // [sp-0x180]
    let v9: i128;  // [bp-0x178]
    let v10: i64;  // [sp-0x170]
    let v11: i128;  // [bp-0x168]
    let v12: i64;  // [sp-0x160]
    let v13: i128;  // [bp-0x158]
    let v14: i64;  // [sp-0x150]
    let v15: i128;  // [bp-0x148]
    let v16: i64;  // [sp-0x140]
    let v17: i512;  // [sp-0x130], Other Possible Types: Result<struct16, struct9>, struct64
    let v18: i512;  // [sp-0xf0], Other Possible Types: struct64
    let v19: i448;  // [sp-0xb0], Other Possible Types: struct56, struct64
    let v20: i8;  // [bp-0x70]
    let v22: i128;  // xmm0
    let v23: i128;  // xmm1
    let v24: i128;  // xmm2
    let v25: i128;  // xmm0
    let v26: i128;  // xmm1
    let v27: i128;  // xmm2
    let v28: i64;  // rsi
    let v29: i64;  // rdx
    let v30: i64;  // rax
    let v31: i64;  // rbp
    let v32: i64;  // r13
    let v33: i8;  // r13b
    let v34: i8;  // bpl
    let v36: i64;  // rcx

    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "v");
    v18 = clap_builder::parser::error::MatchesError::unwrap("v", &v19);
    v0 = v18;
    if !v0 {
        v1 = core::ops::function::FnOnce::call_once;
        v2 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E;
        v3 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E;
        v4 = 0;
        v6 = 0;
        v8 = 0;
    } else {
        v22 = v18;
        v23 = *((&v18 as &char + 16) as &i128);
        v24 = *((&v18 as &char + 32) as &i128);
        v7 = *((&v18 as &char + 48) as &i128);
        v5 = v24;
        v3 = v23;
        v1 = v22;
    }
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "a");
    v17 = clap_builder::parser::error::MatchesError::unwrap("a", &v19);
    if !v17 {
        v9 = core::ops::function::FnOnce::call_once;
        v10 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E;
        v11 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E;
        v12 = 0;
        v14 = 0;
        v16 = 0;
    } else {
        v25 = v17;
        v26 = *((&v17 as &char + 16) as &i128);
        v27 = *((&v17 as &char + 32) as &i128);
        v15 = *((&v17 as &char + 48) as &i128);
        v13 = v27;
        v11 = v26;
        v9 = v25;
    }
    v19 = core::iter::traits::iterator::Iterator::chain(&v1, &v9);
    v30 = core::option::Option<T>::or_else(core::iter::adapters::chain::and_then_or_clear(&v19, v28, v29), &v20, v29);
    if !v30 {
        v33 = 0;
        v34 = 0;
    } else {
        v31 = 0;
        v32 = 0;
        do {
            v17 = uu_join::parse_file_number(*((v30 + 8) as &i64), *((v30 + 16) as &i64));
            v30 = v17;
            match v17 {
                Ok(_) => {
                    v36 = *((&v17 as &char + 8) as &i64);
                    return struct16 {
                        field_0: v30
                        field_8: v36
                    };
                },
                Err(_) => {
                    v32 = (*((&v17 as &char + 8) as &i8) ? 1 : v32 & 4294967295 & 4294967295);
                },
            }
            v31 = (!*((&v17 as &char + 8) as &i8) ? 1 : v31 & 4294967295 & 4294967295);
            v30 = core::option::Option<T>::or_else(core::iter::adapters::chain::and_then_or_clear(&v19, v28, v29), &v20, v29);
        } while (v30);
        v34 = v31 | -0x100 | v31 & 1;
        v33 = v32 | -0x100 | v32 & 1;
    }
    *((a0 + 8) as &u8) = !v0;
    *((a0 + 9) as &i8) = v34;
    *((a0 + 10) as &i8) = v33;
    *(a0 as &i64) = 0;
    return v30;
}
