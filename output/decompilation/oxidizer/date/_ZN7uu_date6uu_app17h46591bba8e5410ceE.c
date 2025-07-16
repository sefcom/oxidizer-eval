fn uu_date::uu_app(a0: &struct712) -> long long {
    let v0: u640;  // [bp-0xa58]
    let v1: u64;  // [bp-0x79c]
    let v2: u32;  // [bp-0x794]
    let v3: u384;  // [bp-0x790]
    let v4: struct437;  // [bp-0x540]
    let v5: u64;  // [bp-0x284]
    let v6: u32;  // [bp-0x27c]
    let v7: u8;  // [bp-0x278], Other Possible Types: struct24
    let v10: u64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    clap_builder::builder::command::Command::version(&v0, &v4, "0.0.28");
    clap_builder::builder::command::Command::about(&v4, &v0, "Print or set the system date and time");
    uucore::format_usage(&v3, "{} [OPTION]... [+FORMAT]...\n{} [OPTION]... [MMDDhhmm[[CC]YY][.ss]]");
    clap_builder::builder::command::Command::override_usage(&v0, &v4, &v3);
    memcpy(&v4, &v0, 700);
    v5 = 549755814016 | v1;
    v6 = v2;
    clap_builder::builder::arg::Arg::new(&v0, "date");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 100);
    clap_builder::builder::arg::Arg::long(&v0, &v3, "date");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "STRING");
    clap_builder::builder::arg::Arg::help(&v7, &v3, "display time described by STRING, not 'now'");
    clap_builder::builder::command::Command::arg(&v0, &v4, &v7);
    clap_builder::builder::arg::Arg::new(&v4, "file");
    clap_builder::builder::arg::Arg::short(&v3, &v4, 102);
    clap_builder::builder::arg::Arg::long(&v4, &v3, "file");
    clap_builder::builder::arg::Arg::value_name(&v3, &v4, "DATEFILE");
    clap_builder::builder::arg::Arg::value_hint(&v4, &v3, 3);
    clap_builder::builder::arg::Arg::help(&v3, &v4, "like --date; once for each line of DATEFILE");
    clap_builder::builder::command::Command::arg(&v4, &v0, &v3);
    clap_builder::builder::arg::Arg::new(&v0, "iso-8601");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 73);
    clap_builder::builder::arg::Arg::long(&v0, &v3, "iso-8601");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "FMT");
    v0 = struct80 {
        field_0: &g_44fd30
        field_8: 4
        field_16: &g_460b1d
        field_24: 5
        field_32: &g_460b22
        field_40: 7
        field_48: &g_460b29
        field_56: 7
        field_64: &g_460b30
        field_72: 2
    };
    v7 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    clap_builder::builder::arg::Arg::value_parser(&v0, &v3, &v7);
    v7 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    clap_builder::builder::arg::Arg::num_args(&v3, &v0, &v7);
    clap_builder::builder::arg::Arg::default_missing_value(&v0, &v3);
    clap_builder::builder::arg::Arg::help(&v3, &v0, "output date/time in ISO 8601 format.\n FMT='date' for date only (the default),\n 'hours', 'minutes', 'seconds', or 'ns'\n for date and time to the indicated precision.\n Example: 2006-08-14T02:34:56-06:00");
    clap_builder::builder::command::Command::arg(&v0, &v4, &v3);
    clap_builder::builder::arg::Arg::new(&v4, "rfc-email");
    clap_builder::builder::arg::Arg::short(&v3, &v4, 82);
    clap_builder::builder::arg::Arg::long(&v4, &v3, "rfc-email");
    clap_builder::builder::arg::Arg::help(&v3, &v4, "output date and time in RFC 5322 format.\n Example: Mon, 14 Aug 2006 02:34:56 -0600");
    clap_builder::builder::arg::Arg::action(&v7, &v3);
    clap_builder::builder::command::Command::arg(&v4, &v0, &v7);
    clap_builder::builder::arg::Arg::new(&v0, "rfc-3339");
    clap_builder::builder::arg::Arg::long(&v3, &v0, "rfc-3339");
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "FMT");
    v3 = struct48 {
        field_0: &g_44fd30
        field_8: 4
        field_16: &g_460b29
        field_24: 7
        field_32: &g_460b30
        field_40: 2
    };
    v7 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v3);
    clap_builder::builder::arg::Arg::value_parser(&v3, &v0, &v7);
    clap_builder::builder::arg::Arg::help(&v7, &v3, "output date/time in RFC 3339 format.\n FMT='date', 'seconds', or 'ns'\n for date and time to the indicated precision.\n Example: 2006-08-14 02:34:56-06:00");
    clap_builder::builder::command::Command::arg(&v0, &v4, &v7);
    clap_builder::builder::arg::Arg::new(&v4, "debug");
    clap_builder::builder::arg::Arg::long(&v3, &v4, "debug");
    clap_builder::builder::arg::Arg::help(&v4, &v3, "annotate the parsed date, and warn about questionable usage to stderr");
    clap_builder::builder::arg::Arg::action(&v3, &v4);
    clap_builder::builder::command::Command::arg(&v4, &v0, &v3);
    clap_builder::builder::arg::Arg::new(&v0, "reference");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 114);
    clap_builder::builder::arg::Arg::long(&v0, &v3, "reference");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "FILE");
    clap_builder::builder::arg::Arg::value_hint(&v0, &v3, 2);
    clap_builder::builder::arg::Arg::help(&v3, &v0, "display the last modification time of FILE");
    clap_builder::builder::command::Command::arg(&v0, &v4, &v3);
    clap_builder::builder::arg::Arg::new(&v4, "set");
    clap_builder::builder::arg::Arg::short(&v3, &v4, 115);
    clap_builder::builder::arg::Arg::long(&v4, &v3, "set");
    clap_builder::builder::arg::Arg::value_name(&v3, &v4, "STRING");
    clap_builder::builder::arg::Arg::help(&v7, &v3, "set time described by STRING");
    clap_builder::builder::command::Command::arg(&v4, &v0, &v7);
    clap_builder::builder::arg::Arg::new(&v0, "universal");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 117);
    clap_builder::builder::arg::Arg::long(&v0, &v3, "universal");
    clap_builder::builder::arg::Arg::alias(&v3, &v0, "utc");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "print or set Coordinated Universal Time (UTC)");
    clap_builder::builder::arg::Arg::action(&v3, &v0);
    clap_builder::builder::command::Command::arg(&v0, &v4, &v3);
    clap_builder::builder::arg::Arg::new(&v4, "format");
    clap_builder::builder::command::Command::arg(a0, &v0, &v4);
    return a0;
}
