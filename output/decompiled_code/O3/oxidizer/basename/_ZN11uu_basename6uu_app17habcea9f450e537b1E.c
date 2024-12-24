fn uu_basename::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0x800], Other Possible Types: struct592, struct24
    let v1: i3496;  // [sp-0x5b0], Other Possible Types: struct592, struct712, struct437
    let v2: i4736;  // [sp-0x2e8], Other Possible Types: struct592, struct712
    let v4: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v4);
    v2 = clap_builder::builder::command::Command::version(&v1, v4);
    v1 = clap_builder::builder::command::Command::about(&v2);
    v0 = uucore::format_usage(&g_41c10c, 42);
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v2, 700);
    v1.700 = 549755814016 | (stack_base)[44] as i64;
    v1.708 = (stack_base)[36] as i32;
    v2 = clap_builder::builder::arg::Arg::new("multiple");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 97);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "multiple");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "support multiple arguments and treat each as a NAME");
    v2 = clap_builder::builder::arg::Arg::action(&v0, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v2, "multiple");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("name");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0);
    memcpy(&v0, &v1, 584);
    v0.584 = 516 | (stack_base)[872] as i32;
    v0.588 = (stack_base)[868] as i32;
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("suffix");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 115);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "suffix");
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, v4);
    v2 = clap_builder::builder::arg::Arg::help(&v0, "remove a trailing SUFFIX; implies -a");
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v2, "suffix");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 122);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "zero");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "end each output line with NUL, not newline");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v1, "zero");
    clap_builder::builder::command::Command::arg(a0, &v2, &v0);
    return a0;
}
