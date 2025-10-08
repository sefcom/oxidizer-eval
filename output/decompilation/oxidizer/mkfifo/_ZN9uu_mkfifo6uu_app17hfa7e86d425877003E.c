fn uu_mkfifo::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct640;  // [bp-0x830], Other Possible Types: struct712
    let v4: struct712;  // [bp-0x830]
    let v5: struct640;  // [bp-0x830]
    let v6: struct640;  // [bp-0x830]
    let v7: struct640;  // [bp-0x830]
    let v8: u32;  // [bp-0x5b8]
    let v9: u64;  // [bp-0x574]
    let v10: u32;  // [bp-0x56c]
    let v11: struct437;  // [bp-0x568], Other Possible Types: struct712, struct640
    let v12: struct712;  // [bp-0x568]
    let v13: struct640;  // [bp-0x568]
    let v14: u32;  // [bp-0x2f0]
    let v15: u64;  // [bp-0x2ac]
    let v16: u32;  // [bp-0x2a4]
    let v17: struct640;  // [bp-0x2a0], Other Possible Types: u64
    let v20: u64;  // rdx

    v11 = clap_builder::builder::command::Command::new(uucore::util_name(), v20);
    v3 = clap_builder::builder::command::Command::version(&v11);
    v0 = uucore::format_usage("{} [OPTION]... NAME...");
    v11 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    v3 = clap_builder::builder::command::Command::about(&v11);
    memcpy(&v11, &v3, 700);
    v15 = 549755814016 | v9;
    v16 = v10;
    v3 = clap_builder::builder::arg::Arg::new("mode");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 109);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "mode");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "file permissions for the fifo");
    v17 = clap_builder::builder::arg::Arg::value_name(&v0, "MODE");
    v4 = clap_builder::builder::command::Command::arg(&v11, &v17);
    v11 = clap_builder::builder::arg::Arg::new("Z");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 90);
    v11 = clap_builder::builder::arg::Arg::help(&v0, "set the SELinux security context to default type");
    v0 = clap_builder::builder::arg::Arg::action(&v11, 2);
    v12 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v5 = clap_builder::builder::arg::Arg::new("context");
    v0 = clap_builder::builder::arg::Arg::long(&v5, "context");
    v6 = clap_builder::builder::arg::Arg::value_name(&v0, "CTX");
    v17 = 1;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v6, &v17);
    v7 = clap_builder::builder::arg::Arg::num_args(&v0, None, 1);
    memcpy(&v0, &v7, 632);
    v1 = 128 | v8;
    v2 = v8;
    v17 = clap_builder::builder::arg::Arg::help(&v0, "like -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX");
    v3 = clap_builder::builder::command::Command::arg(&v12, &v17);
    v13 = clap_builder::builder::arg::Arg::new("fifo");
    memcpy(&v0, &v13, 632);
    v1 = v14 | 4;
    v2 = v14;
    v11 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v11);
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return;
}
