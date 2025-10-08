fn uu_mkdir::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct437;  // [bp-0xab0], Other Possible Types: struct712, struct640
    let v1: struct712;  // [bp-0xab0]
    let v2: struct640;  // [bp-0xab0]
    let v3: struct640;  // [bp-0xab0]
    let v4: u32;  // [bp-0x838]
    let v5: u64;  // [bp-0x7f4]
    let v6: u32;  // [bp-0x7ec]
    let v7: struct24;  // [bp-0x7e8], Other Possible Types: struct640
    let v8: u32;  // [bp-0x570]
    let v9: u32;  // [bp-0x56c]
    let v10: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v11: u64;  // [bp-0x2ac]
    let v12: u32;  // [bp-0x2a4]
    let v13: struct640;  // [bp-0x2a0], Other Possible Types: u64
    let v16: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    v10 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v10);
    v7 = uucore::format_usage("{} [OPTION]... DIRECTORY...");
    v10 = clap_builder::builder::command::Command::override_usage(&v0, &v7);
    memcpy(&v0, &v10, 700);
    v5 = 549755814016 | v11;
    v6 = v12;
    v10 = clap_builder::builder::arg::Arg::new("mode");
    v7 = clap_builder::builder::arg::Arg::short(&v10, 109);
    v10 = clap_builder::builder::arg::Arg::long(&v7, "mode");
    v7 = clap_builder::builder::arg::Arg::help(&v10, "set file mode (not implemented on windows)");
    v10 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("parents");
    v7 = clap_builder::builder::arg::Arg::short(&v0, 112);
    v0 = clap_builder::builder::arg::Arg::long(&v7, "parents");
    v7 = clap_builder::builder::arg::Arg::help(&v0, "make parent directories as needed");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v7);
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v10, &v7);
    v10 = clap_builder::builder::arg::Arg::new("verbose");
    v7 = clap_builder::builder::arg::Arg::short(&v10, 118);
    v10 = clap_builder::builder::arg::Arg::long(&v7, "verbose");
    v7 = clap_builder::builder::arg::Arg::help(&v10, "print a message for each printed directory");
    v13 = clap_builder::builder::arg::Arg::action(&v7, 2);
    v10 = clap_builder::builder::command::Command::arg(&v0, &v13);
    v0 = clap_builder::builder::arg::Arg::new("z");
    v7 = clap_builder::builder::arg::Arg::short(&v0, 90);
    v0 = clap_builder::builder::arg::Arg::help(&v7, "set SELinux security context of each created directory to the default type");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v10, &v7);
    v10 = clap_builder::builder::arg::Arg::new("context");
    v7 = clap_builder::builder::arg::Arg::long(&v10, "context");
    v10 = clap_builder::builder::arg::Arg::value_name(&v7);
    v7 = clap_builder::builder::arg::Arg::help(&v10, "like -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX");
    v10 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v2 = clap_builder::builder::arg::Arg::new("dirs");
    v7 = clap_builder::builder::arg::Arg::action(&v2, 1);
    v3 = clap_builder::builder::arg::Arg::num_args(&v7);
    memcpy(&v7, &v3, 632);
    v8 = v4 | 1;
    v9 = v4;
    v13 = 2;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v7, &v13);
    v7 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v10, &v7);
    return;
}
