fn uu_numfmt::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24, struct80
    let v1: i32;  // [sp-0x800]
    let v2: i32;  // [sp-0x7fc]
    let v3: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712
    let v4: i32;  // [sp-0x5b0]
    let v5: i32;  // [sp-0x5ac]
    let v6: i64;  // [sp-0x53c]
    let v7: i32;  // [sp-0x534]
    let v8: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v9: i4736;  // [sp-0x268], Other Possible Types: struct592, struct64, struct24
    let v10: i32;  // [sp-0x20]
    let v11: i32;  // [sp-0x1c]
    let v13: i64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v13);
    v3 = clap_builder::builder::command::Command::version(&v8, "0.0.28");
    v8 = clap_builder::builder::command::Command::about(&v3, "Convert numbers from/to human-readable strings");
    v3 = clap_builder::builder::command::Command::after_help(&v8, &g_42265e, 1082);
    v0 = uucore::format_usage("{} [OPTION]... [NUMBER]...");
    v8 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814020 | *((&v8 as &char + 700) as &i64);
    v7 = *((&v8 as &char + 708) as &i32);
    v8 = clap_builder::builder::arg::Arg::new("delimiter");
    v0 = clap_builder::builder::arg::Arg::short(&v8);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "delimiter");
    v0 = clap_builder::builder::arg::Arg::value_name(&v8, "X");
    v9 = clap_builder::builder::arg::Arg::help(&v0, "use X instead of whitespace for field delimiter");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("field");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "field");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "replace the numbers in these input fields; see FIELDS below");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "FIELDS");
    memcpy(&v3, &v0, 584);
    v4 = v1 | 32;
    v5 = v2;
    v0 = clap_builder::builder::arg::Arg::default_value(&v3, "1");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("format");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "format");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "use printf style floating-point FORMAT; see FORMAT below for details");
    v0 = clap_builder::builder::arg::Arg::value_name(&v8, "FORMAT");
    memcpy(&v9, &v0, 584);
    v10 = v1 | 32;
    v11 = v2;
    v8 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("from");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "from");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "auto-scale input numbers to UNITs; see UNIT below");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "UNIT");
    v9 = clap_builder::builder::arg::Arg::default_value(&v0, "none");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v9);
    v8 = clap_builder::builder::arg::Arg::new("from-unit");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "from-unit");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "specify the input unit size");
    v0 = clap_builder::builder::arg::Arg::value_name(&v8, "N");
    v9 = clap_builder::builder::arg::Arg::default_value(&v0, "1");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("to");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "to");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "auto-scale output numbers to UNITs; see UNIT below");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "UNIT");
    v9 = clap_builder::builder::arg::Arg::default_value(&v0, "none");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v9);
    v8 = clap_builder::builder::arg::Arg::new("to-unit");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "to-unit");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "the output unit size");
    v0 = clap_builder::builder::arg::Arg::value_name(&v8, "N");
    v9 = clap_builder::builder::arg::Arg::default_value(&v0, "1");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("padding");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "padding");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "pad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a whitespace is found");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "N");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("header");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "header");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "print (without converting) the first N header lines; N defaults to 1 if not specified");
    v0 = clap_builder::builder::arg::Arg::num_args(&v8);
    v8 = clap_builder::builder::arg::Arg::value_name(&v0, "N");
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v8);
    memcpy(&v9, &v0, 584);
    v10 = 0x400 | v1;
    v11 = v2;
    v8 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("round");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "round");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "use METHOD for rounding when scaling");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "METHOD");
    v3 = clap_builder::builder::arg::Arg::default_value(&v0, "from-zero");
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
    v9 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v9);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("suffix");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "suffix");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "print SUFFIX after each formatted number, and accept inputs optionally ending with SUFFIX");
    v0 = clap_builder::builder::arg::Arg::value_name(&v8, "SUFFIX");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("invalid");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "invalid");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "set the failure mode for invalid input");
    v0 = clap_builder::builder::arg::Arg::default_value(&v3, "abort");
    v9 = struct64 {
        field_0: &g_422dcc
        field_8: 5
        field_16: &g_415828
        field_24: 4
        field_32: &g_415800
        field_40: 4
        field_48: &g_422dd1
        field_56: 6
    };
    v3 = clap_builder::builder::arg::Arg::value_parser(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "INVALID");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("NUMBER");
    memcpy(&v0, &v8, 584);
    v1 = *((&v8 as &char + 584) as &i32) | 4;
    v2 = *((&v8 as &char + 588) as &i32);
    v8 = clap_builder::builder::arg::Arg::action(&v0);
    clap_builder::builder::command::Command::arg(a0, &v3, &v8);
    return a0;
}
