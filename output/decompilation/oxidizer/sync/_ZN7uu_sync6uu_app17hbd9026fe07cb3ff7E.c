fn uu_sync::uu_app(a0: &struct712) -> u64 {
    let v0: struct592;  // [sp-0x800], Other Possible Types: struct712, struct437
    let v1: i64;  // [sp-0x544]
    let v2: i32;  // [sp-0x53c]
    let v3: struct592;  // [sp-0x538], Other Possible Types: struct24
    let v4: struct592;  // [sp-0x2e8], Other Possible Types: struct712
    let v6: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v6);
    v4 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v4);
    v3 = uucore::format_usage("{} [OPTION]... FILE...");
    v4 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    memcpy(&v0, &v4, 700);
    v1 = 549755814016 | *((&v4.field_0 as &char + 700) as &i64);
    v2 = *((&v4.field_0 as &char + 708) as &i32);
    v4 = clap_builder::builder::arg::Arg::new("file-system");
    v3 = clap_builder::builder::arg::Arg::short(&v4, 0x66);
    v4 = clap_builder::builder::arg::Arg::long(&v3, "file-system");
    v3 = clap_builder::builder::arg::Arg::conflicts_with(&v4, "data");
    v4 = clap_builder::builder::arg::Arg::help(&v3, "sync the file systems that contain the files (Linux and Windows only)");
    v3 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("data");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x64);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "data");
    v3 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "file-system");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "sync only file data, no unneeded metadata (Linux only)");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v3);
    v4 = clap_builder::builder::arg::Arg::new("files");
    v3 = clap_builder::builder::arg::Arg::action(&v4, 0x1);
    v4 = clap_builder::builder::arg::Arg::value_hint(&v3);
    clap_builder::builder::command::Command::arg(a0, &v0, &v4);
    return a0;
}
