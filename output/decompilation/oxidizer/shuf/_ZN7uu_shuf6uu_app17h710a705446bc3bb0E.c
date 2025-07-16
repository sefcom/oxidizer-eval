fn uu_shuf::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: struct437;  // [bp-0x7f8]
    let v2: u64;  // [bp-0x53c]
    let v3: u32;  // [bp-0x534]
    let v4: u8;  // [bp-0x530]
    let v5: u64;  // [bp-0x274]
    let v6: u32;  // [bp-0x26c]
    let v7: u8;  // [bp-0x268]
    let v10: u64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    clap_builder::builder::command::Command::about(&v4, &v1, "Shuffle the input by outputting a random permutation of input lines.\nEach output permutation is equally likely.\nWith no FILE, or when FILE is -, read standard input.");
    clap_builder::builder::command::Command::version(&v1, &v4, "0.0.28");
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]\n{} -e [OPTION]... [ARG]...\n{} -i LO-HI [OPTION]...");
    clap_builder::builder::command::Command::override_usage(&v4, &v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | v5;
    v3 = v6;
    clap_builder::builder::arg::Arg::new(&v4, "echo");
    clap_builder::builder::arg::Arg::short(&v0, &v4, 101);
    clap_builder::builder::arg::Arg::long(&v4, &v0, "echo");
    clap_builder::builder::arg::Arg::help(&v0, &v4, "treat each ARG as an input line");
    clap_builder::builder::arg::Arg::action(&v4, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v4, "echo");
    clap_builder::builder::arg::Arg::conflicts_with(&v7, &v0, "input-range");
    clap_builder::builder::command::Command::arg(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new(&v1, "input-range");
    clap_builder::builder::arg::Arg::short(&v0, &v1, 105);
    clap_builder::builder::arg::Arg::long(&v1, &v0, "input-range");
    clap_builder::builder::arg::Arg::value_name(&v0, &v1, "LO-HI");
    clap_builder::builder::arg::Arg::help(&v1, &v0, "treat each number LO through HI as an input line");
    clap_builder::builder::arg::Arg::conflicts_with(&v0, &v1, "file-or-args");
    clap_builder::builder::command::Command::arg(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new(&v4, "head-count");
    clap_builder::builder::arg::Arg::short(&v0, &v4, 110);
    clap_builder::builder::arg::Arg::long(&v4, &v0, "head-count");
    clap_builder::builder::arg::Arg::value_name(&v0, &v4, "COUNT");
    clap_builder::builder::arg::Arg::action(&v4, &v0, 1);
    clap_builder::builder::arg::Arg::help(&v0, &v4, "output at most COUNT lines");
    clap_builder::builder::command::Command::arg(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new(&v1, "output");
    clap_builder::builder::arg::Arg::short(&v0, &v1, 111);
    clap_builder::builder::arg::Arg::long(&v1, &v0, "output");
    clap_builder::builder::arg::Arg::value_name(&v0, &v1, "FILE");
    clap_builder::builder::arg::Arg::help(&v1, &v0, "write result to FILE instead of standard output");
    clap_builder::builder::arg::Arg::value_hint(&v0, &v1, 3);
    clap_builder::builder::command::Command::arg(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new(&v4, "random-source");
    clap_builder::builder::arg::Arg::long(&v0, &v4, "random-source");
    clap_builder::builder::arg::Arg::value_name(&v4, &v0, "FILE");
    clap_builder::builder::arg::Arg::help(&v0, &v4, "get random bytes from FILE");
    clap_builder::builder::arg::Arg::value_hint(&v7, &v0, 3);
    clap_builder::builder::command::Command::arg(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new(&v1, "repeat");
    clap_builder::builder::arg::Arg::short(&v0, &v1, 114);
    clap_builder::builder::arg::Arg::long(&v1, &v0, "repeat");
    clap_builder::builder::arg::Arg::help(&v0, &v1, "output lines can be repeated");
    clap_builder::builder::arg::Arg::action(&v1, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v1, "repeat");
    clap_builder::builder::command::Command::arg(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new(&v4, "zero-terminated");
    clap_builder::builder::arg::Arg::short(&v0, &v4, 122);
    clap_builder::builder::arg::Arg::long(&v4, &v0, "zero-terminated");
    clap_builder::builder::arg::Arg::help(&v0, &v4, "line delimiter is NUL, not newline");
    clap_builder::builder::arg::Arg::action(&v4, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v4, "zero-terminated");
    clap_builder::builder::command::Command::arg(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new(&v1, "file-or-args");
    clap_builder::builder::arg::Arg::action(&v0, &v1, 1);
    clap_builder::builder::arg::Arg::value_hint(&v1, &v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v4, &v1);
    return a0;
}
