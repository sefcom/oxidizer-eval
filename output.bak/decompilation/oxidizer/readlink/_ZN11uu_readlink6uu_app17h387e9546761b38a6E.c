fn uu_readlink::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xa50], Other Possible Types: struct592, struct24
    let v1: i5696;  // [sp-0x800], Other Possible Types: struct592, struct712, struct437
    let v2: i64;  // [sp-0x544]
    let v3: i32;  // [sp-0x53c]
    let v4: i5696;  // [sp-0x538], Other Possible Types: struct592, struct712
    let v5: struct592;  // [sp-0x270], Other Possible Types: i4736
    let v7: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v4 = clap_builder::builder::command::Command::version(&v1);
    v1 = clap_builder::builder::command::Command::about(&v4);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | *((&v4 as &char + 700) as &i64);
    v3 = *((&v4 as &char + 708) as &i32);
    v4 = clap_builder::builder::arg::Arg::new("canonicalize");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x66);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "canonicalize");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "canonicalize by following every symlink in every component of the given name recursively; all but the last component must exist");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("canonicalize-existing");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x65);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "canonicalize-existing");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "canonicalize by following every symlink in every component of the given name recursively, all components must exist");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v5);
    v4 = clap_builder::builder::arg::Arg::new("canonicalize-missing");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x6d);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "canonicalize-missing");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("no-newline");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x6e);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "no-newline");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "do not output the trailing delimiter");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v5);
    v4 = clap_builder::builder::arg::Arg::new("quiet");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x71);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "suppress most error messages");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("silent");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x73);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "silent");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "suppress most error messages");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v5);
    v4 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x76);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "report error message");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x7a);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "zero");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "separate output with NUL rather than newline");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v5);
    v4 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 0x1);
    v4 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v1, &v4);
    return a0;
}
