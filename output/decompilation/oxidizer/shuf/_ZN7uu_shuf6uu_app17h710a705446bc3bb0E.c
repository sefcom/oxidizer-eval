fn uu_shuf::uu_app(a0: &struct712) -> u64 {
    let v0: struct592;  // [sp-0xa48], Other Possible Types: struct24
    let v1: struct592;  // [sp-0x7f8], Other Possible Types: struct712, struct437
    let v2: i64;  // [sp-0x53c]
    let v3: i32;  // [sp-0x534]
    let v4: struct592;  // [sp-0x530], Other Possible Types: struct712
    let v5: struct592;  // [sp-0x268]
    let v7: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v4 = clap_builder::builder::command::Command::about(&v1, "Shuffle the input by outputting a random permutation of input lines.
Each output permutation is equally likely.
With no FILE, or when FILE is -, read standard input.");
    v1 = clap_builder::builder::command::Command::version(&v4, "0.0.28");
    v0 = uucore::format_usage("{} [OPTION]... [FILE]
{} -e [OPTION]... [ARG]...
{} -i LO-HI [OPTION]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | *((&v4.field_0 as &char + 700) as &i64);
    v3 = *((&v4.field_0 as &char + 708) as &i32);
    v4 = clap_builder::builder::arg::Arg::new("echo");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x65);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "echo");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "treat each ARG as an input line");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v4, "echo");
    v5 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "input-range");
    v4 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("input-range");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x69);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "input-range");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "LO-HI");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "treat each number LO through HI as an input line");
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v1, "file-or-args");
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("head-count");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x6e);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "head-count");
    v0 = clap_builder::builder::arg::Arg::value_name(&v4, "COUNT");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "output at most COUNT lines");
    v4 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("output");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x6f);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "output");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "FILE");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "write result to FILE instead of standard output");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v1, 0x3);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("random-source");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "random-source");
    v4 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "get random bytes from FILE");
    v5 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("repeat");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x72);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "repeat");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "output lines can be repeated");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v1, "repeat");
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x7a);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "zero-terminated");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "line delimiter is NUL, not newline");
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v4, "zero-terminated");
    v4 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("file-or-args");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 0x1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v4, &v1);
    return a0;
}
