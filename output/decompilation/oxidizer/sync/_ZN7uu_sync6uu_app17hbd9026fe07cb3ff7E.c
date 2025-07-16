fn uu_sync::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0x800]
    let v1: alloc::string::String;  // [bp-0x544]
    let v2: u32;  // [bp-0x53c]
    let v3: u8;  // [bp-0x538]
    let v4: u8;  // [bp-0x2e8]
    let v5: u64;  // [bp-0x2c]
    let v6: i8;  // [bp-0x24]
    let v9: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    clap_builder::builder::command::Command::version(&v4, &v0);
    clap_builder::builder::command::Command::about(&v0, &v4);
    uucore::format_usage(&v3, "{} [OPTION]... FILE...");
    clap_builder::builder::command::Command::override_usage(&v4, &v0, &v3);
    memcpy(&v0, &v4, 700);
    v1 = 549755814016 | v5;
    v2 = *(&v6 as &i32);
    clap_builder::builder::arg::Arg::new(&v4, "file-system");
    clap_builder::builder::arg::Arg::short(&v3, &v4, 102);
    clap_builder::builder::arg::Arg::long(&v4, &v3, "file-system");
    clap_builder::builder::arg::Arg::conflicts_with(&v3, &v4, "data");
    clap_builder::builder::arg::Arg::help(&v4, &v3, "sync the file systems that contain the files (Linux and Windows only)");
    clap_builder::builder::arg::Arg::action(&v3, &v4, 2);
    clap_builder::builder::command::Command::arg(&v4, &v0, &v3);
    clap_builder::builder::arg::Arg::new(&v0, "data");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 100);
    clap_builder::builder::arg::Arg::long(&v0, &v3, "data");
    clap_builder::builder::arg::Arg::conflicts_with(&v3, &v0, "file-system");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "sync only file data, no unneeded metadata (Linux only)");
    clap_builder::builder::arg::Arg::action(&v3, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v4, &v3);
    clap_builder::builder::arg::Arg::new(&v4, "files");
    clap_builder::builder::arg::Arg::action(&v3, &v4, 1);
    clap_builder::builder::arg::Arg::value_hint(&v4, &v3);
    clap_builder::builder::command::Command::arg(a0, &v0, &v4);
    return a0;
}
