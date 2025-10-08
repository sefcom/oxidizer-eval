fn uu_head::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab8], Other Possible Types: struct640
    let v1: u32;  // [bp-0x840]
    let v2: u32;  // [bp-0x83c]
    let v3: struct640;  // [bp-0x838], Other Possible Types: struct32
    let v4: u32;  // [bp-0x5c0]
    let v5: u32;  // [bp-0x5bc]
    let v6: struct437;  // [bp-0x5b8], Other Possible Types: struct712, struct640
    let v7: u64;  // [bp-0x2fc]
    let v8: u32;  // [bp-0x2f4]
    let v9: struct712;  // [bp-0x2f0], Other Possible Types: struct640
    let v10: struct712;  // [bp-0x2f0]
    let v11: struct640;  // [bp-0x2f0]
    let v12: struct712;  // [bp-0x2f0]
    let v13: struct640;  // [bp-0x2f0]
    let v14: u32;  // [bp-0x78]
    let v15: u64;  // [bp-0x34]
    let v18: u64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v18);
    v9 = clap_builder::builder::command::Command::version(&v6);
    v6 = clap_builder::builder::command::Command::about(&v9);
    v0 = uucore::format_usage("{} [FLAG]... [FILE]...");
    v12 = clap_builder::builder::command::Command::override_usage(&v6, &v0);
    memcpy(&v6, &v12, 700);
    v7 = 549755814016 | v15;
    v8 = v15;
    v9 = clap_builder::builder::arg::Arg::new("BYTES");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 99);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "bytes");
    v0 = clap_builder::builder::arg::Arg::value_name(&v9);
    v9 = clap_builder::builder::arg::Arg::help(&v0, "print the first NUM bytes of each file;\nwith the leading '-', print all but the last\nNUM bytes of each file");
    v3 = struct32 {
        field_0: "BYTES"
        field_16: "LINES"
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v9, &v3);
    memcpy(&v3, &v0, 632);
    v4 = v1 | 32;
    v5 = v2;
    v9 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("LINES");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 110);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "lines");
    v0 = clap_builder::builder::arg::Arg::value_name(&v6);
    v6 = clap_builder::builder::arg::Arg::help(&v0, "print the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each file");
    v3 = struct32 {
        field_0: "LINES"
        field_16: "BYTES"
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v6, &v3);
    memcpy(&v3, &v0, 632);
    v4 = v1 | 32;
    v5 = v2;
    v6 = clap_builder::builder::command::Command::arg(&v9, &v3);
    v9 = clap_builder::builder::arg::Arg::new("QUIET");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 113);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::visible_alias(&v9);
    v9 = clap_builder::builder::arg::Arg::help(&v0, "never print headers giving file names");
    v3 = struct32 {
        field_0: "VERBOSE"
        field_16: "QUIET"
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v9, &v3);
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v10 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("VERBOSE");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 118);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "always print headers giving file names");
    v3 = struct32 {
        field_0: "QUIET"
        field_16: "VERBOSE"
    };
    v6 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v6 = clap_builder::builder::command::Command::arg(&v10, &v0);
    v11 = clap_builder::builder::arg::Arg::new("-PRESUME-INPUT-PIPE");
    v0 = clap_builder::builder::arg::Arg::long(&v11, "presume-input-pipe");
    v13 = clap_builder::builder::arg::Arg::alias(&v0);
    memcpy(&v0, &v13, 632);
    v1 = v14 | 4;
    v2 = v14;
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v9 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("ZERO");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 122);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "zero-terminated");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "line delimiter is NUL, not newline");
    v6 = clap_builder::builder::arg::Arg::overrides_with(&v0);
    v0 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v6 = clap_builder::builder::command::Command::arg(&v9, &v0);
    v9 = clap_builder::builder::arg::Arg::new("FILE");
    v0 = clap_builder::builder::arg::Arg::action(&v9, 1);
    v9 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v6, &v9);
    return;
}
