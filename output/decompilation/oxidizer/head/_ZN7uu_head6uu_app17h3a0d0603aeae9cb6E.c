fn uu_head::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa50]
    let v1: u32;  // [bp-0x808]
    let v2: u32;  // [bp-0x804]
    let v3: struct437;  // [bp-0x800]
    let v4: u64;  // [bp-0x544]
    let v5: u32;  // [bp-0x53c]
    let v6: u8;  // [bp-0x538]
    let v7: u32;  // [bp-0x2f0]
    let v8: i8;  // [bp-0x2ec]
    let v9: u64;  // [bp-0x27c]
    let v10: u32;  // [bp-0x274]
    let v11: u256;  // [bp-0x270]
    let v12: u32;  // [bp-0x28]
    let v13: u32;  // [bp-0x24]
    let v16: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    clap_builder::builder::command::Command::version(&v6, &v3, "0.0.28");
    clap_builder::builder::command::Command::about(&v3, &v6, "Print the first 10 lines of each `FILE` to standard output.\nWith more than one `FILE`, precede each with a header giving the file name.\nWith no `FILE`, or when `FILE` is `-`, read standard input.\n\nMandatory arguments to long flags are mandatory for short flags too.");
    uucore::format_usage(&v0, "{} [FLAG]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v6, &v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 549755814016 | v9;
    v5 = v10;
    clap_builder::builder::arg::Arg::new(&v6, "BYTES");
    clap_builder::builder::arg::Arg::short(&v0, &v6, 99);
    clap_builder::builder::arg::Arg::long(&v6, &v0, "bytes");
    clap_builder::builder::arg::Arg::value_name(&v0, &v6);
    clap_builder::builder::arg::Arg::help(&v6, &v0, "print the first NUM bytes of each file;\nwith the leading '-', print all but the last\nNUM bytes of each file");
    v11 = struct32 {
        field_0: &g_41dd3c
        field_8: 5
        field_16: &g_41ddb7
        field_24: 5
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v6, &v11);
    memcpy(&v11, &v0, 584);
    v12 = v1 | 32;
    v13 = v2;
    clap_builder::builder::command::Command::arg(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "LINES");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 110);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "lines");
    clap_builder::builder::arg::Arg::value_name(&v0, &v3);
    clap_builder::builder::arg::Arg::help(&v3, &v0, "print the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each file");
    v11 = struct32 {
        field_0: &g_41ddb7
        field_8: 5
        field_16: &g_41dd3c
        field_24: 5
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v3, &v11);
    memcpy(&v11, &v0, 584);
    v12 = v1 | 32;
    v13 = v2;
    clap_builder::builder::command::Command::arg(&v3, &v6, &v11);
    clap_builder::builder::arg::Arg::new(&v6, "QUIET");
    clap_builder::builder::arg::Arg::short(&v0, &v6, 113);
    clap_builder::builder::arg::Arg::long(&v6, &v0, "quiet");
    clap_builder::builder::arg::Arg::visible_alias(&v0, &v6, "silent");
    clap_builder::builder::arg::Arg::help(&v6, &v0, "never print headers giving file names");
    v11 = struct32 {
        field_0: &g_41de6c
        field_8: 7
        field_16: &g_41de37
        field_24: 5
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v6, &v11);
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "VERBOSE");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 118);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "verbose");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "always print headers giving file names");
    v11 = struct32 {
        field_0: &g_41de37
        field_8: 5
        field_16: &g_41de6c
        field_24: 7
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v3, &v0, &v11);
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::new(&v6, "-PRESUME-INPUT-PIPE");
    clap_builder::builder::arg::Arg::long(&v0, &v6, "presume-input-pipe");
    clap_builder::builder::arg::Arg::alias(&v6, &v0, "-presume-input-pipe");
    memcpy(&v0, &v6, 584);
    v1 = v7 | 4;
    v2 = *(&v8 as &i32);
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "ZERO");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 122);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "zero-terminated");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "line delimiter is NUL, not newline");
    clap_builder::builder::arg::Arg::overrides_with(&v3, &v0, "ZERO");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::new(&v6, "FILE");
    clap_builder::builder::arg::Arg::action(&v0, &v6, 1);
    clap_builder::builder::arg::Arg::value_hint(&v6, &v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v3, &v6);
    return a0;
}
