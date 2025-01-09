fn uu_realpath::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xa50], Other Possible Types: struct592, struct712, struct437
    let v1: i32;  // [sp-0x808]
    let v2: i32;  // [sp-0x804]
    let v3: i64;  // [sp-0x794]
    let v4: i32;  // [sp-0x78c]
    let v5: i192;  // [sp-0x788], Other Possible Types: struct592, struct24
    let v6: i4736;  // [sp-0x538], Other Possible Types: struct592, struct712
    let v7: struct592;  // [sp-0x270], Other Possible Types: i4736, struct32
    let v9: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v6 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v6, "Print the resolved path");
    v5 = uucore::format_usage("{} [OPTION]... FILE...");
    v6 = clap_builder::builder::command::Command::override_usage(&v0, &v5);
    memcpy(&v0, &v6, 700);
    v3 = 549755814016 | *((&v6 as &char + 700) as &i64);
    v4 = *((&v6 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("quiet");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 0x71);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "quiet");
    v5 = clap_builder::builder::arg::Arg::help(&v6, "Do not print warnings for invalid paths");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("strip");
    v5 = clap_builder::builder::arg::Arg::short(&v0, 0x73);
    v0 = clap_builder::builder::arg::Arg::long(&v5, "strip");
    v5 = clap_builder::builder::arg::Arg::visible_alias(&v0, "no-symlinks");
    v0 = clap_builder::builder::arg::Arg::help(&v5, "Only strip '.' and '..' components, but don't resolve symbolic links");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v5);
    v6 = clap_builder::builder::arg::Arg::new("zero");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 0x7a);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "zero");
    v5 = clap_builder::builder::arg::Arg::help(&v6, "Separate output filenames with \\0 rather than newline");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("logical");
    v5 = clap_builder::builder::arg::Arg::short(&v0, 0x4c);
    v0 = clap_builder::builder::arg::Arg::long(&v5, "logical");
    v5 = clap_builder::builder::arg::Arg::help(&v0, "resolve '..' components before symlinks");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("physical");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 0x50);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "physical");
    v7 = struct32 {
        field_0: &g_41e0af
        field_8: 5
        field_16: &g_41e0b4
        field_24: 7
    };
    v5 = clap_builder::builder::arg::Arg::overrides_with_all(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::help(&v5, "resolve symlinks as encountered (default)");
    v5 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v5);
    v0 = clap_builder::builder::arg::Arg::new("canonicalize-existing");
    v5 = clap_builder::builder::arg::Arg::short(&v0, 0x65);
    v0 = clap_builder::builder::arg::Arg::long(&v5, "canonicalize-existing");
    v5 = clap_builder::builder::arg::Arg::help(&v0, "canonicalize by following every symlink in every component of the given name recursively, all components must exist");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("canonicalize-missing");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 0x6d);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "canonicalize-missing");
    v5 = clap_builder::builder::arg::Arg::help(&v6, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("relative-to");
    v5 = clap_builder::builder::arg::Arg::long(&v0, "relative-to");
    v0 = clap_builder::builder::arg::Arg::value_name(&v5);
    v5 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v7 = clap_builder::builder::arg::Arg::help(&v5, "print the resolved path relative to DIR");
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("relative-base");
    v5 = clap_builder::builder::arg::Arg::long(&v6, "relative-base");
    v6 = clap_builder::builder::arg::Arg::value_name(&v5);
    v5 = clap_builder::builder::arg::Arg::value_parser(&v6);
    v7 = clap_builder::builder::arg::Arg::help(&v5, "print absolute paths unless paths below DIR");
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("files");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    memcpy(&v0, &v5, 584);
    v1 = *((&v5 as &char + 584) as &i32) | 1;
    v2 = *((&v5 as &char + 588) as &i32);
    v5 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v5, 0x2);
    clap_builder::builder::command::Command::arg(a0, &v6, &v0);
    return a0;
}
