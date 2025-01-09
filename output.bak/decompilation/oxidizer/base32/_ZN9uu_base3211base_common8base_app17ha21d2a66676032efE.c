fn uu_base32::base_common::base_app(a0: &struct712, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x838]
    let v1: i64;  // [sp-0x830]
    let v2: i8;  // [bp-0x828]
    let v3: i5696;  // [sp-0x810], Other Possible Types: struct592, struct712
    let v4: i64;  // [sp-0x808]
    let v5: i64;  // [sp-0x800]
    let v6: i64;  // [sp-0x7f8]
    let v7: i64;  // [sp-0x7f0]
    let v8: i192;  // [sp-0x548], Other Possible Types: struct592, struct24
    let v9: i4736;  // [sp-0x2f8], Other Possible Types: struct592, struct712, struct437
    let v10: i64;  // [sp-0x3c]
    let v11: i32;  // [sp-0x34]
    let v13: i64;  // rdx

    v9 = clap_builder::builder::command::Command::new(uucore::util_name(), v13);
    v3 = clap_builder::builder::command::Command::version(&v9, "0.0.28");
    v9 = clap_builder::builder::command::Command::about(&v3, a1, a2);
    v8 = uucore::format_usage(a3, a4);
    v3 = clap_builder::builder::command::Command::override_usage(&v9, &v8);
    memcpy(&v9, &v3, 700);
    v10 = 549755814016 | *((&v3 as &char + 700) as &i64);
    v11 = *((&v3 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("decode");
    v8 = clap_builder::builder::arg::Arg::short(&v3, 0x64);
    v3 = clap_builder::builder::arg::Arg::long(&v8, "decode");
    v8 = clap_builder::builder::arg::Arg::help(&v3, "decode data");
    v3 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v8 = clap_builder::builder::arg::Arg::overrides_with(&v3, "decode");
    v3 = clap_builder::builder::command::Command::arg(&v9, &v8);
    v9 = clap_builder::builder::arg::Arg::new("ignore-garbage");
    v8 = clap_builder::builder::arg::Arg::short(&v9, 0x69);
    v9 = clap_builder::builder::arg::Arg::long(&v8, "ignore-garbage");
    v8 = clap_builder::builder::arg::Arg::help(&v9, "when decoding, ignore non-alphabetic characters");
    v9 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v8 = clap_builder::builder::arg::Arg::overrides_with(&v9, "ignore-garbage");
    v9 = clap_builder::builder::command::Command::arg(&v3, &v8);
    v3 = clap_builder::builder::arg::Arg::new("wrap");
    v8 = clap_builder::builder::arg::Arg::short(&v3, 0x77);
    v3 = clap_builder::builder::arg::Arg::long(&v8, "wrap");
    v8 = clap_builder::builder::arg::Arg::value_name(&v3);
    v0 = &g_40c310;
    v1 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v3 = "wrap encoded lines after COLS character (default ";
    v4 = 2;
    v7 = 0;
    v5 = &v0;
    v6 = 1;
    core::option::Option<T>::map_or_else();
    v3 = clap_builder::builder::arg::Arg::help(&v8, &v2);
    v8 = clap_builder::builder::arg::Arg::overrides_with(&v3, "wrap");
    v3 = clap_builder::builder::command::Command::arg(&v9, &v8);
    v9 = clap_builder::builder::arg::Arg::new("file");
    v8 = clap_builder::builder::arg::Arg::index(&v9);
    v9 = clap_builder::builder::arg::Arg::action(&v8, 0x1);
    v8 = clap_builder::builder::arg::Arg::value_hint(&v9, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v3, &v8);
    return a0;
}
