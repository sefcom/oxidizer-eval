fn uu_uniq::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa70]
    let v1: i64;  // [sp-0xa68]
    let v2: i8;  // [sp-0xa60]
    let v3: i4736;  // [sp-0xa58], Other Possible Types: struct592, struct24, struct48
    let v4: i4736;  // [sp-0x808], Other Possible Types: struct592, struct712, struct64
    let v5: i5696;  // [sp-0x540], Other Possible Types: struct592, struct712, struct437
    let v6: i4736;  // [sp-0x278], Other Possible Types: struct592, struct24, struct8
    let v7: i8;  // [bp-0x268]
    let v8: i32;  // [sp-0x30]
    let v9: i32;  // [sp-0x2c]
    let v11: i64;  // rdx

    v5 = clap_builder::builder::command::Command::new(uucore::util_name(), v11);
    v4 = clap_builder::builder::command::Command::version(&v5, "0.0.28");
    v5 = clap_builder::builder::command::Command::about(&v4, "Report or omit repeated lines.");
    v3 = uucore::format_usage("{} [OPTION]... [INPUT [OUTPUT]]");
    v4 = clap_builder::builder::command::Command::override_usage(&v5, &v3);
    memcpy(&v5, &v4, 700);
    v5.700 = 549755814016 | (stack_base)[1356] as i64;
    v5.708 = (stack_base)[1348] as i32;
    v4 = clap_builder::builder::command::Command::after_help(&v5, &g_41f3a3, 238);
    v5 = clap_builder::builder::arg::Arg::new("all-repeated");
    v3 = clap_builder::builder::arg::Arg::short(&v5, 68);
    v5 = clap_builder::builder::arg::Arg::long(&v3, "all-repeated");
    v3 = struct48 {
        field_0: &g_415e00
        field_8: 4
        field_16: &g_41f491
        field_24: 7
        field_32: &g_415e68
        field_40: 8
    };
    v6 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v3);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v5, &v6);
    v5 = clap_builder::builder::arg::Arg::help(&v3, "print all duplicate lines. Delimiting is done with blank lines. [default: none]");
    v3 = clap_builder::builder::arg::Arg::value_name(&v5, "delimit-method");
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v7 = v2;
    v6 = v0;
    v6.8 = vvar_571{stack -2664};
    v5 = clap_builder::builder::arg::Arg::num_args(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::default_missing_value(&v5, "none");
    memcpy(&v6, &v3, 584);
    v8 = 128 | v3.584;
    v9 = v3.588;
    v5 = clap_builder::builder::command::Command::arg(&v4, &v6);
    v4 = clap_builder::builder::arg::Arg::new("group");
    v3 = clap_builder::builder::arg::Arg::long(&v4, "group");
    v4 = struct64 {
        field_0: &g_415e68
        field_8: 8
        field_16: &g_41f491
        field_24: 7
        field_32: &g_41f4f5
        field_40: 6
        field_48: &g_415e10
        field_56: 4
    };
    v6 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v4);
    v4 = clap_builder::builder::arg::Arg::value_parser(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "show all items, separating groups with an empty line. [default: separate]");
    v4 = clap_builder::builder::arg::Arg::value_name(&v3, "group-method");
    v3 = clap_builder::builder::arg::Arg::num_args(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::default_missing_value(&v3, "separate");
    memcpy(&v3, &v4, 584);
    v3.584 = 128 | (stack_base)[1472] as i32;
    v3.588 = (stack_base)[1468] as i32;
    v4 = struct64 {
        field_0: &anon.1f49cec9ceddeb89d2d8f6d9badf249a.6.llvm.9614704736168780173
        field_8: 8
        field_16: &anon.1f49cec9ceddeb89d2d8f6d9badf249a.2.llvm.9614704736168780173
        field_24: 12
        field_32: &anon.1f49cec9ceddeb89d2d8f6d9badf249a.9.llvm.9614704736168780173
        field_40: 6
        field_48: &anon.1f49cec9ceddeb89d2d8f6d9badf249a.4.llvm.9614704736168780173
        field_56: 5
    };
    v6 = clap_builder::builder::arg::Arg::conflicts_with_all(&v3, &v4);
    v4 = clap_builder::builder::command::Command::arg(&v5, &v6);
    v5 = clap_builder::builder::arg::Arg::new("check-chars");
    v3 = clap_builder::builder::arg::Arg::short(&v5, 119);
    v5 = clap_builder::builder::arg::Arg::long(&v3, "check-chars");
    v3 = clap_builder::builder::arg::Arg::help(&v5, "compare no more than N characters in lines");
    v6 = clap_builder::builder::arg::Arg::value_name(&v3, "N");
    v5 = clap_builder::builder::command::Command::arg(&v4, &v6);
    v4 = clap_builder::builder::arg::Arg::new("count");
    v3 = clap_builder::builder::arg::Arg::short(&v4, 99);
    v4 = clap_builder::builder::arg::Arg::long(&v3, "count");
    v3 = clap_builder::builder::arg::Arg::help(&v4, "prefix lines by the number of occurrences");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v4 = clap_builder::builder::command::Command::arg(&v5, &v6);
    v5 = clap_builder::builder::arg::Arg::new("ignore-case");
    v3 = clap_builder::builder::arg::Arg::short(&v5, 105);
    v5 = clap_builder::builder::arg::Arg::long(&v3, "ignore-case");
    v3 = clap_builder::builder::arg::Arg::help(&v5, "ignore differences in case when comparing");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v5 = clap_builder::builder::command::Command::arg(&v4, &v6);
    v4 = clap_builder::builder::arg::Arg::new("repeated");
    v3 = clap_builder::builder::arg::Arg::short(&v4, 100);
    v4 = clap_builder::builder::arg::Arg::long(&v3, "repeated");
    v3 = clap_builder::builder::arg::Arg::help(&v4, "only print duplicate lines");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v4 = clap_builder::builder::command::Command::arg(&v5, &v6);
    v5 = clap_builder::builder::arg::Arg::new("skip-chars");
    v3 = clap_builder::builder::arg::Arg::short(&v5, 115);
    v5 = clap_builder::builder::arg::Arg::long(&v3, "skip-chars");
    v3 = clap_builder::builder::arg::Arg::help(&v5, "avoid comparing the first N characters");
    v6 = clap_builder::builder::arg::Arg::value_name(&v3, "N");
    v5 = clap_builder::builder::command::Command::arg(&v4, &v6);
    v4 = clap_builder::builder::arg::Arg::new("skip-fields");
    v3 = clap_builder::builder::arg::Arg::short(&v4, 102);
    v4 = clap_builder::builder::arg::Arg::long(&v3, "skip-fields");
    v3 = clap_builder::builder::arg::Arg::help(&v4, "avoid comparing the first N fields");
    v6 = clap_builder::builder::arg::Arg::value_name(&v3, "N");
    v4 = clap_builder::builder::command::Command::arg(&v5, &v6);
    v5 = clap_builder::builder::arg::Arg::new("unique");
    v3 = clap_builder::builder::arg::Arg::short(&v5, 117);
    v5 = clap_builder::builder::arg::Arg::long(&v3, "unique");
    v3 = clap_builder::builder::arg::Arg::help(&v5, "only print unique lines");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v5 = clap_builder::builder::command::Command::arg(&v4, &v6);
    v4 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v3 = clap_builder::builder::arg::Arg::short(&v4, 122);
    v4 = clap_builder::builder::arg::Arg::long(&v3, "zero-terminated");
    v3 = clap_builder::builder::arg::Arg::help(&v4, "end lines with 0 byte, not newline");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v4 = clap_builder::builder::command::Command::arg(&v5, &v6);
    v5 = clap_builder::builder::arg::Arg::new("files");
    v3 = clap_builder::builder::arg::Arg::action(&v5, 1);
    v6 = struct8 {
        field_0: 2
    };
    v5 = clap_builder::builder::arg::Arg::value_parser(&v3, &v6);
    v6 = 0;
    v6.8 = 2;
    v7 = 0;
    v3 = clap_builder::builder::arg::Arg::num_args(&v5, &v6);
    memcpy(&v5, &v3, 584);
    v5.584 = v3.584 | 4;
    v5.588 = v3.588;
    v3 = clap_builder::builder::arg::Arg::value_hint(&v5, 3);
    clap_builder::builder::command::Command::arg(a0, &v4, &v3);
    return a0;
}
