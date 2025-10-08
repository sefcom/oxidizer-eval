fn uu_pinky::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct712;  // [bp-0xaa8], Other Possible Types: struct640
    let v1: u64;  // [bp-0x7ec]
    let v2: u32;  // [bp-0x7e4]
    let v3: struct437;  // [bp-0x7e0], Other Possible Types: struct712, struct640
    let v4: u64;  // [bp-0x524]
    let v5: u32;  // [bp-0x51c]
    let v6: struct24;  // [bp-0x518], Other Possible Types: struct640
    let v7: struct640;  // [bp-0x298]
    let v10: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v0 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v0);
    v6 = uucore::format_usage("{} [OPTION]... [USER]...");
    v0 = clap_builder::builder::command::Command::override_usage(&v3, &v6);
    memcpy(&v3, &v0, 700);
    v4 = 2252349570023552 | v1;
    v5 = v2;
    v0 = clap_builder::builder::arg::Arg::new("long_format");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 108);
    v0 = clap_builder::builder::arg::Arg::requires(&v6);
    v6 = clap_builder::builder::arg::Arg::help(&v0, "produce long format output for the specified USERs");
    v7 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("omit_home_dir");
    v6 = clap_builder::builder::arg::Arg::short(&v3, 98);
    v3 = clap_builder::builder::arg::Arg::help(&v6, "omit the user's home directory and shell in long format");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("omit_project_file");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 104);
    v0 = clap_builder::builder::arg::Arg::help(&v6, "omit the user's project file in long format");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("omit_plan_file");
    v6 = clap_builder::builder::arg::Arg::short(&v3, 112);
    v3 = clap_builder::builder::arg::Arg::help(&v6, "omit the user's plan file in long format");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("short_format");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::help(&v6, "do short format output, this is the default");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("omit_headings");
    v6 = clap_builder::builder::arg::Arg::short(&v3, 102);
    v3 = clap_builder::builder::arg::Arg::help(&v6, "omit the line of column headings in short format");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("omit_name");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 119);
    v0 = clap_builder::builder::arg::Arg::help(&v6, "omit the user's full name in short format");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("omit_name_host");
    v6 = clap_builder::builder::arg::Arg::short(&v3, 105);
    v3 = clap_builder::builder::arg::Arg::help(&v6, "omit the user's full name and remote host in short format");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("omit_name_host_time");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 113);
    v0 = clap_builder::builder::arg::Arg::help(&v6, "omit the user's full name, remote host and idle time in short format");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("user");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v7 = clap_builder::builder::arg::Arg::value_hint(&v6);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("help");
    v6 = clap_builder::builder::arg::Arg::long(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v6, "Print help information");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 5);
    clap_builder::builder::command::Command::arg(a0, &v3, &v6);
    return;
}
