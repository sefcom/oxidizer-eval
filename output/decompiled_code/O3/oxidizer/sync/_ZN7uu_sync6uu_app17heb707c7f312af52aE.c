fn uu_sync::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i5696;  // [sp-0x800], Other Possible Types: struct592, struct712, struct437
    let v1: i192;  // [sp-0x538], Other Possible Types: struct592, struct24
    let v2: i5696;  // [sp-0x2e8], Other Possible Types: struct592, struct712
    let v4: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v4);
    v2 = clap_builder::builder::command::Command::version(&v0, v4);
    v0 = clap_builder::builder::command::Command::about(&v2);
    v1 = uucore::format_usage("{} [OPTION]... FILE...");
    v2 = clap_builder::builder::command::Command::override_usage(&v0, &v1);
    memcpy(&v0, &v2, 700);
    v0.700 = 549755814016 | (stack_base)[44] as i64;
    v0.708 = (stack_base)[36] as i32;
    v2 = clap_builder::builder::arg::Arg::new("file-system");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 102);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "file-system");
    clap_builder::builder::arg::Arg::conflicts_with(&v1, &v2, "data");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "sync the file systems that contain the files (Linux and Windows only)");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("data");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 100);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "data");
    clap_builder::builder::arg::Arg::conflicts_with(&v1, &v0, "file-system");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "sync only file data, no unneeded metadata (Linux only)");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("files");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::value_hint(&v1);
    clap_builder::builder::command::Command::arg(a0, &v0, &v2);
    return a0;
}
