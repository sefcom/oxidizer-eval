fn uu_basename::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x830], Other Possible Types: struct640
    let v1: u32;  // [bp-0x5b8]
    let v2: u32;  // [bp-0x5b4]
    let v3: struct437;  // [bp-0x5b0], Other Possible Types: struct712, struct640
    let v4: u32;  // [bp-0x338]
    let v5: i8;  // [bp-0x334]
    let v6: u64;  // [bp-0x2f4]
    let v7: u32;  // [bp-0x2ec]
    let v8: struct712;  // [bp-0x2e8], Other Possible Types: struct640
    let v9: struct712;  // [bp-0x2e8]
    let v10: u64;  // [bp-0x2c]
    let v13: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v13);
    v8 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v8);
    v0 = uucore::format_usage("{} [-z] NAME [SUFFIX]\n{} OPTION... NAME...");
    v9 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v9, 700);
    v6 = 549755814016 | v10;
    v7 = v10;
    v8 = clap_builder::builder::arg::Arg::new("multiple");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 97);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "multiple");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "support multiple arguments and treat each as a NAME");
    v8 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v8, "multiple");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("name");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0);
    memcpy(&v0, &v3, 632);
    v1 = 516 | v4;
    v2 = *(&v5 as &i32);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("suffix");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 115);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "suffix");
    v0 = clap_builder::builder::arg::Arg::value_name(&v8);
    v8 = clap_builder::builder::arg::Arg::help(&v0, "remove a trailing SUFFIX; implies -a");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v8, "suffix");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 122);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "zero");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "end each output line with NUL, not newline");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v3, "zero");
    clap_builder::builder::command::Command::arg(a0, &v8, &v0);
    return;
}
