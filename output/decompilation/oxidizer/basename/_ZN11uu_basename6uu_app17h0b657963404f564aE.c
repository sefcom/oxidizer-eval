fn uu_basename::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0x800]
    let v1: u32;  // [bp-0x5b8]
    let v2: u32;  // [bp-0x5b4]
    let v3: struct437;  // [bp-0x5b0]
    let v4: u32;  // [bp-0x368]
    let v5: i8;  // [bp-0x364]
    let v6: u64;  // [bp-0x2f4]
    let v7: u32;  // [bp-0x2ec]
    let v8: u8;  // [bp-0x2e8]
    let v9: u64;  // [bp-0x2c]
    let v10: i8;  // [bp-0x24]
    let v13: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v13);
    clap_builder::builder::command::Command::version(&v8, &v3);
    clap_builder::builder::command::Command::about(&v3, &v8);
    uucore::format_usage(&v0, "{} [-z] NAME [SUFFIX]\n{} OPTION... NAME...");
    clap_builder::builder::command::Command::override_usage(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | v9;
    v7 = *(&v10 as &i32);
    clap_builder::builder::arg::Arg::new(&v8, "multiple");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 97);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "multiple");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "support multiple arguments and treat each as a NAME");
    clap_builder::builder::arg::Arg::action(&v8, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v8, "multiple");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "name");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 1);
    clap_builder::builder::arg::Arg::value_hint(&v3, &v0);
    memcpy(&v0, &v3, 584);
    v1 = 516 | v4;
    v2 = *(&v5 as &i32);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "suffix");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 115);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "suffix");
    clap_builder::builder::arg::Arg::value_name(&v0, &v8);
    clap_builder::builder::arg::Arg::help(&v8, &v0, "remove a trailing SUFFIX; implies -a");
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v8, "suffix");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "zero");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 122);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "zero");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "end each output line with NUL, not newline");
    clap_builder::builder::arg::Arg::action(&v3, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v3, "zero");
    clap_builder::builder::command::Command::arg(a0, &v8, &v0);
    return a0;
}
