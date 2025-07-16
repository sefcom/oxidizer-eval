fn uu_ln::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: i8;  // [bp-0x7fc]
    let v3: u64;  // [bp-0x78c]
    let v4: u32;  // [bp-0x784]
    let v5: u8;  // [bp-0x780], Other Possible Types: struct584
    let v6: u32;  // [bp-0x538]
    let v7: u32;  // [bp-0x534]
    let v8: u8;  // [bp-0x530]
    let v9: u64;  // [bp-0x274]
    let v10: u32;  // [bp-0x26c]
    let v11: u8;  // [bp-0x268]
    let v14: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v8, &v0, "0.0.28");
    clap_builder::builder::command::Command::about(&v0, &v8, "Make links between files.");
    uucore::format_usage(&v5, "{} [OPTION]... [-T] TARGET LINK_NAME\n{} [OPTION]... TARGET\n{} [OPTION]... TARGET... DIRECTORY\n{} [OPTION]... -t DIRECTORY TARGET...");
    clap_builder::builder::command::Command::override_usage(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 549755814016 | v9;
    v4 = v10;
    uucore::features::backup_control::arguments::backup(&v5);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v5);
    uucore::features::backup_control::arguments::backup_no_args(&v5);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new(&v8, "force");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 102);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "force");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "remove existing destination files");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "interactive");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 105);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "interactive");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "prompt whether to remove existing destination files");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "no-dereference");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 110);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "no-dereference");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "treat LINK_NAME as a normal file if it is a symbolic link to a directory");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "logical");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 76);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "logical");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "follow TARGETs that are symbolic links");
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v5, "physical");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new(&v8, "physical");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 80);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "physical");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "make hard links directly to symbolic links");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "symbolic");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 115);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "symbolic");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "make symbolic links instead of hard links");
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v5, "symbolic");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    v5 = uucore::features::backup_control::arguments::suffix();
    clap_builder::builder::command::Command::arg(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new(&v0, "target-directory");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 116);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "target-directory");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "specify the DIRECTORY in which to create the links");
    clap_builder::builder::arg::Arg::value_name(&v0, &v5);
    clap_builder::builder::arg::Arg::value_hint(&v5, &v0, 4);
    clap_builder::builder::arg::Arg::conflicts_with(&v11, &v5, "no-target-directory");
    clap_builder::builder::command::Command::arg(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "no-target-directory");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 84);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "no-target-directory");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "treat LINK_NAME as a normal file always");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "relative");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 114);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "relative");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "create symbolic links relative to link location");
    clap_builder::builder::arg::Arg::requires(&v0, &v5, "symbolic");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new(&v8, "verbose");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 118);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "verbose");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "print name of each linked file");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "files");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 1);
    clap_builder::builder::arg::Arg::value_hint(&v0, &v5, 2);
    memcpy(&v5, &v0, 584);
    v6 = v1 | 1;
    v7 = *(&v2 as &i32);
    clap_builder::builder::arg::Arg::num_args(&v0, &v5);
    clap_builder::builder::command::Command::arg(a0, &v8, &v0);
    return a0;
}
