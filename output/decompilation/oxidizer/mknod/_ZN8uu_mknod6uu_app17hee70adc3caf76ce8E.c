fn uu_mknod::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
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
    let v11: struct640;  // [bp-0x568]
    let v12: struct712;  // [bp-0x568]
    let v13: struct712;  // [bp-0x568]
    let v14: u32;  // [bp-0x2f0]
    let v15: u64;  // [bp-0x2ac]
    let v16: u32;  // [bp-0x2a4]
    let v17: struct16;  // [bp-0x2a0], Other Possible Types: struct640, u64
    let v20: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v20);
    v12 = clap_builder::builder::command::Command::version(&v3);
    v0 = uucore::format_usage("{} [OPTION]... NAME TYPE [MAJOR MINOR]");
    v3 = clap_builder::builder::command::Command::override_usage(&v12, &v0);
    v13 = clap_builder::builder::command::Command::after_help(&v3);
    v3 = clap_builder::builder::command::Command::about(&v13);
    memcpy(&v13, &v3, 700);
    v15 = 549755814016 | v8;
    v16 = v9;
    v3 = clap_builder::builder::arg::Arg::new("mode");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 109);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "mode");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "MODE");
    v17 = clap_builder::builder::arg::Arg::help(&v0, "set file permission bits to MODE, not a=rw - umask");
    v4 = clap_builder::builder::command::Command::arg(&v13, &v17);
    v10 = clap_builder::builder::arg::Arg::new("name");
    v0 = clap_builder::builder::arg::Arg::value_name(&v10, "NAME");
    v11 = clap_builder::builder::arg::Arg::help(&v0, "name of the new file");
    memcpy(&v0, &v11, 632);
    v1 = v14 | 1;
    v2 = v14;
    v17 = clap_builder::builder::arg::Arg::value_hint(&v0);
    v10 = clap_builder::builder::command::Command::arg(&v4, &v17);
    v5 = clap_builder::builder::arg::Arg::new("type");
    v0 = clap_builder::builder::arg::Arg::value_name(&v5, "TYPE");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "type of the new file (b, c, u or p)");
    memcpy(&v0, &v6, 632);
    v1 = v7 | 1;
    v2 = v7;
    v17 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v3 = clap_builder::builder::command::Command::arg(&v10, &v17);
    v10 = clap_builder::builder::arg::Arg::new("major");
    v0 = clap_builder::builder::arg::Arg::value_name(&v10, "major");
    v10 = clap_builder::builder::arg::Arg::help(&v0, "major file type");
    v17 = <u64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser();
    v0 = clap_builder::builder::arg::Arg::value_parser(&v10, &v17);
    v10 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("minor");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "minor");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "minor file type");
    v17 = <u64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser();
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v17);
    v3 = clap_builder::builder::command::Command::arg(&v10, &v0);
    v10 = clap_builder::builder::arg::Arg::new("z");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 90);
    v10 = clap_builder::builder::arg::Arg::help(&v0, "set SELinux security context of each created directory to the default type");
    v0 = clap_builder::builder::arg::Arg::action(&v10);
    v10 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("context");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "context");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "CTX");
    v17 = 1;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v17);
    v3 = clap_builder::builder::arg::Arg::num_args(&v0, None, 1);
    memcpy(&v0, &v3, 632);
    v1 = 128 | v7;
    v2 = (&v7)[1];
    v3 = clap_builder::builder::arg::Arg::help(&v0, "like -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX");
    clap_builder::builder::command::Command::arg(a0, &v10, &v3);
    return;
}
