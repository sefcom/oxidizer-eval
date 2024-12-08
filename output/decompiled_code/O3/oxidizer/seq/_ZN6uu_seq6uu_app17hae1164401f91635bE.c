fn uu_seq::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [bp-0xa48], Other Possible Types: struct592, struct712
    let v1: i32;  // [sp-0x78c]
    let v2: i64;  // [sp-0x788]
    let v3: i4736;  // [sp-0x780], Other Possible Types: struct712, struct592, struct437
    let v4: i8;  // [bp-0x4c4]
    let v5: i8;  // [bp-0x4c0]
    let v6: i4736;  // [sp-0x4b8], Other Possible Types: struct592, struct24
    let v7: struct592;  // [sp-0x268], Other Possible Types: i4736, struct17
    let v9: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    memcpy(&v0, &v3, 700);
    v1 = 164 | v4;
    v2 = 128 | v5;
    v3 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v3, "Display numbers from FIRST to LAST, in steps of INCREMENT.");
    v6 = uucore::format_usage(&g_423ecb, 81);
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("separator");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::long(&v6, "separator");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "Separator character (defaults to \\n)");
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("terminator");
    v6 = clap_builder::builder::arg::Arg::short(&v3, 116);
    v3 = clap_builder::builder::arg::Arg::long(&v6, "terminator");
    v6 = clap_builder::builder::arg::Arg::help(&v3, "Terminator character (defaults to \\n)");
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("equal-width");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 119);
    v0 = clap_builder::builder::arg::Arg::long(&v6, "equal-width");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "Equalize widths of all numbers by padding with zeros");
    v7 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("format");
    v6 = clap_builder::builder::arg::Arg::short(&v3, 102);
    v3 = clap_builder::builder::arg::Arg::long(&v6, "format");
    v6 = clap_builder::builder::arg::Arg::help(&v3, "use printf style floating-point FORMAT");
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("numbers");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v7 = struct17 {
        field_0: 1
        field_8: 3
        field_16: 0
    };
    v0 = clap_builder::builder::arg::Arg::num_args(&v6, &v7);
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return a0;
}
