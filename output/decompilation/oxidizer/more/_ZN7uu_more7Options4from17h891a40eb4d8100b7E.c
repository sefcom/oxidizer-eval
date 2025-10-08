fn uu_more::Options::from(a1: &struct56) -> : struct40 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x86]
    let v1: u8;  // [bp-0x85]
    let v2: u32;  // [bp-0x84]
    let v4: i64;  // [bp-0x78]
    let v5: alloc::string::String;  // [bp-0x70]
    let v7: u64;  // [bp-0x60]
    let v8: Result<struct40, struct16>;  // [bp-0x58]
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
    let v20: i16;  // r14w
    let v21: i64;  // rax
    let v23: i64;  // r12
    let v24: u64;  // rax
    let v25: u8;  // al
    let v26: u8;  // al
    let v27: i16;  // si
    let v28: u16;  // cx
    let v29: i16;  // si
    let v30: void*;  // rsi

    v13 = v15;
    v12 = v16;
    v11 = v17;
    v10 = v18;
    v9 = v19;
    v20 = 62747;
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "lines");
    v4 = clap_builder::parser::error::MatchesError::unwrap("lines", &v8);
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "number");
    v21 = clap_builder::parser::error::MatchesError::unwrap("number", &v8);
    v2 = v21 as u32;
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
    v23 = clap_builder::parser::error::MatchesError::unwrap(&v8);
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
    v24 = clap_builder::parser::error::MatchesError::unwrap(&v8);
    if v24 {
        v5 = <alloc::string::String as core::clone::Clone>::clone(v24);
    }
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "clean-print");
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "print-over");
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "silent");
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "squeeze");
    v27 = v2;
    if !v4 {
        v29 = v27;
    } else {
        v29 = v20;
    }
    return struct40 {
        field_0: *(&v5.vec.buf.inner.cap as &i128)
        field_16: v7
        field_24: v30
        field_32: v28
        field_34: v29 + 1
        field_36: v1
        field_37: v0
        field_38: v25
        field_39: v26
    };
}
