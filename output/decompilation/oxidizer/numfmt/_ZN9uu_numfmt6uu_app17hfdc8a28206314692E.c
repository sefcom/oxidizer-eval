fn uu_numfmt::uu_app(a0: &struct712) -> long long {
    let v0: struct80;  // [bp-0xa48], Other Possible Types: u8
    let v1: u32;  // [bp-0x800]
    let v2: u32;  // [bp-0x7fc]
    let v3: u8;  // [bp-0x7f8]
    let v4: u32;  // [bp-0x5b0]
    let v5: u32;  // [bp-0x5ac]
    let v6: u64;  // [bp-0x53c]
    let v7: u32;  // [bp-0x534]
    let v8: struct437;  // [bp-0x530]
    let v9: u32;  // [bp-0x2e8]
    let v10: i8;  // [bp-0x2e4]
    let v11: u64;  // [bp-0x274]
    let v12: u32;  // [bp-0x26c]
    let v13: struct24;  // [bp-0x268], Other Possible Types: struct64, u8
    let v14: u32;  // [bp-0x20]
    let v15: u32;  // [bp-0x1c]
    let v18: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v18);
    clap_builder::builder::command::Command::version(&v3, &v8, "0.0.28");
    clap_builder::builder::command::Command::about(&v8, &v3, "Convert numbers from/to human-readable strings");
    clap_builder::builder::command::Command::after_help(&v3, &v8, "UNIT options:\n\n- none: no auto-scaling is done; suffixes will trigger an error\n- auto: accept optional single/two letter suffix:\n\n    1K = 1000, 1Ki = 1024, 1M = 1000000, 1Mi = 1048576,\n\n- si: accept optional single letter suffix:\n\n    1K = 1000, 1M = 1000000, ...\n\n- iec: accept optional single letter suffix:\n\n    1K = 1024, 1M = 1048576, ...\n\n- iec-i: accept optional two-letter suffix:\n\n    1Ki = 1024, 1Mi = 1048576, ...\n\n- FIELDS supports cut(1) style field ranges:\n\n    N    N'th field, counted from 1\n    N-   from N'th field, to end of line\n    N-M  from N'th to M'th field (inclusive)\n    -M   from first to M'th field (inclusive)\n    -    all fields\n\nMultiple fields/ranges can be separated with commas\n\nFORMAT must be suitable for printing one floating-point argument %f.\nOptional quote (%'f) will enable --grouping (if supported by current locale).\nOptional width value (%10f) will pad output. Optional zero (%010f) width\nwill zero pad the number. Optional negative values (%-10f) will left align.\nOptional precision (%.1f) will override the input determined precision.");
    uucore::format_usage(&v0, "{} [OPTION]... [NUMBER]...");
    clap_builder::builder::command::Command::override_usage(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814020 | v11;
    v7 = v12;
    clap_builder::builder::arg::Arg::new(&v8, "delimiter");
    clap_builder::builder::arg::Arg::short(&v0, &v8);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "delimiter");
    clap_builder::builder::arg::Arg::value_name(&v0, &v8, "X");
    clap_builder::builder::arg::Arg::help(&v13, &v0, "use X instead of whitespace for field delimiter");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "field");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "field");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "replace the numbers in these input fields; see FIELDS below");
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "FIELDS");
    memcpy(&v3, &v0, 584);
    v4 = v1 | 32;
    v5 = v2;
    clap_builder::builder::arg::Arg::default_value(&v0, &v3, "1");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "format");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "format");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "use printf style floating-point FORMAT; see FORMAT below for details");
    clap_builder::builder::arg::Arg::value_name(&v0, &v8, "FORMAT");
    memcpy(&v13, &v0, 584);
    v14 = v1 | 32;
    v15 = v2;
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "from");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "from");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "auto-scale input numbers to UNITs; see UNIT below");
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "UNIT");
    clap_builder::builder::arg::Arg::default_value(&v13, &v0, "none");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "from-unit");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "from-unit");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "specify the input unit size");
    clap_builder::builder::arg::Arg::value_name(&v0, &v8, "N");
    clap_builder::builder::arg::Arg::default_value(&v13, &v0, "1");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "to");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "to");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "auto-scale output numbers to UNITs; see UNIT below");
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "UNIT");
    clap_builder::builder::arg::Arg::default_value(&v13, &v0, "none");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "to-unit");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "to-unit");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "the output unit size");
    clap_builder::builder::arg::Arg::value_name(&v0, &v8, "N");
    clap_builder::builder::arg::Arg::default_value(&v13, &v0, "1");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "padding");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "padding");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "pad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a whitespace is found");
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "N");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "header");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "header");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "print (without converting) the first N header lines; N defaults to 1 if not specified");
    clap_builder::builder::arg::Arg::num_args(&v0, &v8);
    clap_builder::builder::arg::Arg::value_name(&v8, &v0, "N");
    clap_builder::builder::arg::Arg::default_missing_value(&v0, &v8);
    memcpy(&v13, &v0, 584);
    v14 = 0x400 | v1;
    v15 = v2;
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "round");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "round");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "use METHOD for rounding when scaling");
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "METHOD");
    clap_builder::builder::arg::Arg::default_value(&v3, &v0, "from-zero");
    v0 = struct80 {
        field_0: &g_422565
        field_8: 2
        field_16: &g_41589c
        field_24: 4
        field_32: &g_422567
        field_40: 9
        field_48: &g_422570
        field_56: 12
        field_64: &g_42257c
        field_72: 7
    };
    v13 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    clap_builder::builder::arg::Arg::value_parser(&v0, &v3, &v13);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "suffix");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "suffix");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "print SUFFIX after each formatted number, and accept inputs optionally ending with SUFFIX");
    clap_builder::builder::arg::Arg::value_name(&v0, &v8, "SUFFIX");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "invalid");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "invalid");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "set the failure mode for invalid input");
    clap_builder::builder::arg::Arg::default_value(&v0, &v3, "abort");
    v13 = struct64 {
        field_0: &g_422dcc
        field_8: 5
        field_16: &g_415828
        field_24: 4
        field_32: &g_415800
        field_40: 4
        field_48: &g_422dd1
        field_56: 6
    };
    v13 = struct64 {
        field_0: &g_422dcc
        field_8: 5
        field_16: &g_415828
        field_24: 4
        field_32: &g_415800
        field_40: 4
        field_48: &g_422dd1
        field_56: 6
    };
    clap_builder::builder::arg::Arg::value_parser(&v3, &v0, &v13);
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "INVALID");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "NUMBER");
    memcpy(&v0, &v8, 584);
    v1 = v9 | 4;
    v2 = *(&v10 as &i32);
    clap_builder::builder::arg::Arg::action(&v8, &v0);
    clap_builder::builder::command::Command::arg(a0, &v3, &v8);
    return a0;
}
