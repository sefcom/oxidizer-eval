fn uu_date::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa60], Other Possible Types: struct592, struct712, struct80
    let v1: i4736;  // [sp-0x798], Other Possible Types: struct592, struct24, struct48
    let v2: i4736;  // [sp-0x548], Other Possible Types: struct592, struct712, struct437
    let v3: i4736;  // [sp-0x280], Other Possible Types: struct592, struct24
    let v5: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v0 = clap_builder::builder::command::Command::version(&v2, v5);
    v2 = clap_builder::builder::command::Command::about(&v0);
    v1 = uucore::format_usage(&g_460d64, 66);
    v0 = clap_builder::builder::command::Command::override_usage(&v2, &v1);
    memcpy(&v2, &v0, 700);
    v2.700 = 549755814016 | (stack_base)[1956] as i64;
    v2.708 = (stack_base)[1948] as i32;
    v0 = clap_builder::builder::arg::Arg::new("date");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 100);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "date");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "STRING");
    v3 = clap_builder::builder::arg::Arg::help(&v1, "display time described by STRING, not 'now'");
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("file");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 102);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "file");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "DATEFILE");
    v2 = clap_builder::builder::arg::Arg::value_hint(&v1, 3);
    v1 = clap_builder::builder::arg::Arg::help(&v2, "like --date; once for each line of DATEFILE");
    v2 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("iso-8601");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 73);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "iso-8601");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "FMT");
    v0 = struct80 {
        field_0: &g_44ff30
        field_8: 4
        field_16: &g_460d0d
        field_24: 5
        field_32: &g_460d12
        field_40: 7
        field_48: &g_460d19
        field_56: 7
        field_64: &g_460d20
        field_72: 2
    };
    v3 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::num_args(&v0);
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v1);
    v1 = clap_builder::builder::arg::Arg::help(&v0, &g_460b40, 200);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("rfc-email");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 82);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "rfc-email");
    v1 = clap_builder::builder::arg::Arg::help(&v2, &g_460c08, 82);
    v3 = clap_builder::builder::arg::Arg::action(&v1);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("rfc-3339");
    v1 = clap_builder::builder::arg::Arg::long(&v0, "rfc-3339");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "FMT");
    v1 = struct48 {
        field_0: &g_44ff30
        field_8: 4
        field_16: &g_460d19
        field_24: 7
        field_32: &g_460d20
        field_40: 2
    };
    v3 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v0, &v3);
    v3 = clap_builder::builder::arg::Arg::help(&v1, &g_460c5a, 151);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("debug");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "debug");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "annotate the parsed date, and warn about questionable usage to stderr");
    v1 = clap_builder::builder::arg::Arg::action(&v2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("reference");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 114);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "reference");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v1, 2);
    v1 = clap_builder::builder::arg::Arg::help(&v0, "display the last modification time of FILE");
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("set");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 115);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "set");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "STRING");
    v3 = clap_builder::builder::arg::Arg::help(&v1, "set time described by STRING");
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("universal");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 117);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "universal");
    v1 = clap_builder::builder::arg::Arg::alias(&v0, "utc");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "print or set Coordinated Universal Time (UTC)");
    v1 = clap_builder::builder::arg::Arg::action(&v0);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("format");
    clap_builder::builder::command::Command::arg(a0, &v0, &v2);
    return a0;
}
