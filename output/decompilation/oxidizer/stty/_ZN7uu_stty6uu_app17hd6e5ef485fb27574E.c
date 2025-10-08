fn uu_stty::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct712;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u64;  // [bp-0x7f4]
    let v2: u32;  // [bp-0x7ec]
    let v3: struct24;  // [bp-0x7e8], Other Possible Types: struct640
    let v4: struct437;  // [bp-0x568], Other Possible Types: struct712, struct640
    let v5: u64;  // [bp-0x2ac]
    let v6: u32;  // [bp-0x2a4]
    let v7: struct640;  // [bp-0x2a0]
    let v10: u64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v0 = clap_builder::builder::command::Command::version(&v4);
    v3 = uucore::format_usage("{} [-F DEVICE | --file=DEVICE] [SETTING]...\n{} [-F DEVICE | --file=DEVICE] [-a|--all]\n{} [-F DEVICE | --file=DEVICE] [-g|--save]");
    v4 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    v0 = clap_builder::builder::command::Command::about(&v4);
    memcpy(&v4, &v0, 700);
    v5 = 549755814016 | v1;
    v6 = v2;
    v0 = clap_builder::builder::arg::Arg::new("all");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 97);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "all");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "print all current settings in human-readable form");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("save");
    v3 = clap_builder::builder::arg::Arg::short(&v4, 103);
    v4 = clap_builder::builder::arg::Arg::long(&v3, "save");
    v3 = clap_builder::builder::arg::Arg::help(&v4, "print all current settings in a stty-readable form");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("file");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 70);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "file");
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0);
    v0 = clap_builder::builder::arg::Arg::value_name(&v3);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "open and use the specified DEVICE instead of stdin");
    v0 = clap_builder::builder::command::Command::arg(&v4, &v3);
    v4 = clap_builder::builder::arg::Arg::new("settings");
    v3 = clap_builder::builder::arg::Arg::action(&v4, 1);
    v4 = clap_builder::builder::arg::Arg::help(&v3, "settings to change");
    clap_builder::builder::command::Command::arg(a0, &v0, &v4);
    return;
}
