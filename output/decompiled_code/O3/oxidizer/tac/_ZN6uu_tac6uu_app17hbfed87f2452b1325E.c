fn uu_tac::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i5696;  // [sp-0xa48], Other Possible Types: struct592, struct712
    let v1: i4736;  // [sp-0x780], Other Possible Types: struct592, struct24
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v3: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v5: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v0 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v1 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v0, &v1);
    v0 = clap_builder::builder::command::Command::about(&v2, "Write each file to standard output, last line first.");
    memcpy(&v2, &v0, 700);
    v2.700 = 549755814016 | (stack_base)[1932] as i64;
    v2.708 = (stack_base)[1924] as i32;
    v0 = clap_builder::builder::arg::Arg::new("before");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 98);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "before");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "attach the separator before instead of after");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("regex");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 114);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "regex");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "interpret the sequence as a regular expression");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("separator");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "separator");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "use STRING as the separator instead of newline");
    v3 = clap_builder::builder::arg::Arg::value_name(&v1, v5);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v1, &v2, 584);
    v1.584 = (stack_base)[744] as i32 | 4;
    v1.588 = (stack_base)[740] as i32;
    v2 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v2, 3);
    clap_builder::builder::command::Command::arg(a0, &v0, &v1);
    return a0;
}
