fn uu_expand::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct712;  // [bp-0x830], Other Possible Types: struct640
    let v4: u32;  // [bp-0x5b8]
    let v5: u32;  // [bp-0x5b4]
    let v6: u64;  // [bp-0x574]
    let v7: u32;  // [bp-0x56c]
    let v8: struct437;  // [bp-0x568], Other Possible Types: struct640, struct712
    let v9: u64;  // [bp-0x2ac]
    let v10: u32;  // [bp-0x2a4]
    let v11: struct640;  // [bp-0x2a0]
    let v14: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    v3 = clap_builder::builder::command::Command::version(&v8);
    v8 = clap_builder::builder::command::Command::about(&v3);
    v3 = clap_builder::builder::command::Command::after_help(&v8);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v8 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 584115552392 | v9;
    v7 = v10;
    v8 = clap_builder::builder::arg::Arg::new("initial");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "initial");
    v8 = clap_builder::builder::arg::Arg::short(&v0, 105);
    v0 = clap_builder::builder::arg::Arg::help(&v8, "do not convert tabs after non blanks");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("tabs");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "tabs");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 116);
    v0 = clap_builder::builder::arg::Arg::value_name(&v3);
    v3 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "have tabs N characters apart, not 8 or use comma separated list of explicit tab positions");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("no-utf8");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "no-utf8");
    v8 = clap_builder::builder::arg::Arg::short(&v0, 85);
    v0 = clap_builder::builder::arg::Arg::help(&v8, "interpret input file as 8-bit ASCII rather than UTF-8");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("FILES");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 1);
    memcpy(&v3, &v0, 632);
    v4 = v1 | 4;
    v5 = v2;
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3);
    clap_builder::builder::command::Command::arg(a0, &v8, &v0);
    return;
}
