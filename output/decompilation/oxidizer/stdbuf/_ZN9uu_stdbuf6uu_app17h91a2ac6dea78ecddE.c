fn uu_stdbuf::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct32;  // [bp-0x860]
    let v1: struct24;  // [bp-0x840], Other Possible Types: struct640
    let v2: u32;  // [bp-0x5c8]
    let v3: u32;  // [bp-0x5c4]
    let v4: struct712;  // [bp-0x5c0], Other Possible Types: struct640
    let v5: u32;  // [bp-0x348]
    let v6: u32;  // [bp-0x344]
    let v7: u64;  // [bp-0x304]
    let v8: u32;  // [bp-0x2fc]
    let v9: struct437;  // [bp-0x2f8], Other Possible Types: struct712, struct640
    let v10: u64;  // [bp-0x3c]
    let v11: i8;  // [bp-0x34]
    let v14: u64;  // rdx

    v9 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    v4 = clap_builder::builder::command::Command::version(&v9);
    v9 = clap_builder::builder::command::Command::about(&v4);
    v4 = clap_builder::builder::command::Command::after_help(&v9);
    v1 = uucore::format_usage("{} [OPTION]... COMMAND");
    v9 = clap_builder::builder::command::Command::override_usage(&v4, &v1);
    memcpy(&v4, &v9, 700);
    v7 = 549755814048 | v10;
    v8 = *(&v11 as &i32);
    v9 = clap_builder::builder::arg::Arg::new("input");
    v1 = clap_builder::builder::arg::Arg::long(&v9, "input");
    v9 = clap_builder::builder::arg::Arg::short(&v1, 105);
    v1 = clap_builder::builder::arg::Arg::help(&v9, "adjust standard input stream buffering");
    v9 = clap_builder::builder::arg::Arg::value_name(&v1);
    v0 = struct32 {
        field_0: "output"
        field_16: "error"
    };
    v1 = clap_builder::builder::arg::Arg::required_unless_present_any(&v9, &v0);
    v9 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("output");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "output");
    v4 = clap_builder::builder::arg::Arg::short(&v1, 111);
    v1 = clap_builder::builder::arg::Arg::help(&v4, "adjust standard output stream buffering");
    v4 = clap_builder::builder::arg::Arg::value_name(&v1);
    v0 = struct32 {
        field_0: "input"
        field_16: "error"
    };
    v1 = clap_builder::builder::arg::Arg::required_unless_present_any(&v4, &v0);
    v4 = clap_builder::builder::command::Command::arg(&v9, &v1);
    v9 = clap_builder::builder::arg::Arg::new("error");
    v1 = clap_builder::builder::arg::Arg::long(&v9, "error");
    v9 = clap_builder::builder::arg::Arg::short(&v1, 101);
    v1 = clap_builder::builder::arg::Arg::help(&v9, "adjust standard error stream buffering");
    v9 = clap_builder::builder::arg::Arg::value_name(&v1);
    v0 = struct32 {
        field_0: "input"
        field_16: "output"
    };
    v1 = clap_builder::builder::arg::Arg::required_unless_present_any(&v9, &v0);
    v9 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("command");
    v1 = clap_builder::builder::arg::Arg::action(&v4);
    memcpy(&v4, &v1, 632);
    v5 = v2 | 5;
    v6 = v3;
    v1 = clap_builder::builder::arg::Arg::value_hint(&v4);
    clap_builder::builder::command::Command::arg(a0, &v9, &v1);
    return;
}
