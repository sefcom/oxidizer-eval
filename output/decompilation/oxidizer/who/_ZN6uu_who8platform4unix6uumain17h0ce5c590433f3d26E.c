fn uu_who::platform::unix::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x66c]
    let v1: u8;  // [bp-0x66b]
    let v2: u8;  // [bp-0x66a]
    let v3: u8;  // [bp-0x669]
    let v4: u8;  // [bp-0x668]
    let v5: u8;  // [bp-0x668]
    let v6: struct16;  // [bp-0x650], Other Possible Types: u64
    let v7: struct56;  // [bp-0x650], Other Possible Types: u64
    let v8: u128;  // [bp-0x648]
    let v9: void*;  // [bp-0x640]
    let v10: u8;  // [bp-0x618]
    let v11: struct64;  // [bp-0x600]
    let v12: struct56;  // [bp-0x5c0], Other Possible Types: struct712
    let v13: u64;  // [bp-0x5b8]
    let v14: struct39;  // [bp-0x2f8], Other Possible Types: struct712
    let v15: struct56;  // [bp-0x2f8]
    let v17: u64;  // rdi
    let v18: u64;  // rax
    let v19: u8;  // al
    let v20: u8;  // r12b
    let v21: u8;  // bpl
    let v22: u8;  // bl
    let v23: u32;  // ebx
    let v24: u64;  // r13
    let v25: u64;  // r15
    let v26: u64;  // rbp
    let v28: u8;  // r12b
    let v30: u8;  // cl

    v14 = uu_who::uu_app();
    uu_who::platform::unix::get_long_usage(&v10);
    v12 = clap_builder::builder::command::Command::after_help(&v14, &v10);
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v12, a0, a1);
    v17 = v8;
    if (((0 ^ v6.field_0) & (0 ^ -(v7))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
    }
    v12 = v7;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12);
    v11 = clap_builder::parser::error::MatchesError::unwrap(&v15);
    if v11.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v15, &v11);
        v18 = v15.field_0;
        v8 = *(&v15.field_8 as &i128);
        v6 = v18;
    }
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "lookup");
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "count");
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "all");
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "heading");
    if !v19 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "mesg");
        v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "boot");
        v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "dead");
        v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "login");
        v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "process");
        v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "time");
        if !v5 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "runlevel") && !v25 && !v26 && !v23 && !v24 {
            v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "users") ^ 1;
        }
        if !v24 {
            v21 = v28;
        }
    }
    v14 = struct39 {
        field_0: *(&v6 as &i128)
        field_16: v9
        field_24: v3
        field_25: v2
        field_26: v21
        field_27: v20
        field_28: v1
        field_29: v4 as u64
        field_37: v22
        field_38: v30
    };
    return uu_who::platform::unix::Who::exec(&v14);
}
