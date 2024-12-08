fn uu_du::build_exclude_patterns(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0x2e8], Other Possible Types: struct64
    let v2: i64;  // [sp-0x2a0], Other Possible Types: struct16
    let v3: i64;  // [sp-0x298]
    let v4: i64;  // [sp-0x290]
    let v5: i128;  // [sp-0x288]
    let v6: i64;  // [sp-0x278]
    let v7: i64;  // [sp-0x268]
    let v8: i128;  // [bp-0x260]
    let v9: i64;  // [sp-0x250]
    let v10: i192;  // [sp-0x248], Other Possible Types: struct24
    let v11: Option<struct24>;  // [sp-0x230], Other Possible Types: i192
    let v12: struct24;  // [bp-0x218]
    let v13: struct64;  // [bp-0x1f8]
    let v14: i128;  // [sp-0x1b8]
    let v15: i128;  // [sp-0x1a8]
    let v16: i128;  // [sp-0x198]
    let v17: i64;  // [sp-0x188]
    let v18: i64;  // [sp-0x178]
    let v19: i64;  // [sp-0x170]
    let v20: i128;  // [sp-0x168]
    let v21: i128;  // [sp-0x158]
    let v22: i64;  // [sp-0x148]
    let v23: i64;  // [sp-0x140]
    let v24: i64;  // [sp-0x138]
    let v25: i64;  // [sp-0x118]
    let v26: i448;  // [sp-0xf8], Other Possible Types: struct56, struct72
    let v27: i8;  // [bp-0x70]
    let v29: i64;  // rax
    let v30: i128;  // xmm1
    let v31: i256;  // ymm1
    let v32: i128;  // xmm0
    let v33: i256;  // ymm0
    let v35: i64;  // rdx
    let v36: i256;  // ymm1
    let v38: i256;  // ymm0
    let v39: i256;  // ymm1
    let v40: i256;  // ymm0
    let v44: i64;  // rdx
    let v45: i64;  // rdx
    let v46: i256;  // ymm2
    let v47: i128;  // xmm0
    let v48: i128;  // xmm0
    let v49: i128;  // xmm1
    let v50: i128;  // xmm2
    let v51: i64;  // rbx

    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude-from");
    v0 = clap_builder::parser::error::MatchesError::unwrap("exclude-from", &v26);
    v29 = v0;
    if !v29 {
        v33 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v31 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E;
        v29 = core::ops::function::FnOnce::call_once;
        v35 = 0;
    } else {
        v30 = *((&v0 as &char + 16) as &i128);
        v31 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
        v32 = *((&v0 as &char + 32) as &i128);
        v33 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
        v35 = *((&v0 as &char + 56) as &i64);
    }
    v18 = v29;
    v19 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E;
    v20 = v30;
    v21 = v32;
    v22 = *((&v0 as &char + 48) as &i64);
    v23 = v35;
    v24 = 0;
    v25 = 0;
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude");
    v0 = clap_builder::parser::error::MatchesError::unwrap("exclude", &v26);
    if !v0 {
        v40 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v39 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E;
    } else {
        v39 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v0 as &char + 16) as &i128);
        v40 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v0 as &char + 32) as &i128);
    }
    *(&v13.field_0 as &struct64) = struct64 {
        field_0: v41
        field_8: v42
        field_16: v36 as u128
        field_32: v38 as u128
        field_48: v43
        field_56: v44
    };
    v2 = 0;
    v3 = 8;
    v4 = 0;
    v26 = core::iter::traits::iterator::Iterator::chain(&v13, &v18);
    loop {
        core::iter::adapters::chain::and_then_or_clear(&v0, &v27, v45);
        v11 = core::option::Option<T>::or_else(&v0, &v26);
        match v11 {
            None => {
                v51 = a0;
                *((v51 + 16) as &i64) = v4;
                *(v51 as &i128) = v2;
                return v51;
            },
            Some(_) => {
                v6 = *((&v11 as &char + 16) as &i64);
                v47 = v11;
                v5 = v47;
                v0 = v0;
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "verbose") as i8 {
                    v10 = &v5;
                    println!("adding {:?} to the exclude list ", &v10);
                    v0 = v0;
                }
                v0 = v0;
                uucore::parser::parse_glob::from_str(&v0, *((&v5 as &char + 8) as &i64), v6);
                if v0 == 0x8000000000000000 {
                    v12 = struct24 {
                        field_0: *((&v0 as &char + 8) as &i128)
                        field_16: v1
                    };
                    v10 = <T as alloc::string::ToString>::to_string(&v12);
                    v9 = *((&v10 as &char + 16) as &i64);
                    v8 = v10;
                    v7 = 4;
                    v51 = a0;
                    *((v51 + 8) as &double) = alloc::boxed::Box<T>::new(&v7);
                    *((v51 + 16) as &&i64) = &g_583ff8;
                    *(v51 as &i64) = 0x8000000000000000;
                    return v51;
                }
                v17 = *((&v0 as &char + 48) as &i64);
                v48 = v0;
                v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 as u128 as u256;
                v49 = *((&v0 as &char + 16) as &i128);
                v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 as u128 as u256;
                v50 = *((&v0 as &char + 32) as &i128);
                v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 as u128 as u256;
                v16 = v50;
                v15 = v49;
                v14 = v48;
                v2 = alloc::vec::Vec<T,A>::push(&v14, v44);
            },
        }
    }
}
