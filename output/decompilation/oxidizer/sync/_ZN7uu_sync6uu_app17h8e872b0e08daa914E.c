fn uu_sync::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v1: u64;  // [bp-0x574]
    let v2: u32;  // [bp-0x56c]
    let v3: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v4: u64;  // [bp-0x2ac]
    let v5: u32;  // [bp-0x2a4]
    let v6: struct24;  // [bp-0x2a0], Other Possible Types: struct640
    let v9: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v3 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v3);
    v6 = uucore::format_usage("{} [OPTION]... FILE...");
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | v4;
    v2 = v5;
    v3 = clap_builder::builder::arg::Arg::new("file-system");
    v6 = clap_builder::builder::arg::Arg::short(&v3, 102);
    v3 = clap_builder::builder::arg::Arg::long(&v6, "file-system");
    v6 = clap_builder::builder::arg::Arg::conflicts_with(&v3, "data");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "sync the file systems that contain the files (Linux and Windows only)");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("data");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 100);
    v0 = clap_builder::builder::arg::Arg::long(&v6, "data");
    v6 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "file-system");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "sync only file data, no unneeded metadata (Linux only)");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("files");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v6);
    clap_builder::builder::command::Command::arg(a0, &v0, &v3);
    return;
}
