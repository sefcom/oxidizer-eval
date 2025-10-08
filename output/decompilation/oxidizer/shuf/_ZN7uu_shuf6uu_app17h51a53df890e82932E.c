fn uu_shuf::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0xac8]
    let v1: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v2: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v3: u64;  // [bp-0x574]
    let v4: u32;  // [bp-0x56c]
    let v5: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v6: u64;  // [bp-0x2ac]
    let v7: u32;  // [bp-0x2a4]
    let v8: struct640;  // [bp-0x2a0], Other Possible Types: u64
    let v11: u64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v11);
    v5 = clap_builder::builder::command::Command::about(&v2);
    v2 = clap_builder::builder::command::Command::version(&v5);
    v1 = uucore::format_usage("{} [OPTION]... [FILE]\n{} -e [OPTION]... [ARG]...\n{} -i LO-HI [OPTION]...");
    v5 = clap_builder::builder::command::Command::override_usage(&v2, &v1);
    memcpy(&v2, &v5, 700);
    v3 = 549755814016 | v6;
    v4 = v7;
    v5 = clap_builder::builder::arg::Arg::new("echo");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 101);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "echo");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "treat each ARG as an input line");
    v5 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v5, "echo");
    v8 = clap_builder::builder::arg::Arg::conflicts_with(&v1, "input-range");
    v5 = clap_builder::builder::command::Command::arg(&v2, &v8);
    v2 = clap_builder::builder::arg::Arg::new("input-range");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 105);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "input-range");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "LO-HI");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "treat each number LO through HI as an input line");
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2);
    v8 = clap_builder::builder::arg::Arg::conflicts_with(&v1, "file-or-args");
    v2 = clap_builder::builder::command::Command::arg(&v5, &v8);
    v5 = clap_builder::builder::arg::Arg::new("head-count");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 110);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "head-count");
    v1 = clap_builder::builder::arg::Arg::value_name(&v5, "COUNT");
    v5 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::help(&v5, "output at most COUNT lines");
    v8 = clap_builder::builder::arg::Arg::value_parser(&v1);
    v5 = clap_builder::builder::command::Command::arg(&v2, &v8);
    v2 = clap_builder::builder::arg::Arg::new("output");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 111);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "output");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "FILE");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "write result to FILE instead of standard output");
    v0 = 3;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2, &v0);
    v8 = clap_builder::builder::arg::Arg::value_hint(&v1);
    v2 = clap_builder::builder::command::Command::arg(&v5, &v8);
    v5 = clap_builder::builder::arg::Arg::new("random-source");
    v1 = clap_builder::builder::arg::Arg::long(&v5, "random-source");
    v5 = clap_builder::builder::arg::Arg::value_name(&v1, "FILE");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "get random bytes from FILE");
    v5 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v5);
    v5 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("repeat");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 114);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "repeat");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "output lines can be repeated");
    v2 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v2, "repeat");
    v2 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 122);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "zero-terminated");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "line delimiter is NUL, not newline");
    v5 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v5, "zero-terminated");
    v5 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("file-or-args");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 1);
    v8 = 2;
    v2 = clap_builder::builder::arg::Arg::value_parser(&v1, &v8);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v2);
    clap_builder::builder::command::Command::arg(a0, &v5, &v1);
    return;
}
