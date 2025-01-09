fn uu_more::Options::from(a0: &struct40, a1: &struct56) -> int {
    let v0: i8;  // [sp-0x91]
    let v1: i32;  // [sp-0x90]
    let v2: i32;  // [sp-0x8c]
    let v3: i64;  // [sp-0x88]
    let v4: i64;  // [sp-0x80]
    let v5: i128;  // [sp-0x78], Other Possible Types: Result<struct40, struct8>
    let v6: i64;  // [sp-0x68]
    let v7: i192;  // [sp-0x48], Other Possible Types: struct24
    let v8: i64;  // [sp-0x30]
    let v9: i64;  // [sp-0x28]
    let v10: i64;  // [sp-0x20]
    let v11: i64;  // [sp-0x18]
    let v12: i64;  // [sp-0x10]
    let v14: i64;  // r15
    let v15: i64;  // r14
    let v16: i64;  // r13
    let v17: i64;  // r12
    let v18: i64;  // rbx
    let v19: i64;  // rax
    let v20: i64;  // rax
    let v21: i64;  // r12
    let v22: i64;  // r13
    let v23: i64;  // rax

    v12 = v14;
    v11 = v15;
    v10 = v16;
    v9 = v17;
    v8 = v18;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "lines");
    v19 = clap_builder::parser::error::MatchesError::unwrap("lines", &v5);
    v4 = v19;
    if v19 {
        v19 = *(v19 as &i16);
    }
    v2 = v19;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "number");
    v20 = clap_builder::parser::error::MatchesError::unwrap("number", &v5);
    v21 = v20;
    if v21 {
        v20 = *(v21 as &i16);
    }
    v1 = v20;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "from-line");
    v22 = clap_builder::parser::error::MatchesError::unwrap("from-line", &v5);
    if v22 {
        v3 = *(v22 as &i64);
    }
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "pattern");
    v23 = clap_builder::parser::error::MatchesError::unwrap("pattern", &v5);
    if !v23 {
        v7 = 0x8000000000000000;
    } else {
        v7 = <alloc::string::String as core::clone::Clone>::clone(v23);
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "clean-print") as i8;
    v6 = *((&v7 as &char + 16) as &i64);
    v5 = v7;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "print-over");
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "silent");
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "squeeze");
    return struct40 {
        field_0: v5
        field_16: v6
        field_24: v34
        field_32: v30
        field_34: v31 + 1
        field_36: v0
        field_37: v25
        field_38: v26
        field_39: v27
    };
}
