fn uu_truncate::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: u32;  // [bp-0x7fc]
    let v3: u8;  // [bp-0x7f8]
    let v4: u32;  // [bp-0x5b0]
    let v5: i8;  // [bp-0x5ac]
    let v6: u64;  // [bp-0x53c]
    let v7: u32;  // [bp-0x534]
    let v8: struct437;  // [bp-0x530]
    let v9: u64;  // [bp-0x274]
    let v10: u32;  // [bp-0x26c]
    let v11: u8;  // [bp-0x268]
    let v14: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v3, &v8, "0.0.28");
    clap_builder::builder::command::Command::about(&v8, &v3, "Shrink or extend the size of each file to the specified size.");
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v3, &v8, &v0);
    memcpy(&v8, &v3, 700);
    v9 = 549755814016 | v6;
    v10 = v7;
    clap_builder::builder::arg::Arg::new(&v3, "io-blocks");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 111);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "io-blocks");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "no-create");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 99);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "no-create");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "do not create files that do not exist");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "reference");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 114);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "reference");
    clap_builder::builder::arg::Arg::required_unless_present(&v0, &v3, "size");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "base the size of each file on the size of RFILE");
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "RFILE");
    clap_builder::builder::arg::Arg::value_hint(&v11, &v0, 3);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "size");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 115);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "size");
    clap_builder::builder::arg::Arg::required_unless_present(&v0, &v8, "reference");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "set or adjust the size of each file according to SIZE, which is in bytes unless --io-blocks is specified");
    clap_builder::builder::arg::Arg::value_name(&v0, &v8, "SIZE");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "files");
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "FILE");
    clap_builder::builder::arg::Arg::action(&v3, &v0, 1);
    memcpy(&v0, &v3, 584);
    v1 = v4 | 1;
    v2 = *(&v5 as &i32);
    clap_builder::builder::arg::Arg::value_hint(&v3, &v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v8, &v3);
    return a0;
}
