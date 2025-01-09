fn uu_head::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xa50], Other Possible Types: struct592, struct24
    let v1: i32;  // [sp-0x808]
    let v2: i32;  // [sp-0x804]
    let v3: i4736;  // [sp-0x800], Other Possible Types: struct592, struct712, struct437
    let v4: i64;  // [sp-0x544]
    let v5: i32;  // [sp-0x53c]
    let v6: i5696;  // [sp-0x538], Other Possible Types: struct592, struct712
    let v7: struct32;  // [bp-0x270], Other Possible Types: i4736, struct592
    let v8: i32;  // [sp-0x28]
    let v9: i32;  // [sp-0x24]
    let v11: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v11);
    v6 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v3 = clap_builder::builder::command::Command::about(&v6, &g_41dc1d, 265);
    v0 = uucore::format_usage("{} [FLAG]... [FILE]...");
    v6 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 549755814016 | *((&v6 as &char + 700) as &i64);
    v5 = *((&v6 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("BYTES");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x63);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "bytes");
    v0 = clap_builder::builder::arg::Arg::value_name(&v6);
    v6 = clap_builder::builder::arg::Arg::help(&v0, &g_41dd4c, 107);
    v7 = struct32 {
        field_0: &g_41dd3c
        field_8: 5
        field_16: &g_41ddb7
        field_24: 5
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v6, &v7);
    memcpy(&v7, &v0, 584);
    v8 = v1 | 32;
    v9 = v2;
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("LINES");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x6e);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "lines");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3);
    v3 = clap_builder::builder::arg::Arg::help(&v0, &g_41ddc1, 118);
    v7 = struct32 {
        field_0: &g_41ddb7
        field_8: 5
        field_16: &g_41dd3c
        field_24: 5
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v3, &v7);
    memcpy(&v7, &v0, 584);
    v8 = v1 | 32;
    v9 = v2;
    v3 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("QUIET");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x71);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::visible_alias(&v6, "silent");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "never print headers giving file names");
    v7 = struct32 {
        field_0: &g_41de6c
        field_8: 7
        field_16: &g_41de37
        field_24: 5
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v6, &v7);
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("VERBOSE");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x76);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "always print headers giving file names");
    v7 = struct32 {
        field_0: &g_41de37
        field_8: 5
        field_16: &g_41de6c
        field_24: 7
    };
    v3 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("-PRESUME-INPUT-PIPE");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "presume-input-pipe");
    v6 = clap_builder::builder::arg::Arg::alias(&v0, "-presume-input-pipe");
    memcpy(&v0, &v6, 584);
    v1 = *((&v6 as &char + 584) as &i32) | 4;
    v2 = *((&v6 as &char + 588) as &i32);
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("ZERO");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x7a);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "zero-terminated");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "line delimiter is NUL, not newline");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "ZERO");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("FILE");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x1);
    v6 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v3, &v6);
    return a0;
}
