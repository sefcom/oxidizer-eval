fn uu_join::parse_print_settings(a0: u64, a1: u64) -> long long {
    let v0: void*;  // [bp-0x1c8]
    let v1: u64;  // [bp-0x1c0]
    let v2: u128;  // [bp-0x1b8]
    let v3: u64;  // [bp-0x1b8]
    let v5: u128;  // [bp-0x1a8]
    let v7: u128;  // [bp-0x198]
    let v9: u128;  // [bp-0x188]
    let v11: u128;  // [bp-0x178]
    let v12: u64;  // [bp-0x178]
    let v14: u128;  // [bp-0x168]
    let v16: u128;  // [bp-0x158]
    let v18: struct48;  // [bp-0x148]
    let v20: struct16;  // [bp-0x130], Other Possible Types: struct64
    let v21: u64;  // [bp-0x128]
    let v22: u128;  // [bp-0x120]
    let v23: u128;  // [bp-0x110]
    let v24: struct48;  // [bp-0x100]
    let v25: struct64;  // [bp-0xf0]
    let v26: u128;  // [bp-0xe0]
    let v27: u128;  // [bp-0xd0]
    let v28: u128;  // [bp-0xc0]
    let v29: struct56;  // [bp-0xb0]
    let v30: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0xb0]
    let v32: core::result::Result<(), std::io::error::Error>;  // xmm0
    let v33: i64;  // rax
    let v34: core::fmt::rt::Argument;  // rbp
    let v35: struct40;  // r13

    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, &g_41b032);
    v25 = clap_builder::parser::error::MatchesError::unwrap(&g_41b032, &v29);
    v1 = v25.field_0;
    if v25.field_0 as i64 {
        v9 = v28;
        v7 = v27;
        v5 = v26;
        v2 = v25.field_0;
    }
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, &g_41b033);
    v20 = clap_builder::parser::error::MatchesError::unwrap(&g_41b033, &v29);
    if v20.field_0 as i64 {
        v32 = v20.field_0;
        v18 = v24;
        v16 = v23;
        v14 = v22;
        *(&v11 as &core::result::Result<(), std::io::error::Error>) = v32;
    }
    v30 = core::iter::traits::iterator::Iterator::chain(&v3, &v12);
    v33 = core::option::Option<T>::or_else(core::iter::adapters::chain::and_then_or_clear(&v30), &v30 as u8);
    if v33 {
        do {
            v20 = uu_join::parse_file_number(*((v33 + 8) as &i64), *((v33 + 16) as &i64));
            if v20.field_0 {
                *(v0 as &u64) = v20.field_0;
                *(&v0[8] as &u64) = v21;
                return v20.field_0;
            }
            v33 = core::option::Option<T>::or_else(core::iter::adapters::chain::and_then_or_clear(&v30), &v30 as u8);
        } while (v33);
    }
    *(&v0[8] as &u8) = !v1;
    *(&v0[9] as &u8) = v34 as u8;
    *(&v0[10] as &u8) = v35 as u8;
    *(v0 as &i64) = 0;
    return a0;
}
