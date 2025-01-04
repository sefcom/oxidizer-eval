fn uu_truncate::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i32;  // [sp-0x800]
    let v2: i32;  // [sp-0x7fc]
    let v3: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712
    let v4: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v5: i64;  // [sp-0x274]
    let v6: i32;  // [sp-0x26c]
    let v7: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v9: i64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v3 = clap_builder::builder::command::Command::version(&v4, "0.0.28");
    v4 = clap_builder::builder::command::Command::about(&v3, "Shrink or extend the size of each file to the specified size.");
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v3 = clap_builder::builder::command::Command::override_usage(&v4, &v0);
    memcpy(&v4, &v3, 700);
    v5 = 549755814016 | *((&v3 as &char + 700) as &i64);
    v6 = *((&v3 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("io-blocks");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x6f);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "io-blocks");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("no-create");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x63);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "no-create");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "do not create files that do not exist");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("reference");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x72);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "reference");
    v0 = clap_builder::builder::arg::Arg::required_unless_present(&v3, "size");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "base the size of each file on the size of RFILE");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "RFILE");
    v7 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("size");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x73);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "size");
    v0 = clap_builder::builder::arg::Arg::required_unless_present(&v4, "reference");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "set or adjust the size of each file according to SIZE, which is in bytes unless --io-blocks is specified");
    v0 = clap_builder::builder::arg::Arg::value_name(&v4, "SIZE");
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "FILE");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    memcpy(&v0, &v3, 584);
    v1 = *((&v3 as &char + 584) as &i32) | 1;
    v2 = *((&v3 as &char + 588) as &i32);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v4, &v3);
    return a0;
}
