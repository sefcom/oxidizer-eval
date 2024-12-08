fn uu_base32::base_common::base_app(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i192;  // [sp-0x828]
    let v1: i4736;  // [sp-0x810], Other Possible Types: struct592, struct712
    let v2: i4736;  // [sp-0x548], Other Possible Types: struct592, struct24
    let v3: i4736;  // [sp-0x2f8], Other Possible Types: struct592, struct712, struct437
    let v5: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v1 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v3 = clap_builder::builder::command::Command::about(&v1, a1, a2);
    v2 = uucore::format_usage(a3, a4);
    v1 = clap_builder::builder::command::Command::override_usage(&v3, &v2);
    memcpy(&v3, &v1, 700);
    v3.700 = 549755814016 | (stack_base)[1364] as i64;
    v3.708 = (stack_base)[1356] as i32;
    v1 = clap_builder::builder::arg::Arg::new("decode");
    v2 = clap_builder::builder::arg::Arg::short(&v1, 100);
    v1 = clap_builder::builder::arg::Arg::long(&v2, "decode");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "decode data");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v1, "decode");
    v1 = clap_builder::builder::command::Command::arg(&v3, &v2);
    v3 = clap_builder::builder::arg::Arg::new("ignore-garbage");
    v2 = clap_builder::builder::arg::Arg::short(&v3, 105);
    v3 = clap_builder::builder::arg::Arg::long(&v2, "ignore-garbage");
    v2 = clap_builder::builder::arg::Arg::help(&v3, "when decoding, ignore non-alphabetic characters");
    v3 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v3, "ignore-garbage");
    v3 = clap_builder::builder::command::Command::arg(&v1, &v2);
    v1 = clap_builder::builder::arg::Arg::new("wrap");
    v2 = clap_builder::builder::arg::Arg::short(&v1, 119);
    v1 = clap_builder::builder::arg::Arg::long(&v2, "wrap");
    v2 = clap_builder::builder::arg::Arg::value_name(&v1, v5);
    v0 = format!("wrap encoded lines after COLS character (default {:?}, 0 to disable wrapping)", &g_40c310);
    v1 = clap_builder::builder::arg::Arg::help(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v1, "wrap");
    v1 = clap_builder::builder::command::Command::arg(&v3, &v2);
    v3 = clap_builder::builder::arg::Arg::new("file");
    v2 = clap_builder::builder::arg::Arg::index(&v3);
    v3 = clap_builder::builder::arg::Arg::action(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::value_hint(&v3, 3);
    clap_builder::builder::command::Command::arg(a0, &v1, &v2);
    return a0;
}
