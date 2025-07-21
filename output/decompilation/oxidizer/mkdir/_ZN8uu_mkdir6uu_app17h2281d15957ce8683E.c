fn uu_mkdir::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: i8;  // [bp-0x7fc]
    let v3: u64;  // [bp-0x78c]
    let v4: u32;  // [bp-0x784]
    let v5: u8;  // [bp-0x780]
    let v6: u32;  // [bp-0x538]
    let v7: u32;  // [bp-0x534]
    let v8: u8;  // [bp-0x530]
    let v9: u64;  // [bp-0x274]
    let v10: u32;  // [bp-0x26c]
    let v11: u8;  // [bp-0x268]
    let v14: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v8, &v0, "0.0.28");
    clap_builder::builder::command::Command::about(&v0, &v8, "Create the given DIRECTORY(ies) if they do not exist");
    uucore::format_usage(&v5, "{} [OPTION]... DIRECTORY...");
    clap_builder::builder::command::Command::override_usage(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 549755814016 | v9;
    v4 = v10;
    clap_builder::builder::arg::Arg::new(&v8, "mode");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 109);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "mode");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "set file mode (not implemented on windows)");
    clap_builder::builder::command::Command::arg(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new(&v0, "parents");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 112);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "parents");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "make parent directories as needed");
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v5, "parents");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new(&v8, "verbose");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 118);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "verbose");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "print a message for each printed directory");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "dirs");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 1);
    clap_builder::builder::arg::Arg::num_args(&v0, &v5);
    memcpy(&v5, &v0, 584);
    v6 = v1 | 1;
    v7 = *(&v2 as &i32);
    v11 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::value_hint(&v5, &v0, 4);
    clap_builder::builder::command::Command::arg(a0, &v8, &v5);
    return a0;
}
