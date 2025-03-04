fn uu_mktemp::uu_app(a0: &struct712) -> u64 {
    let v0: i64;  // [sp-0xa60]
    let v1: i8;  // [bp-0xa58]
    let v2: i8;  // [bp-0xa50]
    let v3: struct592;  // [sp-0xa48], Other Possible Types: struct24
    let v4: i32;  // [sp-0x800]
    let v5: i32;  // [sp-0x7fc]
    let v6: struct592;  // [sp-0x7f8], Other Possible Types: struct712, struct437
    let v7: i64;  // [sp-0x53c]
    let v8: i32;  // [sp-0x534]
    let v9: struct592;  // [sp-0x530], Other Possible Types: struct712
    let v10: struct592;  // [sp-0x268], Other Possible Types: struct17, unsigned long
    let v11: i64;  // [sp-0x260]
    let v12: i64;  // [bp-0x258]
    let v14: i64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    v9 = clap_builder::builder::command::Command::version(&v6, "0.0.28");
    v6 = clap_builder::builder::command::Command::about(&v9, "Create a temporary file or directory.");
    v3 = uucore::format_usage("{} [OPTION]... [TEMPLATE]");
    v9 = clap_builder::builder::command::Command::override_usage(&v6, &v3);
    memcpy(&v6, &v9, 700);
    v7 = 549755814016 | *((&v9.field_0 as &char + 700) as &i64);
    v8 = *((&v9.field_0 as &char + 708) as &i32);
    v9 = clap_builder::builder::arg::Arg::new("directory");
    v3 = clap_builder::builder::arg::Arg::short(&v9, 0x64);
    v9 = clap_builder::builder::arg::Arg::long(&v3, "directory");
    v3 = clap_builder::builder::arg::Arg::help(&v9, "Make a directory instead of a file");
    v10 = clap_builder::builder::arg::Arg::action(&v3);
    v9 = clap_builder::builder::command::Command::arg(&v6, &v10);
    v6 = clap_builder::builder::arg::Arg::new("dry-run");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x75);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "dry-run");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "do not create anything; merely print a name (unsafe)");
    v10 = clap_builder::builder::arg::Arg::action(&v3);
    v6 = clap_builder::builder::command::Command::arg(&v9, &v10);
    v9 = clap_builder::builder::arg::Arg::new("quiet");
    v3 = clap_builder::builder::arg::Arg::short(&v9, 0x71);
    v9 = clap_builder::builder::arg::Arg::long(&v3, "quiet");
    v3 = clap_builder::builder::arg::Arg::help(&v9, "Fail silently if an error occurs.");
    v10 = clap_builder::builder::arg::Arg::action(&v3);
    v9 = clap_builder::builder::command::Command::arg(&v6, &v10);
    v6 = clap_builder::builder::arg::Arg::new("suffix");
    v3 = clap_builder::builder::arg::Arg::long(&v6, "suffix");
    v6 = clap_builder::builder::arg::Arg::help(&v3, "append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not end with X.");
    v3 = clap_builder::builder::arg::Arg::value_name(&v6, "SUFFIX");
    v6 = clap_builder::builder::command::Command::arg(&v9, &v3);
    v9 = clap_builder::builder::arg::Arg::new("p");
    v3 = clap_builder::builder::arg::Arg::short(&v9, 0x70);
    v9 = clap_builder::builder::arg::Arg::help(&v3, "short form of --tmpdir");
    v3 = clap_builder::builder::arg::Arg::value_name(&v9, "DIR");
    v9 = clap_builder::builder::arg::Arg::num_args(&v3);
    v0 = 3;
    *(&v12 as &i64) = *(&v2 as &i64);
    v10 = v0;
    v11 = *(&v1 as &i64);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v9, &v10);
    v10 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x4);
    v9 = clap_builder::builder::command::Command::arg(&v6, &v10);
    v6 = clap_builder::builder::arg::Arg::new("tmpdir");
    v3 = clap_builder::builder::arg::Arg::long(&v6, "tmpdir");
    v6 = clap_builder::builder::arg::Arg::help(&v3, "interpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp creates only the final component");
    v3 = clap_builder::builder::arg::Arg::value_name(&v6, "DIR");
    v10 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v6 = clap_builder::builder::arg::Arg::num_args(&v3, &v10);
    memcpy(&v3, &v6, 584);
    v4 = 128 | *((&v6.field_0 as &char + 584) as &i32);
    v5 = *((&v6.field_0 as &char + 588) as &i32);
    v6 = clap_builder::builder::arg::Arg::overrides_with(&v3, "p");
    v3 = clap_builder::builder::arg::Arg::value_parser(&v6, &v0);
    v10 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x4);
    v6 = clap_builder::builder::command::Command::arg(&v9, &v10);
    v9 = clap_builder::builder::arg::Arg::new("t");
    v3 = clap_builder::builder::arg::Arg::short(&v9, 0x74);
    v9 = clap_builder::builder::arg::Arg::help(&v3, "Generate a template (using the supplied prefix and TMPDIR (TMP on windows) if set) to create a filename template [deprecated]");
    v3 = clap_builder::builder::arg::Arg::action(&v9);
    v9 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("template");
    v3 = clap_builder::builder::arg::Arg::num_args(&v6);
    clap_builder::builder::command::Command::arg(a0, &v9, &v3);
    return a0;
}
