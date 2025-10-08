fn uu_cat::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct712;  // [bp-0x830], Other Possible Types: struct640
    let v4: struct712;  // [bp-0x830]
    let v5: struct712;  // [bp-0x830]
    let v6: u32;  // [bp-0x5b8]
    let v7: u64;  // [bp-0x574]
    let v8: u32;  // [bp-0x56c]
    let v9: struct437;  // [bp-0x568], Other Possible Types: struct712, struct640
    let v10: u64;  // [bp-0x2ac]
    let v11: u32;  // [bp-0x2a4]
    let v12: struct640;  // [bp-0x2a0]
    let v15: u64;  // rdx

    v9 = clap_builder::builder::command::Command::new(uucore::util_name(), v15);
    v4 = clap_builder::builder::command::Command::version(&v9);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v9 = clap_builder::builder::command::Command::override_usage(&v4, &v0);
    v5 = clap_builder::builder::command::Command::about(&v9);
    memcpy(&v9, &v5, 700);
    v10 = 584115552392 | v7;
    v11 = v8;
    v3 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v0, &v3, 632);
    v1 = v6 | 4;
    v2 = v6;
    v3 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v0);
    v9 = clap_builder::builder::arg::Arg::new("show-all");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 65);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "show-all");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "equivalent to -vET");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("number-nonblank");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 98);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "number-nonblank");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "number nonempty output lines, overrides -n");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v12);
    v9 = clap_builder::builder::arg::Arg::new("e");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 101);
    v9 = clap_builder::builder::arg::Arg::help(&v0, "equivalent to -vE");
    v0 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("show-ends");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 69);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "show-ends");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "display $ at end of each line");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v12);
    v9 = clap_builder::builder::arg::Arg::new("number");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 110);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "number");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "number all output lines");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("squeeze-blank");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 115);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "squeeze-blank");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "suppress repeated empty output lines");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v12);
    v9 = clap_builder::builder::arg::Arg::new("t");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 116);
    v9 = clap_builder::builder::arg::Arg::help(&v0, "equivalent to -vT");
    v0 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("show-tabs");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 84);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "show-tabs");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "display TAB characters at ^I");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v12);
    v9 = clap_builder::builder::arg::Arg::new("show-nonprinting");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 118);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "show-nonprinting");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "use ^ and M- notation, except for LF (\\n) and TAB (\\t)");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("ignored-u");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 117);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "(ignored)");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    clap_builder::builder::command::Command::arg(a0, &v9, &v0);
    return;
}
