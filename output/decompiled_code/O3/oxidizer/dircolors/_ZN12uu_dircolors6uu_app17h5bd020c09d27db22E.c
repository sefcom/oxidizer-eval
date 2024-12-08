fn uu_dircolors::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v3: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v5: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v1 = clap_builder::builder::command::Command::about(&v2, "Output commands to set the LS_COLORS environment variable.");
    v2 = clap_builder::builder::command::Command::after_help(&v1, &g_42347b, 218);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]");
    v1 = clap_builder::builder::command::Command::override_usage(&v2, &v0);
    memcpy(&v2, &v1, 700);
    v2.700 = 584115552392 | (stack_base)[1340] as i64;
    v2.708 = (stack_base)[1332] as i32;
    v1 = clap_builder::builder::arg::Arg::new("bourne-shell");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "sh");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 98);
    v0 = clap_builder::builder::arg::Arg::visible_alias(&v1, "bourne-shell");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v0, "c-shell");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "output Bourne shell code to set LS_COLORS");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("c-shell");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "csh");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 99);
    v0 = clap_builder::builder::arg::Arg::visible_alias(&v2, "c-shell");
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v0, "bourne-shell");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "output C shell code to set LS_COLORS");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("print-database");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "print-database");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 112);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "print the byte counts");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("print-ls-colors");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "print-ls-colors");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "output fully escaped colors for display");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("FILE");
    memcpy(&v0, &v1, 584);
    v0.584 = (stack_base)[1456] as i32 | 4;
    v0.588 = (stack_base)[1452] as i32;
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    v0 = clap_builder::builder::arg::Arg::action(&v1, 1);
    clap_builder::builder::command::Command::arg(a0, &v2, &v0);
    return a0;
}
