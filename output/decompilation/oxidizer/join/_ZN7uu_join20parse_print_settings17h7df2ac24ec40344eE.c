fn uu_join::parse_print_settings(a0: &struct16, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x1c8]
    let v1: i64;  // [sp-0x1c0]
    let v2: i64;  // [bp-0x1b8], Other Possible Types: int
    let v3: i64;  // [sp-0x1a8], Other Possible Types: int
    let v4: i64;  // [sp-0x1a0]
    let v5: iNone;  // [bp-0x198]
    let v6: i64;  // [sp-0x190]
    let v7: iNone;  // [bp-0x188]
    let v8: i64;  // [sp-0x180]
    let v9: i64;  // [bp-0x178], Other Possible Types: int
    let v10: iNone;  // [bp-0x168], Other Possible Types: unsigned long
    let v11: i64;  // [sp-0x160]
    let v12: iNone;  // [bp-0x158]
    let v13: i64;  // [sp-0x150]
    let v14: iNone;  // [bp-0x148]
    let v15: i64;  // [sp-0x140]
    let v16: Result<struct16, struct1>;  // [sp-0x130], Other Possible Types: struct64
    let v17: struct64;  // [sp-0xf0]
    let v18: struct56;  // [sp-0xb0], Other Possible Types: struct64
    let v19: i8;  // [bp-0x70]
    let v22: iNone;  // xmm0
    let v23: iNone;  // xmm1
    let v24: iNone;  // xmm2
    let v25: iNone;  // xmm0
    let v26: iNone;  // xmm1
    let v27: iNone;  // xmm2
    let v28: i64;  // rax
    let v29: i64;  // rbp
    let v30: i64;  // r13
    let v33: i8;  // cc_dep1

    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "v");
    v17 = clap_builder::parser::error::MatchesError::unwrap("v", &v18);
    v1 = v17.field_0 as i64;
    if !v1 {
        v2 = core::ops::function::FnOnce::call_once;
        v2 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v3 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v4 = 0;
        v6 = 0;
        v8 = 0;
    } else {
        v22 = v17.field_0;
        v23 = v17.field_16;
        v24 = v17.field_32;
        *(&v7 as &u128) = v17.field_48;
        v5 = v24;
        v3 = v23;
        v2 = v22;
    }
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "a");
    v16 = clap_builder::parser::error::MatchesError::unwrap("a", &v18);
    if !v16.field_0 as i64 {
        v9 = core::ops::function::FnOnce::call_once;
        v9 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v10 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v11 = 0;
        v13 = 0;
        v15 = 0;
    } else {
        v25 = v16.field_0;
        v26 = v16.field_16;
        v27 = v16.field_32;
        *(&v14 as &u128) = v16.field_48;
        v12 = v27;
        v10 = v26;
        v9 = v25;
    }
    v18 = core::iter::traits::iterator::Iterator::chain(&v2, &v9);
    v28 = core::option::Option<T>::or_else(core::iter::adapters::chain::and_then_or_clear(&v18), &v19);
    if !v28 {
        return struct11 {
            field_0: 0
            field_8: (!v1) as u8 as u8
            field_9: v31
            field_10: v32
        };
    }
    v0 = a0;
    v29 = 0;
    v30 = 0;
    do {
        v16 = uu_join::parse_file_number(*((v28 + 8) as &i64), *((v28 + 16) as &i64));
        match v16 {
            Ok(_) => {
                return struct16 {
                    field_0: v28
                    field_8: v34
                };
            },
            Err(v33) => {
                v30 = (!*((&v16 as &char + 8) as &i8) ? 1 : v30 & 4294967295 & 4294967295);
            },
        }
        v29 = (*((&v16 as &char + 8) as &i8) ? 1 : v29 & 4294967295 & 4294967295);
        v28 = core::option::Option<T>::or_else(core::iter::adapters::chain::and_then_or_clear(&v18), &v19);
    } while (v28);
}
