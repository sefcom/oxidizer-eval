fn uu_realpath::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xac0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x848]
    let v2: u32;  // [bp-0x844]
    let v3: struct437;  // [bp-0x840], Other Possible Types: struct712, struct640
    let v4: u32;  // [bp-0x5c8]
    let v5: u32;  // [bp-0x5c4]
    let v6: u64;  // [bp-0x584]
    let v7: u32;  // [bp-0x57c]
    let v8: struct712;  // [bp-0x578], Other Possible Types: struct640
    let v9: u64;  // [bp-0x2bc]
    let v10: u32;  // [bp-0x2b4]
    let v11: struct32;  // [bp-0x2b0], Other Possible Types: struct640
    let v14: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    v8 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v8);
    v0 = uucore::format_usage("{} [OPTION]... FILE...");
    v8 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | v9;
    v7 = v10;
    v8 = clap_builder::builder::arg::Arg::new("quiet");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 113);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "Do not print warnings for invalid paths");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("strip");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 115);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "strip");
    v0 = clap_builder::builder::arg::Arg::visible_alias(&v3);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Only strip '.' and '..' components, but don't resolve symbolic links");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 122);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "zero");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "Separate output filenames with \\0 rather than newline");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("logical");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 76);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "logical");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "resolve '..' components before symlinks");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("physical");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 80);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "physical");
    v11 = struct32 {
        field_0: "strip"
        field_16: "logical"
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::help(&v0, "resolve symlinks as encountered (default)");
    v0 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("canonicalize-existing");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 101);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "canonicalize-existing");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "canonicalize by following every symlink in every component of the given name recursively, all components must exist");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("canonicalize-missing");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 109);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "canonicalize-missing");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("relative-to");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "relative-to");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3);
    v11 = clap_builder::builder::arg::Arg::help(&v0, "print the resolved path relative to DIR");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("relative-base");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "relative-base");
    v8 = clap_builder::builder::arg::Arg::value_name(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v8);
    v11 = clap_builder::builder::arg::Arg::help(&v0, "print absolute paths unless paths below DIR");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 1);
    memcpy(&v3, &v0, 632);
    v4 = v1 | 1;
    v5 = v2;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v8, &v3);
    return;
}
