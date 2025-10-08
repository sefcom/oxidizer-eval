fn uu_sum::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct712;  // [bp-0x830], Other Possible Types: struct640
    let v1: u32;  // [bp-0x5b8]
    let v2: u32;  // [bp-0x5b4]
    let v3: u64;  // [bp-0x574]
    let v4: u32;  // [bp-0x56c]
    let v5: struct24;  // [bp-0x568], Other Possible Types: struct640
    let v6: u32;  // [bp-0x2f0]
    let v7: u32;  // [bp-0x2ec]
    let v8: struct437;  // [bp-0x2e8], Other Possible Types: struct640, struct712
    let v9: u64;  // [bp-0x2c]
    let v10: u32;  // [bp-0x24]
    let v13: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v13);
    v0 = clap_builder::builder::command::Command::version(&v8);
    v5 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v8 = clap_builder::builder::command::Command::override_usage(&v0, &v5);
    v0 = clap_builder::builder::command::Command::about(&v8);
    memcpy(&v8, &v0, 700);
    v9 = 549755814016 | v3;
    v10 = v4;
    v0 = clap_builder::builder::arg::Arg::new("file");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 1);
    memcpy(&v0, &v5, 632);
    v1 = v6 | 4;
    v2 = v7;
    v5 = clap_builder::builder::arg::Arg::value_hint(&v0);
    v0 = clap_builder::builder::command::Command::arg(&v8, &v5);
    v8 = clap_builder::builder::arg::Arg::new("r");
    v5 = clap_builder::builder::arg::Arg::short(&v8, 114);
    v8 = clap_builder::builder::arg::Arg::help(&v5, "use the BSD sum algorithm, use 1K blocks (default)");
    v5 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v8 = clap_builder::builder::command::Command::arg(&v0, &v5);
    v0 = clap_builder::builder::arg::Arg::new("sysv");
    v5 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::long(&v5);
    v5 = clap_builder::builder::arg::Arg::help(&v0, "use System V sum algorithm, use 512 bytes blocks");
    v0 = clap_builder::builder::arg::Arg::action(&v5, 2);
    clap_builder::builder::command::Command::arg(a0, &v8, &v0);
    return;
}
