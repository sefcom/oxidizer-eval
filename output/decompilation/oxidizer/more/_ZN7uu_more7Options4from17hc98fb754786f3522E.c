fn uu_more::Options::from(a1: &struct56) -> : struct40 {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0x91]
    let v1: u32;  // [bp-0x90]
    let v2: u32;  // [bp-0x8c]
    let v4: i64;  // [bp-0x80]
    let v5: Result<struct40, struct16>;  // [bp-0x78], Other Possible Types: u128
    let v6: u64;  // [bp-0x68]
    let v7: alloc::string::String;  // [bp-0x48]
    let v8: u64;  // [bp-0x38]
    let v9: u64;  // [bp-0x30]
    let v10: u64;  // [bp-0x28]
    let v11: u64;  // [bp-0x20]
    let v12: u64;  // [bp-0x18]
    let v13: u64;  // [bp-0x10]
    let v15: u64;  // r15
    let v16: u64;  // r14
    let v17: u64;  // r13
    let v18: u64;  // r12
    let v19: u64;  // rbx
    let v20: i64;  // rax
    let v21: i64;  // rax
    let v23: i64;  // r13
    let v24: u64;  // rax
    let v25: u8;  // al
    let v26: u8;  // al
    let v27: u8;  // al
    let v28: u16;  // si
    let v29: u16;  // di
    let v30: u16;  // cx
    let v31: u16;  // si
    let v32: void*;  // rsi
    let v33: i64;  // rdi

    v13 = v15;
    v12 = v16;
    v11 = v17;
    v10 = v18;
    v9 = v19;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "lines");
    v20 = clap_builder::parser::error::MatchesError::unwrap("lines", &v5);
    v4 = v20;
    v2 = v20 as u32;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "number");
    v21 = clap_builder::parser::error::MatchesError::unwrap("number", &v5);
    v1 = v21 as u32;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "from-line");
    v23 = clap_builder::parser::error::MatchesError::unwrap("from-line", &v5);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "pattern");
    v24 = clap_builder::parser::error::MatchesError::unwrap("pattern", &v5);
    if v24 {
        v7 = <alloc::string::String as core::clone::Clone>::clone(v24);
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "clean-print") as i8;
    v6 = v8;
    v5 = *((&v5 as &char + 48) as &i128);
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "print-over") as i32;
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "silent") as i32;
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "squeeze") as i8;
    v28 = v1;
    v29 = v2;
    if !v4 {
        v31 = v28;
    } else {
        v31 = v29;
    }
    *((v33 + 36) as &u8) = v0;
    *((v33 + 24) as &void*) = v32;
    *((v33 + 32) as &u16) = v30;
    *((v33 + 34) as &u16) = v31 + 1;
    *(v33 as &u128) = v5;
    *((v33 + 16) as &u64) = v6;
    *((v33 + 37) as &u8) = v25;
    *((v33 + 38) as &u8) = v26;
    *((v33 + 39) as &u8) = v27;
    return;
}
