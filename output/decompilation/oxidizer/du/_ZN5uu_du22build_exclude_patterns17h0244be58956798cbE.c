fn uu_du::build_exclude_patterns(a0: &struct24, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x2e8], Other Possible Types: struct64
    let v1: i64;  // [sp-0x2e0]
    let v2: i64;  // [sp-0x2a0], Other Possible Types: struct16
    let v3: i64;  // [sp-0x290]
    let v4: iNone;  // [sp-0x288]
    let v5: i64;  // [sp-0x278]
    let v6: i64;  // [sp-0x268]
    let v7: struct24;  // [sp-0x260]
    let v8: struct24;  // [sp-0x248], Other Possible Types: unsigned long
    let v9: Option<struct24>;  // [sp-0x230]
    let v10: iNone;  // [sp-0x218]
    let v11: struct64;  // [bp-0x1f8]
    let v12: struct56;  // [bp-0x1b8]
    let v13: i64;  // [sp-0x178]
    let v14: i64;  // [sp-0x170]
    let v15: iNone;  // [sp-0x168]
    let v16: iNone;  // [sp-0x158]
    let v17: i64;  // [sp-0x148]
    let v18: i64;  // [sp-0x140]
    let v19: i64;  // [sp-0x138]
    let v20: i64;  // [sp-0x118]
    let v21: struct56;  // [sp-0xf8], Other Possible Types: struct72
    let v22: i8;  // [bp-0x70]
    let v24: i64;  // rax
    let v25: i64;  // rcx
    let v26: iNone;  // xmm1
    let v27: iNone;  // ymm1
    let v28: iNone;  // ymm1
    let v29: iNone;  // xmm0
    let v30: iNone;  // ymm0
    let v31: iNone;  // ymm0
    let v33: i64;  // rdx
    let v34: iNone;  // ymm0
    let v35: iNone;  // ymm1
    let v36: i64;  // rax
    let v37: i64;  // rcx
    let v39: iNone;  // ymm1
    let v41: iNone;  // ymm0
    let v42: i64;  // rsi
    let v43: i64;  // rdx
    let v44: iNone;  // ymm2
    let v45: iNone;  // xmm0
    let v49: i64;  // rbx

    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude-from");
    v0 = clap_builder::parser::error::MatchesError::unwrap("exclude-from", &v21);
    v24 = v0;
    if v24 {
        v25 = v1;
        v26 = v0.field_16;
        v28 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 as u256;
        v29 = v0.field_32;
        v31 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 as u256;
        v33 = *((&v0.field_48 as &char + 8) as &i64);
    } else {
        v31 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v28 = v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v25 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v24 = core::ops::function::FnOnce::call_once;
        v33 = 0;
    }
    v13 = v24;
    v14 = v25;
    v15 = v26;
    v16 = v29;
    v17 = v0.field_48 as i64;
    v18 = v33;
    v19 = 0;
    v20 = 0;
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude");
    v0 = clap_builder::parser::error::MatchesError::unwrap("exclude", &v21);
    v36 = v0;
    if v36 {
        v37 = v1;
        v39 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_16;
        v41 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_32;
        v42 = v0.field_48 as i64;
        v43 = *((&v0.field_48 as &char + 8) as &i64);
    } else {
        v41 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v39 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v37 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v36 = core::ops::function::FnOnce::call_once;
        v43 = 0;
    }
    *(&v11.field_0 as &struct64) = struct64 {
        field_0: v36
        field_8: v37
        field_16: v38
        field_32: v40
        field_48: v42
        field_56: v43
    };
    v2 = 0;
    v2 = 8;
    v3 = 0;
    v21 = core::iter::traits::iterator::Iterator::chain(&v11, &v13);
    loop {
        core::iter::adapters::chain::and_then_or_clear(&v0, &v22);
        v9 = core::option::Option<T>::or_else(&v0, &v21);
        match v9 {
            None => {
                v49 = a0;
                return struct24 {
                    field_0: v2 as i128
                    field_16: v3
                };
            },
            Some(_) => {
                v5 = *((&v9 as &char + 16) as &i64);
                v45 = v9 as i128;
                v4 = v45;
            },
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "verbose") as i8 {
            v8 = &v4;
            println!("adding {:?} to the exclude list ", &v8);
        }
        uucore::parser::parse_glob::from_str(&v0, (&v4)[8] as i64, v5);
        if v0 == 0x8000000000000000 {
            v10 = *((&v0.field_0 as &char + 8) as &i192);
            v8 = <T as alloc::string::ToString>::to_string(&v10);
            v7 = v8;
            v6 = 4;
        }
        v41 = (v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_0;
        v39 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_16;
        v44 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_32;
        *(&v12.field_0 as &struct56) = struct56 {
            field_0: v46
            field_16: v47
            field_32: v48
            field_48: v0.field_48 as i64
        };
        v2 = alloc::vec::Vec<T,A>::push(&v12);
    }
}
