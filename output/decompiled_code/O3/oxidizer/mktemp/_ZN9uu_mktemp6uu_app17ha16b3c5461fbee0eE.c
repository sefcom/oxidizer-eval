fn uu_mktemp::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa60]
    let v1: i8;  // [bp-0xa50]
    let v2: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v3: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v4: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v5: i4736;  // [sp-0x268], Other Possible Types: struct592, struct17
    let v6: i64;  // [bp-0x258]
    let v8: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v8);
    v4 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v3 = clap_builder::builder::command::Command::about(&v4, "Create a temporary file or directory.");
    v2 = uucore::format_usage("{} [OPTION]... [TEMPLATE]");
    v4 = clap_builder::builder::command::Command::override_usage(&v3, &v2);
    memcpy(&v3, &v4, 700);
    v3.700 = 549755814016 | (stack_base)[628] as i64;
    v3.708 = (stack_base)[620] as i32;
    v4 = clap_builder::builder::arg::Arg::new("directory");
    v2 = clap_builder::builder::arg::Arg::short(&v4, 100);
    v4 = clap_builder::builder::arg::Arg::long(&v2, "directory");
    v2 = clap_builder::builder::arg::Arg::help(&v4, "Make a directory instead of a file");
    v5 = clap_builder::builder::arg::Arg::action(&v2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v5);
    v3 = clap_builder::builder::arg::Arg::new("dry-run");
    v2 = clap_builder::builder::arg::Arg::short(&v3, 117);
    v3 = clap_builder::builder::arg::Arg::long(&v2, "dry-run");
    v2 = clap_builder::builder::arg::Arg::help(&v3, "do not create anything; merely print a name (unsafe)");
    v5 = clap_builder::builder::arg::Arg::action(&v2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v5);
    v4 = clap_builder::builder::arg::Arg::new("quiet");
    v2 = clap_builder::builder::arg::Arg::short(&v4, 113);
    v4 = clap_builder::builder::arg::Arg::long(&v2, "quiet");
    v2 = clap_builder::builder::arg::Arg::help(&v4, "Fail silently if an error occurs.");
    v5 = clap_builder::builder::arg::Arg::action(&v2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v5);
    v3 = clap_builder::builder::arg::Arg::new("suffix");
    v2 = clap_builder::builder::arg::Arg::long(&v3, "suffix");
    v3 = clap_builder::builder::arg::Arg::help(&v2, "append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not end with X.");
    v2 = clap_builder::builder::arg::Arg::value_name(&v3, "SUFFIX");
    v3 = clap_builder::builder::command::Command::arg(&v4, &v2);
    v4 = clap_builder::builder::arg::Arg::new("p");
    v2 = clap_builder::builder::arg::Arg::short(&v4, 112);
    v4 = clap_builder::builder::arg::Arg::help(&v2, "short form of --tmpdir");
    v2 = clap_builder::builder::arg::Arg::value_name(&v4, "DIR");
    v4 = clap_builder::builder::arg::Arg::num_args(&v2, v8);
    v0 = 3;
    v6 = v1;
    v5 = v0;
    v5.8 = (stack_base)[2648] as i64;
    v2 = clap_builder::builder::arg::Arg::value_parser(&v4, &v5);
    v5 = clap_builder::builder::arg::Arg::value_hint(&v2, 4);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v5);
    v3 = clap_builder::builder::arg::Arg::new("tmpdir");
    v2 = clap_builder::builder::arg::Arg::long(&v3, "tmpdir");
    v3 = clap_builder::builder::arg::Arg::help(&v2, "interpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp creates only the final component");
    v2 = clap_builder::builder::arg::Arg::value_name(&v3, "DIR");
    v5 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v3 = clap_builder::builder::arg::Arg::num_args(&v2, &v5);
    memcpy(&v2, &v3, 584);
    v2.584 = 128 | (stack_base)[1456] as i32;
    v2.588 = (stack_base)[1452] as i32;
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v2, "p");
    v2 = clap_builder::builder::arg::Arg::value_parser(&v3, &v0);
    v5 = clap_builder::builder::arg::Arg::value_hint(&v2, 4);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v5);
    v4 = clap_builder::builder::arg::Arg::new("t");
    v2 = clap_builder::builder::arg::Arg::short(&v4, 116);
    v4 = clap_builder::builder::arg::Arg::help(&v2, "Generate a template (using the supplied prefix and TMPDIR (TMP on windows) if set) to create a filename template [deprecated]");
    v2 = clap_builder::builder::arg::Arg::action(&v4);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v2);
    v3 = clap_builder::builder::arg::Arg::new("template");
    v2 = clap_builder::builder::arg::Arg::num_args(&v3);
    clap_builder::builder::command::Command::arg(a0, &v4, &v2);
    return a0;
}
