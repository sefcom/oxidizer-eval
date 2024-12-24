fn uu_truncate::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v3: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v5: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v1 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v2 = clap_builder::builder::command::Command::about(&v1, "Shrink or extend the size of each file to the specified size.");
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v1 = clap_builder::builder::command::Command::override_usage(&v2, &v0);
    memcpy(&v2, &v1, 700);
    v2.700 = 549755814016 | (stack_base)[1340] as i64;
    v2.708 = (stack_base)[1332] as i32;
    v1 = clap_builder::builder::arg::Arg::new("io-blocks");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 111);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "io-blocks");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("no-create");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 99);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "no-create");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "do not create files that do not exist");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("reference");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 114);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "reference");
    v0 = clap_builder::builder::arg::Arg::required_unless_present(&v1, "size");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "base the size of each file on the size of RFILE");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "RFILE");
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("size");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 115);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "size");
    v0 = clap_builder::builder::arg::Arg::required_unless_present(&v2, "reference");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "set or adjust the size of each file according to SIZE, which is in bytes unless --io-blocks is specified");
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, "SIZE");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "FILE");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 1);
    memcpy(&v0, &v1, 584);
    v0.584 = (stack_base)[1456] as i32 | 1;
    v0.588 = (stack_base)[1452] as i32;
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
