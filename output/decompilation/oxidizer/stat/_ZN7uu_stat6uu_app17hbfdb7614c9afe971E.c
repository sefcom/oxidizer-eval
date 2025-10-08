fn uu_stat::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v2: u64;  // [bp-0x574]
    let v3: u32;  // [bp-0x56c]
    let v4: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v5: u64;  // [bp-0x2ac]
    let v6: u32;  // [bp-0x2a4]
    let v7: struct16;  // [bp-0x2a0], Other Possible Types: struct640
    let v10: u64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v4 = clap_builder::builder::command::Command::version(&v1);
    v1 = clap_builder::builder::command::Command::about(&v4);
    v0 = uucore::format_usage("{} [OPTION]... FILE...");
    v4 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | v5;
    v3 = v6;
    v4 = clap_builder::builder::arg::Arg::new("dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 76);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "dereference");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "follow links");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("file-system");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 102);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "file-system");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "display file system status instead of file status");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("terse");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 116);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "terse");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "print the information in terse form");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("format");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 99);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "format");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "use the specified FORMAT instead of the default;\n output a newline after each use of FORMAT");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("printf");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "printf");
    v4 = clap_builder::builder::arg::Arg::value_name(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "like --format, but interpret backslash escapes,\n            and do not output a mandatory trailing newline;\n            if you want a newline, include \n in FORMAT");
    v4 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v7 = 2;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v1);
    clap_builder::builder::command::Command::arg(a0, &v4, &v0);
    return;
}
