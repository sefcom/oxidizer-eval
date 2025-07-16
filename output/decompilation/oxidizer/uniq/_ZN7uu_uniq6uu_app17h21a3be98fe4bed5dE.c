fn uu_uniq::uu_app(a0: &struct712) -> long long {
    let v0: void*;  // [bp-0xa70]
    let v1: u64;  // [bp-0xa68]
    let v2: u8;  // [bp-0xa60]
    let v3: u8;  // [bp-0xa58]
    let v4: u32;  // [bp-0x810]
    let v5: u32;  // [bp-0x80c]
    let v6: u512;  // [bp-0x808]
    let v7: u32;  // [bp-0x5c0]
    let v8: i8;  // [bp-0x5bc]
    let v9: u64;  // [bp-0x54c]
    let v10: u32;  // [bp-0x544]
    let v11: struct437;  // [bp-0x540]
    let v12: u32;  // [bp-0x2f8]
    let v13: u32;  // [bp-0x2f4]
    let v14: u64;  // [bp-0x284]
    let v15: u32;  // [bp-0x27c]
    let v16: struct24;  // [bp-0x278], Other Possible Types: u64, void*
    let v17: u64;  // [bp-0x270]
    let v18: u8;  // [bp-0x268]
    let v19: u32;  // [bp-0x30]
    let v20: u32;  // [bp-0x2c]
    let v23: u64;  // rdx

    v11 = clap_builder::builder::command::Command::new(uucore::util_name(), v23);
    clap_builder::builder::command::Command::version(&v6, &v11, "0.0.28");
    clap_builder::builder::command::Command::about(&v11, &v6, "Report or omit repeated lines.");
    uucore::format_usage(&v3, "{} [OPTION]... [INPUT [OUTPUT]]");
    clap_builder::builder::command::Command::override_usage(&v6, &v11, &v3);
    memcpy(&v11, &v6, 700);
    v14 = 549755814016 | v9;
    v15 = v10;
    clap_builder::builder::command::Command::after_help(&v6, &v11, "Filter adjacent matching lines from INPUT (or standard input),\nwriting to OUTPUT (or standard output).\n\nNote: uniq does not detect repeated lines unless they are adjacent.\nYou may want to sort the input first, or use sort -u without uniq.");
    clap_builder::builder::arg::Arg::new(&v11, "all-repeated");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 68);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "all-repeated");
    v3 = struct48 {
        field_0: &g_415d00
        field_8: 4
        field_16: &g_41f391
        field_24: 7
        field_32: &g_415d68
        field_40: 8
    };
    v16 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v3);
    clap_builder::builder::arg::Arg::value_parser(&v3, &v11, &v16);
    clap_builder::builder::arg::Arg::help(&v11, &v3, "print all duplicate lines. Delimiting is done with blank lines. [default: none]");
    clap_builder::builder::arg::Arg::value_name(&v3, &v11, "delimit-method");
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v18 = *(&v2 as &i64);
    v16 = v0;
    v17 = 1;
    clap_builder::builder::arg::Arg::num_args(&v11, &v3, &v16);
    clap_builder::builder::arg::Arg::default_missing_value(&v3, &v11, "none");
    memcpy(&v16, &v3, 584);
    v19 = 128 | v4;
    v20 = v5;
    clap_builder::builder::command::Command::arg(&v11, &v6, &v16);
    clap_builder::builder::arg::Arg::new(&v6, "group");
    clap_builder::builder::arg::Arg::long(&v3, &v6, "group");
    v6 = struct64 {
        field_0: &g_415d68
        field_8: 8
        field_16: &g_41f391
        field_24: 7
        field_32: &g_41f3f5
        field_40: 6
        field_48: &g_415d10
        field_56: 4
    };
    v16 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v6);
    clap_builder::builder::arg::Arg::value_parser(&v6, &v3, &v16);
    clap_builder::builder::arg::Arg::help(&v3, &v6, "show all items, separating groups with an empty line. [default: separate]");
    clap_builder::builder::arg::Arg::value_name(&v6, &v3, "group-method");
    clap_builder::builder::arg::Arg::num_args(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::default_missing_value(&v6, &v3, "separate");
    memcpy(&v3, &v6, 584);
    v4 = 128 | v7;
    v5 = *(&v8 as &i32);
    v6 = struct64 {
        field_0: &anon.1708af35b9ec7e9011d0766e7edd8c0d.14.llvm.2960996753993589651
        field_8: 8
        field_16: &anon.1708af35b9ec7e9011d0766e7edd8c0d.10.llvm.2960996753993589651
        field_24: 12
        field_32: &anon.1708af35b9ec7e9011d0766e7edd8c0d.17.llvm.2960996753993589651
        field_40: 6
        field_48: &anon.1708af35b9ec7e9011d0766e7edd8c0d.12.llvm.2960996753993589651
        field_56: 5
    };
    clap_builder::builder::arg::Arg::conflicts_with_all(&v16, &v3, &v6);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v16);
    clap_builder::builder::arg::Arg::new(&v11, "check-chars");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 119);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "check-chars");
    clap_builder::builder::arg::Arg::help(&v3, &v11, "compare no more than N characters in lines");
    clap_builder::builder::arg::Arg::value_name(&v16, &v3, "N");
    clap_builder::builder::command::Command::arg(&v11, &v6, &v16);
    clap_builder::builder::arg::Arg::new(&v6, "count");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 99);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "count");
    clap_builder::builder::arg::Arg::help(&v3, &v6, "prefix lines by the number of occurrences");
    clap_builder::builder::arg::Arg::action(&v16, &v3, 2);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v16);
    clap_builder::builder::arg::Arg::new(&v11, "ignore-case");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 105);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "ignore-case");
    clap_builder::builder::arg::Arg::help(&v3, &v11, "ignore differences in case when comparing");
    clap_builder::builder::arg::Arg::action(&v16, &v3, 2);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v16);
    clap_builder::builder::arg::Arg::new(&v6, "repeated");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 100);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "repeated");
    clap_builder::builder::arg::Arg::help(&v3, &v6, "only print duplicate lines");
    clap_builder::builder::arg::Arg::action(&v16, &v3, 2);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v16);
    clap_builder::builder::arg::Arg::new(&v11, "skip-chars");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 115);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "skip-chars");
    clap_builder::builder::arg::Arg::help(&v3, &v11, "avoid comparing the first N characters");
    clap_builder::builder::arg::Arg::value_name(&v16, &v3, "N");
    clap_builder::builder::command::Command::arg(&v11, &v6, &v16);
    clap_builder::builder::arg::Arg::new(&v6, "skip-fields");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 102);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "skip-fields");
    clap_builder::builder::arg::Arg::help(&v3, &v6, "avoid comparing the first N fields");
    clap_builder::builder::arg::Arg::value_name(&v16, &v3, "N");
    clap_builder::builder::command::Command::arg(&v6, &v11, &v16);
    clap_builder::builder::arg::Arg::new(&v11, "unique");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 117);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "unique");
    clap_builder::builder::arg::Arg::help(&v3, &v11, "only print unique lines");
    clap_builder::builder::arg::Arg::action(&v16, &v3, 2);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v16);
    clap_builder::builder::arg::Arg::new(&v6, "zero-terminated");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 122);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "zero-terminated");
    clap_builder::builder::arg::Arg::help(&v3, &v6, "end lines with 0 byte, not newline");
    clap_builder::builder::arg::Arg::action(&v16, &v3, 2);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v16);
    clap_builder::builder::arg::Arg::new(&v11, "files");
    clap_builder::builder::arg::Arg::action(&v3, &v11, 1);
    v16 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v11, &v3, &v16);
    v16 = 0;
    v17 = 2;
    v18 = 0;
    clap_builder::builder::arg::Arg::num_args(&v3, &v11, &v16);
    memcpy(&v11, &v3, 584);
    v12 = v4 | 4;
    v13 = v5;
    clap_builder::builder::arg::Arg::value_hint(&v3, &v11, 3);
    clap_builder::builder::command::Command::arg(a0, &v6, &v3);
    return a0;
}
