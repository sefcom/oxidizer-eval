fn uu_mktemp::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0xac8]
    let v1: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v2: u32;  // [bp-0x838]
    let v3: u32;  // [bp-0x834]
    let v4: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v5: struct712;  // [bp-0x830]
    let v6: struct640;  // [bp-0x830]
    let v7: struct640;  // [bp-0x830]
    let v8: struct640;  // [bp-0x830]
    let v9: u32;  // [bp-0x5b8]
    let v10: u64;  // [bp-0x574]
    let v11: u32;  // [bp-0x56c]
    let v12: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v13: u64;  // [bp-0x2ac]
    let v14: u32;  // [bp-0x2a4]
    let v15: struct640;  // [bp-0x2a0]
    let v18: u64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v18);
    v12 = clap_builder::builder::command::Command::version(&v4);
    v4 = clap_builder::builder::command::Command::about(&v12);
    v1 = uucore::format_usage("{} [OPTION]... [TEMPLATE]");
    v12 = clap_builder::builder::command::Command::override_usage(&v4, &v1);
    memcpy(&v4, &v12, 700);
    v10 = 549755814016 | v13;
    v11 = v14;
    v12 = clap_builder::builder::arg::Arg::new("directory");
    v1 = clap_builder::builder::arg::Arg::short(&v12, 100);
    v12 = clap_builder::builder::arg::Arg::long(&v1, "directory");
    v1 = clap_builder::builder::arg::Arg::help(&v12, "Make a directory instead of a file");
    v15 = clap_builder::builder::arg::Arg::action(&v1);
    v12 = clap_builder::builder::command::Command::arg(&v4, &v15);
    v4 = clap_builder::builder::arg::Arg::new("dry-run");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 117);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "dry-run");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "do not create anything; merely print a name (unsafe)");
    v15 = clap_builder::builder::arg::Arg::action(&v1);
    v4 = clap_builder::builder::command::Command::arg(&v12, &v15);
    v12 = clap_builder::builder::arg::Arg::new("quiet");
    v1 = clap_builder::builder::arg::Arg::short(&v12, 113);
    v12 = clap_builder::builder::arg::Arg::long(&v1, "quiet");
    v1 = clap_builder::builder::arg::Arg::help(&v12, "Fail silently if an error occurs.");
    v15 = clap_builder::builder::arg::Arg::action(&v1);
    v12 = clap_builder::builder::command::Command::arg(&v4, &v15);
    v4 = clap_builder::builder::arg::Arg::new("suffix");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "suffix");
    v4 = clap_builder::builder::arg::Arg::help(&v1, "append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not end with X.");
    v1 = clap_builder::builder::arg::Arg::value_name(&v4, "SUFFIX");
    v5 = clap_builder::builder::command::Command::arg(&v12, &v1);
    v12 = clap_builder::builder::arg::Arg::new("p");
    v1 = clap_builder::builder::arg::Arg::short(&v12, 112);
    v12 = clap_builder::builder::arg::Arg::help(&v1, "short form of --tmpdir");
    v1 = clap_builder::builder::arg::Arg::value_name(&v12, "DIR");
    v12 = clap_builder::builder::arg::Arg::num_args(&v1);
    v0 = 3;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v12, &v0);
    v15 = clap_builder::builder::arg::Arg::value_hint(&v1);
    v12 = clap_builder::builder::command::Command::arg(&v5, &v15);
    v6 = clap_builder::builder::arg::Arg::new("tmpdir");
    v1 = clap_builder::builder::arg::Arg::long(&v6, "tmpdir");
    v7 = clap_builder::builder::arg::Arg::help(&v1, "interpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp creates only the final component");
    v1 = clap_builder::builder::arg::Arg::value_name(&v7, "DIR");
    v8 = clap_builder::builder::arg::Arg::num_args(&v1, None, 1);
    memcpy(&v1, &v8, 632);
    v2 = 128 | v9;
    v3 = v9;
    v4 = clap_builder::builder::arg::Arg::overrides_with(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v4, &v0);
    v15 = clap_builder::builder::arg::Arg::value_hint(&v1);
    v4 = clap_builder::builder::command::Command::arg(&v12, &v15);
    v12 = clap_builder::builder::arg::Arg::new("t");
    v1 = clap_builder::builder::arg::Arg::short(&v12, 116);
    v12 = clap_builder::builder::arg::Arg::help(&v1, "Generate a template (using the supplied prefix and TMPDIR (TMP on windows) if set) to create a filename template [deprecated]");
    v1 = clap_builder::builder::arg::Arg::action(&v12);
    v12 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("template");
    v1 = clap_builder::builder::arg::Arg::num_args(&v4);
    clap_builder::builder::command::Command::arg(a0, &v12, &v1);
    return;
}
