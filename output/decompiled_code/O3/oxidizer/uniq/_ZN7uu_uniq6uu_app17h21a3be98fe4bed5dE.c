fn uu_uniq::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa70]
    let v1: i64;  // [sp-0xa68]
    let v2: i8;  // [sp-0xa60]
    let v3: i4736;  // [sp-0xa58], Other Possible Types: struct592, struct24, struct48
    let v4: i32;  // [sp-0x810]
    let v5: i32;  // [sp-0x80c]
    let v6: i4736;  // [sp-0x808], Other Possible Types: struct592, struct712, struct64
    let v7: i5696;  // [sp-0x540], Other Possible Types: struct592, struct712, struct437
    let v8: i32;  // [sp-0x2f8]
    let v9: i32;  // [sp-0x2f4]
    let v10: i64;  // [sp-0x284]
    let v11: i32;  // [sp-0x27c]
    let v12: i64;  // [sp-0x278], Other Possible Types: struct592, struct24, struct8
    let v13: i64;  // [sp-0x270]
    let v14: i8;  // [bp-0x268]
    let v15: i32;  // [sp-0x30]
    let v16: i32;  // [sp-0x2c]
    let v18: i64;  // rdx

    v7 = clap_builder::builder::command::Command::new(uucore::util_name(), v18);
    v6 = clap_builder::builder::command::Command::version(&v7, "0.0.28");
    v7 = clap_builder::builder::command::Command::about(&v6, "Report or omit repeated lines.");
    v3 = uucore::format_usage("{} [OPTION]... [INPUT [OUTPUT]]");
    v6 = clap_builder::builder::command::Command::override_usage(&v7, &v3);
    memcpy(&v7, &v6, 700);
    v10 = 549755814016 | *((&v6 as &char + 700) as &i64);
    v11 = *((&v6 as &char + 708) as &i32);
    v6 = clap_builder::builder::command::Command::after_help(&v7, &g_41f2a3, 238);
    v7 = clap_builder::builder::arg::Arg::new("all-repeated");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x44);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "all-repeated");
    v3 = struct48 {
        field_0: &g_415d00
        field_8: 4
        field_16: &g_41f391
        field_24: 7
        field_32: &g_415d68
        field_40: 8
    };
    v12 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v3);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v7, &v12);
    v7 = clap_builder::builder::arg::Arg::help(&v3, "print all duplicate lines. Delimiting is done with blank lines. [default: none]");
    v3 = clap_builder::builder::arg::Arg::value_name(&v7, "delimit-method");
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v14 = v2;
    v12 = v0;
    v13 = v1;
    v7 = clap_builder::builder::arg::Arg::num_args(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::default_missing_value(&v7, "none");
    memcpy(&v12, &v3, 584);
    v15 = 128 | v4;
    v16 = v5;
    v7 = clap_builder::builder::command::Command::arg(&v6, &v12);
    v6 = clap_builder::builder::arg::Arg::new("group");
    v3 = clap_builder::builder::arg::Arg::long(&v6, "group");
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
    v12 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v6);
    v6 = clap_builder::builder::arg::Arg::value_parser(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::help(&v6, "show all items, separating groups with an empty line. [default: separate]");
    v6 = clap_builder::builder::arg::Arg::value_name(&v3, "group-method");
    v3 = clap_builder::builder::arg::Arg::num_args(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::default_missing_value(&v3, "separate");
    memcpy(&v3, &v6, 584);
    v4 = 128 | *((&v6 as &char + 584) as &i32);
    v5 = *((&v6 as &char + 588) as &i32);
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
    v12 = clap_builder::builder::arg::Arg::conflicts_with_all(&v3, &v6);
    v6 = clap_builder::builder::command::Command::arg(&v7, &v12);
    v7 = clap_builder::builder::arg::Arg::new("check-chars");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x77);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "check-chars");
    v3 = clap_builder::builder::arg::Arg::help(&v7, "compare no more than N characters in lines");
    v12 = clap_builder::builder::arg::Arg::value_name(&v3, "N");
    v7 = clap_builder::builder::command::Command::arg(&v6, &v12);
    v6 = clap_builder::builder::arg::Arg::new("count");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x63);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "count");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "prefix lines by the number of occurrences");
    v12 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v7, &v12);
    v7 = clap_builder::builder::arg::Arg::new("ignore-case");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x69);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "ignore-case");
    v3 = clap_builder::builder::arg::Arg::help(&v7, "ignore differences in case when comparing");
    v12 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v6, &v12);
    v6 = clap_builder::builder::arg::Arg::new("repeated");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x64);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "repeated");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "only print duplicate lines");
    v12 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v7, &v12);
    v7 = clap_builder::builder::arg::Arg::new("skip-chars");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x73);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "skip-chars");
    v3 = clap_builder::builder::arg::Arg::help(&v7, "avoid comparing the first N characters");
    v12 = clap_builder::builder::arg::Arg::value_name(&v3, "N");
    v7 = clap_builder::builder::command::Command::arg(&v6, &v12);
    v6 = clap_builder::builder::arg::Arg::new("skip-fields");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x66);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "skip-fields");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "avoid comparing the first N fields");
    v12 = clap_builder::builder::arg::Arg::value_name(&v3, "N");
    v6 = clap_builder::builder::command::Command::arg(&v7, &v12);
    v7 = clap_builder::builder::arg::Arg::new("unique");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x75);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "unique");
    v3 = clap_builder::builder::arg::Arg::help(&v7, "only print unique lines");
    v12 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v6, &v12);
    v6 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x7a);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "zero-terminated");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "end lines with 0 byte, not newline");
    v12 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v7, &v12);
    v7 = clap_builder::builder::arg::Arg::new("files");
    v3 = clap_builder::builder::arg::Arg::action(&v7, 0x1);
    v12 = struct8 {
        field_0: 2
    };
    v7 = clap_builder::builder::arg::Arg::value_parser(&v3, &v12);
    v12 = 0;
    v13 = 2;
    v14 = 0;
    v3 = clap_builder::builder::arg::Arg::num_args(&v7, &v12);
    memcpy(&v7, &v3, 584);
    v8 = v4 | 4;
    v9 = v5;
    v3 = clap_builder::builder::arg::Arg::value_hint(&v7, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v6, &v3);
    return a0;
}
