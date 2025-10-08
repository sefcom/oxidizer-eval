fn uu_chown::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct437;  // [bp-0xab8], Other Possible Types: struct712, struct640
    let v1: u64;  // [bp-0x7fc]
    let v2: u32;  // [bp-0x7f4]
    let v3: struct24;  // [bp-0x7f0], Other Possible Types: struct712, struct640
    let v4: u64;  // [bp-0x534]
    let v5: u32;  // [bp-0x52c]
    let v6: struct24;  // [bp-0x528], Other Possible Types: struct640
    let v7: struct640;  // [bp-0x2a8]
    let v10: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v3 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v3);
    v6 = uucore::format_usage("{} [OPTION]... [OWNER][:[GROUP]] FILE...\n{} [OPTION]... --reference=RFILE FILE...");
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 2252349570023552 | v4;
    v2 = v5;
    v3 = clap_builder::builder::arg::Arg::new("help");
    v6 = clap_builder::builder::arg::Arg::long(&v3, "help");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "Print help information.");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 5);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("changes");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 99);
    v0 = clap_builder::builder::arg::Arg::long(&v6, "changes");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "like verbose but report only when a change is made");
    v7 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("from");
    v6 = clap_builder::builder::arg::Arg::long(&v3, "from");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "change the owner and/or group of each file only if its current owner and/or group match those specified here. Either may be omitted, in which case a match is not required for the omitted attribute");
    v6 = clap_builder::builder::arg::Arg::value_name(&v3, "CURRENT_OWNER:CURRENT_GROUP");
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("preserve-root");
    v6 = clap_builder::builder::arg::Arg::long(&v0, "preserve-root");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "fail to operate recursively on '/'");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("no-preserve-root");
    v6 = clap_builder::builder::arg::Arg::long(&v3, "no-preserve-root");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "do not treat '/' specially (the default)");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("quiet");
    v6 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "suppress most error messages");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("recursive");
    v6 = clap_builder::builder::arg::Arg::short(&v3, 82);
    v3 = clap_builder::builder::arg::Arg::long(&v6, "recursive");
    v6 = clap_builder::builder::arg::Arg::help(&v3, "operate on files and directories recursively");
    v7 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("reference");
    v6 = clap_builder::builder::arg::Arg::long(&v0, "reference");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "use RFILE's owner and group rather than specifying OWNER:GROUP values");
    v6 = clap_builder::builder::arg::Arg::value_name(&v0, "RFILE");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v6);
    v6 = clap_builder::builder::arg::Arg::num_args(&v0);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("silent");
    v6 = clap_builder::builder::arg::Arg::short(&v3, 102);
    v3 = clap_builder::builder::arg::Arg::long(&v6, "silent");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("verbose");
    v6 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 118);
    v6 = clap_builder::builder::arg::Arg::help(&v0, "output a diagnostic for every file processed");
    v7 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = uucore::features::perms::common_args();
    clap_builder::builder::command::Command::args(a0, &v0, &v3);
    return;
}
