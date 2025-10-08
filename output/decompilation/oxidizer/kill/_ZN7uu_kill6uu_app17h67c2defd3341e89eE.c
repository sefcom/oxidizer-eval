fn uu_kill::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct32;  // [bp-0xab8], Other Possible Types: struct712, struct640
    let v1: u32;  // [bp-0x7fc]
    let v2: u64;  // [bp-0x7f8]
    let v3: struct437;  // [bp-0x7f0], Other Possible Types: struct712, struct640
    let v4: struct712;  // [bp-0x7f0]
    let v5: struct640;  // [bp-0x7f0]
    let v6: u32;  // [bp-0x578]
    let v7: u32;  // [bp-0x534]
    let v8: u64;  // [bp-0x530]
    let v9: struct24;  // [bp-0x528], Other Possible Types: struct640
    let v10: u32;  // [bp-0x2b0]
    let v11: u32;  // [bp-0x2ac]
    let v12: struct640;  // [bp-0x2a8]
    let v15: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v15);
    v0 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v0);
    v9 = uucore::format_usage("{} [OPTIONS]... PID...");
    v0 = clap_builder::builder::command::Command::override_usage(&v3, &v9);
    memcpy(&v3, &v0, 700);
    v7 = 132 | v1;
    v8 = 128 | v2;
    v0 = clap_builder::builder::arg::Arg::new("list");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 108);
    v0 = clap_builder::builder::arg::Arg::long(&v9, "list");
    v9 = clap_builder::builder::arg::Arg::help(&v0, "Lists signals");
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v9);
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("table");
    v9 = clap_builder::builder::arg::Arg::short(&v3, 116);
    v3 = clap_builder::builder::arg::Arg::short_alias(&v9, 76);
    v9 = clap_builder::builder::arg::Arg::long(&v3, "table");
    v3 = clap_builder::builder::arg::Arg::help(&v9, "Lists table of signals");
    v9 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::new("signal");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::short_alias(&v9, 110);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "signal");
    v0 = clap_builder::builder::arg::Arg::value_name(&v9);
    v9 = clap_builder::builder::arg::Arg::help(&v0, "Sends given signal instead of SIGTERM");
    v0 = struct32 {
        field_0: "list"
        field_16: "table"
    };
    v12 = clap_builder::builder::arg::Arg::conflicts_with_all(&v9, &v0);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v12);
    v5 = clap_builder::builder::arg::Arg::new("pids_or_signals");
    memcpy(&v9, &v5, 632);
    v10 = v6 | 4;
    v11 = v6;
    v3 = clap_builder::builder::arg::Arg::action(&v9, 1);
    clap_builder::builder::command::Command::arg(a0, &v0, &v3);
    return;
}
