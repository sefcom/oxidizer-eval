fn uu_ln::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct632, struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v4: struct712;  // [bp-0x830]
    let v5: struct640;  // [bp-0x830]
    let v6: struct640;  // [bp-0x830]
    let v7: u32;  // [bp-0x5b8]
    let v8: u64;  // [bp-0x574]
    let v9: u32;  // [bp-0x56c]
    let v10: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v11: u64;  // [bp-0x2ac]
    let v12: u32;  // [bp-0x2a4]
    let v13: struct640;  // [bp-0x2a0]
    let v16: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    v10 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v10);
    v0 = uucore::format_usage("{} [OPTION]... [-T] TARGET LINK_NAME\n{} [OPTION]... TARGET\n{} [OPTION]... TARGET... DIRECTORY\n{} [OPTION]... -t DIRECTORY TARGET...");
    v10 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v10, 700);
    v8 = 549755814016 | v11;
    v9 = v12;
    v0 = uucore::features::backup_control::arguments::backup();
    v10 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v0 = uucore::features::backup_control::arguments::backup_no_args();
    v3 = clap_builder::builder::command::Command::arg(&v10, &v0);
    v10 = clap_builder::builder::arg::Arg::new("force");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 102);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "force");
    v0 = clap_builder::builder::arg::Arg::help(&v10, "remove existing destination files");
    v13 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v10 = clap_builder::builder::command::Command::arg(&v3, &v13);
    v3 = clap_builder::builder::arg::Arg::new("interactive");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 105);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "interactive");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "prompt whether to remove existing destination files");
    v13 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v10, &v13);
    v10 = clap_builder::builder::arg::Arg::new("no-dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 110);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "no-dereference");
    v0 = clap_builder::builder::arg::Arg::help(&v10, "treat LINK_NAME as a normal file if it is a symbolic link to a directory");
    v13 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v10 = clap_builder::builder::command::Command::arg(&v3, &v13);
    v3 = clap_builder::builder::arg::Arg::new("logical");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 76);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "logical");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "follow TARGETs that are symbolic links");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, &g_419518);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v10, &v0);
    v10 = clap_builder::builder::arg::Arg::new("physical");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 80);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "physical");
    v0 = clap_builder::builder::arg::Arg::help(&v10, "make hard links directly to symbolic links");
    v13 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v10 = clap_builder::builder::command::Command::arg(&v3, &v13);
    v3 = clap_builder::builder::arg::Arg::new("symbolic");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 115);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "symbolic");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "make symbolic links instead of hard links");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, &g_4195b8);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v10, &v0);
    v0 = uucore::features::backup_control::arguments::suffix();
    v10 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("target-directory");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 116);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "target-directory");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "specify the DIRECTORY in which to create the links");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3, 4);
    v13 = clap_builder::builder::arg::Arg::conflicts_with(&v0);
    v3 = clap_builder::builder::command::Command::arg(&v10, &v13);
    v10 = clap_builder::builder::arg::Arg::new("no-target-directory");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 84);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "no-target-directory");
    v0 = clap_builder::builder::arg::Arg::help(&v10, "treat LINK_NAME as a normal file always");
    v13 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v10 = clap_builder::builder::command::Command::arg(&v3, &v13);
    v3 = clap_builder::builder::arg::Arg::new("relative");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 114);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "relative");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "create symbolic links relative to link location");
    v3 = clap_builder::builder::arg::Arg::requires(&v0);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v4 = clap_builder::builder::command::Command::arg(&v10, &v0);
    v10 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 118);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v10, "print name of each linked file");
    v13 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v10 = clap_builder::builder::command::Command::arg(&v4, &v13);
    v5 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::action(&v5, 1);
    v6 = clap_builder::builder::arg::Arg::value_hint(&v0, 2);
    memcpy(&v0, &v6, 632);
    v1 = v7 | 1;
    v2 = v7;
    v3 = clap_builder::builder::arg::Arg::num_args(&v0);
    clap_builder::builder::command::Command::arg(a0, &v10, &v3);
    return;
}
