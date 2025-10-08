fn uu_install::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct632, struct640
    let v1: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v2: u64;  // [bp-0x574]
    let v3: u32;  // [bp-0x56c]
    let v4: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v5: u64;  // [bp-0x2ac]
    let v6: u32;  // [bp-0x2a4]
    let v7: struct640;  // [bp-0x2a0]
    let v10: u64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v4 = clap_builder::builder::command::Command::version(&v1);
    v1 = clap_builder::builder::command::Command::about(&v4);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | v5;
    v3 = v6;
    v0 = uucore::features::backup_control::arguments::backup();
    v4 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v0 = uucore::features::backup_control::arguments::backup_no_args();
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("ignored");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 99);
    v4 = clap_builder::builder::arg::Arg::help(&v0, "ignored");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("compare");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 67);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "compare");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "compare each pair of source and destination files, and in some cases, do not modify the destination at all");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("directory");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 100);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "directory");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "treat all arguments as directory names. create all components of the specified directories");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("create-leading");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 68);
    v1 = clap_builder::builder::arg::Arg::help(&v0, "create all leading components of DEST except the last, then copy SOURCE to DEST");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("group");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 103);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "group");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "set group ownership, instead of process's current group");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "GROUP");
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("mode");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 109);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "mode");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "set permission mode (as in chmod), instead of rwxr-xr-x");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "MODE");
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("owner");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 111);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "owner");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "set ownership (super-user only)");
    v4 = clap_builder::builder::arg::Arg::value_name(&v0, "OWNER");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v4, 9);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("preserve-timestamps");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 112);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "preserve-timestamps");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "apply access/modification times of SOURCE files to corresponding destination files");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("strip");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 115);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "strip");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "strip symbol tables (no action Windows)");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("strip-program");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "strip-program");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "program used to strip binaries (no action Windows)");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "PROGRAM");
    v7 = clap_builder::builder::arg::Arg::value_hint(&v0, 6);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v0 = uucore::features::backup_control::arguments::suffix();
    v4 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("target-directory");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 116);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "target-directory");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "move all SOURCE arguments into DIRECTORY");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "DIRECTORY");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v1, 4);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("no-target-directory");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 84);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "no-target-directory");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "treat DEST as a normal file");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 118);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "explain what is being done");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("preserve-context");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 80);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "preserve-context");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "(unimplemented) preserve security context");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("context");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 90);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "context");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "(unimplemented) set security context of files and directories");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "CONTEXT");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 1);
    v4 = clap_builder::builder::arg::Arg::num_args(&v0);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v4, 2);
    clap_builder::builder::command::Command::arg(a0, &v1, &v0);
    return;
}
