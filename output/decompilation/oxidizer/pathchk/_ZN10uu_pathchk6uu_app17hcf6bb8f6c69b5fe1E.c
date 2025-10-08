fn uu_pathchk::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct437;  // [bp-0x828], Other Possible Types: struct712, struct640
    let v1: struct712;  // [bp-0x828]
    let v2: struct640;  // [bp-0x828]
    let v3: u32;  // [bp-0x5b0]
    let v4: core::fmt::rt::Argument;  // [bp-0x56c]
    let v5: u32;  // [bp-0x564]
    let v6: struct640;  // [bp-0x560], Other Possible Types: struct712
    let v7: core::fmt::Arguments;  // [bp-0x2a4]
    let v8: u32;  // [bp-0x29c]
    let v9: struct24;  // [bp-0x298], Other Possible Types: struct640
    let v10: u32;  // [bp-0x20]
    let v11: u32;  // [bp-0x1c]
    let v14: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    v6 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v6);
    v9 = uucore::format_usage("{} [OPTION]... NAME...");
    v6 = clap_builder::builder::command::Command::override_usage(&v0, &v9);
    memcpy(&v0, &v6, 700);
    v4 = 549755814016 | v7;
    v5 = v8;
    v6 = clap_builder::builder::arg::Arg::new("posix");
    v9 = clap_builder::builder::arg::Arg::short(&v6, 112);
    v6 = clap_builder::builder::arg::Arg::help(&v9, "check for most POSIX systems");
    v9 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::new("posix-special");
    v9 = clap_builder::builder::arg::Arg::short(&v0, 80);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "check for empty names and leading \"-\"");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v6, &v9);
    v6 = clap_builder::builder::arg::Arg::new("portability");
    v9 = clap_builder::builder::arg::Arg::long(&v6);
    v6 = clap_builder::builder::arg::Arg::help(&v9, "check for all POSIX systems (equivalent to -p -P)");
    v9 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v6 = clap_builder::builder::command::Command::arg(&v1, &v9);
    v2 = clap_builder::builder::arg::Arg::new("path");
    memcpy(&v9, &v2, 632);
    v10 = v3 | 4;
    v11 = v3;
    v0 = clap_builder::builder::arg::Arg::action(&v9, 1);
    v9 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v6, &v9);
    return;
}
