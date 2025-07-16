fn uu_env::uu_app(a0: &struct712) -> long long {
    let v0: u64;  // [bp-0xa68]
    let v1: u64;  // [bp-0xa60]
    let v2: u64;  // [bp-0xa58]
    let v3: u8;  // [bp-0xa50]
    let v4: u8;  // [bp-0x800]
    let v5: u32;  // [bp-0x544]
    let v6: u64;  // [bp-0x540]
    let v7: struct437;  // [bp-0x538]
    let v8: u64;  // [bp-0x528]
    let v9: u32;  // [bp-0x27c]
    let v10: i8;  // [bp-0x278]
    let v11: u8;  // [bp-0x268]
    let v12: u128;  // [bp-0x268]
    let v13: u128;  // [bp-0x268]
    let v14: u128;  // [bp-0x268]
    let v15: u128;  // [bp-0x268]
    let v16: u64;  // [bp-0x260]
    let v17: u64;  // [bp-0x258]

    v7 = clap_builder::builder::command::Command::new("uu_env");
    clap_builder::builder::command::Command::version(&v4, &v7, "0.0.28");
    clap_builder::builder::command::Command::about(&v7, &v4, "Set each NAME to VALUE in the environment and run COMMAND");
    uucore::format_usage(&v3, "{} [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]");
    clap_builder::builder::command::Command::override_usage(&v4, &v7, &v3);
    clap_builder::builder::command::Command::after_help(&v7, &v4, "A mere - implies -i. If no COMMAND, print the resulting environment.");
    memcpy(&v4, &v7, 700);
    v5 = 160 | v9;
    v6 = 128 | *(&v10 as &i64);
    clap_builder::builder::arg::Arg::new(&v7, "ignore-environment");
    clap_builder::builder::arg::Arg::short(&v3, &v7, 105);
    clap_builder::builder::arg::Arg::long(&v7, &v3, "ignore-environment");
    clap_builder::builder::arg::Arg::help(&v3, &v7, "start with an empty environment");
    clap_builder::builder::arg::Arg::action(&v11, &v3, 2);
    clap_builder::builder::command::Command::arg(&v7, &v4, &v11);
    clap_builder::builder::arg::Arg::new(&v4, "chdir");
    clap_builder::builder::arg::Arg::short(&v3, &v4, 67);
    clap_builder::builder::arg::Arg::long(&v4, &v3, "chdir");
    clap_builder::builder::arg::Arg::number_of_values(&v3, &v4, 1);
    clap_builder::builder::arg::Arg::value_name(&v4, &v3, "DIR");
    v0 = 2;
    v17 = v2;
    v15 = v0;
    v16 = v1;
    clap_builder::builder::arg::Arg::value_parser(&v3, &v4, &v15);
    clap_builder::builder::arg::Arg::value_hint(&v4, &v3, 4);
    clap_builder::builder::arg::Arg::help(&v3, &v4, "change working directory to DIR");
    clap_builder::builder::command::Command::arg(&v4, &v7, &v3);
    clap_builder::builder::arg::Arg::new(&v7, "null");
    clap_builder::builder::arg::Arg::short(&v3, &v7, 48);
    clap_builder::builder::arg::Arg::long(&v7, &v3, "null");
    clap_builder::builder::arg::Arg::help(&v3, &v7, "end each output line with a 0 byte rather than a newline (only valid when printing the environment)");
    clap_builder::builder::arg::Arg::action(&v15, &v3, 2);
    clap_builder::builder::command::Command::arg(&v7, &v4, &v15);
    clap_builder::builder::arg::Arg::new(&v4, "file");
    clap_builder::builder::arg::Arg::short(&v3, &v4, 102);
    clap_builder::builder::arg::Arg::long(&v4, &v3, "file");
    clap_builder::builder::arg::Arg::value_name(&v3, &v4, "PATH");
    clap_builder::builder::arg::Arg::value_hint(&v4, &v3, 3);
    v17 = v2;
    v12 = *(&v0 as &i128);
    clap_builder::builder::arg::Arg::value_parser(&v3, &v4, &v15);
    clap_builder::builder::arg::Arg::action(&v4, &v3, 1);
    clap_builder::builder::arg::Arg::help(&v3, &v4, "read and set variables from a ".env"-style configuration file (prior to any unset and/or set)");
    clap_builder::builder::command::Command::arg(&v4, &v7, &v3);
    clap_builder::builder::arg::Arg::new(&v7, "unset");
    clap_builder::builder::arg::Arg::short(&v3, &v7, 117);
    clap_builder::builder::arg::Arg::long(&v7, &v3, "unset");
    clap_builder::builder::arg::Arg::value_name(&v3, &v7, "NAME");
    clap_builder::builder::arg::Arg::action(&v7, &v3, 1);
    v17 = v2;
    v13 = *(&v0 as &i128);
    clap_builder::builder::arg::Arg::value_parser(&v3, &v7, &v15);
    clap_builder::builder::arg::Arg::help(&v15, &v3, "remove variable from the environment");
    clap_builder::builder::command::Command::arg(&v7, &v4, &v15);
    clap_builder::builder::arg::Arg::new(&v4, "debug");
    clap_builder::builder::arg::Arg::short(&v3, &v4, 118);
    clap_builder::builder::arg::Arg::long(&v4, &v3, "debug");
    clap_builder::builder::arg::Arg::action(&v3, &v4, 4);
    clap_builder::builder::arg::Arg::help(&v15, &v3, "print verbose information for each processing step");
    clap_builder::builder::command::Command::arg(&v4, &v7, &v15);
    clap_builder::builder::arg::Arg::new(&v7, "split-string");
    clap_builder::builder::arg::Arg::short(&v3, &v7, 83);
    clap_builder::builder::arg::Arg::long(&v7, &v3, "split-string");
    clap_builder::builder::arg::Arg::value_name(&v3, &v7, "S");
    clap_builder::builder::arg::Arg::action(&v7, &v3, 0);
    v17 = v2;
    v14 = *(&v0 as &i128);
    clap_builder::builder::arg::Arg::value_parser(&v3, &v7, &v15);
    clap_builder::builder::arg::Arg::help(&v15, &v3, "process and split S into separate arguments; used to pass multiple arguments on shebang lines");
    clap_builder::builder::command::Command::arg(&v7, &v4, &v15);
    clap_builder::builder::arg::Arg::new(&v4, "argv0");
    clap_builder::builder::arg::Arg::overrides_with(&v3, &v4, "argv0");
    clap_builder::builder::arg::Arg::short(&v4, &v3, 97);
    clap_builder::builder::arg::Arg::long(&v3, &v4, "argv0");
    clap_builder::builder::arg::Arg::value_name(&v4, &v3, "a");
    clap_builder::builder::arg::Arg::action(&v3, &v4, 0);
    v17 = v2;
    v15 = *(&v0 as &i128);
    clap_builder::builder::arg::Arg::value_parser(&v4, &v3, &v15);
    clap_builder::builder::arg::Arg::help(&v3, &v4, "Override the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.");
    clap_builder::builder::command::Command::arg(&v4, &v7, &v3);
    clap_builder::builder::arg::Arg::new(&v7, "vars");
    clap_builder::builder::arg::Arg::action(&v3, &v7, 1);
    v8 = v2;
    memcpy(&v7, &v0, 16);
    clap_builder::builder::arg::Arg::value_parser(&v15, &v3, &v7);
    clap_builder::builder::command::Command::arg(&v7, &v4, &v15);
    clap_builder::builder::arg::Arg::new(&v4, "ignore-signal");
    clap_builder::builder::arg::Arg::long(&v3, &v4, "ignore-signal");
    clap_builder::builder::arg::Arg::value_name(&v4, &v3, "SIG");
    clap_builder::builder::arg::Arg::action(&v3, &v4, 1);
    clap_builder::builder::arg::Arg::value_parser(&v4, &v3, &v0);
    clap_builder::builder::arg::Arg::help(&v3, &v4, "set handling of SIG signal(s) to do nothing");
    clap_builder::builder::command::Command::arg(a0, &v7, &v3);
    return a0;
}
