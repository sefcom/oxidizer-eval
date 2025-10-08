fn uu_readlink::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v2: u64;  // [bp-0x574]
    let v3: u32;  // [bp-0x56c]
    let v4: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v5: u64;  // [bp-0x2ac]
    let v6: u32;  // [bp-0x2a4]
    let v7: struct640;  // [bp-0x2a0]
    let v10: u64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v4 = clap_builder::builder::command::Command::version(&v1);
    v1 = clap_builder::builder::command::Command::about(&v4);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | v5;
    v3 = v6;
    v4 = clap_builder::builder::arg::Arg::new("canonicalize");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 102);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "canonicalize");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "canonicalize by following every symlink in every component of the given name recursively; all but the last component must exist");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("canonicalize-existing");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 101);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "canonicalize-existing");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "canonicalize by following every symlink in every component of the given name recursively, all components must exist");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("canonicalize-missing");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 109);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "canonicalize-missing");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("no-newline");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 110);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "no-newline");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "do not output the trailing delimiter");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("quiet");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 113);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "suppress most error messages");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("silent");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 115);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "silent");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "suppress most error messages");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 118);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "report error message");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 122);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "zero");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "separate output with NUL rather than newline");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 1);
    v4 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v1, &v4);
    return;
}
