fn uu_env::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0xac8]
    let v1: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v2: struct712;  // [bp-0x830], Other Possible Types: struct640
    let v3: u32;  // [bp-0x574]
    let v4: u64;  // [bp-0x570]
    let v5: struct437;  // [bp-0x568], Other Possible Types: struct712, struct640
    let v6: u32;  // [bp-0x2ac]
    let v7: u64;  // [bp-0x2a8]
    let v8: struct640;  // [bp-0x2a0]

    v5 = clap_builder::builder::command::Command::new();
    v2 = clap_builder::builder::command::Command::version(&v5);
    v5 = clap_builder::builder::command::Command::about(&v2);
    v1 = uucore::format_usage("{} [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]");
    v2 = clap_builder::builder::command::Command::override_usage(&v5, &v1);
    v5 = clap_builder::builder::command::Command::after_help(&v2);
    memcpy(&v2, &v5, 700);
    v3 = 160 | v6;
    v4 = 128 | v7;
    v5 = clap_builder::builder::arg::Arg::new("ignore-environment");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 105);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "ignore-environment");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "start with an empty environment");
    v8 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v5 = clap_builder::builder::command::Command::arg(&v2, &v8);
    v2 = clap_builder::builder::arg::Arg::new("chdir");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 67);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "chdir");
    v1 = clap_builder::builder::arg::Arg::number_of_values(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::value_name(&v1, "DIR");
    v0 = 2;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::value_hint(&v1, 4);
    v1 = clap_builder::builder::arg::Arg::help(&v2, "change working directory to DIR");
    v2 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("null");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 48);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "null");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "end each output line with a 0 byte rather than a newline (only valid when printing the environment)");
    v8 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v5 = clap_builder::builder::command::Command::arg(&v2, &v8);
    v2 = clap_builder::builder::arg::Arg::new("file");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 102);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "file");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "PATH");
    v2 = clap_builder::builder::arg::Arg::value_hint(&v1, 3);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::help(&v2, "read and set variables from a \".env\"-style configuration file (prior to any unset and/or set)");
    v2 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("unset");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 117);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "unset");
    v1 = clap_builder::builder::arg::Arg::value_name(&v5, "NAME");
    v5 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v5, &v0);
    v8 = clap_builder::builder::arg::Arg::help(&v1, "remove variable from the environment");
    v5 = clap_builder::builder::command::Command::arg(&v2, &v8);
    v2 = clap_builder::builder::arg::Arg::new("debug");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 118);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "debug");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 4);
    v8 = clap_builder::builder::arg::Arg::help(&v1, "print verbose information for each processing step");
    v2 = clap_builder::builder::command::Command::arg(&v5, &v8);
    v5 = clap_builder::builder::arg::Arg::new("split-string");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 83);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "split-string");
    v1 = clap_builder::builder::arg::Arg::value_name(&v5, "S");
    v5 = clap_builder::builder::arg::Arg::action(&v1, 0);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v5, &v0);
    v8 = clap_builder::builder::arg::Arg::help(&v1, "process and split S into separate arguments; used to pass multiple arguments on shebang lines");
    v5 = clap_builder::builder::command::Command::arg(&v2, &v8);
    v2 = clap_builder::builder::arg::Arg::new("argv0");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v2);
    v2 = clap_builder::builder::arg::Arg::short(&v1, 97);
    v1 = clap_builder::builder::arg::Arg::long(&v2, "argv0");
    v2 = clap_builder::builder::arg::Arg::value_name(&v1, "a");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 0);
    v2 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::help(&v2, "Override the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.");
    v2 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("vars");
    v1 = clap_builder::builder::arg::Arg::action(&v5, 1);
    v8 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v5 = clap_builder::builder::command::Command::arg(&v2, &v8);
    v2 = clap_builder::builder::arg::Arg::new("ignore-signal");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "ignore-signal");
    v2 = clap_builder::builder::arg::Arg::value_name(&v1, "SIG");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::help(&v2, "set handling of SIG signal(s) to do nothing");
    clap_builder::builder::command::Command::arg(a0, &v5, &v1);
    return;
}
