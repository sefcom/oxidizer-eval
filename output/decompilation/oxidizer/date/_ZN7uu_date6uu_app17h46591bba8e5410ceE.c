fn uu_date::uu_app(a0: &struct712) -> u64 {
    let v0: struct592;  // [sp-0xa58], Other Possible Types: struct712, struct80
    let v1: struct592;  // [sp-0x790], Other Possible Types: struct48, struct24
    let v2: struct592;  // [sp-0x540], Other Possible Types: struct712, struct437
    let v3: i64;  // [sp-0x284]
    let v4: i32;  // [sp-0x27c]
    let v5: struct592;  // [sp-0x278], Other Possible Types: struct24, struct17
    let v7: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v0 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v2 = clap_builder::builder::command::Command::about(&v0, "Print or set the system date and time");
    v1 = uucore::format_usage("{} [OPTION]... [+FORMAT]...
{} [OPTION]... [MMDDhhmm[[CC]YY][.ss]]");
    v0 = clap_builder::builder::command::Command::override_usage(&v2, &v1);
    memcpy(&v2, &v0, 700);
    v3 = 549755814016 | *((&v0.field_0 as &char + 700) as &i64);
    v4 = *((&v0.field_0 as &char + 708) as &i32);
    v0 = clap_builder::builder::arg::Arg::new("date");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x64);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "date");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "STRING");
    v5 = clap_builder::builder::arg::Arg::help(&v1, "display time described by STRING, not 'now'");
    v0 = clap_builder::builder::command::Command::arg(&v2, &v5);
    v2 = clap_builder::builder::arg::Arg::new("file");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 0x66);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "file");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "DATEFILE");
    v2 = clap_builder::builder::arg::Arg::value_hint(&v1, 0x3);
    v1 = clap_builder::builder::arg::Arg::help(&v2, "like --date; once for each line of DATEFILE");
    v2 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("iso-8601");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x49);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "iso-8601");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "FMT");
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
    v5 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v5);
    v5 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v1 = clap_builder::builder::arg::Arg::num_args(&v0, &v5);
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v1);
    v1 = clap_builder::builder::arg::Arg::help(&v0, "output date/time in ISO 8601 format.
 FMT='date' for date only (the default),
 'hours', 'minutes', 'seconds', or 'ns'
 for date and time to the indicated precision.
 Example: 2006-08-14T02:34:56-06:00");
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("rfc-email");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 0x52);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "rfc-email");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "output date and time in RFC 5322 format.
 Example: Mon, 14 Aug 2006 02:34:56 -0600");
    v5 = clap_builder::builder::arg::Arg::action(&v1);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v5);
    v0 = clap_builder::builder::arg::Arg::new("rfc-3339");
    v1 = clap_builder::builder::arg::Arg::long(&v0, "rfc-3339");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "FMT");
    v1 = struct48 {
        field_0: &g_44fd30
        field_8: 4
        field_16: &g_460b29
        field_24: 7
        field_32: &g_460b30
        field_40: 2
    };
    v5 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v0, &v5);
    v5 = clap_builder::builder::arg::Arg::help(&v1, "output date/time in RFC 3339 format.
 FMT='date', 'seconds', or 'ns'
 for date and time to the indicated precision.
 Example: 2006-08-14 02:34:56-06:00");
    v0 = clap_builder::builder::command::Command::arg(&v2, &v5);
    v2 = clap_builder::builder::arg::Arg::new("debug");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "debug");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "annotate the parsed date, and warn about questionable usage to stderr");
    v1 = clap_builder::builder::arg::Arg::action(&v2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("reference");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x72);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "reference");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v1, 0x2);
    v1 = clap_builder::builder::arg::Arg::help(&v0, "display the last modification time of FILE");
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("set");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 0x73);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "set");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "STRING");
    v5 = clap_builder::builder::arg::Arg::help(&v1, "set time described by STRING");
    v2 = clap_builder::builder::command::Command::arg(&v0, &v5);
    v0 = clap_builder::builder::arg::Arg::new("universal");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x75);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "universal");
    v1 = clap_builder::builder::arg::Arg::alias(&v0, "utc");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "print or set Coordinated Universal Time (UTC)");
    v1 = clap_builder::builder::arg::Arg::action(&v0);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("format");
    clap_builder::builder::command::Command::arg(a0, &v0, &v2);
    return a0;
}
