fn uu_base32::base_common::base_app(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: u64;  // [bp-0xae0]
    let v1: alloc::string::String;  // [bp-0xad8]
    let v2: struct712;  // [bp-0xac0], Other Possible Types: struct640
    let v3: u64;  // [bp-0x804]
    let v4: u32;  // [bp-0x7fc]
    let v5: struct24;  // [bp-0x7f8], Other Possible Types: struct640
    let v6: struct437;  // [bp-0x578], Other Possible Types: struct712, struct640
    let v7: u64;  // [bp-0x2bc]
    let v8: u32;  // [bp-0x2b4]
    let v9: struct640;  // [bp-0x2b0]

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), a2);
    v2 = clap_builder::builder::command::Command::version(&v6);
    v6 = clap_builder::builder::command::Command::about(&v2, a1, a2);
    v5 = uucore::format_usage(a3, a4);
    v2 = clap_builder::builder::command::Command::override_usage(&v6, &v5);
    memcpy(&v6, &v2, 700);
    v7 = 549755814016 | v3;
    v8 = v4;
    v2 = clap_builder::builder::arg::Arg::new("decode");
    v5 = clap_builder::builder::arg::Arg::short(&v2, 100);
    v2 = clap_builder::builder::arg::Arg::visible_short_alias(&v5);
    v5 = clap_builder::builder::arg::Arg::long(&v2, "decode");
    v2 = clap_builder::builder::arg::Arg::help(&v5, "decode data");
    v5 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v9 = clap_builder::builder::arg::Arg::overrides_with(&v5, "decode");
    v2 = clap_builder::builder::command::Command::arg(&v6, &v9);
    v6 = clap_builder::builder::arg::Arg::new("ignore-garbage");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 105);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "ignore-garbage");
    v5 = clap_builder::builder::arg::Arg::help(&v6, "when decoding, ignore non-alphabetic characters");
    v6 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v5 = clap_builder::builder::arg::Arg::overrides_with(&v6, "ignore-garbage");
    v6 = clap_builder::builder::command::Command::arg(&v2, &v5);
    v2 = clap_builder::builder::arg::Arg::new("wrap");
    v5 = clap_builder::builder::arg::Arg::short(&v2, 119);
    v2 = clap_builder::builder::arg::Arg::long(&v5, "wrap");
    v5 = clap_builder::builder::arg::Arg::value_name(&v2);
    v1 = format!("wrap encoded lines after COLS character (default {}, 0 to disable wrapping)", &g_419470);
    v2 = clap_builder::builder::arg::Arg::help(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::overrides_with(&v2, "wrap");
    v2 = clap_builder::builder::command::Command::arg(&v6, &v5);
    v6 = clap_builder::builder::arg::Arg::new("file");
    v5 = clap_builder::builder::arg::Arg::index(&v6);
    v6 = clap_builder::builder::arg::Arg::action(&v5, 1);
    v5 = clap_builder::builder::arg::Arg::value_hint(&v6);
    clap_builder::builder::command::Command::arg(v0, &v2, &v5);
    return a0;
}
