fn uu_chmod::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct437;  // [bp-0xab0], Other Possible Types: struct712, struct640
    let v1: u64;  // [bp-0x7f4]
    let v2: u32;  // [bp-0x7ec]
    let v3: struct24;  // [bp-0x7e8], Other Possible Types: struct712, struct640
    let v4: u64;  // [bp-0x52c]
    let v5: u32;  // [bp-0x524]
    let v6: struct24;  // [bp-0x520], Other Possible Types: struct640
    let v7: struct640;  // [bp-0x2a0]
    let v10: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v3 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v3);
    v6 = uucore::format_usage("{} [OPTION]... MODE[,MODE]... FILE...\n{} [OPTION]... OCTAL-MODE FILE...\n{} [OPTION]... --reference=RFILE FILE...");
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 290482760148582536 | v4;
    v2 = v5;
    v3 = clap_builder::builder::arg::Arg::new("help");
    v6 = clap_builder::builder::arg::Arg::long(&v3, "help");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "Print help information.");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 5);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("changes");
    v6 = clap_builder::builder::arg::Arg::long(&v0, "changes");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 99);
    v6 = clap_builder::builder::arg::Arg::help(&v0, "like verbose but report only when a change is made");
    v7 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("quiet");
    v6 = clap_builder::builder::arg::Arg::long(&v3, "quiet");
    v3 = clap_builder::builder::arg::Arg::visible_alias(&v6);
    v6 = clap_builder::builder::arg::Arg::short(&v3, 102);
    v3 = clap_builder::builder::arg::Arg::help(&v6, "suppress most error messages");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("verbose");
    v6 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 118);
    v6 = clap_builder::builder::arg::Arg::help(&v0, "output a diagnostic for every file processed");
    v7 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("no-preserve-root");
    v6 = clap_builder::builder::arg::Arg::long(&v3, "no-preserve-root");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "do not treat '/' specially (the default)");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("preserve-root");
    v6 = clap_builder::builder::arg::Arg::long(&v0, "preserve-root");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "fail to operate recursively on '/'");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("recursive");
    v6 = clap_builder::builder::arg::Arg::long(&v3, "recursive");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 82);
    v6 = clap_builder::builder::arg::Arg::help(&v3, "change files and directories recursively");
    v7 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("RFILE");
    v6 = clap_builder::builder::arg::Arg::long(&v0, "reference");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v6, 3);
    v6 = clap_builder::builder::arg::Arg::help(&v0, "use RFILE's mode instead of MODE values");
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("MODE");
    v6 = clap_builder::builder::arg::Arg::required_unless_present(&v3, "RFILE");
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("FILE");
    v6 = clap_builder::builder::arg::Arg::required_unless_present(&v0, "MODE");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 1);
    v6 = clap_builder::builder::arg::Arg::value_hint(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = uucore::features::perms::common_args();
    clap_builder::builder::command::Command::args(a0, &v0, &v3);
    return;
}
