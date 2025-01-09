fn uu_ln::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct712, struct437
    let v1: i64;  // [sp-0x78c]
    let v2: i32;  // [sp-0x784]
    let v3: i4736;  // [sp-0x780], Other Possible Types: struct592, struct24
    let v4: i32;  // [sp-0x538]
    let v5: i32;  // [sp-0x534]
    let v6: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v7: i4736;  // [sp-0x268], Other Possible Types: struct592
    let v9: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v6 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v6, "Make links between files.");
    v3 = uucore::format_usage("{} [OPTION]... [-T] TARGET LINK_NAME\n{} [OPTION]... TARGET\n{} [OPTION]... TARGET... DIRECTORY\n{} [OPTION]... -t DIRECTORY TARGET...");
    v6 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    memcpy(&v0, &v6, 700);
    v1 = 549755814016 | *((&v6 as &char + 700) as &i64);
    v2 = *((&v6 as &char + 708) as &i32);
    v3 = uucore::features::backup_control::arguments::backup();
    v6 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v3 = uucore::features::backup_control::arguments::backup_no_args();
    v0 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("force");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x66);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "force");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "remove existing destination files");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("interactive");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x69);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "interactive");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "prompt whether to remove existing destination files");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("no-dereference");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x6e);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "no-dereference");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "treat LINK_NAME as a normal file if it is a symbolic link to a directory");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("logical");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x4c);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "logical");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "follow TARGETs that are symbolic links");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v3, "physical");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("physical");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x50);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "physical");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "make hard links directly to symbolic links");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("symbolic");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x73);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "symbolic");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "make symbolic links instead of hard links");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v3, "symbolic");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v3 = uucore::features::backup_control::arguments::suffix();
    v6 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("target-directory");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x74);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "target-directory");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "specify the DIRECTORY in which to create the links");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x4);
    v7 = clap_builder::builder::arg::Arg::conflicts_with(&v3, "no-target-directory");
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("no-target-directory");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x54);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "no-target-directory");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "treat LINK_NAME as a normal file always");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("relative");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x72);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "relative");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "create symbolic links relative to link location");
    v0 = clap_builder::builder::arg::Arg::requires(&v3, "symbolic");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("verbose");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x76);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "verbose");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "print name of each linked file");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("files");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x2);
    memcpy(&v3, &v0, 584);
    v4 = *((&v0 as &char + 584) as &i32) | 1;
    v5 = *((&v0 as &char + 588) as &i32);
    v0 = clap_builder::builder::arg::Arg::num_args(&v3);
    clap_builder::builder::command::Command::arg(a0, &v6, &v0);
    return a0;
}
