fn uu_pinky::platform::unix::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x659]
    let v1: struct16;  // [bp-0x658], Other Possible Types: u64
    let v2: struct56;  // [bp-0x658], Other Possible Types: u64
    let v3: u128;  // [bp-0x650]
    let v4: void*;  // [bp-0x648]
    let v5: u8;  // [bp-0x620]
    let v6: struct64;  // [bp-0x608]
    let v7: struct712;  // [bp-0x5c8], Other Possible Types: u128
    let v8: struct56;  // [bp-0x5c8]
    let v9: void*;  // [bp-0x5b8]
    let v10: i8;  // [bp-0x5b0]
    let v11: i8;  // [bp-0x5af]
    let v12: i8;  // [bp-0x5ae]
    let v13: i8;  // [bp-0x5ad]
    let v14: i8;  // [bp-0x5ac]
    let v15: i8;  // [bp-0x5ab]
    let v16: i8;  // [bp-0x5aa]
    let v17: struct56;  // [bp-0x2f8], Other Possible Types: struct712
    let v18: u64;  // [bp-0x2f0]
    let v20: u64;  // rdi
    let v21: u64;  // rax
    let v22: u8;  // al
    let v23: u8;  // al
    let v24: u8;  // al
    let v25: u8;  // al
    let v26: u8;  // al
    let v27: u8;  // r12b
    let v28: u8;  // al
    let v29: u64;  // rax
    let v30: core::fmt::rt::Argument;  // rbx

    v7 = uu_pinky::uu_app();
    uu_pinky::platform::unix::get_long_usage(&v5);
    v17 = clap_builder::builder::command::Command::after_help(&v7, &v5);
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v17, a0, a1);
    v20 = v3;
    if (((0 ^ v1.field_0) & (0 ^ -(v2))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
    }
    v17 = v2;
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v17);
    v6 = clap_builder::parser::error::MatchesError::unwrap(&v8);
    if v6.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v8, &v6);
        v21 = v8.field_0;
        v3 = *(&v8.field_8 as &i128);
        v1 = v21;
    }
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, "omit_headings");
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, "omit_project_file");
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, "omit_plan_file");
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, "omit_home_dir");
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, "long_format");
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, "omit_name");
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, "omit_name_host");
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, "omit_name_host_time");
    v9 = v4;
    v7 = *(&v1 as &i128);
    v10 = v28 ^ 1;
    v11 = v22 ^ 1;
    v12 = (v27 | v28 | v26) ^ 1;
    v13 = v23 ^ 1;
    v14 = v24 ^ 1;
    v15 = (v27 | v28) ^ 1;
    v16 = v25 ^ 1;
    if v0 {
        uu_pinky::platform::unix::Pinky::long_pinky(&v8);
    } else {
        v29 = uu_pinky::platform::unix::Pinky::short_pinky(&v8);
        if v29 {
            v30 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v29);
        }
    }
    return v30;
}
