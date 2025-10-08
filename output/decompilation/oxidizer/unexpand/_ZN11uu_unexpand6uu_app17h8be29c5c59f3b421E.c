fn uu_unexpand::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct712;  // [bp-0x830], Other Possible Types: struct640
    let v4: struct712;  // [bp-0x830]
    let v5: struct712;  // [bp-0x830]
    let v6: u32;  // [bp-0x5b8]
    let v7: u64;  // [bp-0x574]
    let v8: u32;  // [bp-0x56c]
    let v9: struct437;  // [bp-0x568], Other Possible Types: struct712, struct640
    let v10: u64;  // [bp-0x2ac]
    let v11: u32;  // [bp-0x2a4]
    let v12: struct640;  // [bp-0x2a0]
    let v15: u64;  // rdx

    v9 = clap_builder::builder::command::Command::new(uucore::util_name(), v15);
    v4 = clap_builder::builder::command::Command::version(&v9);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v9 = clap_builder::builder::command::Command::override_usage(&v4, &v0);
    v5 = clap_builder::builder::command::Command::about(&v9);
    memcpy(&v9, &v5, 700);
    v10 = 549755814016 | v7;
    v11 = v8;
    v3 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v0, &v3, 632);
    v1 = v6 | 4;
    v2 = v6;
    v3 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v0);
    v9 = clap_builder::builder::arg::Arg::new("all");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 97);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "all");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "convert all blanks, instead of just initial blanks");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("first-only");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "first-only");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "convert only leading sequences of blanks (overrides -a)");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v0);
    v9 = clap_builder::builder::arg::Arg::new("tabs");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 116);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "tabs");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "use comma separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_name(&v9);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("no-utf8");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 85);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "no-utf8");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "interpret input file as 8-bit ASCII rather than UTF-8");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    clap_builder::builder::command::Command::arg(a0, &v9, &v3);
    return;
}
