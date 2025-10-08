fn uu_truncate::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct712;  // [bp-0x830], Other Possible Types: struct640
    let v4: struct712;  // [bp-0x830]
    let v5: struct640;  // [bp-0x830]
    let v6: struct640;  // [bp-0x830]
    let v7: u32;  // [bp-0x5b8]
    let v8: u64;  // [bp-0x574]
    let v9: u32;  // [bp-0x56c]
    let v10: struct437;  // [bp-0x568], Other Possible Types: struct712, struct640
    let v11: u64;  // [bp-0x2ac]
    let v12: u32;  // [bp-0x2a4]
    let v13: struct640;  // [bp-0x2a0]
    let v16: u64;  // rdx

    v10 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    v3 = clap_builder::builder::command::Command::version(&v10);
    v10 = clap_builder::builder::command::Command::about(&v3);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v3 = clap_builder::builder::command::Command::override_usage(&v10, &v0);
    memcpy(&v10, &v3, 700);
    v11 = 549755814016 | v8;
    v12 = v9;
    v3 = clap_builder::builder::arg::Arg::new("io-blocks");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 111);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "io-blocks");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)");
    v13 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v10, &v13);
    v10 = clap_builder::builder::arg::Arg::new("no-create");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 99);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "no-create");
    v0 = clap_builder::builder::arg::Arg::help(&v10, "do not create files that do not exist");
    v13 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v10 = clap_builder::builder::command::Command::arg(&v3, &v13);
    v3 = clap_builder::builder::arg::Arg::new("reference");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 114);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "reference");
    v0 = clap_builder::builder::arg::Arg::required_unless_present(&v3, "size");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "base the size of each file on the size of RFILE");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "RFILE");
    v13 = clap_builder::builder::arg::Arg::value_hint(&v0);
    v4 = clap_builder::builder::command::Command::arg(&v10, &v13);
    v10 = clap_builder::builder::arg::Arg::new("size");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 115);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "size");
    v0 = clap_builder::builder::arg::Arg::required_unless_present(&v10, "reference");
    v10 = clap_builder::builder::arg::Arg::help(&v0, "set or adjust the size of each file according to SIZE, which is in bytes unless --io-blocks is specified");
    v0 = clap_builder::builder::arg::Arg::value_name(&v10, "SIZE");
    v10 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v5 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::value_name(&v5, "FILE");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 1);
    memcpy(&v0, &v6, 632);
    v1 = v7 | 1;
    v2 = v7;
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v10, &v3);
    return;
}
