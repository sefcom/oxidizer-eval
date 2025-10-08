fn uu_comm::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct437;  // [bp-0xab0], Other Possible Types: struct712, struct640
    let v1: struct712;  // [bp-0xab0]
    let v2: struct640;  // [bp-0xab0]
    let v3: struct640;  // [bp-0xab0]
    let v4: struct640;  // [bp-0xab0]
    let v5: u32;  // [bp-0x838]
    let v6: u64;  // [bp-0x7f4]
    let v7: u32;  // [bp-0x7ec]
    let v8: struct24;  // [bp-0x7e8], Other Possible Types: struct640
    let v9: u32;  // [bp-0x570]
    let v10: u32;  // [bp-0x56c]
    let v11: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v12: struct712;  // [bp-0x568]
    let v13: struct640;  // [bp-0x568]
    let v14: u32;  // [bp-0x2f0]
    let v15: u64;  // [bp-0x2ac]
    let v16: u32;  // [bp-0x2a4]
    let v17: struct640;  // [bp-0x2a0]
    let v20: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v20);
    v11 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v11);
    v8 = uucore::format_usage("{} [OPTION]... FILE1 FILE2");
    v11 = clap_builder::builder::command::Command::override_usage(&v0, &v8);
    memcpy(&v0, &v11, 700);
    v6 = 584115552392 | v15;
    v7 = v16;
    v11 = clap_builder::builder::arg::Arg::new("1");
    v8 = clap_builder::builder::arg::Arg::short(&v11, 49);
    v11 = clap_builder::builder::arg::Arg::help(&v8, "suppress column 1 (lines unique to FILE1)");
    v8 = clap_builder::builder::arg::Arg::action(&v11, 2);
    v11 = clap_builder::builder::command::Command::arg(&v0, &v8);
    v0 = clap_builder::builder::arg::Arg::new("2");
    v8 = clap_builder::builder::arg::Arg::short(&v0, 50);
    v0 = clap_builder::builder::arg::Arg::help(&v8, "suppress column 2 (lines unique to FILE2)");
    v8 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v11, &v8);
    v11 = clap_builder::builder::arg::Arg::new("3");
    v8 = clap_builder::builder::arg::Arg::short(&v11, 51);
    v11 = clap_builder::builder::arg::Arg::help(&v8, "suppress column 3 (lines that appear in both files)");
    v8 = clap_builder::builder::arg::Arg::action(&v11, 2);
    v11 = clap_builder::builder::command::Command::arg(&v1, &v8);
    v2 = clap_builder::builder::arg::Arg::new("output-delimiter");
    v8 = clap_builder::builder::arg::Arg::long(&v2, "output-delimiter");
    v3 = clap_builder::builder::arg::Arg::help(&v8, "separate columns with STR");
    v8 = clap_builder::builder::arg::Arg::value_name(&v3);
    v4 = clap_builder::builder::arg::Arg::default_value(&v8);
    memcpy(&v8, &v4, 632);
    v9 = v5 | 32;
    v10 = v5;
    v0 = clap_builder::builder::arg::Arg::action(&v8, 1);
    memcpy(&v8, &v0, 632);
    v9 = 0x400 | v5;
    v10 = *((&(&v2)[79].field_0 as &char + 4) as &i32);
    v0 = clap_builder::builder::command::Command::arg(&v11, &v8);
    v11 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v8 = clap_builder::builder::arg::Arg::long(&v11, "zero-terminated");
    v11 = clap_builder::builder::arg::Arg::short(&v8, 122);
    v8 = clap_builder::builder::arg::Arg::overrides_with(&v11);
    v11 = clap_builder::builder::arg::Arg::help(&v8, "line delimiter is NUL, not newline");
    v8 = clap_builder::builder::arg::Arg::action(&v11, 2);
    v12 = clap_builder::builder::command::Command::arg(&v0, &v8);
    v0 = clap_builder::builder::arg::Arg::new("FILE1");
    memcpy(&v8, &v0, 632);
    v9 = v5 | 1;
    v10 = *((&(&v2)[79].field_0 as &char + 4) as &i32);
    v17 = clap_builder::builder::arg::Arg::value_hint(&v8);
    v0 = clap_builder::builder::command::Command::arg(&v12, &v17);
    v13 = clap_builder::builder::arg::Arg::new("FILE2");
    memcpy(&v8, &v13, 632);
    v9 = v14 | 1;
    v10 = v14;
    v17 = clap_builder::builder::arg::Arg::value_hint(&v8);
    v11 = clap_builder::builder::command::Command::arg(&v0, &v17);
    v0 = clap_builder::builder::arg::Arg::new("total");
    v8 = clap_builder::builder::arg::Arg::long(&v0, "total");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "output a summary");
    v8 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v11, &v8);
    v11 = clap_builder::builder::arg::Arg::new("check-order");
    v8 = clap_builder::builder::arg::Arg::long(&v11, "check-order");
    v11 = clap_builder::builder::arg::Arg::help(&v8, "check that the input is correctly sorted, even if all input lines are pairable");
    v8 = clap_builder::builder::arg::Arg::action(&v11, 2);
    v11 = clap_builder::builder::command::Command::arg(&v0, &v8);
    v0 = clap_builder::builder::arg::Arg::new("nocheck-order");
    v8 = clap_builder::builder::arg::Arg::long(&v0, "nocheck-order");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "do not check that the input is correctly sorted");
    v8 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v8);
    clap_builder::builder::command::Command::arg(a0, &v11, &v0);
    return;
}
