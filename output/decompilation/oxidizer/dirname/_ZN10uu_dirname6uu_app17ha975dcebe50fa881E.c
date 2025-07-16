fn uu_dirname::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0xa50]
    let v1: u32;  // [bp-0x808]
    let v2: i8;  // [bp-0x804]
    let v3: u64;  // [bp-0x794]
    let v4: u32;  // [bp-0x78c]
    let v5: u8;  // [bp-0x788]
    let v6: u32;  // [bp-0x540]
    let v7: u32;  // [bp-0x53c]
    let v8: u8;  // [bp-0x538]
    let v9: u64;  // [bp-0x27c]
    let v10: u32;  // [bp-0x274]
    let v11: u8;  // [bp-0x270]
    let v14: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::about(&v8, &v0);
    clap_builder::builder::command::Command::version(&v0, &v8);
    uucore::format_usage(&v5, "{} [OPTION] NAME...");
    clap_builder::builder::command::Command::override_usage(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | v9;
    v4 = v10;
    clap_builder::builder::arg::Arg::new(&v8, "zero");
    clap_builder::builder::arg::Arg::long(&v5, &v8);
    clap_builder::builder::arg::Arg::short(&v8, &v5);
    clap_builder::builder::arg::Arg::help(&v5, &v8);
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "dir");
    memcpy(&v5, &v0, 584);
    v6 = v1 | 4;
    v7 = *(&v2 as &i32);
    clap_builder::builder::arg::Arg::action(&v0, &v5, 1);
    clap_builder::builder::arg::Arg::value_hint(&v5, &v0);
    clap_builder::builder::command::Command::arg(a0, &v8, &v5);
    return a0;
}
