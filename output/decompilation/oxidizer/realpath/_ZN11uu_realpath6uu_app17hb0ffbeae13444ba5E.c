fn uu_realpath::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0xa50]
    let v1: u32;  // [bp-0x808]
    let v2: u32;  // [bp-0x804]
    let v3: u64;  // [bp-0x794]
    let v4: u32;  // [bp-0x78c]
    let v5: u8;  // [bp-0x788]
    let v6: u32;  // [bp-0x540]
    let v7: u32;  // [bp-0x53c]
    let v8: u8;  // [bp-0x538]
    let v9: u64;  // [bp-0x27c]
    let v10: u32;  // [bp-0x274]
    let v11: u8;  // [bp-0x270]
    let v14: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v8, &v0, "0.0.28");
    clap_builder::builder::command::Command::about(&v0, &v8, "Print the resolved path");
    uucore::format_usage(&v5, "{} [OPTION]... FILE...");
    clap_builder::builder::command::Command::override_usage(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 549755814016 | v9;
    v4 = v10;
    clap_builder::builder::arg::Arg::new(&v8, "quiet");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 113);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "quiet");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "Do not print warnings for invalid paths");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "strip");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 115);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "strip");
    clap_builder::builder::arg::Arg::visible_alias(&v5, &v0, "no-symlinks");
    clap_builder::builder::arg::Arg::help(&v0, &v5, "Only strip '.' and '..' components, but don't resolve symbolic links");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new(&v8, "zero");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 122);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "zero");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "Separate output filenames with \\0 rather than newline");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "logical");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 76);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "logical");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "resolve '..' components before symlinks");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "physical");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 80);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "physical");
    v11 = struct32 {
        field_0: &g_41e0af
        field_8: 5
        field_16: &g_41e0b4
        field_24: 7
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v5, &v8, &v11);
    clap_builder::builder::arg::Arg::help(&v8, &v5, "resolve symlinks as encountered (default)");
    clap_builder::builder::arg::Arg::action(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new(&v0, "canonicalize-existing");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 101);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "canonicalize-existing");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "canonicalize by following every symlink in every component of the given name recursively, all components must exist");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "canonicalize-missing");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 109);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "canonicalize-missing");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "relative-to");
    clap_builder::builder::arg::Arg::long(&v5, &v0, "relative-to");
    clap_builder::builder::arg::Arg::value_name(&v0, &v5);
    clap_builder::builder::arg::Arg::value_parser(&v5, &v0);
    clap_builder::builder::arg::Arg::help(&v11, &v5, "print the resolved path relative to DIR");
    clap_builder::builder::command::Command::arg(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "relative-base");
    clap_builder::builder::arg::Arg::long(&v5, &v8, "relative-base");
    clap_builder::builder::arg::Arg::value_name(&v8, &v5);
    clap_builder::builder::arg::Arg::value_parser(&v5, &v8);
    clap_builder::builder::arg::Arg::help(&v11, &v5, "print absolute paths unless paths below DIR");
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "files");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 1);
    memcpy(&v0, &v5, 584);
    v1 = v6 | 1;
    v2 = v7;
    clap_builder::builder::arg::Arg::value_parser(&v5, &v0);
    clap_builder::builder::arg::Arg::value_hint(&v0, &v5, 2);
    clap_builder::builder::command::Command::arg(a0, &v8, &v0);
    return a0;
}
