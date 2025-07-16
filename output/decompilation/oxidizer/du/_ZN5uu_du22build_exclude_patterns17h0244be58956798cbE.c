fn uu_du::build_exclude_patterns(a0: i64, a1: i64) -> long long {
    let v0: i64;  // [bp-0x2e8]
    let v1: iNone;  // [bp-0x2e8]
    let v2: iNone;  // [bp-0x2e8]
    let v3: i64;  // [bp-0x2e8]
    let v4: iNone;  // [bp-0x2e8]
    let v5: i64;  // [bp-0x2e8]
    let v6: i64;  // [bp-0x2e8]
    let v7: i64;  // [bp-0x2e0]
    let v8: i64;  // [bp-0x2e0]
    let v9: i64;  // [bp-0x2d0]
    let v10: i64;  // [bp-0x2d0]
    let v11: i64;  // [bp-0x2b8]
    let v12: i64;  // [bp-0x2b8]
    let v13: i64;  // [bp-0x2b0]
    let v14: i64;  // [bp-0x2b0]
    let v15: i64;  // [bp-0x2a8]
    let v16: i64;  // [bp-0x2a0]
    let v17: iNone;  // [bp-0x2a0]
    let v18: i64;  // [bp-0x298]
    let v19: i64;  // [bp-0x290]
    let v20: i64;  // [bp-0x288]
    let v21: i64;  // [bp-0x280]
    let v22: i64;  // [bp-0x278]
    let v23: i64;  // [bp-0x268]
    let v24: i64;  // [bp-0x260]
    let v25: i64;  // [bp-0x260]
    let v26: i64;  // [bp-0x250]
    let v27: i64;  // [bp-0x248], Other Possible Types: int
    let v28: i64;  // [bp-0x238]
    let v29: i64;  // [bp-0x220]
    let v30: i8;  // [bp-0x218]
    let v31: i64;  // [bp-0x208]
    let v32: iNone;  // [bp-0x1f8]
    let v33: i64;  // [bp-0x1c8]
    let v34: i64;  // [bp-0x1c0]
    let v35: i8;  // [bp-0x1b8]
    let v36: i8;  // [bp-0x1a8]
    let v37: i8;  // [bp-0x198]
    let v38: i64;  // [bp-0x188]
    let v39: i64;  // [bp-0x178]
    let v40: i64;  // [bp-0x170]
    let v41: iNone;  // [bp-0x168]
    let v42: iNone;  // [bp-0x158]
    let v43: i64;  // [bp-0x148]
    let v44: i64;  // [bp-0x140]
    let v45: i64;  // [bp-0x138]
    let v46: i64;  // [bp-0x118]
    let v47: iNone;  // [bp-0xf8]
    let v48: i8;  // [bp-0x70]
    let v50: iNone;  // xmm1
    let v51: iNone;  // xmm0
    let v53: iNone;  // xmm0
    let v54: iNone;  // [bp-0x230]

    v47 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude-from");
    v1 = clap_builder::parser::error::MatchesError::unwrap("exclude-from", &v47);
    if v1 as i64 {
        v50 = (&v1)[16] as i128;
        v51 = (&v1)[32] as i128;
        v7 = v8;
        v11 = v12;
        v13 = v14;
        v0 = v6;
    } else {
        v51 = 0;
        v8 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v14 = 0;
        v0 = core::ops::function::FnOnce::call_once;
    }
    v39 = v0;
    v40 = v8;
    v41 = v50;
    v42 = v51;
    v43 = v12;
    v44 = v14;
    v45 = 0;
    v46 = 0;
    v47 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude");
    v2 = clap_builder::parser::error::MatchesError::unwrap("exclude", &v47);
    if v2 as i64 {
        v50 = (&v2)[16] as i128;
        v53 = (&v2)[32] as i128;
        v12 = v11;
    }
    v32 = core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>> {
        inner: core::iter::adapters::flatten::FlattenCompat<core::option::IntoIter<core::char::EscapeDebug>, core::char::EscapeDebug> {
            iter: core::iter::adapters::fuse::Fuse<core::option::IntoIter<core::char::EscapeDebug>> {
                iter: v6
            }
            frontiter: <UNKNOWN>
            backiter: <UNKNOWN>
        }
    };
    v33 = v12;
    v34 = v13;
    v16 = 0;
    v18 = 8;
    v19 = 0;
    v47 = core::iter::traits::iterator::Iterator::chain(&v32, &v39);
    loop {
        vvar_395{stack -744} = struct24 OrderedDict({0: 𝜙@64b [((5189626, None), vvar_287{stack -744}), ((5189294, None), vvar_320{stack -744})]})
        core::iter::adapters::chain::and_then_or_clear(&v4, &v48);
        v54 = core::option::Option<T>::or_else(&v4, &v47);
        match v54 {
            None => {
                *((v15 + 16) as &i64) = 0;
                *(v15 as &i128) = v17 as i128;
                return a0;
            },
            Some(_) => {
                v22 = v29;
                memcpy(&v20, &v54, 16);
                v0 = v5;
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "verbose") as i8 {
                    v27 = &v20;
                    println!("adding {} to the exclude list ", &v27);
                    v0 = v5;
                    v9 = v10;
                    v24 = v25;
                }
                v3 = v0;
                uucore::parser::parse_glob::from_str(&v3 as u8, v21, v22);
                if v3 == 0x8000000000000000 {
                    v31 = v9;
                    memcpy(&v30, &v4, 16);
                    v27 = <T as alloc::string::ToString>::to_string(&v30 as u128);
                    v26 = v28;
                    memcpy(&v24, &v27, 16);
                    v23 = 4;
                    *((v15 + 8) as &double) = alloc::boxed::Box<T>::new(&v23);
                    *((v15 + 16) as &&i64) = &g_584558;
                    *(v15 as &i64) = 0x8000000000000000;
                    return a0;
                }
                v38 = v11;
                memcpy(&v37, &v2, 16);
                memcpy(&v36, &v4, 16);
                memcpy(&v35, &v3, 16);
                v17 = alloc::vec::Vec<T,A>::push(&v35 as u128);
            },
        }
    }
}
