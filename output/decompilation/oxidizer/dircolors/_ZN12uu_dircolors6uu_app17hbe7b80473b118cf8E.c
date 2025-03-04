fn uu_dircolors::uu_app(a0: &struct712) -> u64 {
    let v0: struct592;  // [sp-0xa48], Other Possible Types: struct24
    let v1: i32;  // [sp-0x800]
    let v2: i32;  // [sp-0x7fc]
    let v3: struct592;  // [sp-0x7f8], Other Possible Types: struct712, struct437
    let v4: struct592;  // [sp-0x530], Other Possible Types: struct712
    let v5: i64;  // [sp-0x274]
    let v6: i32;  // [sp-0x26c]
    let v7: struct592;  // [sp-0x268]
    let v9: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v4 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v3 = clap_builder::builder::command::Command::about(&v4, "Output commands to set the LS_COLORS environment variable.");
    v4 = clap_builder::builder::command::Command::after_help(&v3, "If FILE is specified, read it to determine which colors to use for which
file types and extensions.  Otherwise, a precompiled database is used.
For details on the format of these files, run 'dircolors --print-database'");
    v0 = uucore::format_usage("{} [OPTION]... [FILE]");
    v3 = clap_builder::builder::command::Command::override_usage(&v4, &v0);
    memcpy(&v4, &v3, 700);
    v5 = 584115552392 | *((&v3.field_0 as &char + 700) as &i64);
    v6 = *((&v3.field_0 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("bourne-shell");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "sh");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x62);
    v0 = clap_builder::builder::arg::Arg::visible_alias(&v3, "bourne-shell");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "c-shell");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "output Bourne shell code to set LS_COLORS");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("c-shell");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "csh");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x63);
    v0 = clap_builder::builder::arg::Arg::visible_alias(&v4, "c-shell");
    v4 = clap_builder::builder::arg::Arg::overrides_with(&v0, "bourne-shell");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "output C shell code to set LS_COLORS");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("print-database");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "print-database");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x70);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "print the byte counts");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("print-ls-colors");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "print-ls-colors");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "output fully escaped colors for display");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("FILE");
    memcpy(&v0, &v3, 584);
    v1 = *((&v3.field_0 as &char + 584) as &i32) | 4;
    v2 = *((&v3.field_0 as &char + 588) as &i32);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x1);
    clap_builder::builder::command::Command::arg(a0, &v4, &v0);
    return a0;
}
