fn uu_join::parse_print_settings(a1: i64) -> Result<struct16, struct11> {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0x1c8]
    let v1: i64;  // [bp-0x1c0]
    let v2: iNone;  // [bp-0x1b8]
    let v5: iNone;  // [bp-0x1a8]
    let v7: iNone;  // [bp-0x198]
    let v9: iNone;  // [bp-0x188]
    let v11: iNone;  // [bp-0x178]
    let v12: i64;  // [bp-0x178]
    let v14: iNone;  // [bp-0x168]
    let v16: iNone;  // [bp-0x158]
    let v18: iNone;  // [bp-0x148]
    let v20: iNone;  // [bp-0x130]
    let v21: i64;  // [bp-0x128]
    let v22: iNone;  // [bp-0x120]
    let v23: iNone;  // [bp-0x110]
    let v24: iNone;  // [bp-0x100]
    let v25: iNone;  // [bp-0xf0]
    let v26: iNone;  // [bp-0xe0]
    let v27: iNone;  // [bp-0xd0]
    let v28: iNone;  // [bp-0xc0]
    let v29: iNone;  // [bp-0xb0]
    let v30: iNone;  // [bp-0xb0]
    let v32: i64;  // rbx
    let v33: iNone;  // xmm0
    let v34: i64;  // rax
    let v35: i64;  // rbp
    let v36: i64;  // r13
    let v37: i8;  // r13b
    let v38: i8;  // bpl

    v32 = a0;
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "v");
    v25 = clap_builder::parser::error::MatchesError::unwrap("v", &v29);
    v1 = v25 as i64;
    if v25 as i64 {
        v9 = v28;
        v7 = v27;
        v5 = v26;
        *(&v2 as &i128) = v25 as i128;
    }
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "a");
    v20 = clap_builder::parser::error::MatchesError::unwrap("a", &v29);
    if v20 as i64 {
        v33 = v20 as i128;
        v18 = v24;
        v16 = v23;
        v14 = v22;
        v11 = v33;
    }
    v30 = core::iter::traits::iterator::Iterator::chain(&v2 as u8, &v12 as u8);
    v34 = core::option::Option<T>::or_else(core::iter::adapters::chain::and_then_or_clear(&v30), &v30 as u8);
    if v34 {
        v0 = a0;
        v35 = 0;
        v36 = 0;
        do {
            v20 = uu_join::parse_file_number(*((v34 + 8) as &i64), *((v34 + 16) as &i64));
            if let Ok(_) = v20 {
                *(v0 as &i64) = v20 as i64;
                *((v0 + 8) as &unsigned long) = v21;
                return v20 as i64;
            }
            v36 = (!(&v20)[8] as i8 ? 1 : v36 & 4294967295);
            v35 = ((&v20)[8] as i8 ? 1 : v35 & 4294967295);
            v34 = core::option::Option<T>::or_else(core::iter::adapters::chain::and_then_or_clear(&v30), &v30 as u8);
        } while (v34);
        v37 = v36 as u8 & 1;
        v38 = v35 as u8 & 1;
        v32 = v0;
    }
    *((v32 + 8) as &u8) = !v1;
    *((v32 + 9) as &char) = v37;
    *((v32 + 10) as &char) = v38;
    *(v32 as &i64) = 0;
    return v34;
}
