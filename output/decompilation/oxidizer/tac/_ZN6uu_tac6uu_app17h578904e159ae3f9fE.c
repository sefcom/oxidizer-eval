fn uu_tac::uu_app(a0: &struct712) -> u64 {
    let v0: struct712;  // [sp-0xa48], Other Possible Types: struct592
    let v1: struct592;  // [sp-0x780], Other Possible Types: struct24
    let v2: i32;  // [sp-0x538]
    let v3: i32;  // [sp-0x534]
    let v4: struct592;  // [sp-0x530], Other Possible Types: struct712, struct437
    let v5: i64;  // [sp-0x274]
    let v6: i32;  // [sp-0x26c]
    let v7: struct592;  // [sp-0x268]
    let v9: i64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v0 = clap_builder::builder::command::Command::version(&v4, "0.0.28");
    v1 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v0, &v1);
    v0 = clap_builder::builder::command::Command::about(&v4, "Write each file to standard output, last line first.");
    memcpy(&v4, &v0, 700);
    v5 = 549755814016 | *((&v0.field_0 as &char + 700) as &i64);
    v6 = *((&v0.field_0 as &char + 708) as &i32);
    v0 = clap_builder::builder::arg::Arg::new("before");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x62);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "before");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "attach the separator before instead of after");
    v7 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("regex");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 0x72);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "regex");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "interpret the sequence as a regular expression");
    v7 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("separator");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x73);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "separator");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "use STRING as the separator instead of newline");
    v7 = clap_builder::builder::arg::Arg::value_name(&v1);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v1, &v4, 584);
    v2 = *((&v4.field_0 as &char + 584) as &i32) | 4;
    v3 = *((&v4.field_0 as &char + 588) as &i32);
    v4 = clap_builder::builder::arg::Arg::action(&v1, 0x1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v4, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v0, &v1);
    return a0;
}
