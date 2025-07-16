fn uu_dircolors::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: u32;  // [bp-0x7fc]
    let v3: struct437;  // [bp-0x7f8]
    let v4: u32;  // [bp-0x5b0]
    let v5: i8;  // [bp-0x5ac]
    let v6: u64;  // [bp-0x53c]
    let v7: u32;  // [bp-0x534]
    let v8: u8;  // [bp-0x530]
    let v9: u64;  // [bp-0x274]
    let v10: u32;  // [bp-0x26c]
    let v11: u8;  // [bp-0x268]
    let v14: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v8, &v3, "0.0.28");
    clap_builder::builder::command::Command::about(&v3, &v8, "Output commands to set the LS_COLORS environment variable.");
    clap_builder::builder::command::Command::after_help(&v8, &v3, "If FILE is specified, read it to determine which colors to use for which\nfile types and extensions.  Otherwise, a precompiled database is used.\nFor details on the format of these files, run 'dircolors --print-database'");
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]");
    clap_builder::builder::command::Command::override_usage(&v3, &v8, &v0);
    memcpy(&v8, &v3, 700);
    v9 = 584115552392 | v6;
    v10 = v7;
    clap_builder::builder::arg::Arg::new(&v3, "bourne-shell");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "sh");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 98);
    clap_builder::builder::arg::Arg::visible_alias(&v0, &v3, "bourne-shell");
    clap_builder::builder::arg::Arg::overrides_with(&v3, &v0, "c-shell");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "output Bourne shell code to set LS_COLORS");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "c-shell");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "csh");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 99);
    clap_builder::builder::arg::Arg::visible_alias(&v0, &v8, "c-shell");
    clap_builder::builder::arg::Arg::overrides_with(&v8, &v0, "bourne-shell");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "output C shell code to set LS_COLORS");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "print-database");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "print-database");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 112);
    clap_builder::builder::arg::Arg::help(&v0, &v3, "print the byte counts");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "print-ls-colors");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "print-ls-colors");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "output fully escaped colors for display");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "FILE");
    memcpy(&v0, &v3, 584);
    v1 = v4 | 4;
    v2 = *(&v5 as &i32);
    clap_builder::builder::arg::Arg::value_hint(&v3, &v0, 3);
    clap_builder::builder::arg::Arg::action(&v0, &v3, 1);
    clap_builder::builder::command::Command::arg(a0, &v8, &v0);
    return a0;
}
