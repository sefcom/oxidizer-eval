fn uu_env::uu_app(a0: &struct712) -> long long {
    let v0: struct24;  // [bp-0xa68]
    let v1: u64;  // [bp-0xa68]
    let v2: u64;  // [bp-0xa60]
    let v3: u64;  // [bp-0xa58]
    let v4: u8;  // [bp-0xa50]
    let v5: u8;  // [bp-0x800]
    let v6: u32;  // [bp-0x544]
    let v7: u64;  // [bp-0x540]
    let v8: struct24;  // [bp-0x538], Other Possible Types: struct437
    let v9: u32;  // [bp-0x27c]
    let v10: i8;  // [bp-0x278]
    let v11: u8;  // [bp-0x268]
    let v12: u128;  // [bp-0x268]
    let v13: u128;  // [bp-0x268]
    let v14: u128;  // [bp-0x268]
    let v15: u128;  // [bp-0x268]
    let v16: u64;  // [bp-0x260]
    let v17: u64;  // [bp-0x258]

    v8 = clap_builder::builder::command::Command::new("uu_env");
    clap_builder::builder::command::Command::version(&v5, &v8, "0.0.28");
    clap_builder::builder::command::Command::about(&v8, &v5, "Set each NAME to VALUE in the environment and run COMMAND");
    uucore::format_usage(&v4, "{} [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]");
    clap_builder::builder::command::Command::override_usage(&v5, &v8, &v4);
    clap_builder::builder::command::Command::after_help(&v8, &v5, "A mere - implies -i. If no COMMAND, print the resulting environment.");
    memcpy(&v5, &v8, 700);
    v6 = 160 | v9;
    v7 = 128 | *(&v10 as &i64);
    clap_builder::builder::arg::Arg::new(&v8, "ignore-environment");
    clap_builder::builder::arg::Arg::short(&v4, &v8, 105);
    clap_builder::builder::arg::Arg::long(&v8, &v4, "ignore-environment");
    clap_builder::builder::arg::Arg::help(&v4, &v8, "start with an empty environment");
    clap_builder::builder::arg::Arg::action(&v11, &v4, 2);
    clap_builder::builder::command::Command::arg(&v8, &v5, &v11);
    clap_builder::builder::arg::Arg::new(&v5, "chdir");
    clap_builder::builder::arg::Arg::short(&v4, &v5, 67);
    clap_builder::builder::arg::Arg::long(&v5, &v4, "chdir");
    clap_builder::builder::arg::Arg::number_of_values(&v4, &v5, 1);
    clap_builder::builder::arg::Arg::value_name(&v5, &v4, "DIR");
    v1 = 2;
    v17 = v3;
    v15 = v1;
    v16 = v2;
    clap_builder::builder::arg::Arg::value_parser(&v4, &v5, &v15);
    clap_builder::builder::arg::Arg::value_hint(&v5, &v4, 4);
    clap_builder::builder::arg::Arg::help(&v4, &v5, "change working directory to DIR");
    clap_builder::builder::command::Command::arg(&v5, &v8, &v4);
    clap_builder::builder::arg::Arg::new(&v8, "null");
    clap_builder::builder::arg::Arg::short(&v4, &v8, 48);
    clap_builder::builder::arg::Arg::long(&v8, &v4, "null");
    clap_builder::builder::arg::Arg::help(&v4, &v8, "end each output line with a 0 byte rather than a newline (only valid when printing the environment)");
    clap_builder::builder::arg::Arg::action(&v15, &v4, 2);
    clap_builder::builder::command::Command::arg(&v8, &v5, &v15);
    clap_builder::builder::arg::Arg::new(&v5, "file");
    clap_builder::builder::arg::Arg::short(&v4, &v5, 102);
    clap_builder::builder::arg::Arg::long(&v5, &v4, "file");
    clap_builder::builder::arg::Arg::value_name(&v4, &v5, "PATH");
    clap_builder::builder::arg::Arg::value_hint(&v5, &v4, 3);
    v17 = v3;
    v12 = *(&v1 as &i128);
    clap_builder::builder::arg::Arg::value_parser(&v4, &v5, &v15);
    clap_builder::builder::arg::Arg::action(&v5, &v4, 1);
    clap_builder::builder::arg::Arg::help(&v4, &v5, "read and set variables from a ".env"-style configuration file (prior to any unset and/or set)");
    clap_builder::builder::command::Command::arg(&v5, &v8, &v4);
    clap_builder::builder::arg::Arg::new(&v8, "unset");
    clap_builder::builder::arg::Arg::short(&v4, &v8, 117);
    clap_builder::builder::arg::Arg::long(&v8, &v4, "unset");
    clap_builder::builder::arg::Arg::value_name(&v4, &v8, "NAME");
    clap_builder::builder::arg::Arg::action(&v8, &v4, 1);
    v17 = v3;
    v13 = *(&v1 as &i128);
    clap_builder::builder::arg::Arg::value_parser(&v4, &v8, &v15);
    clap_builder::builder::arg::Arg::help(&v15, &v4, "remove variable from the environment");
    clap_builder::builder::command::Command::arg(&v8, &v5, &v15);
    clap_builder::builder::arg::Arg::new(&v5, "debug");
    clap_builder::builder::arg::Arg::short(&v4, &v5, 118);
    clap_builder::builder::arg::Arg::long(&v5, &v4, "debug");
    clap_builder::builder::arg::Arg::action(&v4, &v5, 4);
    clap_builder::builder::arg::Arg::help(&v15, &v4, "print verbose information for each processing step");
    clap_builder::builder::command::Command::arg(&v5, &v8, &v15);
    clap_builder::builder::arg::Arg::new(&v8, "split-string");
    clap_builder::builder::arg::Arg::short(&v4, &v8, 83);
    clap_builder::builder::arg::Arg::long(&v8, &v4, "split-string");
    clap_builder::builder::arg::Arg::value_name(&v4, &v8, "S");
    clap_builder::builder::arg::Arg::action(&v8, &v4, 0);
    v17 = v3;
    v14 = *(&v1 as &i128);
    clap_builder::builder::arg::Arg::value_parser(&v4, &v8, &v15);
    clap_builder::builder::arg::Arg::help(&v15, &v4, "process and split S into separate arguments; used to pass multiple arguments on shebang lines");
    clap_builder::builder::command::Command::arg(&v8, &v5, &v15);
    clap_builder::builder::arg::Arg::new(&v5, "argv0");
    clap_builder::builder::arg::Arg::overrides_with(&v4, &v5, "argv0");
    clap_builder::builder::arg::Arg::short(&v5, &v4, 97);
    clap_builder::builder::arg::Arg::long(&v4, &v5, "argv0");
    clap_builder::builder::arg::Arg::value_name(&v5, &v4, "a");
    clap_builder::builder::arg::Arg::action(&v4, &v5, 0);
    v17 = v3;
    v15 = *(&v1 as &i128);
    clap_builder::builder::arg::Arg::value_parser(&v5, &v4, &v15);
    clap_builder::builder::arg::Arg::help(&v4, &v5, "Override the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.");
    clap_builder::builder::command::Command::arg(&v5, &v8, &v4);
    clap_builder::builder::arg::Arg::new(&v8, "vars");
    clap_builder::builder::arg::Arg::action(&v4, &v8, 1);
    v8 = v0;
    clap_builder::builder::arg::Arg::value_parser(&v15, &v4, &v8);
    clap_builder::builder::command::Command::arg(&v8, &v5, &v15);
    clap_builder::builder::arg::Arg::new(&v5, "ignore-signal");
    clap_builder::builder::arg::Arg::long(&v4, &v5, "ignore-signal");
    clap_builder::builder::arg::Arg::value_name(&v5, &v4, "SIG");
    clap_builder::builder::arg::Arg::action(&v4, &v5, 1);
    clap_builder::builder::arg::Arg::value_parser(&v5, &v4, &v1);
    clap_builder::builder::arg::Arg::help(&v4, &v5, "set handling of SIG signal(s) to do nothing");
    clap_builder::builder::command::Command::arg(a0, &v8, &v4);
    return a0;
}
