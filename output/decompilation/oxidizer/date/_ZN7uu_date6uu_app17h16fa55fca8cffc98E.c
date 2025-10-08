fn uu_date::uu_app(a0: i64) -> u64 {
    let v0: u64;  // [bp-0xac8]
    let v1: struct24;  // [bp-0xac0], Other Possible Types: struct48, struct640
    let v2: u32;  // [bp-0x848]
    let v3: u32;  // [bp-0x844]
    let v4: struct80;  // [bp-0x840], Other Possible Types: struct712, struct640
    let v5: u32;  // [bp-0x5c8]
    let v6: u32;  // [bp-0x5c4]
    let v7: u64;  // [bp-0x584]
    let v8: u32;  // [bp-0x57c]
    let v9: struct437;  // [bp-0x578], Other Possible Types: struct712, struct640
    let v10: u64;  // [bp-0x2bc]
    let v11: u32;  // [bp-0x2b4]
    let v12: struct640;  // [bp-0x2b0], Other Possible Types: u8
    let v15: u64;  // rdx

    v9 = clap_builder::builder::command::Command::new(uucore::util_name(), v15);
    v4 = clap_builder::builder::command::Command::version(&v9);
    v9 = clap_builder::builder::command::Command::about(&v4);
    v1 = uucore::format_usage("{} [OPTION]... [+FORMAT]...\n{} [OPTION]... [MMDDhhmm[[CC]YY][.ss]]");
    v4 = clap_builder::builder::command::Command::override_usage(&v9, &v1);
    memcpy(&v9, &v4, 700);
    v10 = 549755814016 | v7;
    v11 = v8;
    v4 = clap_builder::builder::arg::Arg::new("date");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 100);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "date");
    v1 = clap_builder::builder::arg::Arg::value_name(&v4, "STRING");
    memcpy(&v4, &v1, 632);
    v5 = v2 | 32;
    v6 = v3;
    v1 = clap_builder::builder::arg::Arg::help(&v4, "display time described by STRING, not 'now'");
    v4 = clap_builder::builder::command::Command::arg(&v9, &v1);
    v9 = clap_builder::builder::arg::Arg::new("file");
    v1 = clap_builder::builder::arg::Arg::short(&v9, 102);
    v9 = clap_builder::builder::arg::Arg::long(&v1, "file");
    v1 = clap_builder::builder::arg::Arg::value_name(&v9, "DATEFILE");
    v9 = clap_builder::builder::arg::Arg::value_hint(&v1, 3);
    v1 = clap_builder::builder::arg::Arg::help(&v9, "like --date; once for each line of DATEFILE");
    v9 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("iso-8601");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 73);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "iso-8601");
    v1 = clap_builder::builder::arg::Arg::value_name(&v4, "FMT");
    v4 = struct80 {
        field_0: "date"
        field_16: "hours"
        field_32: "minutes"
        field_48: "seconds"
        field_64: "ns"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v12, &v4);
    v4 = clap_builder::builder::arg::Arg::value_parser(&v1, &v12);
    v1 = clap_builder::builder::arg::Arg::num_args(&v4, None, 1);
    v4 = clap_builder::builder::arg::Arg::default_missing_value(&v1);
    v1 = clap_builder::builder::arg::Arg::help(&v4, "output date/time in ISO 8601 format.\n FMT='date' for date only (the default),\n 'hours', 'minutes', 'seconds', or 'ns'\n for date and time to the indicated precision.\n Example: 2006-08-14T02:34:56-06:00");
    v4 = clap_builder::builder::command::Command::arg(&v9, &v1);
    v9 = clap_builder::builder::arg::Arg::new("rfc-email");
    v1 = clap_builder::builder::arg::Arg::short(&v9, 82);
    v9 = clap_builder::builder::arg::Arg::long(&v1, "rfc-email");
    v1 = clap_builder::builder::arg::Arg::help(&v9, "output date and time in RFC 5322 format.\n Example: Mon, 14 Aug 2006 02:34:56 -0600");
    v12 = clap_builder::builder::arg::Arg::action(&v1);
    v9 = clap_builder::builder::command::Command::arg(&v4, &v12);
    v4 = clap_builder::builder::arg::Arg::new("rfc-3339");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "rfc-3339");
    v4 = clap_builder::builder::arg::Arg::value_name(&v1, "FMT");
    v1 = struct48 {
        field_0: "date"
        field_16: "seconds"
        field_32: "ns"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v12, &v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v4, &v12);
    v12 = clap_builder::builder::arg::Arg::help(&v1, "output date/time in RFC 3339 format.\n FMT='date', 'seconds', or 'ns'\n for date and time to the indicated precision.\n Example: 2006-08-14 02:34:56-06:00");
    v4 = clap_builder::builder::command::Command::arg(&v9, &v12);
    v9 = clap_builder::builder::arg::Arg::new("debug");
    v1 = clap_builder::builder::arg::Arg::long(&v9, "debug");
    v9 = clap_builder::builder::arg::Arg::help(&v1, "annotate the parsed date, and warn about questionable usage to stderr");
    v1 = clap_builder::builder::arg::Arg::action(&v9);
    v9 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("reference");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 114);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "reference");
    v1 = clap_builder::builder::arg::Arg::value_name(&v4, "FILE");
    v4 = clap_builder::builder::arg::Arg::value_hint(&v1, 2);
    v1 = clap_builder::builder::arg::Arg::help(&v4, "display the last modification time of FILE");
    v4 = clap_builder::builder::command::Command::arg(&v9, &v1);
    v9 = clap_builder::builder::arg::Arg::new("set");
    v1 = clap_builder::builder::arg::Arg::short(&v9, 115);
    v9 = clap_builder::builder::arg::Arg::long(&v1, "set");
    v1 = clap_builder::builder::arg::Arg::value_name(&v9, "STRING");
    v12 = clap_builder::builder::arg::Arg::help(&v1, "set time described by STRING");
    v9 = clap_builder::builder::command::Command::arg(&v4, &v12);
    v4 = clap_builder::builder::arg::Arg::new("universal");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 117);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "universal");
    v1 = clap_builder::builder::arg::Arg::alias(&v4);
    v4 = clap_builder::builder::arg::Arg::help(&v1, "print or set Coordinated Universal Time (UTC)");
    v1 = clap_builder::builder::arg::Arg::action(&v4);
    v4 = clap_builder::builder::command::Command::arg(&v9, &v1);
    v9 = clap_builder::builder::arg::Arg::new("format");
    clap_builder::builder::command::Command::arg(v0, &v4, &v9);
    return a0;
}
