fn uu_shuf::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v3: i4736;  // [sp-0x268], Other Possible Types: struct592
    let v5: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::about(&v1, &g_41f031, 165);
    v1 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v0 = uucore::format_usage(&g_41efe9, 72);
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v2, 700);
    v1.700 = 549755814016 | (stack_base)[628] as i64;
    v1.708 = (stack_base)[620] as i32;
    v2 = clap_builder::builder::arg::Arg::new("echo");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 101);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "echo");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "treat each ARG as an input line");
    v2 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v2, "echo");
    v3 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "input-range");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("input-range");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 105);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "input-range");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "LO-HI");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "treat each number LO through HI as an input line");
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v1, "file-or-args");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("head-count");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 110);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "head-count");
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, "COUNT");
    v2 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "output at most COUNT lines");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("output");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 111);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "output");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "FILE");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "write result to FILE instead of standard output");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v1, 3);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("random-source");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "random-source");
    v2 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "get random bytes from FILE");
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("repeat");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 114);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "repeat");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "output lines can be repeated");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v1, "repeat");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 122);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "zero-terminated");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "line delimiter is NUL, not newline");
    v2 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v2, "zero-terminated");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("file-or-args");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
