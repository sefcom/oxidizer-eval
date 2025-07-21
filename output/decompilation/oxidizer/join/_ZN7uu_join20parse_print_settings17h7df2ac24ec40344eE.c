fn uu_join::parse_print_settings(a1: i64) -> Result<struct16, struct11> {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0x1c8]
    let v1: u64;  // [bp-0x1c0]
    let v2: u128;  // [bp-0x1b8]
    let v3: u64;  // [bp-0x1b8]
    let v5: u128;  // [bp-0x1a8]
    let v7: u128;  // [bp-0x198]
    let v9: u128;  // [bp-0x188]
    let v11: u128;  // [bp-0x178]
    let v12: u64;  // [bp-0x178]
    let v14: struct40;  // [bp-0x168]
    let v16: core::slice::iter::Iter<u8>;  // [bp-0x158]
    let v18: struct16;  // [bp-0x148]
    let v20: struct16;  // [bp-0x130], Other Possible Types: struct64
    let v21: u64;  // [bp-0x128]
    let v22: struct40;  // [bp-0x120]
    let v23: core::slice::iter::Iter<u8>;  // [bp-0x110]
    let v24: struct16;  // [bp-0x100]
    let v25: struct64;  // [bp-0xf0]
    let v26: u128;  // [bp-0xe0]
    let v27: u128;  // [bp-0xd0]
    let v28: u128;  // [bp-0xc0]
    let v29: struct56;  // [bp-0xb0]
    let v30: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0xb0]
    let v32: struct24;  // rbx
    let v33: u128;  // xmm0
    let v34: core::fmt::rt::Argument;  // rax
    let v35: void*;  // rbp
    let v36: void*;  // r13
    let v37: u8;  // r13b
    let v38: u8;  // bpl

    v32 = a0;
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "v");
    v25 = clap_builder::parser::error::MatchesError::unwrap("v", &v29);
    v1 = v25.field_0;
    if v25.field_0 as i64 {
        v9 = v28;
        v7 = v27;
        v5 = v26;
        v2 = v25.field_0;
    }
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "a");
    v20 = clap_builder::parser::error::MatchesError::unwrap("a", &v29);
    if v20.field_0 as i64 {
        v33 = v20.field_0;
        v18 = v24;
        v16 = v23;
        v14 = v22;
        v11 = v33;
    }
    v30 = core::iter::traits::iterator::Iterator::chain(&v3, &v12);
    v34 = core::option::Option<T>::or_else(core::iter::adapters::chain::and_then_or_clear(&v30), &v30 as u8);
    if v34 {
        v0 = a0;
        v35 = 0;
        v36 = 0;
        do {
            v20 = uu_join::parse_file_number(*((v34 + 8) as &i64), *((v34 + 16) as &i64));
            if v20.field_0 {
                *(v0 as &u64) = v20.field_0;
                *((v0 + 8) as &u64) = v21;
                return v20.field_0;
            }
            v36 = (!v20.field_8 as i8 ? 1 : v36 & 4294967295);
            v35 = (v20.field_8 as i8 ? 1 : v35 & 4294967295);
            v34 = core::option::Option<T>::or_else(core::iter::adapters::chain::and_then_or_clear(&v30), &v30 as u8);
        } while (v34);
        v37 = v36 as u8 & 1;
        v38 = v35 as u8 & 1;
        v32 = v0;
    }
    *((v32 + 8) as &u8) = !v1;
    *((v32 + 9) as &u8) = v37;
    *((v32 + 10) as &u8) = v38;
    *(v32 as &i64) = 0;
    return v34;
}
