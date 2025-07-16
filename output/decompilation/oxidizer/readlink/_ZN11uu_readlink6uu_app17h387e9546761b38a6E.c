fn uu_readlink::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa50]
    let v1: struct437;  // [bp-0x800]
    let v2: u64;  // [bp-0x544]
    let v3: u32;  // [bp-0x53c]
    let v4: u8;  // [bp-0x538]
    let v5: u64;  // [bp-0x27c]
    let v6: u32;  // [bp-0x274]
    let v7: u8;  // [bp-0x270]
    let v10: u64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    clap_builder::builder::command::Command::version(&v4, &v1);
    clap_builder::builder::command::Command::about(&v1, &v4);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v4, &v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | v5;
    v3 = v6;
    clap_builder::builder::arg::Arg::new(&v4, "canonicalize");
    clap_builder::builder::arg::Arg::short(&v0, &v4, 102);
    clap_builder::builder::arg::Arg::long(&v4, &v0, "canonicalize");
    clap_builder::builder::arg::Arg::help(&v0, &v4, "canonicalize by following every symlink in every component of the given name recursively; all but the last component must exist");
    clap_builder::builder::arg::Arg::action(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new(&v1, "canonicalize-existing");
    clap_builder::builder::arg::Arg::short(&v0, &v1, 101);
    clap_builder::builder::arg::Arg::long(&v1, &v0, "canonicalize-existing");
    clap_builder::builder::arg::Arg::help(&v0, &v1, "canonicalize by following every symlink in every component of the given name recursively, all components must exist");
    clap_builder::builder::arg::Arg::action(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new(&v4, "canonicalize-missing");
    clap_builder::builder::arg::Arg::short(&v0, &v4, 109);
    clap_builder::builder::arg::Arg::long(&v4, &v0, "canonicalize-missing");
    clap_builder::builder::arg::Arg::help(&v0, &v4, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence");
    clap_builder::builder::arg::Arg::action(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new(&v1, "no-newline");
    clap_builder::builder::arg::Arg::short(&v0, &v1, 110);
    clap_builder::builder::arg::Arg::long(&v1, &v0, "no-newline");
    clap_builder::builder::arg::Arg::help(&v0, &v1, "do not output the trailing delimiter");
    clap_builder::builder::arg::Arg::action(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new(&v4, "quiet");
    clap_builder::builder::arg::Arg::short(&v0, &v4, 113);
    clap_builder::builder::arg::Arg::long(&v4, &v0, "quiet");
    clap_builder::builder::arg::Arg::help(&v0, &v4, "suppress most error messages");
    clap_builder::builder::arg::Arg::action(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new(&v1, "silent");
    clap_builder::builder::arg::Arg::short(&v0, &v1, 115);
    clap_builder::builder::arg::Arg::long(&v1, &v0, "silent");
    clap_builder::builder::arg::Arg::help(&v0, &v1, "suppress most error messages");
    clap_builder::builder::arg::Arg::action(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new(&v4, "verbose");
    clap_builder::builder::arg::Arg::short(&v0, &v4, 118);
    clap_builder::builder::arg::Arg::long(&v4, &v0, "verbose");
    clap_builder::builder::arg::Arg::help(&v0, &v4, "report error message");
    clap_builder::builder::arg::Arg::action(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new(&v1, "zero");
    clap_builder::builder::arg::Arg::short(&v0, &v1, 122);
    clap_builder::builder::arg::Arg::long(&v1, &v0, "zero");
    clap_builder::builder::arg::Arg::help(&v0, &v1, "separate output with NUL rather than newline");
    clap_builder::builder::arg::Arg::action(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new(&v4, "files");
    clap_builder::builder::arg::Arg::action(&v0, &v4, 1);
    clap_builder::builder::arg::Arg::value_hint(&v4, &v0);
    clap_builder::builder::command::Command::arg(a0, &v1, &v4);
    return a0;
}
