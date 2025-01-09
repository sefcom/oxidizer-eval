fn uu_basename::uu_app(a0: &struct712) -> u64 {
    let v0: i192;  // [sp-0x800], Other Possible Types: struct592, struct24
    let v1: i32;  // [sp-0x5b8]
    let v2: i32;  // [sp-0x5b4]
    let v3: i3496;  // [sp-0x5b0], Other Possible Types: struct592, struct712, struct437
    let v4: i64;  // [sp-0x2f4]
    let v5: i32;  // [sp-0x2ec]
    let v6: i5696;  // [sp-0x2e8], Other Possible Types: struct592, struct712
    let v8: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v8);
    v6 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v6);
    v0 = uucore::format_usage(&g_41c00c, 42);
    v6 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 549755814016 | *((&v6 as &char + 700) as &i64);
    v5 = *((&v6 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("multiple");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x61);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "multiple");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "support multiple arguments and treat each as a NAME");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v6, "multiple");
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("name");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x1);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0);
    memcpy(&v0, &v3, 584);
    v1 = 516 | *((&v3 as &char + 584) as &i32);
    v2 = *((&v3 as &char + 588) as &i32);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("suffix");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x73);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "suffix");
    v0 = clap_builder::builder::arg::Arg::value_name(&v6);
    v6 = clap_builder::builder::arg::Arg::help(&v0, "remove a trailing SUFFIX; implies -a");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v6, "suffix");
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x7a);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "zero");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "end each output line with NUL, not newline");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v3, "zero");
    clap_builder::builder::command::Command::arg(a0, &v6, &v0);
    return a0;
}
