fn uu_head::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa50], Other Possible Types: struct592, struct24
    let v1: i3496;  // [sp-0x800], Other Possible Types: struct592, struct712, struct437
    let v2: i4736;  // [sp-0x538], Other Possible Types: struct592, struct712
    let v3: struct32;  // [bp-0x270], Other Possible Types: i4736, struct592
    let v4: i32;  // [sp-0x28]
    let v5: i32;  // [sp-0x24]
    let v7: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v2 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v1 = clap_builder::builder::command::Command::about(&v2, &g_41dc95, 265);
    v0 = uucore::format_usage("{} [FLAG]... [FILE]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v2, 700);
    v1.700 = 549755814016 | (stack_base)[636] as i64;
    v1.708 = (stack_base)[628] as i32;
    v2 = clap_builder::builder::arg::Arg::new("BYTES");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 99);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "bytes");
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, v7);
    v2 = clap_builder::builder::arg::Arg::help(&v0, &g_41ddc4, 107);
    v3 = struct32 {
        field_0: &g_41ddb4
        field_8: 5
        field_16: &g_41de2f
        field_24: 5
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v3);
    memcpy(&v3, &v0, 584);
    v4 = v0.584 | 32;
    v5 = v0.588;
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("LINES");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 110);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "lines");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, v7);
    v1 = clap_builder::builder::arg::Arg::help(&v0, &g_41de39, 118);
    v3 = struct32 {
        field_0: &g_41de2f
        field_8: 5
        field_16: &g_41ddb4
        field_24: 5
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v3);
    memcpy(&v3, &v0, 584);
    v4 = v0.584 | 32;
    v5 = v0.588;
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("QUIET");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 113);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::visible_alias(&v2, "silent");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "never print headers giving file names");
    v3 = struct32 {
        field_0: &g_41dee4
        field_8: 7
        field_16: &g_41deaf
        field_24: 5
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v3);
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("VERBOSE");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 118);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "always print headers giving file names");
    v3 = struct32 {
        field_0: &g_41deaf
        field_8: 5
        field_16: &g_41dee4
        field_24: 7
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("-PRESUME-INPUT-PIPE");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "presume-input-pipe");
    v2 = clap_builder::builder::arg::Arg::alias(&v0, "-presume-input-pipe");
    memcpy(&v0, &v2, 584);
    v0.584 = (stack_base)[752] as i32 | 4;
    v0.588 = (stack_base)[748] as i32;
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("ZERO");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 122);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "zero-terminated");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "line delimiter is NUL, not newline");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v0, "ZERO");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("FILE");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v1, &v2);
    return a0;
}
