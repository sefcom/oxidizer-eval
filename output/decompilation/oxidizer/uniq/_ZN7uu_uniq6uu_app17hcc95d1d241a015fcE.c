fn uu_uniq::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xac0], Other Possible Types: struct48, struct640
    let v1: u32;  // [bp-0x848]
    let v2: u32;  // [bp-0x844]
    let v3: struct64;  // [bp-0x840], Other Possible Types: struct712, struct640
    let v4: struct64;  // [bp-0x840], Other Possible Types: struct712, struct640
    let v5: struct640;  // [bp-0x840]
    let v6: u32;  // [bp-0x5c8]
    let v7: u64;  // [bp-0x584]
    let v8: u32;  // [bp-0x57c]
    let v9: struct437;  // [bp-0x578], Other Possible Types: struct712, struct640
    let v10: u32;  // [bp-0x300]
    let v11: u32;  // [bp-0x2fc]
    let v12: u64;  // [bp-0x2bc]
    let v13: u32;  // [bp-0x2b4]
    let v14: struct640;  // [bp-0x2b0], Other Possible Types: u8
    let v15: u32;  // [bp-0x38]
    let v16: u32;  // [bp-0x34]
    let v19: u64;  // rdx

    v9 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    v4 = clap_builder::builder::command::Command::version(&v9);
    v9 = clap_builder::builder::command::Command::about(&v4);
    v0 = uucore::format_usage("{} [OPTION]... [INPUT [OUTPUT]]");
    v4 = clap_builder::builder::command::Command::override_usage(&v9, &v0);
    memcpy(&v9, &v4, 700);
    v12 = 549755814016 | v7;
    v13 = v8;
    v3 = clap_builder::builder::command::Command::after_help(&v9);
    v9 = clap_builder::builder::arg::Arg::new("all-repeated");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 68);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "all-repeated");
    v0 = struct48 {
        field_0: "none"
        field_16: "prepend"
        field_32: "separate"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v14, &v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::help(&v0, "print all duplicate lines. Delimiting is done with blank lines. [default: none]");
    v0 = clap_builder::builder::arg::Arg::value_name(&v9, "delimit-method");
    v9 = clap_builder::builder::arg::Arg::num_args(&v0, None, 1);
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v9, "none");
    memcpy(&v14, &v0, 632);
    v15 = 128 | v1;
    v16 = v2;
    v9 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v5 = clap_builder::builder::arg::Arg::new("group");
    v0 = clap_builder::builder::arg::Arg::long(&v5, "group");
    v4 = struct64 {
        field_0: "separate"
        field_16: "prepend"
        field_32: "append"
        field_48: "both"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v14, &v4);
    v4 = clap_builder::builder::arg::Arg::value_parser(&v0, &v14);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "show all items, separating groups with an empty line. [default: separate]");
    v4 = clap_builder::builder::arg::Arg::value_name(&v0, "group-method");
    v0 = clap_builder::builder::arg::Arg::num_args(&v4, None, 1);
    v4 = clap_builder::builder::arg::Arg::default_missing_value(&v0, "separate");
    memcpy(&v0, &v4, 632);
    v1 = 128 | v6;
    v2 = v6;
    v3 = struct64 {
        field_0: "repeated"
        field_16: "all-repeated"
        field_32: "unique"
        field_48: "count"
    };
    v14 = clap_builder::builder::arg::Arg::conflicts_with_all(&v0, &v3);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("check-chars");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 119);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "check-chars");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "compare no more than N characters in lines");
    v14 = clap_builder::builder::arg::Arg::value_name(&v0, "N");
    v9 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("count");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 99);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "count");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "prefix lines by the number of occurrences");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("ignore-case");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 105);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "ignore-case");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "ignore differences in case when comparing");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("repeated");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 100);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "repeated");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "only print duplicate lines");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("skip-chars");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 115);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "skip-chars");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "avoid comparing the first N characters");
    v14 = clap_builder::builder::arg::Arg::value_name(&v0, "N");
    v9 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("skip-fields");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 102);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "skip-fields");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "avoid comparing the first N fields");
    v14 = clap_builder::builder::arg::Arg::value_name(&v0, "N");
    v3 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("unique");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 117);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "unique");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "only print unique lines");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 122);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "zero-terminated");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "end lines with 0 byte, not newline");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::action(&v9, 1);
    v14 = 2;
    v9 = clap_builder::builder::arg::Arg::value_parser(&v0, &v14);
    v0 = clap_builder::builder::arg::Arg::num_args(&v9, None, 2);
    memcpy(&v9, &v0, 632);
    v10 = v1 | 4;
    v11 = v2;
    v0 = clap_builder::builder::arg::Arg::value_hint(&v9);
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return;
}
