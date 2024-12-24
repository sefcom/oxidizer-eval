fn uu_realpath::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa50], Other Possible Types: struct592, struct712, struct437
    let v1: i4736;  // [sp-0x788], Other Possible Types: struct592, struct24
    let v2: i4736;  // [sp-0x538], Other Possible Types: struct592, struct712
    let v3: struct592;  // [sp-0x270], Other Possible Types: i4736, struct32
    let v5: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v2, "Print the resolved path");
    v1 = uucore::format_usage("{} [OPTION]... FILE...");
    v2 = clap_builder::builder::command::Command::override_usage(&v0, &v1);
    memcpy(&v0, &v2, 700);
    v0.700 = 549755814016 | (stack_base)[636] as i64;
    v0.708 = (stack_base)[628] as i32;
    v2 = clap_builder::builder::arg::Arg::new("quiet");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 113);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "quiet");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "Do not print warnings for invalid paths");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("strip");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "strip");
    v1 = clap_builder::builder::arg::Arg::visible_alias(&v0, "no-symlinks");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Only strip '.' and '..' components, but don't resolve symbolic links");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("zero");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 122);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "zero");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "Separate output filenames with \\0 rather than newline");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("logical");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 76);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "logical");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "resolve '..' components before symlinks");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("physical");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 80);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "physical");
    v3 = struct32 {
        field_0: &g_41e127
        field_8: 5
        field_16: &g_41e12c
        field_24: 7
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::help(&v1, "resolve symlinks as encountered (default)");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("canonicalize-existing");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 101);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "canonicalize-existing");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "canonicalize by following every symlink in every component of the given name recursively, all components must exist");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("canonicalize-missing");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 109);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "canonicalize-missing");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("relative-to");
    v1 = clap_builder::builder::arg::Arg::long(&v0, "relative-to");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, v5);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v3 = clap_builder::builder::arg::Arg::help(&v1, "print the resolved path relative to DIR");
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("relative-base");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "relative-base");
    v2 = clap_builder::builder::arg::Arg::value_name(&v1, v5);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2);
    v3 = clap_builder::builder::arg::Arg::help(&v1, "print absolute paths unless paths below DIR");
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("files");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 1);
    memcpy(&v0, &v1, 584);
    v0.584 = (stack_base)[1344] as i32 | 1;
    v0.588 = (stack_base)[1340] as i32;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v1, 2);
    clap_builder::builder::command::Command::arg(a0, &v2, &v0);
    return a0;
}
