fn uu_unexpand::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct712
    let v1: i4736;  // [sp-0x780], Other Possible Types: struct592, struct24
    let v2: i32;  // [sp-0x538]
    let v3: i32;  // [sp-0x534]
    let v4: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v5: i64;  // [sp-0x274]
    let v6: i32;  // [sp-0x26c]
    let v7: i4736;  // [sp-0x268], Other Possible Types: struct592
    let v9: i64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v0 = clap_builder::builder::command::Command::version(&v4, "0.0.28");
    v1 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v0, &v1);
    v0 = clap_builder::builder::command::Command::about(&v4, &g_41d3d3, 126);
    memcpy(&v4, &v0, 700);
    v5 = 549755814016 | *((&v0 as &char + 700) as &i64);
    v6 = *((&v0 as &char + 708) as &i32);
    v0 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v1, &v0, 584);
    v2 = *((&v0 as &char + 584) as &i32) | 4;
    v3 = *((&v0 as &char + 588) as &i32);
    v0 = clap_builder::builder::arg::Arg::action(&v1, 0x1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("all");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 0x61);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "all");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "convert all blanks, instead of just initial blanks");
    v7 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("first-only");
    v1 = clap_builder::builder::arg::Arg::long(&v0, "first-only");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "convert only leading sequences of blanks (overrides -a)");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("tabs");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 0x74);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "tabs");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "use comma separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)");
    v4 = clap_builder::builder::arg::Arg::action(&v1, 0x1);
    v1 = clap_builder::builder::arg::Arg::value_name(&v4);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("no-utf8");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x55);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "no-utf8");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "interpret input file as 8-bit ASCII rather than UTF-8");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    clap_builder::builder::command::Command::arg(a0, &v4, &v0);
    return a0;
}
