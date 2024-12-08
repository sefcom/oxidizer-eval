fn uu_numfmt::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct80, struct24
    let v1: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v3: i192;  // [sp-0x268], Other Possible Types: struct592, struct24, struct64
    let v5: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v1 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v2 = clap_builder::builder::command::Command::about(&v1, "Convert numbers from/to human-readable strings");
    v1 = clap_builder::builder::command::Command::after_help(&v2, &g_4227de, 1082);
    v0 = uucore::format_usage("{} [OPTION]... [NUMBER]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v2, 700);
    v1.700 = 132 | (stack_base)[628] as i32;
    v1.704 = 128 | (stack_base)[624] as i64;
    v2 = clap_builder::builder::arg::Arg::new("delimiter");
    v0 = clap_builder::builder::arg::Arg::short(&v2);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "delimiter");
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, "X");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "use X instead of whitespace for field delimiter");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("field");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "field");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "replace the numbers in these input fields; see FIELDS below");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "FIELDS");
    memcpy(&v1, &v0, 584);
    v1.584 = v0.584 | 32;
    v1.588 = v0.588;
    v0 = clap_builder::builder::arg::Arg::default_value(&v1, "1");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("format");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "format");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "use printf style floating-point FORMAT; see FORMAT below for details");
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, "FORMAT");
    memcpy(&v3, &v0, 584);
    v3.584 = v0.584 | 32;
    v3.588 = v0.588;
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("from");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "from");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "auto-scale input numbers to UNITs; see UNIT below");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "UNIT");
    v3 = clap_builder::builder::arg::Arg::default_value(&v0, "none");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("from-unit");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "from-unit");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "specify the input unit size");
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, "N");
    v3 = clap_builder::builder::arg::Arg::default_value(&v0, "1");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("to");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "to");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "auto-scale output numbers to UNITs; see UNIT below");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "UNIT");
    v3 = clap_builder::builder::arg::Arg::default_value(&v0, "none");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("to-unit");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "to-unit");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "the output unit size");
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, "N");
    v3 = clap_builder::builder::arg::Arg::default_value(&v0, "1");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("padding");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "padding");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "pad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a whitespace is found");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "N");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("header");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "header");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "print (without converting) the first N header lines; N defaults to 1 if not specified");
    v0 = clap_builder::builder::arg::Arg::num_args(&v2);
    v2 = clap_builder::builder::arg::Arg::value_name(&v0, "N");
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v2, v5);
    memcpy(&v3, &v0, 584);
    v3.584 = 0x400 | v0.584;
    v3.588 = v0.588;
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("round");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "round");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "use METHOD for rounding when scaling");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "METHOD");
    v1 = clap_builder::builder::arg::Arg::default_value(&v0, "from-zero");
    v0 = struct80 {
        field_0: &g_4226c0
        field_8: 2
        field_16: &g_415a1c
        field_24: 4
        field_32: &g_4226c2
        field_40: 9
        field_48: &g_4226cb
        field_56: 12
        field_64: &g_4226d7
        field_72: 7
    };
    v3 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v3);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("suffix");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "suffix");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "print SUFFIX after each formatted number, and accept inputs optionally ending with SUFFIX");
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, "SUFFIX");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("invalid");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "invalid");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "set the failure mode for invalid input");
    v0 = clap_builder::builder::arg::Arg::default_value(&v1, "abort");
    v3 = struct64 {
        field_0: &g_422f4c
        field_8: 5
        field_16: &g_4159a8
        field_24: 4
        field_32: &g_415980
        field_40: 4
        field_48: &g_422f51
        field_56: 6
    };
    v1 = clap_builder::builder::arg::Arg::value_parser(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "INVALID");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("NUMBER");
    memcpy(&v0, &v2, 584);
    v0.584 = (stack_base)[744] as i32 | 4;
    v0.588 = (stack_base)[740] as i32;
    v2 = clap_builder::builder::arg::Arg::action(&v0);
    clap_builder::builder::command::Command::arg(a0, &v1, &v2);
    return a0;
}
