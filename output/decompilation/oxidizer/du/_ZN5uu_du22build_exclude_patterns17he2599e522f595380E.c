fn uu_du::build_exclude_patterns(a0: i64, a1: i64) -> u64 {
    let v0: void*;  // [bp-0x2c0]
    let v1: void*;  // [bp-0x2b0]
    let v2: struct16;  // [bp-0x2b0]
    let v3: u64;  // [bp-0x2a8]
    let v4: void*;  // [bp-0x2a0]
    let v5: u128;  // [bp-0x298]
    let v6: u64;  // [bp-0x290]
    let v7: u64;  // [bp-0x288]
    let v8: Option<struct24>;  // [bp-0x278], Other Possible Types: struct64, u64
    let v9: u64;  // [bp-0x270]
    let v10: u64;  // [bp-0x270]
    let v11: u64;  // [bp-0x270]
    let v12: u64;  // [bp-0x260]
    let v13: u64;  // [bp-0x248]
    let v14: struct24;  // [bp-0x238], Other Possible Types: u64
    let v15: u64;  // [bp-0x238]
    let v16: u64;  // [bp-0x228]
    let v17: u64;  // [bp-0x210]
    let v18: struct64;  // [bp-0x208], Other Possible Types: u64
    let v19: u64;  // [bp-0x200]
    let v20: iNone;  // [bp-0x1f8]
    let v21: iNone;  // [bp-0x1f8]
    let v22: iNone;  // [bp-0x1e8]
    let v24: void*;  // [bp-0x1d0]
    let v25: void*;  // [bp-0x1c8]
    let v26: void*;  // [bp-0x1a8]
    let v27: struct24;  // [bp-0x188]
    let v28: core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>;  // [bp-0x170]
    let v29: u64;  // [bp-0x140]
    let v30: void*;  // [bp-0x138]
    let v31: u64;  // [bp-0x130]
    let v32: struct24;  // [bp-0x128]
    let v33: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0xf8], Other Possible Types: struct56
    let v34: u64;  // [bp-0x70]
    let v36: u128;  // xmm0
    let v37: u64;  // rax
    let v38: u64;  // rcx
    let v39: void*;  // rdx
    let v40: u128;  // xmm0
    let v41: u64;  // rax
    let v42: void*;  // rdx
    let v43: Option<struct24>;  // [bp-0x220]

    v33 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude-from");
    v18 = clap_builder::parser::error::MatchesError::unwrap("exclude-from", &v33);
    v18 = v37;
    v19 = v38;
    v21 = v20;
    v22 = v36;
    v24 = v39;
    v25 = 0;
    v26 = 0;
    v33 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude");
    v8 = clap_builder::parser::error::MatchesError::unwrap("exclude", &v33);
    if v8.field_0 as i64 {
        v20 = v8.field_16;
        v40 = v8.field_32;
        v10 = v9;
    }
    v9 = v10;
    v28 = core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>> {
        inner: core::iter::adapters::flatten::FlattenCompat<core::option::IntoIter<core::char::EscapeDebug>, core::char::EscapeDebug> {
            frontiter: v41
            backiter: <UNKNOWN>
            iter: core::iter::adapters::fuse::Fuse<core::option::IntoIter<core::char::EscapeDebug>> {
                iter: <UNKNOWN>
            }
        }
    };
    v29 = v13;
    v30 = v42;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v33 = core::iter::traits::iterator::Iterator::chain(&v28, &v18);
    loop {
        v8 = core::iter::adapters::chain::and_then_or_clear(&v34);
        v43 = core::option::Option<T>::or_else(&v8, &v33);
        match v43 {
            None => {
                *(&v0[16] as &i64) = 0;
                *(v0 as &i128) = *(&v2.field_0 as &i128);
                return a0;
            },
            Some(_) => {
                v7 = v17;
                v5 = v43 as i128 as u128;
                v9 = v9;
                v14 = v14;
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "verbose") as u8 {
                    println!("adding {} to the exclude list ", &v5 as u8);
                    v9 = v11;
                    v14 = v15;
                }
                uucore::features::parser::parse_glob::from_str(&v31, v6, v7);
                if v31 == 0x8000000000000000 {
                    v27 = v32;
                    v14 = <T as alloc::string::SpecToString>::spec_to_string(&v27);
                    v12 = v16;
                    v9 = v14.field_0;
                    v8 = 4;
                    *(&v0[8] as &u64) = alloc::boxed::Box<T>::new(&v8) as u64;
                    *(&v0[16] as &&u8) = &g_545d90;
                    *(v0 as &i64) = 0x8000000000000000;
                    return a0;
                }
                v2 = alloc::vec::Vec<T,A>::push(&v31);
            },
        }
    }
}
