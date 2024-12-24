fn uu_du::build_exclude_patterns(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0x2e8], Other Possible Types: struct64
    let v1: i64;  // [sp-0x2a0], Other Possible Types: struct16
    let v2: i64;  // [sp-0x298]
    let v3: i64;  // [sp-0x290]
    let v4: i128;  // [sp-0x288]
    let v5: i64;  // [sp-0x278]
    let v6: i64;  // [sp-0x268]
    let v7: i192;  // [bp-0x260]
    let v8: i64;  // [sp-0x248], Other Possible Types: struct24
    let v9: Option<struct24>;  // [sp-0x230], Other Possible Types: i192
    let v10: i192;  // [bp-0x218]
    let v11: struct64;  // [bp-0x1f8]
    let v12: i128;  // [sp-0x1b8]
    let v13: i128;  // [sp-0x1a8]
    let v14: i128;  // [sp-0x198]
    let v15: i64;  // [sp-0x188]
    let v16: i64;  // [sp-0x178]
    let v17: i64;  // [sp-0x170]
    let v18: i128;  // [sp-0x168]
    let v19: i128;  // [sp-0x158]
    let v20: i64;  // [sp-0x148]
    let v21: i64;  // [sp-0x140]
    let v22: i64;  // [sp-0x138]
    let v23: i64;  // [sp-0x118]
    let v24: i576;  // [sp-0xf8], Other Possible Types: struct56, struct72
    let v25: i8;  // [bp-0x70]
    let v27: i64;  // rax
    let v28: i128;  // xmm1
    let v29: i256;  // ymm1
    let v30: i128;  // xmm0
    let v31: i256;  // ymm0
    let v33: i64;  // rdx
    let v34: i256;  // ymm1
    let v36: i256;  // ymm0
    let v37: i256;  // ymm1
    let v38: i256;  // ymm0
    let v42: i64;  // rdx
    let v43: i64;  // rdx
    let v44: i256;  // ymm2
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i128;  // xmm1
    let v48: i128;  // xmm2
    let v49: i64;  // rbx

    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude-from");
    v0 = clap_builder::parser::error::MatchesError::unwrap("exclude-from", &v24);
    v27 = v0;
    if !v27 {
        v31 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v29 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E;
        v27 = core::ops::function::FnOnce::call_once;
        v33 = 0;
    } else {
        v28 = *((&v0 as &char + 16) as &i128);
        v29 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
        v30 = *((&v0 as &char + 32) as &i128);
        v31 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
        v33 = *((&v0 as &char + 56) as &i64);
    }
    v16 = v27;
    v17 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E;
    v18 = v28;
    v19 = v30;
    v20 = *((&v0 as &char + 48) as &i64);
    v21 = v33;
    v22 = 0;
    v23 = 0;
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude");
    v0 = clap_builder::parser::error::MatchesError::unwrap("exclude", &v24);
    if !v0 {
        v38 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v37 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E;
    } else {
        v37 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v0 as &char + 16) as &i128);
        v38 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v0 as &char + 32) as &i128);
    }
    *(&v11.field_0 as &struct64) = struct64 {
        field_0: v39
        field_8: v40
        field_16: v34 as u128
        field_32: v36 as u128
        field_48: v41
        field_56: v42
    };
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v24 = core::iter::traits::iterator::Iterator::chain(&v11, &v16);
    loop {
        core::iter::adapters::chain::and_then_or_clear(&v0, &v25, v43);
        v9 = core::option::Option<T>::or_else(&v0, &v24);
        match v9 {
            None => {
                v49 = a0;
                *((v49 + 16) as &i64) = v3;
                *(v49 as &i128) = v1;
                return v49;
            },
            Some(_) => {
                v5 = *((&v9 as &char + 16) as &i64);
                v45 = v9;
                v4 = v45;
                v0 = v0;
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "verbose") as i8 {
                    v8 = &v4;
                    println!("adding {:?} to the exclude list ", &v8);
                    v0 = v0;
                }
                v0 = v0;
                uucore::parser::parse_glob::from_str(&v0, *((&v4 as &char + 8) as &i64), v5);
                if v0 == 0x8000000000000000 {
                    v10 = *((&v0 as &char + 8) as &i192);
                    v8 = <T as alloc::string::ToString>::to_string(&v10);
                    v7 = v8;
                    v6 = 4;
                    v49 = a0;
                    *((v49 + 8) as &double) = alloc::boxed::Box<T>::new(&v6);
                    *((v49 + 16) as &&i64) = &g_583ff8;
                    *(v49 as &i64) = 0x8000000000000000;
                    return v49;
                }
                v15 = *((&v0 as &char + 48) as &i64);
                v46 = v0;
                v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 as u128 as u256;
                v47 = *((&v0 as &char + 16) as &i128);
                v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 as u128 as u256;
                v48 = *((&v0 as &char + 32) as &i128);
                v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 as u128 as u256;
                v14 = v48;
                v13 = v47;
                v12 = v46;
                v1 = alloc::vec::Vec<T,A>::push(&v12, v42);
            },
        }
    }
}
