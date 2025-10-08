fn uu_numfmt::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct80, struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct712;  // [bp-0x830], Other Possible Types: struct640
    let v4: u32;  // [bp-0x5b8]
    let v5: u32;  // [bp-0x5b4]
    let v6: u64;  // [bp-0x574]
    let v7: u32;  // [bp-0x56c]
    let v8: struct437;  // [bp-0x568], Other Possible Types: struct712, struct640
    let v9: u64;  // [bp-0x2ac]
    let v10: u32;  // [bp-0x2a4]
    let v11: struct64;  // [bp-0x2a0], Other Possible Types: struct640
    let v12: u32;  // [bp-0x28]
    let v13: u32;  // [bp-0x24]
    let v16: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    v3 = clap_builder::builder::command::Command::version(&v8);
    v8 = clap_builder::builder::command::Command::about(&v3);
    v3 = clap_builder::builder::command::Command::after_help(&v8);
    v0 = uucore::format_usage("{} [OPTION]... [NUMBER]...");
    v8 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814020 | v9;
    v7 = v10;
    v8 = clap_builder::builder::arg::Arg::new("delimiter");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 100);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "delimiter");
    v0 = clap_builder::builder::arg::Arg::value_name(&v8, "X");
    v11 = clap_builder::builder::arg::Arg::help(&v0, "use X instead of whitespace for field delimiter");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("field");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "field");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "replace the numbers in these input fields; see FIELDS below");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "FIELDS");
    memcpy(&v3, &v0, 632);
    v4 = v1 | 32;
    v5 = v2;
    v0 = clap_builder::builder::arg::Arg::default_value(&v3, "1");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("format");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "format");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "use printf style floating-point FORMAT; see FORMAT below for details");
    v0 = clap_builder::builder::arg::Arg::value_name(&v8, "FORMAT");
    memcpy(&v11, &v0, 632);
    v12 = v1 | 32;
    v13 = v2;
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("from");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "from");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "auto-scale input numbers to UNITs; see UNIT below");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "UNIT");
    v11 = clap_builder::builder::arg::Arg::default_value(&v0, "none");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("from-unit");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "from-unit");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "specify the input unit size");
    v0 = clap_builder::builder::arg::Arg::value_name(&v8, "N");
    v11 = clap_builder::builder::arg::Arg::default_value(&v0, "1");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("to");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "to");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "auto-scale output numbers to UNITs; see UNIT below");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "UNIT");
    v11 = clap_builder::builder::arg::Arg::default_value(&v0, "none");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("to-unit");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "to-unit");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "the output unit size");
    v0 = clap_builder::builder::arg::Arg::value_name(&v8, "N");
    v11 = clap_builder::builder::arg::Arg::default_value(&v0, "1");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
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
    memcpy(&v11, &v0, 632);
    v12 = 0x400 | v1;
    v13 = v2;
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("round");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "round");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "use METHOD for rounding when scaling");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "METHOD");
    v3 = clap_builder::builder::arg::Arg::default_value(&v0, "from-zero");
    v0 = struct80 {
        field_0: "up"
        field_16: "down"
        field_32: "from-zero"
        field_48: "towards-zero"
        field_64: "nearest"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v11, &v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v11);
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
    v11 = struct64 {
        field_0: "abort"
        field_16: "fail"
        field_32: "warn"
        field_48: "ignore"
    };
    v3 = clap_builder::builder::arg::Arg::value_parser(&v0, &v11);
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "INVALID");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "zero-terminated");
    v8 = clap_builder::builder::arg::Arg::short(&v0, 122);
    v0 = clap_builder::builder::arg::Arg::help(&v8, "line delimiter is NUL, not newline");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("NUMBER");
    memcpy(&v0, &v3, 632);
    v1 = v4 | 4;
    v2 = v5;
    v3 = clap_builder::builder::arg::Arg::action(&v0, 1);
    clap_builder::builder::command::Command::arg(a0, &v8, &v3);
    return;
}
