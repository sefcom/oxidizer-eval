fn uu_env::uu_app(a0: &struct712) -> u64 {
    let v0: i64;  // [sp-0xa68]
    let v1: i8;  // [bp-0xa60]
    let v2: i8;  // [bp-0xa58]
    let v3: struct592;  // [sp-0xa50], Other Possible Types: struct24
    let v4: struct592;  // [sp-0x800], Other Possible Types: struct712
    let v5: i32;  // [sp-0x544]
    let v6: i64;  // [sp-0x540]
    let v7: struct592;  // [sp-0x538], Other Possible Types: struct712, int, struct437
    let v8: i64;  // [sp-0x528]
    let v9: struct592;  // [sp-0x268], Other Possible Types: int, unsigned long
    let v10: i64;  // [sp-0x260]
    let v11: i64;  // [sp-0x258]

    v7 = clap_builder::builder::command::Command::new("uu_env");
    v4 = clap_builder::builder::command::Command::version(&v7, "0.0.28");
    v7 = clap_builder::builder::command::Command::about(&v4, "Set each NAME to VALUE in the environment and run COMMAND");
    v3 = uucore::format_usage("{} [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]");
    v4 = clap_builder::builder::command::Command::override_usage(&v7, &v3);
    v7 = clap_builder::builder::command::Command::after_help(&v4, "A mere - implies -i. If no COMMAND, print the resulting environment.");
    memcpy(&v4, &v7, 700);
    v5 = 160 | *((&v7.field_0 as &char + 700) as &i32);
    v6 = 128 | *((&v7.field_0 as &char + 704) as &i64);
    v7 = clap_builder::builder::arg::Arg::new("ignore-environment");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x69);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "ignore-environment");
    v3 = clap_builder::builder::arg::Arg::help(&v7, "start with an empty environment");
    v9 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v4, &v9);
    v4 = clap_builder::builder::arg::Arg::new("chdir");
    v3 = clap_builder::builder::arg::Arg::short(&v4, 0x43);
    v4 = clap_builder::builder::arg::Arg::long(&v3, "chdir");
    v3 = clap_builder::builder::arg::Arg::number_of_values(&v4, 1);
    v4 = clap_builder::builder::arg::Arg::value_name(&v3, "DIR");
    v0 = 2;
    v11 = *(&v2 as &i64);
    v9 = v0;
    v10 = *(&v1 as &i64);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v4, &v9);
    v4 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x4);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "change working directory to DIR");
    v4 = clap_builder::builder::command::Command::arg(&v7, &v3);
    v7 = clap_builder::builder::arg::Arg::new("null");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x30);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "null");
    v3 = clap_builder::builder::arg::Arg::help(&v7, "end each output line with a 0 byte rather than a newline (only valid when printing the environment)");
    v9 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v4, &v9);
    v4 = clap_builder::builder::arg::Arg::new("file");
    v3 = clap_builder::builder::arg::Arg::short(&v4, 0x66);
    v4 = clap_builder::builder::arg::Arg::long(&v3, "file");
    v3 = clap_builder::builder::arg::Arg::value_name(&v4, "PATH");
    v4 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x3);
    v11 = *(&v2 as &i64);
    *(&v9 as &i128) = *(&v0 as &i128);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v4, &v9);
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x1);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "read and set variables from a ".env"-style configuration file (prior to any unset and/or set)");
    v4 = clap_builder::builder::command::Command::arg(&v7, &v3);
    v7 = clap_builder::builder::arg::Arg::new("unset");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x75);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "unset");
    v3 = clap_builder::builder::arg::Arg::value_name(&v7, "NAME");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x1);
    v11 = *(&v2 as &i64);
    *(&v9 as &i128) = *(&v0 as &i128);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v7, &v9);
    v9 = clap_builder::builder::arg::Arg::help(&v3, "remove variable from the environment");
    v7 = clap_builder::builder::command::Command::arg(&v4, &v9);
    v4 = clap_builder::builder::arg::Arg::new("debug");
    v3 = clap_builder::builder::arg::Arg::short(&v4, 0x76);
    v4 = clap_builder::builder::arg::Arg::long(&v3, "debug");
    v3 = clap_builder::builder::arg::Arg::action(&v4, 0x4);
    v9 = clap_builder::builder::arg::Arg::help(&v3, "print verbose information for each processing step");
    v4 = clap_builder::builder::command::Command::arg(&v7, &v9);
    v7 = clap_builder::builder::arg::Arg::new("split-string");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x53);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "split-string");
    v3 = clap_builder::builder::arg::Arg::value_name(&v7, "S");
    v7 = clap_builder::builder::arg::Arg::action(&v3, None);
    v11 = *(&v2 as &i64);
    *(&v9 as &i128) = *(&v0 as &i128);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v7, &v9);
    v9 = clap_builder::builder::arg::Arg::help(&v3, "process and split S into separate arguments; used to pass multiple arguments on shebang lines");
    v7 = clap_builder::builder::command::Command::arg(&v4, &v9);
    v4 = clap_builder::builder::arg::Arg::new("argv0");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v4, "argv0");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x61);
    v3 = clap_builder::builder::arg::Arg::long(&v4, "argv0");
    v4 = clap_builder::builder::arg::Arg::value_name(&v3, "a");
    v3 = clap_builder::builder::arg::Arg::action(&v4, None);
    v11 = *(&v2 as &i64);
    *(&v9 as &i128) = *(&v0 as &i128);
    v4 = clap_builder::builder::arg::Arg::value_parser(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "Override the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.");
    v4 = clap_builder::builder::command::Command::arg(&v7, &v3);
    v7 = clap_builder::builder::arg::Arg::new("vars");
    v3 = clap_builder::builder::arg::Arg::action(&v7, 0x1);
    v8 = *(&v2 as &i64);
    v7 = *(&v0 as &i128);
    v9 = clap_builder::builder::arg::Arg::value_parser(&v3, &v7);
    v7 = clap_builder::builder::command::Command::arg(&v4, &v9);
    v4 = clap_builder::builder::arg::Arg::new("ignore-signal");
    v3 = clap_builder::builder::arg::Arg::long(&v4, "ignore-signal");
    v4 = clap_builder::builder::arg::Arg::value_name(&v3, "SIG");
    v3 = clap_builder::builder::arg::Arg::action(&v4, 0x1);
    v4 = clap_builder::builder::arg::Arg::value_parser(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "set handling of SIG signal(s) to do nothing");
    clap_builder::builder::command::Command::arg(a0, &v7, &v3);
    return a0;
}
