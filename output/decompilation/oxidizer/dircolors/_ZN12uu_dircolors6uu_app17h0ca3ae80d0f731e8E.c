fn uu_dircolors::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct712;  // [bp-0x830], Other Possible Types: struct640
    let v4: u64;  // [bp-0x574]
    let v5: u32;  // [bp-0x56c]
    let v6: struct437;  // [bp-0x568], Other Possible Types: struct712, struct640
    let v7: struct712;  // [bp-0x568]
    let v8: struct640;  // [bp-0x568]
    let v9: u32;  // [bp-0x2f0]
    let v10: u64;  // [bp-0x2ac]
    let v11: u32;  // [bp-0x2a4]
    let v12: struct640;  // [bp-0x2a0]
    let v15: u64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v15);
    v3 = clap_builder::builder::command::Command::version(&v6);
    v6 = clap_builder::builder::command::Command::about(&v3);
    v3 = clap_builder::builder::command::Command::after_help(&v6);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]");
    v6 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 584115552392 | v10;
    v5 = v11;
    v6 = clap_builder::builder::arg::Arg::new("bourne-shell");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "sh");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 98);
    v0 = clap_builder::builder::arg::Arg::visible_alias(&v6, "bourne-shell");
    v6 = clap_builder::builder::arg::Arg::overrides_with(&v0, "c-shell");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "output Bourne shell code to set LS_COLORS");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("c-shell");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "csh");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 99);
    v0 = clap_builder::builder::arg::Arg::visible_alias(&v3, "c-shell");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "bourne-shell");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "output C shell code to set LS_COLORS");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v12);
    v6 = clap_builder::builder::arg::Arg::new("print-database");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "print-database");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 112);
    v0 = clap_builder::builder::arg::Arg::help(&v6, "print the byte counts");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v7 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("print-ls-colors");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "print-ls-colors");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "output fully escaped colors for display");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v7, &v0);
    v8 = clap_builder::builder::arg::Arg::new("FILE");
    memcpy(&v0, &v8, 632);
    v1 = v9 | 4;
    v2 = v9;
    v6 = clap_builder::builder::arg::Arg::value_hint(&v0);
    v0 = clap_builder::builder::arg::Arg::action(&v6, 1);
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return;
}
