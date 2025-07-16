fn uu_mktemp::uu_app(a0: &struct712) -> long long {
    let v0: u64;  // [bp-0xa60]
    let v1: u64;  // [bp-0xa58]
    let v2: u64;  // [bp-0xa50]
    let v3: u8;  // [bp-0xa48]
    let v4: u32;  // [bp-0x800]
    let v5: u32;  // [bp-0x7fc]
    let v6: struct437;  // [bp-0x7f8]
    let v7: u32;  // [bp-0x5b0]
    let v8: i8;  // [bp-0x5ac]
    let v9: u64;  // [bp-0x53c]
    let v10: u32;  // [bp-0x534]
    let v11: u8;  // [bp-0x530]
    let v12: u64;  // [bp-0x274]
    let v13: u32;  // [bp-0x26c]
    let v14: u8;  // [bp-0x268]
    let v15: u64;  // [bp-0x260]
    let v16: u64;  // [bp-0x258]
    let v19: u64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    clap_builder::builder::command::Command::version(&v11, &v6, "0.0.28");
    clap_builder::builder::command::Command::about(&v6, &v11, "Create a temporary file or directory.");
    uucore::format_usage(&v3, "{} [OPTION]... [TEMPLATE]");
    clap_builder::builder::command::Command::override_usage(&v11, &v6, &v3);
    memcpy(&v6, &v11, 700);
    v9 = 549755814016 | v12;
    v10 = v13;
    clap_builder::builder::arg::Arg::new(&v11, "directory");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 100);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "directory");
    clap_builder::builder::arg::Arg::help(&v3, &v11, "Make a directory instead of a file");
    clap_builder::builder::arg::Arg::action(&v14, &v3);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new(&v6, "dry-run");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 117);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "dry-run");
    clap_builder::builder::arg::Arg::help(&v3, &v6, "do not create anything; merely print a name (unsafe)");
    clap_builder::builder::arg::Arg::action(&v14, &v3);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v14);
    clap_builder::builder::arg::Arg::new(&v11, "quiet");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 113);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "quiet");
    clap_builder::builder::arg::Arg::help(&v3, &v11, "Fail silently if an error occurs.");
    clap_builder::builder::arg::Arg::action(&v14, &v3);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new(&v6, "suffix");
    clap_builder::builder::arg::Arg::long(&v3, &v6, "suffix");
    clap_builder::builder::arg::Arg::help(&v6, &v3, "append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not end with X.");
    clap_builder::builder::arg::Arg::value_name(&v3, &v6, "SUFFIX");
    clap_builder::builder::command::Command::arg(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new(&v11, "p");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 112);
    clap_builder::builder::arg::Arg::help(&v11, &v3, "short form of --tmpdir");
    clap_builder::builder::arg::Arg::value_name(&v3, &v11, "DIR");
    clap_builder::builder::arg::Arg::num_args(&v11, &v3);
    v0 = 3;
    v16 = v2;
    v14 = v0;
    v15 = v1;
    clap_builder::builder::arg::Arg::value_parser(&v3, &v11, &v14);
    clap_builder::builder::arg::Arg::value_hint(&v14, &v3, 4);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new(&v6, "tmpdir");
    clap_builder::builder::arg::Arg::long(&v3, &v6, "tmpdir");
    clap_builder::builder::arg::Arg::help(&v6, &v3, "interpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp creates only the final component");
    clap_builder::builder::arg::Arg::value_name(&v3, &v6, "DIR");
    v14 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    clap_builder::builder::arg::Arg::num_args(&v6, &v3, &v14);
    memcpy(&v3, &v6, 584);
    v4 = 128 | v7;
    v5 = *(&v8 as &i32);
    clap_builder::builder::arg::Arg::overrides_with(&v6, &v3, "p");
    clap_builder::builder::arg::Arg::value_parser(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::value_hint(&v14, &v3, 4);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v14);
    clap_builder::builder::arg::Arg::new(&v11, "t");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 116);
    clap_builder::builder::arg::Arg::help(&v11, &v3, "Generate a template (using the supplied prefix and TMPDIR (TMP on windows) if set) to create a filename template [deprecated]");
    clap_builder::builder::arg::Arg::action(&v3, &v11);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v3);
    clap_builder::builder::arg::Arg::new(&v6, "template");
    clap_builder::builder::arg::Arg::num_args(&v3, &v6);
    clap_builder::builder::command::Command::arg(a0, &v11, &v3);
    return a0;
}
