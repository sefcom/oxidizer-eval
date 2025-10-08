fn uu_seq::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct712;  // [bp-0x830], Other Possible Types: struct640, u8
    let v4: struct712;  // [bp-0x830]
    let v5: struct640;  // [bp-0x830]
    let v6: u32;  // [bp-0x5b8]
    let v7: u64;  // [bp-0x574]
    let v8: u32;  // [bp-0x56c]
    let v9: struct437;  // [bp-0x568], Other Possible Types: struct640, struct712
    let v10: u64;  // [bp-0x2ac]
    let v11: u32;  // [bp-0x2a4]
    let v12: struct640;  // [bp-0x2a0]
    let v15: u64;  // rdx

    v9 = clap_builder::builder::command::Command::new(uucore::util_name(), v15);
    memcpy(&v3, &v9, 700);
    v7 = 549755814048 | v10;
    v8 = v11;
    v9 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v9);
    v0 = uucore::format_usage("{} [OPTION]... LAST\n{} [OPTION]... FIRST LAST\n{} [OPTION]... FIRST INCREMENT LAST");
    v9 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("separator");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 115);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "separator");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Separator character (defaults to \\n)");
    v3 = clap_builder::builder::command::Command::arg(&v9, &v0);
    v9 = clap_builder::builder::arg::Arg::new("terminator");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 116);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "terminator");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "Terminator character (defaults to \\n)");
    v9 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("equal-width");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 119);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "equal-width");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Equalize widths of all numbers by padding with zeros");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v9, &v12);
    v9 = clap_builder::builder::arg::Arg::new("format");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 102);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "format");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "use printf style floating-point FORMAT");
    v9 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v5 = clap_builder::builder::arg::Arg::new("numbers");
    memcpy(&v0, &v5, 632);
    v1 = v6 | 32;
    v2 = v6;
    v3 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::num_args(&v3, 0x1, 3);
    clap_builder::builder::command::Command::arg(a0, &v9, &v0);
    return;
}
