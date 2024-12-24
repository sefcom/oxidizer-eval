fn uu_readlink::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa50], Other Possible Types: struct592, struct24
    let v1: i4736;  // [sp-0x800], Other Possible Types: struct592, struct712, struct437
    let v2: i4736;  // [sp-0x538], Other Possible Types: struct592, struct712
    let v3: i4736;  // [sp-0x270], Other Possible Types: struct592
    let v5: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::version(&v1, v5);
    v1 = clap_builder::builder::command::Command::about(&v2);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v2, 700);
    v1.700 = 549755814016 | (stack_base)[636] as i64;
    v1.708 = (stack_base)[628] as i32;
    v2 = clap_builder::builder::arg::Arg::new("canonicalize");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 102);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "canonicalize");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "canonicalize by following every symlink in every component of the given name recursively; all but the last component must exist");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("canonicalize-existing");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 101);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "canonicalize-existing");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "canonicalize by following every symlink in every component of the given name recursively, all components must exist");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("canonicalize-missing");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 109);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "canonicalize-missing");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("no-newline");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 110);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "no-newline");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "do not output the trailing delimiter");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("quiet");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 113);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "suppress most error messages");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("silent");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 115);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "silent");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "suppress most error messages");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 118);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "report error message");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 122);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "zero");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "separate output with NUL rather than newline");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v1, &v2);
    return a0;
}
